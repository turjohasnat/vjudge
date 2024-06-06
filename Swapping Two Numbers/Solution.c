//C Solution:
#include<stdio.h>

int main(){
    int tc = 1;
    while (1){
        int num1, num2, max, min;
        scanf("%d %d", &num1, &num2);
        if ( num1 > num2 ){
            max = num1;
            min = num2;
        }
        else {
            max = num2;
            min = num1;
        }
        if (num1 == 0 && num2 == 0){
            break;
        }
        printf("%d %d\n", min, max);
        tc++;
    }
    
    return 0;
}