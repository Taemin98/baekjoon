#include<stdio.h>
#include<math.h>

double distance(int a1, int b1, int a2, int b2){
    double x_sqr = pow((double)a1 - (double)a2, 2);
    double y_sqr = pow((double)b1 - (double)b2, 2);
    return sqrt(x_sqr + y_sqr);
}

int main(){
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int r1, r2;
    int c;
    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        scanf("%d %d %d", &x1, &y1, &r1);
        scanf("%d %d %d", &x2, &y2, &r2);
        if(x1 == x2 && y1 == y2 && r1 == r2) printf("%d\n", -1);
        else if(x1 == x2 && y1 == y2 && r1 != r2) printf("%d\n", 0);
        else if(distance(x1, y1, x2, y2) == abs(r1 - r2)) printf("%d\n", 1);
        else if(distance(x1, y1, x2, y2) == (r1 + r2)) printf("%d\n", 1);
        else if(distance(x1, y1, x2, y2) < (r1 + r2) && distance(x1, y1, x2, y2) > abs(r1 - r2)) printf("%d\n", 2);
        else printf("%d\n", 0);
    }

    return 0;
}