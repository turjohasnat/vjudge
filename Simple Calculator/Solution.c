//C Solution:
#include<stdio.h>

int main(){
    int tc = 1;
    while (1){
        int num1, num2, sum;
        char op;
        scanf("%d %c %d", &num1, &op, &num2);

        if ( op == '+' ){
            sum = num1 + num2;
        }
        else if ( op == '-' ){
            sum = num1 - num2;
        }
        else if ( op == '*' ){
            sum = num1 * num2;
        }
        else if ( op == '/' ){
            sum = num1 / num2;
        }
        else{
            break;
        }
        printf("%d\n",sum);
    }
    
    
    return 0;
}