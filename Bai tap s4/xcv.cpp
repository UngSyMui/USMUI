# include <stdio.h>
# include<math.h>
int main(){
	int a,b,USCLN;
	
	
	scanf("%d %d",&a,&b);
	
	if (a==0||b==0){
		USCLN=(a+b);
	}else{
		
		while (a!=b){
		if (a>b){
			a=a-b;
		}else{
			b=b-a;
		}	
		}
		USCLN=a;
	}
	printf("USCLN %d",USCLN);
	
	
	
}
