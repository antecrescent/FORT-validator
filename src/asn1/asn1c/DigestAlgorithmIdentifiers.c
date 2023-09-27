/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/DigestAlgorithmIdentifiers.h"

asn_TYPE_member_t asn_MBR_DigestAlgorithmIdentifiers_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DigestAlgorithmIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_DigestAlgorithmIdentifiers_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
asn_SET_OF_specifics_t asn_SPC_DigestAlgorithmIdentifiers_specs_1 = {
	sizeof(struct DigestAlgorithmIdentifiers),
	offsetof(struct DigestAlgorithmIdentifiers, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_DigestAlgorithmIdentifiers = {
	"DigestAlgorithmIdentifiers",
	"DigestAlgorithmIdentifiers",
	&asn_OP_SET_OF,
	asn_DEF_DigestAlgorithmIdentifiers_tags_1,
	sizeof(asn_DEF_DigestAlgorithmIdentifiers_tags_1)
		/sizeof(asn_DEF_DigestAlgorithmIdentifiers_tags_1[0]), /* 1 */
	asn_DEF_DigestAlgorithmIdentifiers_tags_1,	/* Same as above */
	sizeof(asn_DEF_DigestAlgorithmIdentifiers_tags_1)
		/sizeof(asn_DEF_DigestAlgorithmIdentifiers_tags_1[0]), /* 1 */
	{ 0, 0, SET_OF_constraint },
	asn_MBR_DigestAlgorithmIdentifiers_1,
	1,	/* Single element */
	&asn_SPC_DigestAlgorithmIdentifiers_specs_1	/* Additional specs */
};

