#include<stdio.h>

void insertion_sort(int arr[], int s)
{
    int temp,ptr,data_move=0,count=0;

    for(int k=1;k<s;k++)
    {
        temp=arr[k];
        ptr=k-1;

        while(temp<arr[ptr])
        {
            arr[ptr+1]=arr[ptr];
            ptr-=1;
            data_move++;
            count++;
        }
        arr[ptr+1]=temp;
    }
    for(int i=0;i<s;i++)
        printf("%d",arr[i]);
    printf("Data Move: %d",data_move);
    printf("comparison: %d",count);
}
int main()
{
    int s;
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++)
        scanf("%d",&arr[i]);
    insertion_sort(arr,s);
}
