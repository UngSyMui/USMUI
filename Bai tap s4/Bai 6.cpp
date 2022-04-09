# include <stdio.h>
# include <math.h>
int main(){
	int n;
	printf("Nhap vao n>0");
	scanf("%d",&n);
	int c=0;
	do{
		int i=n%10;
		if (i%2==0){
			c++;
		}
		n=n/10;
	
	}while(n>0);
	
	if(c==0){
	printf("toan chu so le");
	}else{printf("co chu so chan");
	}
	
}
