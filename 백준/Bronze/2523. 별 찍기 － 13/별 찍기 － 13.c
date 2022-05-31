int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 0 ; i < 2*n-1; i++){
        if(i < n) {for(int j = 0; j <= i; j++) printf("*");}
        else {for(int j = 0; j < 2*n-1-i; j++) printf("*");}
        printf("\n");
    }
    return 0;
}