//selection sort
#include<stdio.h>
int main()
{
    int a[]={5,9,8,0,10};
    for(int i=0;i<5-1;i++)
    {
        int sm=i;
        for(int j=i+1;j<5-1;j++)
        {
            if(a[sm]>a[j])
            {
                sm=j;
            }
        }
        int temp=a[i];
        a[i]=a[sm];
        a[sm]=temp;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}