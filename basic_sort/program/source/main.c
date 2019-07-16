#include <stdio.h>
#include <stdlib.h>
#include "basic_sort/header/basic_sort.h"

int main()
{
    printf("test for basic sort.\n");

    float f_array[] = {6.0f, 2.0f, 4.0f, 5.0f, 3.0f};
    bs_bubble(f_array, 5, BS_E_TYPE_F);
    printf("\n%f %f %f %f %f\n", f_array[0], f_array[1], f_array[2], f_array[3], f_array[4]);

    printf("\n");
    system("pause");
    return 0;
}