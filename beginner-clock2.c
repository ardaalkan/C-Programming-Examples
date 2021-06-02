#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int second,minute,hour;
	printf("SET TIME: [3*HOUR:2*MINUTE:1*SECOND]\n");
	scanf("%d%d%d", &second, &minute, &hour);
	if (hour>24 || minute>60 || second>60){
		printf("error!");
		exit(0);
	}	
	
	while(1){
		second++;
		if(second>59){
			minute++;
			second=0;
		}
		if(minute>59){
			hour++;
			minute=0;
		}
		if(hour>24){
			hour=0;
		}
	
		printf("\n Clock: ");
		printf("\n %02d:%02d:%02d",hour,minute,second);
		Sleep(1000);
		system("cls");
	}
	return 0;
}
