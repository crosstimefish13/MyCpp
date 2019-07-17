#include <stdio.h>
#include "basic_sort/header/basic_sort.h"
#include "data_handler/header/data_handler.h"

void print_array(BS_S_ARRAY *sp_array)
{
    printf("\n");
    for (unsigned long long int i = 0; i < sp_array->ulli_length; i++)
    {
        printf("%d ", *(int *)(sp_array->sp_values + i)->vp_value);
    }

    printf("\n");
}

int main()
{
    printf("original:");
    BS_S_ARRAY *sp_array = dh_generate_radom_array(20);
    print_array(sp_array);

    printf("\nbubble:");
    bs_bubble(sp_array);
    print_array(sp_array);

    bs_free_array(sp_array);

    printf("\n\n");
    system("pause");
    return 0;
}