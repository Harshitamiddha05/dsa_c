//insertion sort
#include<stdio.h>
int main()
{
    int a[]={5,4,10,1,6,2};
    for(int i=1;i<6;i++)//n=6
    {
        int j=i-1;
        int temp=a[j+1];
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }   
    for(int i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}