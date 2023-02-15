#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
}

void heapify(int *arr,int s,int i)
{
  int largest=i;
  int l=2*i+1;
  int r=2*i+2;
  if(l<s && arr[largest]<arr[l])
    largest=l;
  if(r<s && arr[largest]<arr[r])
    largest=r;
  if(largest!=i)
  {
    swap(&arr[largest],&arr[i]);
    heapify(arr,s,largest);
    }
}
void heap_sort(int *arr,int s)
{
  for(int i=s/2-1;i>=0;i--)
    heapify(arr,s,i);
  for(int i=s-1;i>=0;i--)
  {
    swap(&arr[0],&arr[i]);
    heapify(arr,i,0);
  }
}
void printArray(int *arr,int s)
{
  for(int i=0;i<s;i++)
  {
    printf("%d",arr[i]);
    printf("\n");
  }
  printf("\n");
}
int main()
{
  int *a;
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting:");
    printArray(a,n);
    printf("After sorting:");
    heapsort(a,n);
    printArray(a,n);
    return 0;
}
                             
