# include <stdio.h>
# include<math.h>
int main(){
	int a,b,x;
	do{
	
	printf("nhap vao a va b va a>=2 a<b\n");
	scanf("%d %d",&a,&b);
	}while (a>=b||a<2);
	
	
	for(int x=a; x<=b; x++){
		int c=0;
		for(int i=2;i<=x/2;i++){
			if (x%i==0){
				c++;
			}
		}
		if(c==0){
			printf("%d",x);
		}
	}
	
	
	
	
}
