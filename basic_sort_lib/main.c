#include <stdio.h>
#include "basic_sort_lib.h"

int main()
{
    printf("test for basic sort library.\n");

    int f_array[] = {2, 3, 4, 5, 6};
    bsl_bubble(f_array, BSL_E_TYPE_I, 5);

    void *p_array = f_array;
    void *p_item_1 = (int *)p_array + 3;

    printf("%d\n", f_array[3]);
    printf("%d\n", *(int *)p_item_1);

    return 0;
}