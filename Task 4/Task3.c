#include<stdio.h>
int main()
{
    int n,min,max;

    int a[100];

    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {

        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(int i=0; i<n; i++)
    {

        if(max<a[i])
        {
            max=a[i];

        }
        if(min>a[i])
        {
            min=a[i];

        }


    }
    printf("%d is the maximum\n",max );
    printf("%d is the minimum",min);


    return 0;
}
