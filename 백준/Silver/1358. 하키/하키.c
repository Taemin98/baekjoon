// 하키
#include<stdio.h>
#include<math.h>

typedef struct _coordinate{
    int x;
    int y;
} Coordinate; 

double getDis(int x1, int y1, int x2, int y2){
    int result;
    result = (pow((double)x1 - (double)x2, 2) + pow((double)y1 - (double)y2, 2)); 
    return result;
}

int main(){
    int W, H, X, Y, P;
    scanf("%d %d %d %d %d", &W, &H, &X, &Y, &P);
    Coordinate XY[P];
    int count = 0;
    for(int i = 0; i < P; i++){
        scanf("%d %d", &XY[i].x, &XY[i].y);
        if(XY[i].x >= X && XY[i].x <= X+W && XY[i].y >= Y && XY[i].y <= Y+H) count++;
        else if(XY[i].x < X && getDis(XY[i].x, XY[i].y, X, Y+H/2) <= pow(H/2, 2)) count++;
        else if(XY[i].x > X+W && getDis(XY[i].x, XY[i].y, X+W, Y+H/2) <= pow(H/2, 2)) count++;
    }
    printf("%d", count);
    return 0;
}