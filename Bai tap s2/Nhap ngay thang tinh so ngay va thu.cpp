# include <stdio.h>
int main(){
	int a;
	printf("Nhap vao ngay");
	scanf("%d",&a);
	int b;
	printf("Nhap vao thang");
	scanf("%d",&b);
	
	if(b==1){
		if(a<=31&&a>0){
		printf("Ngay thu:%d ",a);
		}else{
		printf("Nhap lai ngay thang");
		return 0;
		}	
			}
	else if(b==2){
		if(a<=28&&a>0){	
		a=a+31;
		printf("Ngay thu:%d",a);
		}else{
			printf("Nhap lai ngay thang");
			return 0;
		}
			}
	else if (b==3){
		if(a<=31&&a>0){	
		a=a+59;
		printf("Ngay thu:%d", a);
		}else{
			printf("Nhap lai ngay thang");
			return 0;
		}
	}
	else if (b==4){
		if(a<=30&&a>0){
			a=a+89;
		printf("Ngay thu:%d", a);
		}else{
			printf("Nhap lai ngay thang");
			return 0;
		}
	}
	else if (b==5){
		if(a<=31&&a>0){	
		a=a+120;
		printf("Ngay thu:%d", a);
		}else{
				printf("Nhap lai ngay thang");
				return 0;
		}
	}
	else if (b==6){
		if(a<=30&&a>0){
			a=a+150;
		printf("Ngay thu:%d",a);
		}else{
			printf("Nhap lai ngay thang");
			return 0;
		}
	}
	else if (b==7){
		if(a<=31&&a>0){
			a=a+181;
		printf("Ngay thu:%d", a);
		}else{
					printf("Nhap lai ngay thang");
					return 0;
		}
	}
	else if (b==8){
				if(a<=31&&a>0){
					a=a+212;
			printf("Ngay thu:%d", a);
		 }else{
		 	printf("Nhap lai ngay thang");
		 	return 0;
		 }
	}
	else if( b==9){
		if(a<=30&&a>0){
			a=a+242;
		    printf("Ngay thu:%d", a);
		}else{
			printf("Nhap lai ngay thang");
			return 0;
		}
	}
	else if (b==10){
		if(a<=31&&a>0){
			a=a+273;
		printf("Ngay thu:%d", a);
		}else{
			printf("Nhap lai ngay thang");
			return 0;
		}
	}
	else if(b==11){
		if(a<=30&&a>0){
			a=a+303;
		printf("Ngay thu:%d", a);
		}else{
			printf("Nhap lai ngay thang");
			return 0;
		}
	}
	else if(b==12){
			if(a<=31&&a>0){
				a=a+334;
		printf("Ngay thu:%d", a);
	}else{
		printf("Nhap lai ngay thang");
		return 0;

	}
    }
	else {
		printf("Nhap lai thang");
		return 0;
	}
	
	
	int x=a%7;
	if (a<7){
		printf("Day la thu: %d", a+1);
	}
	if (a==7){
		printf("Day la chu nhat");
	}
	if (a>7){
		if(x==0){
			printf("Day la chu nhat");
		}else {
			printf("Day la thu: %d",x+1);
	
		}
	}
}
	
	
		
	

