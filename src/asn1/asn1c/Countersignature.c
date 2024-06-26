/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/Countersignature.h"

/*
 * This type is implemented using SignerInfo,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_Countersignature_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Countersignature = {
	"Countersignature",
	"Countersignature",
	&asn_OP_SEQUENCE,
	asn_DEF_Countersignature_tags_1,
	sizeof(asn_DEF_Countersignature_tags_1)
		/sizeof(asn_DEF_Countersignature_tags_1[0]), /* 1 */
	asn_DEF_Countersignature_tags_1,	/* Same as above */
	sizeof(asn_DEF_Countersignature_tags_1)
		/sizeof(asn_DEF_Countersignature_tags_1[0]), /* 1 */
	{ NULL, NULL, SEQUENCE_constraint },
	asn_MBR_SignerInfo_1,
	7,	/* Elements count */
	&asn_SPC_SignerInfo_specs_1	/* Additional specs */
};
