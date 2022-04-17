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
	int max=abs(x-a[0]);
	b=a[0];	
	for(int i=0; i<n;i++){
		
		if(abs(x-a[i])>max){
		b=a[i];
		max=abs(x-a[i]);
		
				
		}	
	}
	
	
	printf("Gia tri xa x nhat %d",b);
	}
	
	
	


