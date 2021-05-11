#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int first, second, equal;
	int flag = 1;
	char op;


	while(flag){
		printf("-------------------------------------\n");
		printf("----------Simple-Calculator----------\n");
		printf("-------------------------------------\n");
		printf(" + = ADDITION\n");
		printf(" - = SUBSTRACTION\n");
		printf(" * = MULTIPLICATION\n");
		printf(" / = DIVISION\n");
		printf(" m = MOD\n");
		printf(" C = EXIT\n");
		printf(" OPERATOR: ");
		scanf("%c" ,&op);
		
		
		if (op == '+'){
			printf("First: \n");
			scanf("%d", &first);
			printf("Second: \n");
			scanf("%d", &second);
			equal = first + second;
			printf("%d %c %d = %d\n", first, op, second, equal);
		}
		
		else if (op == '-'){
			
			printf("First: \n");
			scanf("%d", &first);
			printf("Second: \n");
			scanf("%d", &second);
			equal = first - second;
			printf("%d %c %d = %d\n", first, op, second, equal);
		}
		
		else if (op == '*'){
			
			printf("First: \n");
			scanf("%d", &first);
			printf("Second: \n");
			scanf("%d", &second);
			equal = first * second;
			printf("%d %c %d = %d\n", first, op, second, equal);
	}
	
	else if (op == '/'){
			
			printf("First: \n");
			scanf("%d", &first);
			printf("Second: \n");
			scanf("%d", &second);
			equal = (float)first / (float)first;
			printf("%d %c %d = %d\n", first, op, second, equal);
}
	
	else if (op == 'm'){
			
			printf("First: \n");
			scanf("%d", &first);
			printf("Second: \n");
			scanf("%d", &second);
			equal = first %second;
			printf("%d %c %d = %d\n", first, op, second, equal);
}

	else if (op == 'c' || op == 'C'){
		flag = 0;
	}
	
	else{
		printf("undefined!\n");
	} 
	
	return 0;
	
	}
}




