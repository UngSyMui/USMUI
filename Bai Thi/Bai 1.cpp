# include<stdio.h>
# include<math.h>
int main(){
	int n;
	printf("Nhap vao so nguyen n>0 \n");
	do{
		scanf("%d",&n);
		if(n<=0){
		printf("Nhap lai so nguyen n>0 \n");
		}
	}while(n<=0);
	
	float S=0;
	for(int i=1;i<=n;i++){
		S+=(float)1/i;
	}
	
	printf("Tong la %f",S);
}
