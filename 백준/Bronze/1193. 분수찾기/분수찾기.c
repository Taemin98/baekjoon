#include <stdio.h>

int number,d,t; 

int main(){
  scanf("%d", &number);  

  for(;d*(d+1)/2 < number;d++){ 
  }

  t = number - d*(d-1)/2;  

  if ( d % 2 == 0 ){  
    printf("%d/%d", t, d-t+1);
  }

  else   
  printf("%d/%d",d-t+1,t);

	return 0; 
}