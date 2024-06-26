/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RPKIManifest"
 * 	found in "rfc6486-a.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/FileAndHash.h"

asn_TYPE_member_t asn_MBR_FileAndHash_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FileAndHash, file),
		(ASN_TAG_CLASS_UNIVERSAL | (22 << 2)),
		0,
		&asn_DEF_IA5String,
		NULL,
		{ NULL, NULL, NULL },
		NULL, NULL, /* No default value */
		"file"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FileAndHash, hash),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		NULL,
		{ NULL, NULL, NULL },
		NULL, NULL, /* No default value */
		"hash"
		},
};
static const ber_tlv_tag_t asn_DEF_FileAndHash_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FileAndHash_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 1, 0, 0 }, /* hash */
    { (ASN_TAG_CLASS_UNIVERSAL | (22 << 2)), 0, 0, 0 } /* file */
};
asn_SEQUENCE_specifics_t asn_SPC_FileAndHash_specs_1 = {
	sizeof(struct FileAndHash),
	offsetof(struct FileAndHash, _asn_ctx),
	asn_MAP_FileAndHash_tag2el_1,
	2,	/* Count of tags in the map */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FileAndHash = {
	"FileAndHash",
	"FileAndHash",
	&asn_OP_SEQUENCE,
	asn_DEF_FileAndHash_tags_1,
	sizeof(asn_DEF_FileAndHash_tags_1)
		/sizeof(asn_DEF_FileAndHash_tags_1[0]), /* 1 */
	asn_DEF_FileAndHash_tags_1,	/* Same as above */
	sizeof(asn_DEF_FileAndHash_tags_1)
		/sizeof(asn_DEF_FileAndHash_tags_1[0]), /* 1 */
	{ NULL, NULL, SEQUENCE_constraint },
	asn_MBR_FileAndHash_1,
	2,	/* Elements count */
	&asn_SPC_FileAndHash_specs_1	/* Additional specs */
};
