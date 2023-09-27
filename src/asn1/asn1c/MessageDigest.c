/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/MessageDigest.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_MessageDigest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MessageDigest = {
	"MessageDigest",
	"MessageDigest",
	&asn_OP_OCTET_STRING,
	asn_DEF_MessageDigest_tags_1,
	sizeof(asn_DEF_MessageDigest_tags_1)
		/sizeof(asn_DEF_MessageDigest_tags_1[0]), /* 1 */
	asn_DEF_MessageDigest_tags_1,	/* Same as above */
	sizeof(asn_DEF_MessageDigest_tags_1)
		/sizeof(asn_DEF_MessageDigest_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

