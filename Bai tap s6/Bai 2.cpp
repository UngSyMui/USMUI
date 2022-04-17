# include<stdio.h>
# include<math.h>
int main(){
	int n,i,j,b;
	printf("Nhap n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("\n a[%d] =",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("\n Nhap x = ");
	scanf("%d",&x);
	int min=abs(x-a[0]);
	b=a[0];	
	for(int i=0; i<n;i++){
		
		if(abs(x-a[i])<min){
		b=a[i];
		min=abs(x-a[i]);
		
				
		}	
	}
	
	
	printf("Gia tri gan x nhat %d",b);
	}
	
