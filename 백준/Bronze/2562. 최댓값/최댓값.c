#include <stdio.h>

int main() {
	int max = 0, i, num;
	int a[9];
	
	for( i = 0; i < 9; i++ ) {
		scanf("%d", &a[i]);
		
		if( max < a[i]) { 
			max = a[i];
			num = i + 1;
		}
	}
	printf("%d \n%d", max, num);
	
	return 0;
}