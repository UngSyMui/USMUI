# include <stdio.h>
int main(){
	int n,t;
	printf("Nhap vao n \n");
	scanf("%d",&n);
	
	t=0;
	for(int i=1;n>0;n/=10){
		t=t+n%10;
	}
	printf("tong %d \n",t);
}
