/*-
 * Copyright (c) 2003-2017 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#ifndef	CONSTR_SET_OF_H
#define	CONSTR_SET_OF_H

#include "asn1/asn1c/constr_TYPE.h"

typedef struct asn_SET_OF_specifics_s {
    /*
     * Target structure description.
     */
    unsigned struct_size;       /* Size of the target structure. */
    unsigned ctx_offset;        /* Offset of the asn_struct_ctx_t member */

    /* XER-specific stuff */
    int as_XMLValueList; /* The member type must be encoded like this */
} asn_SET_OF_specifics_t;

/*
 * A set specialized functions dealing with the SET OF type.
 */
asn_struct_free_f SET_OF_free;
asn_struct_print_f SET_OF_print;
asn_struct_compare_f SET_OF_compare;
asn_constr_check_f SET_OF_constraint;
ber_type_decoder_f SET_OF_decode_ber;
der_type_encoder_f SET_OF_encode_der;
json_type_encoder_f SET_OF_encode_json;
xer_type_encoder_f SET_OF_encode_xer;
extern asn_TYPE_operation_t asn_OP_SET_OF;

#endif	/* CONSTR_SET_OF_H */
