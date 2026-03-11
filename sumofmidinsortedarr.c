#include<stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i=0, j=0, k=0;
    printf("Enter size of arr1: ");
    scanf("%d",&n1);
    printf("Enter size of arr2: ");
    scanf("%d",&n2);
    printf("Enter: ");
    for(int x=0; x<n1; x++)
        scanf("%d",&a[x]);
    printf("Enter: ");
    for(int x=0; x<n2; x++)
        scanf("%d",&b[x]);
    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i<n1)
        c[k++] = a[i++];
    while(j<n2)
        c[k++] = b[j++];
    int total = n1 + n2;
    for(i=0; i<total; i++)
        printf("%d ", c[i]);

    if(total % 2 == 1)
        printf("\nMiddle Element = %d", c[total/2]);
    else
        printf("\nMiddle Elements = %d and %d", c[total/2 -1], c[total/2]);

    return 0;
}
