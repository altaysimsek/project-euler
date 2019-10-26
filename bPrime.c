#include <stdio.h>

int prime(int sayi);

int main(){
    long long int bSayi = 600851475143 ;
	int b;
	for(b=1;b<=bSayi;b++){
		int c = prime(b);
		if(c==1){
			if(bSayi%b==0){
				printf("%d : ",b);
			}
			
		}
	}
}
int prime(int sayi ){
	int a;
	for(a=2;a<sayi;a++){
		if(sayi%a==0){
			return	0;
		}
	}
	return 1;
}
