#ifndef BS_DATA_H
#define BS_DATA_H

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

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

typedef struct BS_S_TAG_VALUE
{
    void *vp_value;
    BS_E_TYPE e_type;
} BS_S_VALUE;

typedef struct BS_S_TAG_ARRAY
{
    BS_S_VALUE *sp_values;
    BS_E_TYPE e_type;
    unsigned long long int ulli_length;
} BS_S_ARRAY;

/* public : intialize an array using specified values, type and length.
 *
 * cvp_array : the pointer to value array.
 * ce_type : the value type.
 * culli_length : the length of the array.
 * 
 * return : the pointer to array struct.
 */
BS_S_ARRAY *bs_intialize_array(const void *cvp_array, const BS_E_TYPE ce_type,
                               const unsigned long long int culli_length);
void bs_free_array(BS_S_ARRAY *sp_array);
BS_S_VALUE *bs_intialize_values(const BS_E_TYPE ce_type, const unsigned long long int culli_length);
void bs_free_values(BS_S_VALUE *sp_values, const unsigned long long int culli_length);
void bs_update_value(BS_S_VALUE *sp_target, const BS_S_VALUE *csp_value);
bool bs_is_samller(BS_S_VALUE *sp_left, BS_S_VALUE *sp_right);

#endif