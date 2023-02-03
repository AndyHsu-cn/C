#include <stdio.h>
#include <stdlib.h>
void random_sample(void);
int main(void)
{
    int i;

    printf("%3d %3d %3d %3d %3d %3d %3d %3d %3d %3d\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    printf("----------------------------------------\n");
    for(i = 1; i < 11; i++)
    {
        srand(i);
        random_sample();
    }
        

    return 0;
}

void random_sample(void)
{
    int arr[1000] = {0};
    int cnt[11] = {0};
    int i;

    for(i = 0; i < 1000; i++)
        cnt[rand() % 10 + 1]++;
    
    for (i = 1; i < 11; i++)
		printf("%3d ", cnt[i]);
    printf("\n");
}