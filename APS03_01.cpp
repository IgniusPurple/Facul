#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

void SOMA (int a , int b){
	int result;
	result = a+b;
	printf("A sina de %d com %d é %d\n", a,b,result);
	a = 5;
	b=18;
}




main()
{
 setlocale(LC_ALL,"Portuguese");
 int a;
 int b;
 a = 10;
 b = 12;
 SOMA(a,b);
 return 0;

}

