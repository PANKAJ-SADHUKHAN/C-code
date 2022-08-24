#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
 
}
void selectionSort(int *a,int n)
{
  int smallest;
  for(int i=0;i<n-1;i++)
  {
    smallest=i;
    for(int j=i+1;j<n;j++)
    {
      if(a[j]<a[smallest])
        smallest=j;
    }
    if(smallest!=i)
      swap(&a[i],&a[smallest]);
  }   
}
void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
}

int main()
{
  int *a;
  int n;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  a=(int*)malloc(sizeof(int)*n);
  printf("Enter the elements:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Before sorting:");
  print(a,n);
  printf("After sorting:");
  selectionSort(a,n);
  print(a,n);
  return 0;
}
