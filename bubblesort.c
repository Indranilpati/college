#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void swap(int *pt,int *ps)
{
    int temp=*pt;
    *pt=*ps;
    *ps=temp;
}

void bubblesort(int a[],int n)
{
    for(int k=0;k<n-1;k++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(a[j]<a[j-1])
                swap(&a[j],&a[j-1]);
        }
    }
}

int main()
{
    int a[]={4,5,7,3,2,9};
    int n = sizeof(a)/sizeof(a[0]);
    bubblesort(a,n);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
