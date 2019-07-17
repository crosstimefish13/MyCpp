#include "data_handler/header/data_handler.h"

BS_S_ARRAY *dh_generate_radom_array(const unsigned long long int culli_length)
{
    srand(time(NULL));
    int ia_array[culli_length];
    for (unsigned long long int i = 0; i < culli_length; i++)
    {
        int i_value = rand() % culli_length;
        ia_array[i] = i_value;
    }

    BS_S_ARRAY *sp_array = bs_intialize_array(ia_array, BS_E_TYPE_I, culli_length);
    return sp_array;
}

bool dh_save(const BS_S_ARRAY *cs_array, const char *ccp_file_path)
{
    return false;
}

BS_S_ARRAY *dh_load(const char *ccp_file_path)
{
    return NULL;
}