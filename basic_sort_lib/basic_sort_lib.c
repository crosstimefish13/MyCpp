#include <stdio.h>
#include <stdlib.h>
#include "basic_sort_lib.h"

#define BSL_DATA_TYPE void

void set_data_type(const BSL_E_TYPE ce_type)
{
#undef BSL_DATA_TYPE
    if (ce_type == BSL_E_TYPE_S)
    {
#define BSL_DATA_TYPE short
    }
    else if (ce_type == BSL_E_TYPE_I)
    {
#define BSL_DATA_TYPE int
    }
    else if (ce_type == BSL_E_TYPE_L)
    {
#define BSL_DATA_TYPE long
    }
    else if (ce_type == BSL_E_TYPE_LI)
    {
#define BSL_DATA_TYPE long int
    }
    else if (ce_type == BSL_E_TYPE_LL)
    {
#define BSL_DATA_TYPE long long
    }
    else if (ce_type == BSL_E_TYPE_US)
    {
#define BSL_DATA_TYPE unsigned short
    }
    else if (ce_type == BSL_E_TYPE_UI)
    {
#define BSL_DATA_TYPE unsigned int
    }
    else if (ce_type == BSL_E_TYPE_UL)
    {
#define BSL_DATA_TYPE unsigned long
    }
    else if (ce_type == BSL_E_TYPE_ULI)
    {
#define BSL_DATA_TYPE unsigned long int
    }
    else if (ce_type == BSL_E_TYPE_ULL)
    {
#define BSL_DATA_TYPE unsigned long long
    }
    else if (ce_type == BSL_E_TYPE_F)
    {
#define BSL_DATA_TYPE float
    }
    else if (ce_type == BSL_E_TYPE_D)
    {
#define BSL_DATA_TYPE double
    }
    else if (ce_type == BSL_E_TYPE_LD)
    {
#define BSL_DATA_TYPE long double
    }
//     else
//     {
// #define BSL_DATA_TYPE void
//     }
}

void *get_value(const void *cvp_array, const BSL_E_TYPE ce_type, const unsigned long long cull_index)
{
    void *p_value = NULL;

    switch (ce_type)
    {
    case BSL_E_TYPE_S:
        p_value = (short *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_I:
        p_value = (int *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_L:
        p_value = (long *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_LI:
        p_value = (long int *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_LL:
        p_value = (long long *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_US:
        p_value = (unsigned short *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_UI:
        p_value = (unsigned int *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_UL:
        p_value = (unsigned long *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_ULI:
        p_value = (unsigned long int *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_ULL:
        p_value = (unsigned long long *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_F:
        p_value = (float *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_D:
        p_value = (double *)cvp_array + cull_index;
        break;

    case BSL_E_TYPE_LD:
        p_value = (long double *)cvp_array + cull_index;
        break;

    default:
        p_value = NULL;
        break;
    }

    return p_value;
}

void set_value(const void *cvp_value_source, const void *cvp_value_target, const BSL_E_TYPE ce_type)
{
    switch (ce_type)
    {
    case BSL_E_TYPE_S:
        *(short *)cvp_value_source = *(short *)cvp_value_target;
        break;

    case BSL_E_TYPE_I:
        *(int *)cvp_value_source = *(int *)cvp_value_target;
        break;

    case BSL_E_TYPE_L:
        *(long *)cvp_value_source = *(long *)cvp_value_target;
        break;

    case BSL_E_TYPE_LI:
        *(long int *)cvp_value_source = *(long int *)cvp_value_target;
        break;

    case BSL_E_TYPE_LL:
        *(long long *)cvp_value_source = *(long long *)cvp_value_target;
        break;

    case BSL_E_TYPE_US:
        *(unsigned short *)cvp_value_source = *(unsigned short *)cvp_value_target;
        break;

    case BSL_E_TYPE_UI:
        *(unsigned int *)cvp_value_source = *(unsigned int *)cvp_value_target;
        break;

    case BSL_E_TYPE_UL:
        *(unsigned long *)cvp_value_source = *(unsigned long *)cvp_value_target;
        break;

    case BSL_E_TYPE_ULI:
        *(unsigned long int *)cvp_value_source = *(unsigned long int *)cvp_value_target;
        break;

    case BSL_E_TYPE_ULL:
        *(unsigned long long *)cvp_value_source = *(unsigned long long *)cvp_value_target;
        break;

    case BSL_E_TYPE_F:
        *(float *)cvp_value_source = *(float *)cvp_value_target;
        break;

    case BSL_E_TYPE_D:
        *(double *)cvp_value_source = *(double *)cvp_value_target;
        break;

    case BSL_E_TYPE_LD:
        *(long double *)cvp_value_source = *(long double *)cvp_value_target;
        break;

    default:
        break;
    }
}

short is_smaller_or_equal(const void *cvp_value_left, const void *cvp_value_right, const BSL_E_TYPE ce_type)
{
    short s_result = -1;
    switch (ce_type)
    {
    case BSL_E_TYPE_S:
        s_result = *(short *)cvp_value_left <= *(short *)cvp_value_right;
        break;

    case BSL_E_TYPE_I:
        s_result = *(int *)cvp_value_left <= *(int *)cvp_value_right;
        break;

    case BSL_E_TYPE_L:
        s_result = *(long *)cvp_value_left <= *(long *)cvp_value_right;
        break;

    case BSL_E_TYPE_LI:
        s_result = *(long int *)cvp_value_left <= *(long int *)cvp_value_right;
        break;

    case BSL_E_TYPE_LL:
        s_result = *(long long *)cvp_value_left <= *(long long *)cvp_value_right;
        break;

    case BSL_E_TYPE_US:
        s_result = *(unsigned short *)cvp_value_left <= *(unsigned short *)cvp_value_right;
        break;

    case BSL_E_TYPE_UI:
        s_result = *(unsigned int *)cvp_value_left <= *(unsigned int *)cvp_value_right;
        break;

    case BSL_E_TYPE_UL:
        s_result = *(unsigned long *)cvp_value_left <= *(unsigned long *)cvp_value_right;
        break;

    case BSL_E_TYPE_ULI:
        s_result = *(unsigned long int *)cvp_value_left <= *(unsigned long int *)cvp_value_right;
        break;

    case BSL_E_TYPE_ULL:
        s_result = *(unsigned long long *)cvp_value_left <= *(unsigned long long *)cvp_value_right;
        break;

    case BSL_E_TYPE_F:
        s_result = *(float *)cvp_value_left <= *(float *)cvp_value_right;
        break;

    case BSL_E_TYPE_D:
        s_result = *(double *)cvp_value_left <= *(double *)cvp_value_right;
        break;

    case BSL_E_TYPE_LD:
        s_result = *(long double *)cvp_value_left <= *(long double *)cvp_value_right;
        break;

    default:
        s_result = -1;
        break;
    }

    return s_result;
}

BSL_DATA_TYPE *get_value(BSL_DATA_TYPE *dtp_array, const unsigned long long cull_index)
{
    (dtp_array + cull_index)
}

void bsl_bubble(void *vp_array, const unsigned long long cull_length, const BSL_E_TYPE ce_type)
{
    set_data_type(ce_type);
    BSL_DATA_TYPE *dtp_array = (BSL_DATA_TYPE *)vp_array;
    BSL_DATA_TYPE *dtp_switch = (BSL_DATA_TYPE *)malloc(sizeof(BSL_DATA_TYPE));

    for (unsigned long long i = 0; i < cull_length; i++)
    {
        for (unsigned long long j = 1; j < cull_length - i; j++)
        {
            BSL_DATA_TYPE dt_previous = *(dtp_array + j);
        }
        
    }
    

    free(dtp_switch);

    // BSL_DATA_TYPE *p_value_3 = (BSL_DATA_TYPE)p_array;

    // void *p_value_3 = get_value(p_array, ce_type, 3ull);
    // void *p_value_2 = get_value(p_array, ce_type, 2ull);
    // *(int *)p_value_3 = *(int *)p_value_2;
    // int i_compare = (*(int *)p_value_3) < (*(int *)p_value_2);

    // printf("%d\n", *(BSL_DATA_TYPE)p_value_3);
}