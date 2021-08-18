#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int valor,qmul=0;


    while(valor != -1){
        printf("Informe um valor.\n");
        scanf("%d", &valor);
        if (valor % 3 == 0){
            qmul++;
        }
    }
    printf("São %d os multiplos de 3.\n", qmul);
}
