#ifndef BASIC_SORT_H
#define BASIC_SORT_H

typedef enum BS_E_TAG_TYPE
{
    BS_E_TYPE_S,
    BS_E_TYPE_I,
    BS_E_TYPE_LI,
    BS_E_TYPE_LLI,
    BS_E_TYPE_US,
    BS_E_TYPE_UI,
    BS_E_TYPE_ULI,
    BS_E_TYPE_ULLI,
    BS_E_TYPE_F,
    BS_E_TYPE_D,
    BS_E_TYPE_LD
} BS_E_TYPE;

void bs_bubble(void *vp_array, const unsigned long long int culli_length, const BS_E_TYPE ce_type);

#endif