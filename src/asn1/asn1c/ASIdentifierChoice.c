/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IPAddrAndASCertExtn"
 * 	found in "rfc3779.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/ASIdentifierChoice.h"

static asn_oer_constraints_t asn_OER_type_ASIdentifierChoice_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_TYPE_member_t asn_MBR_asIdsOrRanges_3[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ASIdOrRange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_asIdsOrRanges_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_asIdsOrRanges_specs_3 = {
	sizeof(struct ASIdentifierChoice__asIdsOrRanges),
	offsetof(struct ASIdentifierChoice__asIdsOrRanges, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_asIdsOrRanges_3 = {
	"asIdsOrRanges",
	"asIdsOrRanges",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_asIdsOrRanges_tags_3,
	sizeof(asn_DEF_asIdsOrRanges_tags_3)
		/sizeof(asn_DEF_asIdsOrRanges_tags_3[0]), /* 1 */
	asn_DEF_asIdsOrRanges_tags_3,	/* Same as above */
	sizeof(asn_DEF_asIdsOrRanges_tags_3)
		/sizeof(asn_DEF_asIdsOrRanges_tags_3[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_asIdsOrRanges_3,
	1,	/* Single element */
	&asn_SPC_asIdsOrRanges_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASIdentifierChoice_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASIdentifierChoice, choice.inherit),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inherit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASIdentifierChoice, choice.asIdsOrRanges),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_asIdsOrRanges_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"asIdsOrRanges"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASIdentifierChoice_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 0, 0, 0 }, /* inherit */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 } /* asIdsOrRanges */
};
asn_CHOICE_specifics_t asn_SPC_ASIdentifierChoice_specs_1 = {
	sizeof(struct ASIdentifierChoice),
	offsetof(struct ASIdentifierChoice, _asn_ctx),
	offsetof(struct ASIdentifierChoice, present),
	sizeof(((struct ASIdentifierChoice *)0)->present),
	asn_MAP_ASIdentifierChoice_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASIdentifierChoice = {
	"ASIdentifierChoice",
	"ASIdentifierChoice",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASIdentifierChoice_constr_1, 0, CHOICE_constraint },
	asn_MBR_ASIdentifierChoice_1,
	2,	/* Elements count */
	&asn_SPC_ASIdentifierChoice_specs_1	/* Additional specs */
};

