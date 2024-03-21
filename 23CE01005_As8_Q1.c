/*  
    LAB ASSIGNMENT: 08
    Question number: 01

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
*/

#include <stdio.h>

void rightCircularShift(int *ptrx,int*ptry,int*ptrz)
{
    int temp;
    temp=*ptrz;
    *ptrz=*ptry;
    *ptry=*ptrx;
    *ptrx=temp;

}

int main()
{
    int x,y,z;
    printf("Enter x, y and z\n");
    scanf("%d %d %d",&x,&y,&z);
    
    printf("Before right circular shift: x=%d, y=%d and z=%d\n",x,y,z);

    rightCircularShift(&x,&y,&z);

    printf("Before right circular shift: x=%d, y=%d and z=%d\n",x,y,z);
    return 0;
}