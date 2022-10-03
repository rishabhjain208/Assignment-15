#include<stdio.h>
void re()
{
    int i,n[10];
    printf("Enter the number \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("The Array in Reverse order\n");
    for(i=9;i>=0;i--)
    {
        printf("%d ",n[i]);
    }

}
int main()
{
    re();
    return 0;
}
