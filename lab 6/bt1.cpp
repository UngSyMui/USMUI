#include<stdio.h>
int main()
{
int n;	printf("nhap n: ");  scanf("%d",&n);

int a[n];
for (int i=0;i<n;i++)
  {
  	bool f;
	do
		{
		f = false;
		printf("a[%d]= ",i); scanf("%d",&a[i]);
		//kiem tra xem cac so tu 0-> i-1 da co gia tri cua a[i] 
		for (int j=0;j<i;j++)
			{
				if(a[i] == a[j])
				{
					f = true;
					printf("so nay da ton tai, vui long nhap lai\n"); 
					break; 
				} 
			} 
		}
	while(f); 
  }
  for (int i=0;i<n;i++)
	{
		printf ("%d ",a[i]); 
	} 
  
} 
