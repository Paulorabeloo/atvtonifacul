#include <stdio.h>
int main(){
    int habitantes=0;
    float n =0;
    int filhos =0;
    float media=0;
    float mediaFilhos=0;
    float salario=0;
    float mediaSalario=0;
    float maiorSalario=0;
    float porcentagemSalario=0;
    printf("Qual a quantidade de habitantes?\n");
    scanf("%i", &habitantes);
    n = habitantes;
    while(habitantes>0){
        printf("Qual seu salario?\n");
        scanf("%f", &salario);
        mediaSalario = mediaSalario + salario;
        printf("Qual a quantidades de filhos?\n");
        scanf("%i", &filhos);
        mediaFilhos = mediaFilhos + filhos;
        if(salario > 1200){
            porcentagemSalario++;
        }
        if(salario > maiorSalario){
            maiorSalario = salario;
        }
        habitantes--;
    }
    mediaFilhos = (mediaFilhos/n);
    mediaSalario = (mediaSalario/n);
    porcentagemSalario = ((porcentagemSalario/n)*100);
    printf("Numero de habitantes: %.1f\n", n);
    printf("Media de salario: %.2f\n", mediaSalario);
    printf("Media de filhos: %.2f\n", mediaFilhos);
    printf("Maior salario: %.2f\n", maiorSalario);
    printf("Porcentagem salario > 1200 : %.2f%%", porcentagemSalario);
return 0;
}
