#include <stdio.h>
#include <stdlib.h>

int main() 
{

    int num = 30;
    int i = 0;
    int j = 0;
    int k = 2;
    int nums[30] = { };

    for (i; i < num; i++)
    {
        if (i == j) 
        {
            nums[i] = 0;
            j = j + k;
            k ++;
        } else
        {
            nums[i] = 1;
        }
    }

    int x = 0;

    for (x; x < 30; x++)
    {
        printf("%d", nums[x]);
    }

    return 0;
}