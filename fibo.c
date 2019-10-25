#include <stdio.h>

int fibo();

int main(){
	fibo();
}
int fibo(){
	int first = 0,second=1;
	int last=0;
	int toplam = 0;
	printf("Basliyor : %d\n",last);
	while (last<=4000000){
		
		last= first + second;
		first=second;
		second=last;
		printf("%d,\n",last);
		
		if(last%2==0){
			toplam+=last;
			printf("CIFT:%d\n",last);
		}
	}
	printf("\nCevap : %d",toplam);
}
