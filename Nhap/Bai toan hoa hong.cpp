	#include <stdio.h>
	main(){
	
	
	float hoahong, doanhso;
	
	printf("Nhap doanh so\n");
	scanf("%f",&doanhso);
	
	if (doanhso<=100000000){
		hoahong=5*doanhso/100;
		printf("Hoa hong la: %f",hoahong);
	}

	else if (doanhso>100000000&&doanhso<=300000000){
	
		hoahong=10*doanhso/100;
		printf("Hoa hong la: %f",hoahong);
	}
	
	else if (doanhso>300000000){
		hoahong=20*doanhso/100;
			printf("Hoa hong la: %f",hoahong);
	}
	

}
