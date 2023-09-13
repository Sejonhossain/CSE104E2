#include<stdio.h>

void printTable(int n)
{
    for(int i=1; i<=10; i++)
    {

        printf("%d * %d = %d\n",n,i,n*i);

    }
    printf("\n");

}
int main()
{
    int n;
    scanf("%d",&n);
    printTable(n);



}
