/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "rfc5280-a.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/CertificateList.h"

asn_TYPE_member_t asn_MBR_CertificateList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CertificateList, tbsCertList),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TBSCertList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tbsCertList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CertificateList, signatureAlgorithm),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signatureAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CertificateList, signature),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signature"
		},
};
static const ber_tlv_tag_t asn_DEF_CertificateList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CertificateList_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 2, 0, 0 }, /* signature */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* tbsCertList */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* signatureAlgorithm */
};
asn_SEQUENCE_specifics_t asn_SPC_CertificateList_specs_1 = {
	sizeof(struct CertificateList),
	offsetof(struct CertificateList, _asn_ctx),
	asn_MAP_CertificateList_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CertificateList = {
	"CertificateList",
	"CertificateList",
	&asn_OP_SEQUENCE,
	asn_DEF_CertificateList_tags_1,
	sizeof(asn_DEF_CertificateList_tags_1)
		/sizeof(asn_DEF_CertificateList_tags_1[0]), /* 1 */
	asn_DEF_CertificateList_tags_1,	/* Same as above */
	sizeof(asn_DEF_CertificateList_tags_1)
		/sizeof(asn_DEF_CertificateList_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CertificateList_1,
	3,	/* Elements count */
	&asn_SPC_CertificateList_specs_1	/* Additional specs */
};

