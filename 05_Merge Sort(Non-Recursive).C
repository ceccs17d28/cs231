/* Merge Sort without Recursion
   Jeny Susan Rajan S3 D 
   Roll No 28 */


#include<stdio.h>
#define MAX 30
int main()
{
	int a[MAX],temp[MAX],i,j,k,n,size,l1,h1,l2,h2;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("Enter element %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Unsorted list is : ");
	for( i = 0 ; i<n ; i++)
		printf("%d ", a[i]);
	for(size=1; size < n; size=size*2 )
	{
		l1=0;
		k=0; 
		while( l1+size < n)
		{
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if( h2>=n )
				h2=n-1;
			i=l1;
			j=l2;
			while(i<=h1 && j<=h2 )
			{
				if( a[i] <= a[j] )
					temp[k++]=a[i++];
				else
					temp[k++]=a[j++];
			}
			while(i<=h1)
				temp[k++]=a[i++];
			while(j<=h2)
				temp[k++]=a[j++];
			l1=h2+1;
		}
		for(i=l1; k<n; i++) 
			temp[k++]=a[i];
		for(i=0;i<n;i++)
			a[i]=temp[i];
		printf("\nSize=%d \nElements are : ",size);
		for( i = 0 ; i<n ; i++)
			printf("%d ", a[i]);
	}
	printf("Sorted list is :\n");
	for( i = 0 ; i<n ; i++)
		printf("%d ", a[i]);
	printf("\n");
return 0;
}
OUTPUT:
Enter the number of elements : 2
Enter element 1 :3
Enter element 2 :1
Unsorted list is : 3 1 
Size=1 
Elements are : 1 3 Sorted list is :
1 3
