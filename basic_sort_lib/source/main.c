#include <stdio.h>
#include "header/basic_sort_lib.h"

int main()
{
    printf("test for basic sort library.\n");

    float f_array[] = {6.0f, 2.0f, 4.0f, 5.0f, 3.0f};
    bsl_bubble(f_array, 5, BSL_E_TYPE_F);
    printf("%f %f %f %f %f\n", f_array[0], f_array[1], f_array[2], f_array[3], f_array[4]);

    return 0;
}