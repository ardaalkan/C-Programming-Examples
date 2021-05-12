#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int saat=0, dakika=0, saniye=0;
	
	while(1){
		
		printf("\r \t %2d : %2d : %2d", saat, dakika, saniye);
		
		saniye++;
		Sleep(1000);
		
		if(saniye==59){
			dakika++;
			saniye=0;
		} 
		if(dakika==59){
			saat++;
			dakika=0;
		}
		if(saat==24){
			saniye=0;
			dakika=0;
			saat=0;
		}
	}
}
