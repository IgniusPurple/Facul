#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>


int square(int y);


main()
{
 setlocale(LC_ALL,"Portuguese");
	
	int x;
	
	for(x=1; x<=5; x++)
		printf("%i", square(x)+1);

}

int square(int y){
		
		int x;
		
		x= (y*y+1);
		
		return x;

}
