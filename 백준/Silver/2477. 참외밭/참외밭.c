#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct coordinate{
    int x[7];
    int y[7];
} Coordinate;

typedef struct _go{
    int dir;
    int len;
} Go;
 
 int main(){
    Coordinate xy;
    xy.x[0] = 0;
    xy.y[0] = 0;
    Go taemin[6];
    int xmax = -500, xmin = 500; 
    int ymax = -500, ymin = 500;
    int melon;
    scanf("%d", &melon);
    int num1 = 0;
    int num2 = 0;
    int temp;
    int result = 0;

    for(int i = 1; i <= 6; i++){
        scanf("%d %d", &taemin[i-1].dir, &taemin[i-1].len);
        if(taemin[i-1].dir == 1){
            xy.x[i] = xy.x[i-1] + taemin[i-1].len;
            xy.y[i] = xy.y[i-1];
            if(xy.x[i] >= xmax) xmax = xy.x[i];
        }
        else if(taemin[i-1].dir == 2){
            xy.x[i] = xy.x[i-1] - taemin[i-1].len;
            xy.y[i] = xy.y[i-1];
            if(xy.x[i] <= xmin) xmin = xy.x[i];
        }
        else if(taemin[i-1].dir == 3) {
            xy.y[i] = xy.y[i-1] - taemin[i-1].len;
            xy.x[i] = xy.x[i-1];
            if(xy.y[i] <= ymin) ymin = xy.y[i];
        }
        else {
            xy.y[i] = xy.y[i-1] + taemin[i-1].len;
            xy.x[i] = xy.x[i-1];
            if(xy.y[i] >= ymax) ymax = xy.y[i];
        }
    }
    for(int i = 0; i < 6; i++){
        if(i == 0){
            temp  = taemin[5].dir;
            if(temp == taemin[i+1].dir){
                if(num1 == 0) num1 = taemin[i].len;
                else num2 = taemin[i].len;
            } 
        }
        else if(i == 5){
            temp = taemin[0].dir;
            if(temp == taemin[i-1].dir){
                if(num1 == 0) num1 = taemin[i].len;
                else num2 = taemin[i].len;
            }
        }
        else{
            if(taemin[i-1].dir == taemin[i+1].dir){
                if(num1 == 0) num1 = taemin[i].len;
                else num2 = taemin[i].len;  
            }
        }
    }
    result = (abs(xmax - xmin) * abs(ymax - ymin) - (num1 * num2)) * melon;
    printf("%d", result);
    return 0;
 }