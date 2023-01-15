//고급수학(7510)
#include<stdio.h>
#include<string.h>

int main() {
   int n;
   scanf("%d\n", &n);
   int a, b, c;

   for (int i = 0; i < n; i++) {
      scanf("%d %d %d", &a, &b, &c);
      printf("Scenario #%d:\n", i+1);
      if (a > b && a > c) {
         if (a*a == b*b + c*c) printf("yes\n\n");
         else printf("no\n\n");
      }
      else if (b > a && b > c) {
         if (b*b == a*a + c*c) printf("yes\n\n");
         else printf("no\n\n");
      }
      else if (c > b && c > a) {
         if (c*c == b*b + a*a) printf("yes\n\n");
         else printf("no\n\n");
      }
   }
   return 0;
}