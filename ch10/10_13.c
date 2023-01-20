#include <stdio.h>
int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int * ptr1, * ptr2, * ptr3;

    ptr1 = urn;
    ptr2 = &urn[2];

    printf("%21s %21s %22s\n", "pointer value", "deferenced pointer", "pointer address");
    printf("ptr1 = %13p *ptr1 = %13d &ptr1 = %13p\n", ptr1, *ptr1, &ptr1);

    ptr3 = ptr1 + 4;
    printf("adding an int to a pointer:\n");
    printf("ptr1 + 4 = %13p *(ptr1 + 4) = %7d &ptr1 = %13p\n", ptr1 + 4, *(ptr1 + 4), &ptr1);

    ptr1++;
    printf("values after ptr1++:\n");
    printf("ptr1 = %13p *ptr1 = %13d &ptr1 = %13p\n", ptr1, *ptr1, &ptr1);


    ptr2--;
    printf("values after ptr2--");
    printf("ptr2 = %13p *ptr2 = %13d &ptr2 = %13p\n", ptr2, *ptr2, &ptr2);

    --ptr1;
    ++ptr2;

    printf("pointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    printf("substracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);

    return 0;
}