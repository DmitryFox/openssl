/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/ocsp.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_OCSP,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_OCSP,0,reason)

static ERR_STRING_DATA OCSP_str_functs[] = {
    {ERR_FUNC(OCSP_F_D2I_OCSP_NONCE), "d2i_ocsp_nonce"},
    {ERR_FUNC(OCSP_F_OCSP_BASIC_ADD1_STATUS), "OCSP_basic_add1_status"},
    {ERR_FUNC(OCSP_F_OCSP_BASIC_SIGN), "OCSP_basic_sign"},
    {ERR_FUNC(OCSP_F_OCSP_BASIC_VERIFY), "OCSP_basic_verify"},
    {ERR_FUNC(OCSP_F_OCSP_CERT_ID_NEW), "OCSP_cert_id_new"},
    {ERR_FUNC(OCSP_F_OCSP_CHECK_DELEGATED), "ocsp_check_delegated"},
    {ERR_FUNC(OCSP_F_OCSP_CHECK_IDS), "ocsp_check_ids"},
    {ERR_FUNC(OCSP_F_OCSP_CHECK_ISSUER), "ocsp_check_issuer"},
    {ERR_FUNC(OCSP_F_OCSP_CHECK_VALIDITY), "OCSP_check_validity"},
    {ERR_FUNC(OCSP_F_OCSP_MATCH_ISSUERID), "ocsp_match_issuerid"},
    {ERR_FUNC(OCSP_F_OCSP_PARSE_URL), "OCSP_parse_url"},
    {ERR_FUNC(OCSP_F_OCSP_REQUEST_SIGN), "OCSP_request_sign"},
    {ERR_FUNC(OCSP_F_OCSP_REQUEST_VERIFY), "OCSP_request_verify"},
    {ERR_FUNC(OCSP_F_OCSP_RESPONSE_GET1_BASIC), "OCSP_response_get1_basic"},
    {ERR_FUNC(OCSP_F_PARSE_HTTP_LINE1), "parse_http_line1"},
    {0, NULL}
};

static ERR_STRING_DATA OCSP_str_reasons[] = {
    {ERR_REASON(OCSP_R_CERTIFICATE_VERIFY_ERROR), "certificate verify error"},
    {ERR_REASON(OCSP_R_DIGEST_ERR), "digest err"},
    {ERR_REASON(OCSP_R_ERROR_IN_NEXTUPDATE_FIELD),
     "error in nextupdate field"},
    {ERR_REASON(OCSP_R_ERROR_IN_THISUPDATE_FIELD),
     "error in thisupdate field"},
    {ERR_REASON(OCSP_R_ERROR_PARSING_URL), "error parsing url"},
    {ERR_REASON(OCSP_R_MISSING_OCSPSIGNING_USAGE),
     "missing ocspsigning usage"},
    {ERR_REASON(OCSP_R_NEXTUPDATE_BEFORE_THISUPDATE),
     "nextupdate before thisupdate"},
    {ERR_REASON(OCSP_R_NOT_BASIC_RESPONSE), "not basic response"},
    {ERR_REASON(OCSP_R_NO_CERTIFICATES_IN_CHAIN), "no certificates in chain"},
    {ERR_REASON(OCSP_R_NO_RESPONSE_DATA), "no response data"},
    {ERR_REASON(OCSP_R_NO_REVOKED_TIME), "no revoked time"},
    {ERR_REASON(OCSP_R_NO_SIGNER_KEY), "no signer key"},
    {ERR_REASON(OCSP_R_PRIVATE_KEY_DOES_NOT_MATCH_CERTIFICATE),
     "private key does not match certificate"},
    {ERR_REASON(OCSP_R_REQUEST_NOT_SIGNED), "request not signed"},
    {ERR_REASON(OCSP_R_RESPONSE_CONTAINS_NO_REVOCATION_DATA),
     "response contains no revocation data"},
    {ERR_REASON(OCSP_R_ROOT_CA_NOT_TRUSTED), "root ca not trusted"},
    {ERR_REASON(OCSP_R_SERVER_RESPONSE_ERROR), "server response error"},
    {ERR_REASON(OCSP_R_SERVER_RESPONSE_PARSE_ERROR),
     "server response parse error"},
    {ERR_REASON(OCSP_R_SIGNATURE_FAILURE), "signature failure"},
    {ERR_REASON(OCSP_R_SIGNER_CERTIFICATE_NOT_FOUND),
     "signer certificate not found"},
    {ERR_REASON(OCSP_R_STATUS_EXPIRED), "status expired"},
    {ERR_REASON(OCSP_R_STATUS_NOT_YET_VALID), "status not yet valid"},
    {ERR_REASON(OCSP_R_STATUS_TOO_OLD), "status too old"},
    {ERR_REASON(OCSP_R_UNKNOWN_MESSAGE_DIGEST), "unknown message digest"},
    {ERR_REASON(OCSP_R_UNKNOWN_NID), "unknown nid"},
    {ERR_REASON(OCSP_R_UNSUPPORTED_REQUESTORNAME_TYPE),
     "unsupported requestorname type"},
    {0, NULL}
};

#endif

void ERR_load_OCSP_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(OCSP_str_functs[0].error) == NULL) {
        ERR_load_strings(0, OCSP_str_functs);
        ERR_load_strings(0, OCSP_str_reasons);
    }
#endif
}
