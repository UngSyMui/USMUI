# include <stdio.h>
int main()
{
 int n;
 printf("Nhap vao n ");
 scanf("%d",&n);
 int a[n];
 
 
 for(int i=0;i<n;i++)
	{  
 	printf("\n a[%d]= ",i);
	scanf("%d",&a[i]);
	for(int j=0;j<i;j++)
 		{
  		if(a[j]>a[i])
  			{
  			int temp=a[j];
  	 		a[j]=a[i];
  	 		a[i]=temp;
			}
		}
	} 

		for(int i=0;i<n;i++)
		{  
 		printf("%d ",a[i]);
		}
}
