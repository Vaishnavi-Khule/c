#include<stdio.h>
#include<conio.h>

   void merge(int a[],int low,int mid,int high)
   {
	   int i,j,k=0;
	   int b[100];
	   i=low;
	   j=mid+1;
   while(i<=mid&&j<=high)
   {
	   if(a[i]<a[j])
	   {
		   b[k]=a[i];
		   i++;k++;
	   }
	   else
	   {
		   b[k]=a[j];
		   j++;k++;
	   }
   }
   while(i<=mid)
   {
	   b[k]=a[i];
	   i++;k++;
   }
   while(j<=high)
   {
	   b[k]=a[j];j++;
	   k++;
   }
   k=0;
   for(i=low;i<=high;i++)
   {
	   a[i]=b[k];
	   k++;
   }
   }
void merge_sort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}













void main()
{
	int a[100],n,i;
	printf("how many elements you want to enter\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("unsorted elements are\n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf("%d ,",a[i]);
	}
	printf("]");
	merge_sort(a,0,n-1);
	printf("sorted elements are\n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf("%d ,",a[i]);
	}
	printf("]");

	getch();
}