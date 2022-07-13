#include<stdio.h>
#include<math.h>

typedef struct _coordinate{
    int x;
    int y;
} Coordinate;

typedef struct _planet{
    int x;
    int y;
    int r;
} Planet;

double getDis(int x1, int y1, int x2, int y2){
    int result;
    result = (pow((double)x1 - (double)x2, 2) + pow((double)y1 - (double)y2, 2)); 
    return result;
}

int main(){
    int T;
    scanf("%d", &T);
    Coordinate start, end;
    int n;
    Planet planet;
    int count = 0;
    
    for(int i = 0; i < T; i++){
        scanf("%d %d %d %d", &start.x, &start.y, &end.x, &end.y);
        scanf("%d", &n);
        count = 0;
        for(int j = 0; j < n; j++){
            scanf("%d %d %d", &planet.x, &planet.y, &planet.r);
            if(getDis(start.x, start.y, planet.x, planet.y) < pow(planet.r, 2) && 
            getDis(end.x, end.y, planet.x, planet.y) > pow(planet.r, 2)) count++;

            if(getDis(start.x, start.y, planet.x, planet.y) > pow(planet.r, 2) && 
            getDis(end.x, end.y, planet.x, planet.y) < pow(planet.r, 2)) count++;   
        }
        printf("%d\n", count);
    }
    return 0;
}