#include "clients.h"

#include <check.h>
#include <stdlib.h>

static int
handle_foreach(struct client const *client, void *arg)
{
	unsigned int *state = arg;

	switch (*state) {
	case 0:
		ck_assert_int_eq(1, client->fd);
		break;
	case 1:
		ck_assert_int_eq(2, client->fd);
		break;
	case 2:
		ck_assert_int_eq(4, client->fd);
		break;
	default:
		ck_abort_msg("Invalid state: %u", *state);
	}

	(*state)++;
	return 0;
}

START_TEST(basic_test)
{
	/*
	 * The module is pretty simple; there's not much to test.
	 * I'm mostly just concerned about uthash usage; I've never used uthash
	 * before.
	 */

	struct sockaddr_in addr;
	struct rtr_client client;
	unsigned int i;
	unsigned int state;

	memset(&addr, 0, sizeof(addr));
	addr.sin_family = AF_INET;
	memcpy(&client.addr, &addr, sizeof(client.addr));

	ck_assert_int_eq(0, clients_db_init());

	/*
	 * The address is actually supposed to be unique, but this is rather
	 * enforced by calling code, so whatever.
	 */

	for (i = 0; i < 4; i++) {
		client.fd = 1;
		ck_assert_int_eq(0, clients_add(&client));
		client.fd = 2;
		ck_assert_int_eq(0, clients_add(&client));
		client.fd = 3;
		ck_assert_int_eq(0, clients_add(&client));
		client.fd = 4;
		ck_assert_int_eq(0, clients_add(&client));
	}

	clients_forget(3);

	state = 0;
	ck_assert_int_eq(0, clients_foreach(handle_foreach, &state));
	ck_assert_uint_eq(3, state);

	clients_db_destroy();
}
END_TEST

Suite *clients_load_suite(void)
{
	Suite *suite;
	TCase *core;

	core = tcase_create("Core");
	tcase_add_test(core, basic_test);

	suite = suite_create("Clients suite");
	suite_add_tcase(suite, core);
	return suite;
}

int main(void)
{
	Suite *suite;
	SRunner *runner;
	int tests_failed;

	suite = clients_load_suite();

	runner = srunner_create(suite);
	srunner_run_all(runner, CK_NORMAL);
	tests_failed = srunner_ntests_failed(runner);
	srunner_free(runner);

	return (tests_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
