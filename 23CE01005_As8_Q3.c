/*  
    LAB ASSIGNMENT: 08
    Question number: 03

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
*/

#include <stdio.h>

void revArray(int *ptr, int size)
{
    int first=0,last=size-1,temp;
    while(first<last)
    {
        temp=*(ptr+first);
        *(ptr+first)=*(ptr+last);
        *(ptr+last)=temp;

        first++;
        last--;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int array[n];

    printf("Enter the elements one-by-one:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
 
    printf("Input array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");

    revArray(array,n);

    printf("Output array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }

    return 0;
}