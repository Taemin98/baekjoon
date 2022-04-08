#include <stdio.h>
 
int arr[1001];
int main(){
    int N;
    int i;
    arr[0]=arr[1]=1;
    scanf("%d",&N);

    for (i = 2; i <= N; i++) arr[i]=(arr[i-1] + arr[i-2]) % 10007;

    printf("%d",arr[N]);

    return 0;
}