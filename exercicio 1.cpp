#include <stdio.h>


int fatorial(int n){
	if(n==0){
		return 1;
	}
	else{
		return n * fatorial (n-1);
	}
}

int main (){
	int num=5;
	
	int fat = fatorial (num);
	
	printf("fatorial de %d eh %d", num,fat);
	return 0;
}


