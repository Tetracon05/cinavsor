// girilen kenar degerlerine gore bir ucgen varsa, bunun turunu ve alanini yazdiracak bir kod yaz.
//ogrenciye heron formulu, yari cevre formulu ve eskenar ucgenin alan formulu verilmelidir.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	float a,b,c,s,h,alan;
	
	printf("ucgenin kenar uzunluklarini girin. eger bir ikizkenar ucgenin degerlerini girecekseniz, ayni olan kenarlarin uzunluklarini a ve b degiskenlerine yazin. \n");
	
	printf("a: ");
	scanf("%f",&a);
	
	printf("b: ");
	scanf("%f",&b);
	
	printf("c: ");
	scanf("%f",&c);
	
	//ucgenin var olup olamayacagi kontrol edilir.
	if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a) {
		
		if (a==b && b==c) {
			printf("bu bir eskenar ucgendir.\n");
			
			alan = (sqrt(3)*a*a)/4;
			printf("alan: %f", alan);
			
		} else if (a==b || b==c || a==c) {
			printf("bu bir ikizkenar ucgendir.\n");
			
			//yukseklik hesaplanir
			h = sqrt(a*a - (c/2)*(c/2));
		
			alan = (c*h)/2;
			printf("alan: %f", alan);
			
		} else {
			printf("bu bir cesitkenar ucgendir.\n");
			
			//yari cevreyi hesaplanir
			s = (a+b+c)/2;
			
			//heron formulu ile ucgenin alani hesaplanir
			alan = sqrt(s * (s-a) * (s-b) * (s-c));
			printf("alan: %.2f\n", alan);
			
		}
		
	} else { 
		printf("girilen kenar uzunluklariyla bir ucgen olusturulamaz.\n");
	
	}
	
	
	
	return 0;
}