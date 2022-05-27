#include <stdio.h>

void tabuada (int n){
    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", n, i, n * i);
    }
}

int main(){

    int n;
    printf("Voce quer a tabuada de qual numero? ");
    scanf("%d", &n);
    tabuada(n);

return 0;
}
