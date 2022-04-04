#include <stdio.h>
#include <conio.h>
#include <math.h>
 main(){
	
	float a,b,c,p,s;
	scanf("%f,%f,%f",&a,&b,&c);


	
	if(a+b>c&&a+c>b&&b+c>a)
	{
		printf("la 3 canh cua 1 tam giac");
	
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("chu vi la:%f",2*p);
	printf("dien tich la:%f",s);
	
	}
	else
	{
			printf("khong phai la 3 canh cua 1 tam giac");
		}
	
	
	
	
	}
