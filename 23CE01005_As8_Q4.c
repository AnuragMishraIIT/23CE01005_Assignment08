/*  
    LAB ASSIGNMENT: 08
    Question number: 4

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
*/

#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    int nums[n+1];
    printf("Enter the elements of nums one-by-one:\n");
    for(int i=0;i<n+1;i++)
    {
        scanf("%d",&nums[i]);
    }

    for(int i=0;i<n+1;i++)
    {
        sum=sum+nums[i];
    }

    int natural_sum=n*(n+1)/2;
    printf("The repeated element is: %d",sum-natural_sum);   
    return 0;
}