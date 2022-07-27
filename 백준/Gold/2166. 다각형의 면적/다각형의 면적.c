#include<stdio.h>
#include<math.h>

double CCW(double x1, double y1, double x2, double y2, double x3, double y3){
    return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

int main(){
    int N;
    double x[10000] = {0,};
    double y[10000] = {0,};
    scanf("%d", &N);
    double result;

    for(int i = 0; i < N; i++){
        scanf("%lf %lf", &x[i], &y[i]);
    }

    for(int i = 0; i < N - 1; i++){
        result += CCW(x[0], y[0], x[i], y[i], x[i+1], y[i+1]);
    }

    printf("%.1f", fabs(result) / 2.0);

    return 0;
}