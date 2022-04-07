# include <stdio.h>
# include <math.h>
int main(){
	int sum = 0;
	int n;
	printf("Nhap n\n");
	scanf("%d",&n);
	
	for(int i=1;i<=n/2;i++){
		if (n%i==0){
			sum+=i;
		}
	}
	if (sum == n) printf("So hoan hao") ;
	else printf("So khong hoan hao");
}
