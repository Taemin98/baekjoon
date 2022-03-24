#include <stdio.h>
#include <math.h>

void hanoi(int n, int start, int middle, int end) 
{
    if (n == 1){
        printf("%d %d\n", start, end);
        return;
    }
    hanoi(n - 1, start, end, middle);
    hanoi(1, start, middle, end);
    hanoi(n - 1, middle, start, end);
}

int main()
{
    int num;
    scanf("%d", &num);

    int count = pow(2, num) - 1;
    printf("%d\n", count);
    hanoi(num, 1, 2, 3);

    return 0;
 }