#include <string.h>
#include <stdlib.h>
#include "basic_sort_lib.h"

void *get_vp_value(const void *cvp_array, const unsigned long long int culli_index, const BSL_E_TYPE ce_type)
{
    void *vp_value = NULL;
    if (ce_type == BSL_E_TYPE_S)
        vp_value = (short *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_I)
        vp_value = (int *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_LI)
        vp_value = (long int *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_LLI)
        vp_value = (long long int *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_US)
        vp_value = (unsigned short *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_UI)
        vp_value = (unsigned int *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_ULI)
        vp_value = (unsigned long int *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_ULLI)
        vp_value = (unsigned long long int *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_F)
        vp_value = (float *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_D)
        vp_value = (double *)cvp_array + culli_index;
    else if (ce_type == BSL_E_TYPE_LD)
        vp_value = (long double *)cvp_array + culli_index;
    return vp_value;
}

void set_vp_value(void *cvp_target, const void *cvp_value, const BSL_E_TYPE ce_type)
{
    unsigned int ui_size = 0;
    if (ce_type == BSL_E_TYPE_S)
        ui_size = sizeof(short);
    else if (ce_type == BSL_E_TYPE_I)
        ui_size = sizeof(int);
    else if (ce_type == BSL_E_TYPE_LI)
        ui_size = sizeof(long int);
    else if (ce_type == BSL_E_TYPE_LLI)
        ui_size = sizeof(long long int);
    else if (ce_type == BSL_E_TYPE_US)
        ui_size = sizeof(unsigned short);
    else if (ce_type == BSL_E_TYPE_UI)
        ui_size = sizeof(unsigned int);
    else if (ce_type == BSL_E_TYPE_ULI)
        ui_size = sizeof(unsigned long int);
    else if (ce_type == BSL_E_TYPE_ULLI)
        ui_size = sizeof(unsigned long long int);
    else if (ce_type == BSL_E_TYPE_F)
        ui_size = sizeof(float);
    else if (ce_type == BSL_E_TYPE_D)
        ui_size = sizeof(double);
    else if (ce_type == BSL_E_TYPE_LD)
        ui_size = sizeof(long double);
    memcpy(cvp_target, cvp_value, ui_size);
}

short is_samller(const void *cvp_left, const void *cvp_right, const BSL_E_TYPE ce_type)
{
    short s_result = -1;
    if (ce_type == BSL_E_TYPE_S)
        s_result = *(short *)cvp_left < *(short *)cvp_right;
    else if (ce_type == BSL_E_TYPE_I)
        s_result = *(int *)cvp_left < *(int *)cvp_right;
    else if (ce_type == BSL_E_TYPE_LI)
        s_result = *(long int *)cvp_left < *(long int *)cvp_right;
    else if (ce_type == BSL_E_TYPE_LLI)
        s_result = *(long long int *)cvp_left < *(long long int *)cvp_right;
    else if (ce_type == BSL_E_TYPE_US)
        s_result = *(unsigned short *)cvp_left < *(unsigned short *)cvp_right;
    else if (ce_type == BSL_E_TYPE_UI)
        s_result = *(unsigned int *)cvp_left < *(unsigned int *)cvp_right;
    else if (ce_type == BSL_E_TYPE_ULI)
        s_result = *(unsigned long int *)cvp_left < *(unsigned long int *)cvp_right;
    else if (ce_type == BSL_E_TYPE_ULLI)
        s_result = *(unsigned long long int *)cvp_left < *(unsigned long long int *)cvp_right;
    else if (ce_type == BSL_E_TYPE_F)
        s_result = *(float *)cvp_left < *(float *)cvp_right;
    else if (ce_type == BSL_E_TYPE_D)
        s_result = *(double *)cvp_left < *(double *)cvp_right;
    else if (ce_type == BSL_E_TYPE_LD)
        s_result = *(long double *)cvp_left < *(long double *)cvp_right;
    return s_result;
}

void *malloc_vp_array(const BSL_E_TYPE ce_type, const unsigned long long int culli_length)
{
    void *vp_array = NULL;
    if (ce_type == BSL_E_TYPE_S)
        vp_array = (short *)malloc(culli_length * sizeof(short));
    else if (ce_type == BSL_E_TYPE_I)
        vp_array = (int *)malloc(culli_length * sizeof(int));
    else if (ce_type == BSL_E_TYPE_LI)
        vp_array = (long int *)malloc(culli_length * sizeof(long int));
    else if (ce_type == BSL_E_TYPE_LLI)
        vp_array = (long long int *)malloc(culli_length * sizeof(long long int));
    else if (ce_type == BSL_E_TYPE_US)
        vp_array = (unsigned short *)malloc(culli_length * sizeof(unsigned short));
    else if (ce_type == BSL_E_TYPE_UI)
        vp_array = (unsigned int *)malloc(culli_length * sizeof(unsigned int));
    else if (ce_type == BSL_E_TYPE_ULI)
        vp_array = (unsigned long int *)malloc(culli_length * sizeof(unsigned long int));
    else if (ce_type == BSL_E_TYPE_ULLI)
        vp_array = (unsigned long long int *)malloc(culli_length * sizeof(unsigned long long int));
    else if (ce_type == BSL_E_TYPE_F)
        vp_array = (float *)malloc(culli_length * sizeof(float));
    else if (ce_type == BSL_E_TYPE_D)
        vp_array = (double *)malloc(culli_length * sizeof(double));
    else if (ce_type == BSL_E_TYPE_LD)
        vp_array = (long double *)malloc(culli_length * sizeof(long double));
    return vp_array;
}

void bsl_bubble(void *vp_array, const unsigned long long int culli_length, const BSL_E_TYPE ce_type)
{
    void *vp_switch = malloc_vp_array(ce_type, 1);
    for (unsigned long long int i = 0; i < culli_length; i++)
    {
        for (unsigned long long int j = 1; j < culli_length - i; j++)
        {
            void *vp_previous_value = get_vp_value(vp_array, j - 1, ce_type);
            void *vp_current_value = get_vp_value(vp_array, j, ce_type);
            if (is_samller(vp_current_value, vp_previous_value, ce_type) == 1)
            {
                set_vp_value(vp_switch, vp_current_value, ce_type);
                set_vp_value(vp_current_value, vp_previous_value, ce_type);
                set_vp_value(vp_previous_value, vp_switch, ce_type);
            }
        }
    }

    free(vp_switch);
}