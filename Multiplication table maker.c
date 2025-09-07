#include<stdio.h>
int main(){
    printf("Welcome to the multiplication table maker\n");
    int n;
    printf("enter the number whose table is to be made: ");
    scanf ("%d", &n);
    int limit;
    printf("enter the number upto which the table needs to be made: ");
    scanf("%d", &limit);
    int i = 1;
    for (i<=n; i*n; i++){
        printf("%d x %d = %d\n", n, i, n*i);
        if (i>=limit){
            break;
        }
    }
    printf("\nThank You for using the multiplication table maker\nMade by Shantanu");
    return 0;
}