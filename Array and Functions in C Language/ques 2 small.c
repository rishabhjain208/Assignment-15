#include<stdio.h>
int grt()
{

    int n[10];
    int i,l;
    printf("Enter the 10 number in the array \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    l=n[0];
    for(i=0;i<=9;i++)
 {
     if(l>n[i])
     l=n[i];
 }
    printf("Smallest number %d",l);
}
int main()
{
    grt();
    return 0;
}

