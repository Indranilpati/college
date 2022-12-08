#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void selectionsort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int imin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[imin])
                imin=j;
        }
        int temp = a[i];
        a[i]=a[imin];
        a[imin]=temp;
    }
}

int main()
{
    int a[]={4,5,7,3,2,9};
    selectionsort(a,6);
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
