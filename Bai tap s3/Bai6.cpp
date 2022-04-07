#include <stdio.h>
#include <math.h>

int Fibonacci(int a)
{
    if (a == 1 || a == 2)
        return 1;
    return Fibonacci(a - 1) + Fibonacci(a - 2);
}
int main(){
	int n;
	printf("Nhap vao n \n");
	scanf("%d",&n);
	int a=3;
	while(Fibonacci(a)<n){
		Fibonacci(a);
		a++;
	}
	printf("So Fibonacci tiem can n la %d", Fibonacci(a));
}
