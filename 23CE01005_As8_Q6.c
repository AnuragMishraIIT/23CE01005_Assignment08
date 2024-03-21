/*  
    LAB ASSIGNMENT: 
    Question number: 

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: //2024
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int m,n;

    printf("Enter the size of the first string:\n");
    scanf("%d",&m);
    char str1[m+1];
    printf("Enter the first string:\n");
    getchar();
    gets(str1);

    printf("Enter the size of the second string:\n");
    scanf("%d",&n);
    char str2[n+1];
    printf("Enter the first string:\n");
    getchar();
    gets(str2);

    printf("Input:\nFirst string=%s\nSecond string=%s\n",str1,str2);
    strcat(str1,str2);
    printf("Output: %s\n",str1);
    return 0;
}