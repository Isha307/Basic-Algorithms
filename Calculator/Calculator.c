#include <stdio.h>
#include <stdlib.h>

int add(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int y) {
	if( y != 0) {
		return x / y;
	}
}

int main() {
	printf("Calculator : \n");
	while(1) {

		printf("Enter 1 for addition.\n");
		printf("Enter 2 for subtraction.\n");
		printf("Enter 3 for multiplication.\n");
		printf("Enter 4 for division.\n");
		printf("Enter 5 to exit.\n");

		int choice;

		printf("\nEnter you choice: ");

		scanf("%d", &choice);

		int count;

		if(choice == 1) {
			
			printf("You have opted for addition.\n");
			printf("Enter the number of numbers you want to add: ");
			
			scanf("%d", &count);
			
			if(count <= 0) {
				printf("Enter a valid count.\n");
				exit(0);
			}
			
			printf("Enter %d numbers followed by spaces : ", count);
			
			int result = 0;
			int temp[count];
			
			for(int i = 0; i < count; i++) {
				scanf("%d", &temp[i]);
			}

			for(int i = 0; i < count; i++) {
				result = add(temp[i], result);
			}

			printf("\nThe sum of numbers you entered is %d.\n\n", result);
			printf("If you would like to perform anything else.\n\n");

			result = 0;

			for(int i = 0; i < count; i++) {
				temp[i] = 0;
			}

			count = 0;
		}

		else if(choice == 2) {
			
			printf("You have opted for subtraction.\n");
			printf("Enter the number of numbers you want to subtract: ");
			
			scanf("%d", &count);
			
			if(count <= 0) {
				printf("Enter a valid count.\n");
				exit(0);
			}
			
			printf("Enter %d numbers followed by spaces : ", count);
			
			int result = 0;
			int temp[count];
			
			for(int i = 0; i < count; i++) {
				scanf("%d", &temp[i]);
			}

			result = temp[0];
			
			for(int i = 1; i < count; i++) {
				result = subtract(result, temp[i]);
			}
			
			printf("\nThe difference of numbers you entered is %d.\n\n", result);
			printf("If you would like to perform anything else.\n\n");

			result = 0;

			for(int i = 0; i < count; i++) {
				temp[i] = 0;
			}

			count = 0;
		}

		else if(choice == 3) {
			
			printf("You have opted for multiplication.\n");
			printf("Enter the number of numbers you want to multiply: ");

			scanf("%d", &count);

			if(count <= 0) {
				printf("Enter a valid count.\n");
				exit(0);
			}

			printf("Enter %d numbers followed by spaces : ", count);

			int result = 1;
			int temp[count];

			for(int i = 0; i < count; i++) {
				scanf("%d", &temp[i]);
			}

			for(int i = 0; i < count; i++) {
				result = multiply(result, temp[i]);
			}

			printf("\nThe multiplication of numbers you entered is %d.\n\n", result);
			printf("If you would like to perform anything else.\n\n");

			result = 1;
			
			for(int i = 0; i < count; i++) {
				temp[i] = 0;
			}

			count = 0;
		}

		else if(choice == 4) {

			printf("You have opted for division.\n");
			printf("Enter the number of numbers you want to divide: ");

			scanf("%d", &count);

			if(count <= 0) {
				printf("Enter a valid count.\n");
				exit(0);
			}

			printf("Enter %d numbers followed by spaces : ", count);

			int result = 1;
			int temp[count];

			for(int i = 0; i < count; i++) {
				scanf("%d", &temp[i]);
			}

			result = temp[0];

			for(int i = 1; i < count; i++) {
				
				if(temp[i] == 0) {
					printf("\nZero division error.\n");
					exit(0);
				}

				result = divide(result, temp[i]);
			}

			printf("\nThe division of numbers you entered is %d.\n\n", result);
			printf("If you would like to perform anything else.\n\n");

			result = 1;

			for(int i = 0; i < count; i++) {
				temp[i] = 0;
			}

			count = 0;
		}

		else if(choice == 5) {
			printf("Thanks for using the calculator.\n");
			exit(0);
		}

		else {
			printf("\nPlease enter a valid option.\n\n");
		}
	}
	return 0;
}
