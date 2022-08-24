#include<stdio.h>
#include<stdlib.h>
int search(int *a,int n,int x)
{
  for(int i=0;i<n;i++)
  {
    if(a[i]==x)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int n,x;
  int *a;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  a=(int*)malloc(sizeof(int)*n);
  printf("Enter the elements in ascending order:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element to find:");
  scanf("%d",&x);
  int result=search(a,n,x);
  (result==-1)?printf("Element not found!!"):printf("Element found at index:%d",result);
}
