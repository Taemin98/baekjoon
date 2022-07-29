// 선분 교차
#include<stdio.h>

typedef struct _point{
    long long int x;
    long long int y;
} Point;

long long int CCW(Point A, Point B, Point C){
    long long temp = (A.x * B.y + B.x * C.y + C.x * A.y) - (B.x * A.y + C.x * B.y + A.x * C.y);
    if(temp > 0) return 1;
    else if(temp == 0) return 0;
    else if(temp < 0) return -1;
}

int main(){
    Point A, B, C, D;
    long long int ABC, ABD, CDA, CDB;
    scanf("%lld %lld %lld %lld", &A.x, &A.y, &B.x, &B.y);
    scanf("%lld %lld %lld %lld", &C.x, &C.y, &D.x, &D.y);

    ABC = CCW(A, B, C);
    ABD = CCW(A, B, D);
    CDA = CCW(C, D, A);
    CDB = CCW(C, D, B);

    if((ABC * ABD) <= 0 && (CDA * CDB) <= 0) printf("%d\n", 1);
    else printf("%d\n", 0);

    return 0;
}