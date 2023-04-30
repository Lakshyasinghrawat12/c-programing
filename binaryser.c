#include <stdio.h>
#include <conio.h>
int main()
{
    int i, start, end, mid, n, ar[100], key;
    printf("enter size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("enter the numer to be searched");
    scanf("%d",&key);
    start=0;
    end=n-1;
    mid=(start+end)/2;
    while(start<=end){
        if(ar[mid]<key)
        {
            start=mid+1;
        }
        else if(ar[mid]==key)
        {
            printf("%d element found at location %d",key,mid);
        }
        else{
            end=mid-1;
            mid=(start+end)/2;
        }
    }
    if(start>end){
        printf("Element not found");
    }
    getch();
    return 0;
}