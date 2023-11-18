#include <stdio.h>

int main(){
    
    int x, y=0, resultado1=0, resultado2;

    for(int i=0; i<100; i++){
        scanf("%d", &x);

        if(x>resultado1){
            resultado1 = x;
            resultado2 = i+1;
        }
    }

    printf("%d\n", resultado1);
    printf("%d\n", resultado2);

    return 0;
}