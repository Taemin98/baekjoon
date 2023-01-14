//가희와 방어율 무시(25238)
#include<stdio.h>

int main() {
   int a, b;
   scanf("%d %d", &a, &b);
   double result;

   result = a * ((100 - (double)b) / 100);

   if (result >= 100) printf("%d", 0);
   else printf("%d", 1);

   return 0;
}