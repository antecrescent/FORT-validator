/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/EncapsulatedContentInfoPKCS7.h"

asn_TYPE_member_t asn_MBR_EncapsulatedContentInfoPKCS7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EncapsulatedContentInfoPKCS7, eContentType),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_ContentType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eContentType"
		},
	{ ATF_POINTER, 1, offsetof(struct EncapsulatedContentInfoPKCS7, eContent),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eContent"
		},
};
static const int asn_MAP_EncapsulatedContentInfoPKCS7_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_EncapsulatedContentInfoPKCS7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EncapsulatedContentInfoPKCS7_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* eContentType */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 } /* eContent */
};
asn_SEQUENCE_specifics_t asn_SPC_EncapsulatedContentInfoPKCS7_specs_1 = {
	sizeof(struct EncapsulatedContentInfoPKCS7),
	offsetof(struct EncapsulatedContentInfoPKCS7, _asn_ctx),
	asn_MAP_EncapsulatedContentInfoPKCS7_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_EncapsulatedContentInfoPKCS7_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EncapsulatedContentInfoPKCS7 = {
	"EncapsulatedContentInfoPKCS7",
	"EncapsulatedContentInfoPKCS7",
	&asn_OP_SEQUENCE,
	asn_DEF_EncapsulatedContentInfoPKCS7_tags_1,
	sizeof(asn_DEF_EncapsulatedContentInfoPKCS7_tags_1)
		/sizeof(asn_DEF_EncapsulatedContentInfoPKCS7_tags_1[0]), /* 1 */
	asn_DEF_EncapsulatedContentInfoPKCS7_tags_1,	/* Same as above */
	sizeof(asn_DEF_EncapsulatedContentInfoPKCS7_tags_1)
		/sizeof(asn_DEF_EncapsulatedContentInfoPKCS7_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EncapsulatedContentInfoPKCS7_1,
	2,	/* Elements count */
	&asn_SPC_EncapsulatedContentInfoPKCS7_specs_1	/* Additional specs */
};

