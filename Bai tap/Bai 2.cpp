#include <stdio.h>
#include <conio.h>
#include <math.h>
 main(){
	
	float a,b,c,x,x1,x2,delta;
	scanf("%f,%f,%f",&a,&b,&c);
	if (a==0){
		x=-c/b;
		printf("phuong trinh co nghiem la: %f",x);	
		}
	else{
		delta=b*b-4*a*c;
		if(delta==0){
			printf("phuong trinh co nghiem kep la x1 = x2 :%f",-b/(2*a));
		
		}
		else{
			
			if(delta>0){
				x1=(-b + sqrt(delta))/(2*a);
				x2=(-b - sqrt (delta))/(2*a);
				printf("phuong trinh co hai nghiem: %f,%f",x1,x2);
			}
			else{
				printf("phuong trinh vo nghiem");
			}	
			}
		}
	}
