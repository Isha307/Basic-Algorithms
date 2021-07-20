#include<stdio.h>

int main() {
	
	int n;
	
    printf("Enter the number of elements you want to sort : ");
	
    scanf("%d", &n);
	
    long long int ar[n];
	
    printf("Enter %d elements followed by spaces : ", n);
	
    for(int i = 0; i < n; i++)
	{
		scanf("%lld", &ar[i]);
	}
	
	long long int swap;  
    int i, j;
	int count = 0, sc = 0; 
	
    for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			sc++;
			if(ar[j] > ar[j + 1]) 
			{
				count++;
			  	swap = ar[j];
			  	ar[j] = ar[j + 1];
			  	ar[j + 1] = swap;
	         	}
	        } 	
	}
    
    printf("The sorted array is : \n");
	
	for(i = 0; i < n; i++)
        {
                printf("%lld ", ar[i]); 
        }

	printf("\nSwaps and comparisons : %d %d", count, sc);
	
	return 0;
}
