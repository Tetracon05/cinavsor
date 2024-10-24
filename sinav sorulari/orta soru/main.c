//kullanicidan alinan sayinin asal olup olmadigini tespit eden bir kod yaz.

#include <stdio.h>
#include <stdlib.h>

int main() {

	int sayi;
	
	printf("asal olup olmadigini ogrenmek istediginiz sayiyi girin: ");
	scanf("%d",&sayi);
	
	if (sayi == 2) {
		
		printf("sayi asal");
		exit(0);
		
	} else if (sayi < 2 || sayi % 2 == 0) {
		
		printf("sayi asal degil");
		
	} else {
		
		printf("sayi asal");
		
		}
	
		return 0;
}