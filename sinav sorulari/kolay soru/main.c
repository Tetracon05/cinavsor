//2 yazili 1 performans ve 1 sozlu notunu kullanarak donem ortalaması hesaplayan bir kod yazınız.

#include <stdio.h>
#include <stdlib.h>


int main() {
		
		int ilkYazili, ikinciYazili, performans, sozlu;
		double ortalama;
		
		printf("ilk yazili notunu giriniz: ");
		scanf("%d",&ilkYazili);
	
		printf("ikinci yazili notunu giriniz: ");
		scanf("%d",&ikinciYazili);
	
		printf("performans notunu giriniz: ");
		scanf("%d",&performans);
		
		printf("sozlu notunu giriniz: ");
		scanf("%d",&sozlu);
		
		ortalama = (ilkYazili+ikinciYazili+performans+sozlu)/4;
		
		printf(" \ndonem sonu ortalamasi: %2.lf\n",ortalama);
		if (ortalama < 50) {
			
			printf("ogrenci dersten kalmistir.");
			
		} else {
			
			printf("ogrenci dersi gecmistir.");
			
		}
				
	return 0;
}