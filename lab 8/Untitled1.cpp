
#include <stdio.h>


int tinhTong(int a, int b){
	int c=a+b;
	return c;	
}

bool checkEven(int n){
//	if(n%2==0){
//		return true;
//		}
	
//	return false;
	return n%2==0;
}

void menu(){
	printf("\n Vui long chon mon an: \n");
	printf("1. Lau hai san \n");
	printf("2. Lau dieu cua \n");
	return;
}
bool kiemTraSoNguyenTo(int x){
	if(x<2) return false;
	if(x<4) return true;
	for(int i=2;i<=x/2;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int timMax(int arr[], int n){
	int m=arr[0];
	for(int i=0;i<n;i++){
		if(m<arr[i]){
			m=arr[i];
		}
	}
	return m;	
}

int max2(int *arr, int n){
	int m=arr[0];
	for(int i=0;i<n;i++){
		if(m<arr[i]){
			m=arr[i];
		}
	}
	return m;	
}
#include <stdio.h>


void nhapMang(int arr[],int n){
	printf("Nhap mang: \n");
	for(int i=0;i<n;i++){
		printf("\n arr[%d] =",i);
		scanf("%d",&arr[i]);
	}
}

void xuatMang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}

int timDaoNguoc(int n){
	int m=0;
	while(n!=0){
		m=m*10+n%10;
		n/=10;
	}
	return m;
}

void sapXepMangGiamDan(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void sapXepMangTangDan(int a[],int n){
	for(int i=0;i<n; i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
#include<stdio.h>
#include<math.h>
//bai 1
int tongCacChuSo(int n)
{
	int tong=0;
	int tmp;
	for(tmp=n;tmp!=0;tmp/=10)
	{
		tong+=tmp%10;
	}
	return tong;
}

//bai 2
int chuVi(int a,int b,int c)
{
	
	if (a >= b + c || b >= a + c || c >= a + b)
	{
	return 0;
	}else{
	return a+b+c;
	}
	 
}

//bai 3

float dienTich(int a,int b,int c)
{
	float p;
	if((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0))
	{
		p=(float) (a+b+c)/2;
	return sqrt(p*(p - a)*(p - b)*(p - c));

	}else{
	return 0;
	}
	 
}

//bai 4

int UCLN(int a,int b)
{
	if (a==0 || b==0)
	{
	return a+b;
	}
    while (a != b)
	{
        if (a > b)
		{
            a -= b; 
        }
		else
		{
            b -= a;
        }
    }
    return a;
}

//bai 5

int BCNN(int a,int b)
{
	int u=a*b;
	if(a==0 || b==0)
	{
		printf("khong co BCNN");
		return 0;
	}
	while (a != b)
	{
        if (a > b)
		{
            a -= b; 
        }
		else
		{
            b -= a;
        }
    }
    return u/a;
}


int main()
{
	int n; printf("bai 1 nhap n = "); scanf("%d",&n);
	printf("tong cac chu so %d la: %d\n",n,tongCacChuSo(n));
	int a,c,b;
	printf("nhap a= ");
	scanf("%d",&a);
	printf("nhap b= ");
	scanf("%d",&b);
	printf("nhap c= ");
	scanf("%d",&c);
	
	
	printf("chu vi tam giac la: %d\n",chuVi(a,b,c));
	printf("dien tich tam giac la: %f\n",dienTich(a,b,c));
	printf("UCLN cua a va b la: %d\n",UCLN(a,b));
	printf("BCNN cua a va b la: %d\n",BCNN(a,b));
	
}

