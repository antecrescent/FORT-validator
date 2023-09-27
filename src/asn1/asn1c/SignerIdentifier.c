/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/SignerIdentifier.h"

static asn_oer_constraints_t asn_OER_type_SignerIdentifier_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_TYPE_member_t asn_MBR_SignerIdentifier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SignerIdentifier, choice.issuerAndSerialNumber),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IssuerAndSerialNumber,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"issuerAndSerialNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignerIdentifier, choice.subjectKeyIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CMSSubjectKeyIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subjectKeyIdentifier"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SignerIdentifier_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* issuerAndSerialNumber */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 } /* subjectKeyIdentifier */
};
asn_CHOICE_specifics_t asn_SPC_SignerIdentifier_specs_1 = {
	sizeof(struct SignerIdentifier),
	offsetof(struct SignerIdentifier, _asn_ctx),
	offsetof(struct SignerIdentifier, present),
	sizeof(((struct SignerIdentifier *)0)->present),
	asn_MAP_SignerIdentifier_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SignerIdentifier = {
	"SignerIdentifier",
	"SignerIdentifier",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_SignerIdentifier_constr_1, 0, CHOICE_constraint },
	asn_MBR_SignerIdentifier_1,
	2,	/* Elements count */
	&asn_SPC_SignerIdentifier_specs_1	/* Additional specs */
};

