//merge sort
#include<stdio.h>
void merge(int a[],int l,int mid,int u)
{
    int i=l;
    int j=mid+1;
    int k=i;
    int temp[10];
    while(i<=mid && j<=u)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            k++,i++;
        }
        else
        {
            temp[k]=a[j];
            k++,j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=a[i];
        k++,i++;
    }
    while(j<=u)
    {
        temp[k]=a[j];
        k++,j++;
    }
    for(int p=l;p<=u;p++)
    {
        a[p]=temp[p];
    }
}    
void mergesort(int a[],int l,int u)
{
    if(l<u)
    {
    int mid=(l+u)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,u);
    merge(a,l,mid,u);
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int a[]={9,7,6,4,2};
    int n=sizeof(a)/sizeof(a[0]);
    mergesort(a,0,n-1);
    display(a,n);
}