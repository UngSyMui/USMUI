# include <stdio.h>
int main(){
	int n;
	int t;
	printf("Nhap n");
	scanf("%d",&n);
	t =0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			t+=i;
		}
	}
	printf("tong %d",t);
	
}
