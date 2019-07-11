#ifndef BASIC_SORT_LIB_H
#define BASIC_SORT_LIB_H

typedef enum BSL_E_TAG_TYPE
{
    BSL_E_TYPE_S,
    BSL_E_TYPE_I,
    BSL_E_TYPE_L,
    BSL_E_TYPE_LI,
    BSL_E_TYPE_LL,
    BSL_E_TYPE_US,
    BSL_E_TYPE_UI,
    BSL_E_TYPE_UL,
    BSL_E_TYPE_ULI,
    BSL_E_TYPE_ULL,
    BSL_E_TYPE_F,
    BSL_E_TYPE_D,
    BSL_E_TYPE_LD
} BSL_E_TYPE;

void bsl_bubble(void *p_array, const BSL_E_TYPE ce_type, const unsigned long long cull_length);

#endif