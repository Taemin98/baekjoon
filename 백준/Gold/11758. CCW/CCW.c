#include<stdio.h>

typedef struct _point{
    int x;
    int y;
} Point;

int CCW(int x1, int y1, int x2, int y2, int x3, int y3){
    return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

int main(){
    Point P[3];
    for(int i = 0; i < 3; i++){
        scanf("%d %d", &P[i].x, &P[i].y);
    }
    if(CCW(P[0].x, P[0].y, P[1].x, P[1].y, P[2].x, P[2].y) > 0) printf("%d", 1);
    else if (CCW(P[0].x, P[0].y, P[1].x, P[1].y, P[2].x, P[2].y) < 0) printf("%d", -1);
    else printf("%d", 0);
    return 0;
}