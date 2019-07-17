#include "basic_sort/header/basic_sort.h"

void bs_bubble(BS_S_ARRAY *sp_array)
{
    BS_S_VALUE *sp_switch = bs_intialize_values(sp_array->e_type, 1);
    for (unsigned long long int i = 0; i < sp_array->ulli_length; i++)
    {
        for (unsigned long long int j = 1; j < sp_array->ulli_length - i; j++)
        {
            BS_S_VALUE *sp_previous = sp_array->sp_values + j - 1;
            BS_S_VALUE *sp_current = sp_array->sp_values + j;
            if (bs_is_samller(sp_current, sp_previous) == true)
            {
                bs_update_value(sp_switch, sp_current);
                bs_update_value(sp_current, sp_previous);
                bs_update_value(sp_previous, sp_switch);
            }
        }
    }

    bs_free_values(sp_switch, 1);
}