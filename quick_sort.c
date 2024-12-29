//quick sort
#include<stdio.h>
int partition(int lb,int ub,int a[])
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int temp=a[end];
    a[end]=a[lb];
    a[lb]=temp;
    return end;
}
void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(lb,ub,a);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
int main()
{
    int a[]={7,6,10,5,9,2,1,15,7};
    quicksort(a,0,8);
    for(int i=0;i<9;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}