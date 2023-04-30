#include <stdio.h>
int main()
{
    int i,ar[20],key;
    printf("Enter array element");
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the number to be searched");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(ar[i]==key){
            printf("Element found");
        }
    }
    getch();
    return 0;
}