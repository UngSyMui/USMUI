# include <stdio.h>
# include <math.h>
int main(){
	int n;
	printf("Nhap vao so nguyen n \n");
	scanf("%d",&n);
	
 	int i=1;
 	while(i<n){
 		if ((i%2)==0&&(i%3)==0){
 			printf("So nguyen chia het cho 2 va 3 nho hon n %d \n",i);
		 }
		 i++;
	 }
	
}

