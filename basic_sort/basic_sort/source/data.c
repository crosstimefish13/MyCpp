#include "basic_sort/header/data.h"

void intialize_value_s(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_S)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (short *)cvp_array + cull_index;
        sp_value->vp_value = (short *)malloc(sizeof(short));
        memcpy(sp_value->vp_value, vp_value, sizeof(short));
    }
}

void intialize_value_i(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_I)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (int *)cvp_array + cull_index;
        sp_value->vp_value = (int *)malloc(sizeof(int));
        memcpy(sp_value->vp_value, vp_value, sizeof(int));
    }
}

void intialize_value_li(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_LI)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (long int *)cvp_array + cull_index;
        sp_value->vp_value = (long int *)malloc(sizeof(long int));
        memcpy(sp_value->vp_value, vp_value, sizeof(long int));
    }
}

void intialize_value_lli(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_LLI)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (long long int *)cvp_array + cull_index;
        sp_value->vp_value = (long long int *)malloc(sizeof(long long int));
        memcpy(sp_value->vp_value, vp_value, sizeof(long long int));
    }
}

void intialize_value_us(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_US)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (unsigned short *)cvp_array + cull_index;
        sp_value->vp_value = (unsigned short *)malloc(sizeof(unsigned short));
        memcpy(sp_value->vp_value, vp_value, sizeof(unsigned short));
    }
}

void intialize_value_ui(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_UI)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (unsigned int *)cvp_array + cull_index;
        sp_value->vp_value = (unsigned int *)malloc(sizeof(unsigned int));
        memcpy(sp_value->vp_value, vp_value, sizeof(unsigned int));
    }
}

void intialize_value_uli(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_ULI)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (unsigned long int *)cvp_array + cull_index;
        sp_value->vp_value = (unsigned long int *)malloc(sizeof(unsigned long int));
        memcpy(sp_value->vp_value, vp_value, sizeof(unsigned long int));
    }
}

void intialize_value_ulli(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_ULLI)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (unsigned long long int *)cvp_array + cull_index;
        sp_value->vp_value = (unsigned long long int *)malloc(sizeof(unsigned long long int));
        memcpy(sp_value->vp_value, vp_value, sizeof(unsigned long long int));
    }
}

void intialize_value_f(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_F)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (float *)cvp_array + cull_index;
        sp_value->vp_value = (float *)malloc(sizeof(float));
        memcpy(sp_value->vp_value, vp_value, sizeof(float));
    }
}

void intialize_value_d(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_D)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (double *)cvp_array + cull_index;
        sp_value->vp_value = (double *)malloc(sizeof(double));
        memcpy(sp_value->vp_value, vp_value, sizeof(double));
    }
}

void intialize_value_ld(const void *cvp_array, BS_S_ARRAY *sp_array, const unsigned long long cull_index)
{
    if (sp_array->e_type == BS_E_TYPE_LD)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + cull_index;
        void *vp_value = (long double *)cvp_array + cull_index;
        sp_value->vp_value = (long double *)malloc(sizeof(long double));
        memcpy(sp_value->vp_value, vp_value, sizeof(long double));
    }
}

BS_S_ARRAY *bs_intialize_array(const void *cvp_array, const BS_E_TYPE ce_type,
                               const unsigned long long int culli_length)
{
    BS_S_ARRAY *sp_array = (BS_S_ARRAY *)malloc(sizeof(BS_S_ARRAY));
    sp_array->sp_values = (BS_S_VALUE *)malloc(sizeof(BS_S_VALUE) * culli_length);
    sp_array->e_type = ce_type;
    sp_array->ulli_length = culli_length;
    for (unsigned long long int i = 0; i < culli_length; i++)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + i;
        sp_value->vp_value = NULL;
        sp_value->e_type = ce_type;
        intialize_value_s(cvp_array, sp_array, i);
        intialize_value_i(cvp_array, sp_array, i);
        intialize_value_li(cvp_array, sp_array, i);
        intialize_value_lli(cvp_array, sp_array, i);
        intialize_value_us(cvp_array, sp_array, i);
        intialize_value_ui(cvp_array, sp_array, i);
        intialize_value_uli(cvp_array, sp_array, i);
        intialize_value_ulli(cvp_array, sp_array, i);
        intialize_value_f(cvp_array, sp_array, i);
        intialize_value_d(cvp_array, sp_array, i);
        intialize_value_ld(cvp_array, sp_array, i);
    }

    return sp_array;
}

void bs_free_array(BS_S_ARRAY *sp_array)
{
    for (unsigned long long int i = 0; i < sp_array->ulli_length; i++)
    {
        BS_S_VALUE *sp_value = sp_array->sp_values + i;
        free(sp_value->vp_value);
    }

    free(sp_array->sp_values);
    free(sp_array);
}

BS_S_VALUE *bs_intialize_values(const BS_E_TYPE ce_type, const unsigned long long int culli_length)
{
    BS_S_VALUE *sp_values = (BS_S_VALUE *)malloc(sizeof(BS_S_VALUE) * culli_length);
    for (unsigned long long int i = 0; i < culli_length; i++)
    {
        BS_S_VALUE *sp_value = sp_values + i;
        sp_value->e_type = ce_type;
        if (ce_type == BS_E_TYPE_S)
            sp_value->vp_value = (int *)malloc(sizeof(int));
        else if (ce_type == BS_E_TYPE_I)
            sp_value->vp_value = (int *)malloc(sizeof(int));
        else if (ce_type == BS_E_TYPE_LI)
            sp_value->vp_value = (long int *)malloc(sizeof(long int));
        else if (ce_type == BS_E_TYPE_LLI)
            sp_value->vp_value = (long long int *)malloc(sizeof(long long int));
        else if (ce_type == BS_E_TYPE_US)
            sp_value->vp_value = (unsigned short *)malloc(sizeof(unsigned short));
        else if (ce_type == BS_E_TYPE_UI)
            sp_value->vp_value = (unsigned int *)malloc(sizeof(unsigned int));
        else if (ce_type == BS_E_TYPE_ULI)
            sp_value->vp_value = (unsigned long int *)malloc(sizeof(unsigned long int));
        else if (ce_type == BS_E_TYPE_ULLI)
            sp_value->vp_value = (unsigned long long int *)malloc(sizeof(unsigned long long int));
        else if (ce_type == BS_E_TYPE_F)
            sp_value->vp_value = (float *)malloc(sizeof(float));
        else if (ce_type == BS_E_TYPE_D)
            sp_value->vp_value = (double *)malloc(sizeof(double));
        else if (ce_type == BS_E_TYPE_LD)
            sp_value->vp_value = (long double *)malloc(sizeof(long double));
        else
            sp_value->vp_value = NULL;
    }

    return sp_values;
}

void bs_free_values(BS_S_VALUE *sp_values, const unsigned long long int culli_length)
{
    for (unsigned long long int i = 0; i < culli_length; i++)
    {
        BS_S_VALUE *sp_value = sp_values + i;
        free(sp_value->vp_value);
    }

    free(sp_values);
}

void bs_update_value(BS_S_VALUE *sp_target, const BS_S_VALUE *csp_value)
{
    unsigned int ui_size = 0;
    if (sp_target->e_type == BS_E_TYPE_S)
        ui_size = sizeof(short);
    else if (sp_target->e_type == BS_E_TYPE_I)
        ui_size = sizeof(int);
    else if (sp_target->e_type == BS_E_TYPE_LI)
        ui_size = sizeof(long int);
    else if (sp_target->e_type == BS_E_TYPE_LLI)
        ui_size = sizeof(long long int);
    else if (sp_target->e_type == BS_E_TYPE_US)
        ui_size = sizeof(unsigned short);
    else if (sp_target->e_type == BS_E_TYPE_UI)
        ui_size = sizeof(unsigned int);
    else if (sp_target->e_type == BS_E_TYPE_ULI)
        ui_size = sizeof(unsigned long int);
    else if (sp_target->e_type == BS_E_TYPE_ULLI)
        ui_size = sizeof(unsigned long long int);
    else if (sp_target->e_type == BS_E_TYPE_F)
        ui_size = sizeof(float);
    else if (sp_target->e_type == BS_E_TYPE_D)
        ui_size = sizeof(double);
    else if (sp_target->e_type == BS_E_TYPE_LD)
        ui_size = sizeof(long double);
    memcpy(sp_target->vp_value, csp_value->vp_value, ui_size);
}

bool bs_is_samller(BS_S_VALUE *sp_left, BS_S_VALUE *sp_right)
{
    bool b_result = false;
    if (sp_left->e_type == BS_E_TYPE_S)
        b_result = *(short *)sp_left->vp_value < *(short *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_I)
        b_result = *(int *)sp_left->vp_value < *(int *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_LI)
        b_result = *(long int *)sp_left->vp_value < *(long int *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_LLI)
        b_result = *(long long int *)sp_left->vp_value < *(long long int *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_US)
        b_result = *(unsigned short *)sp_left->vp_value < *(unsigned short *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_UI)
        b_result = *(unsigned int *)sp_left->vp_value < *(unsigned int *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_ULI)
        b_result = *(unsigned long int *)sp_left->vp_value < *(unsigned long int *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_ULLI)
        b_result = *(unsigned long long int *)sp_left->vp_value < *(unsigned long long int *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_F)
        b_result = *(float *)sp_left->vp_value < *(float *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_D)
        b_result = *(double *)sp_left->vp_value < *(double *)sp_right->vp_value;
    else if (sp_left->e_type == BS_E_TYPE_LD)
        b_result = *(long double *)sp_left->vp_value < *(long double *)sp_right->vp_value;
    return b_result;
}