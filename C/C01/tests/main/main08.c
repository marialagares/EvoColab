#include <stdio.h>

void ft_sort_int_tab (int *tab, int size);

int    main(void)
{
    int    tab1[5];
    int        size1;
    int i = 0;

    size1 = 5;
    tab1[0]= 7;
    tab1[1] =9;
    tab1[2]= 2;
    tab1[3] = 3;
    tab1[4]= 0;
    
    
    printf("ANTES\n");
    while(i < size1)
    {
          printf("%d ", tab1[i]);
        printf("- ");
        i++;
    }
    printf("\n");
    
    ft_sort_int_tab (tab1, size1);
    

    printf("\nDESPUES\n");
    i = 0;
    while(i < size1)
    {
          printf("%d ", tab1[i]);
        printf("- ");
        i++;
    }
    printf("\n");
    
}

