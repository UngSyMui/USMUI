# include <stdio.h>
# include <math.h>
int main(){
	int n;
	int sodaonguoc;
	int sodu;
	do{
	
	printf("Nhap so can dao nguoc lon hon 10\n");
	scanf("%d",&n);
	}while (n<=10);
	
	sodaonguoc=0;
	while(n>0){
		sodu= n%10;
		sodaonguoc=sodaonguoc*10+sodu;
		n=n/10;
	}
	printf("So dao nguoc la %d\n",sodaonguoc);
}

