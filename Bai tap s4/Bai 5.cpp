# include<stdio.h>
# include<math.h>
int main(){
	int n,max;
	do{
	
	printf("Nhap vao n>0");
	scanf("%d",&n);
	}while (n<=0);
	
	
	do{
		int i = n%10;
		if (i>max){
		max =i;}
		n/=10;}
		while(n>0);
	
	printf("Chu so lon nhat trong n la %d", max);
}

	
	
	
	
	 
		
	
	

