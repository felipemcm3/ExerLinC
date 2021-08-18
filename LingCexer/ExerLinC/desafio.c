#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int matriz[5][5], li, co, maior=0, menor, li2, co2;

    for(li=0; li<5; li++){
        for(co=0; co<5; co++){
            printf("Informe o valor na posição [%d] [%d] da matriz.\t", li, co);
            scanf("%d", &matriz[li][co]);
        }
    }
    printf("\n\nSua matriz ficou assim:\n\n");
    for(li=0; li<5; li++){
        for(co=0; co<5; co++){
            printf("%d\t",matriz[li][co]);

        }
    printf("\n");
    }

    for(li=0; li<5; li++){
        for(co=0; co<5; co++){
            if(maior==0 || matriz[li][co]>maior){
                maior=matriz[li][co];
                menor=maior;
                li2=li;
            }
        }
    }
    li=li2;
    for(co=0; co<5; co++){
            if(menor>matriz[li][co]){
                menor=matriz[li][co];
                co2=co;
            }
    }
    printf("\n\nO minimax é: %d sua linha é %d e coluna %d sendo o maior da matriz %d.",menor, li, co2, maior);

}
