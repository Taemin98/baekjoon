#include<stdio.h>

int main(){
    int A, B , C;
    scanf("%d %d %d", &A, &B, &C);

    if(A >= B && B >= C) printf("%d", B);
    else if (A >= C && C >= B) printf("%d", C);
    else if (B >= A && A >= C) printf("%d", A);
    else if (B >= C && C >= A) printf("%d", C);
    else if (C >= A && A >= B) printf("%d", A);
    else if (C >= B && B >= A) printf("%d", B);

    return 0;
}