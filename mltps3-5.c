#include <stdio.h>
int main(){
	int toplam,i;
	for(i = 0; i<1000;i++){
		if(i%3==0 || i%5==0){
			toplam += i;
		}
	}
	printf("%d",toplam);
}
