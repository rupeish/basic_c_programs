#include<stdio.h>
 
void main()
{
    int a[10],n,i,cnt=0;
    printf("enter size of the array");
    scanf("%d", &n);
    printf("enter the elements");
    for(i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("even numbers are \n");
    for (i=0; i<n;i++)
    {
        if (*(a+i)%2==0)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}