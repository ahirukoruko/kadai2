#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    
    int data[16],k, l;
    srand((unsigned)time(NULL));

    for (k = 0; k <=15; k++)
    {
        do
        {
            data[k] = rand() % 16 + 1;
            for (l = 0; l < k; l++)
            {
                if (data[k] == data[l]) break;
            }
        } while (k != l);
        printf("%d ",data[k]);
    }

    return 0;
}


