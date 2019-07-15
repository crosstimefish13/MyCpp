#ifndef BASIC_SORT_LIB_H
#define BASIC_SORT_LIB_H

typedef enum BSL_E_TAG_TYPE
{
    BSL_E_TYPE_S,
    BSL_E_TYPE_I,
    BSL_E_TYPE_LI,
    BSL_E_TYPE_LLI,
    BSL_E_TYPE_US,
    BSL_E_TYPE_UI,
    BSL_E_TYPE_ULI,
    BSL_E_TYPE_ULLI,
    BSL_E_TYPE_F,
    BSL_E_TYPE_D,
    BSL_E_TYPE_LD
} BSL_E_TYPE;

void bsl_bubble(void *vp_array, const unsigned long long int culli_length, const BSL_E_TYPE ce_type);

#endif