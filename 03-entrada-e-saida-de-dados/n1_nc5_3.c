#include <stdio.h>

int main() {
    int idade;
    float altura;
    char opcao;
    //sintaxe scanf
    //scanf("formato1" "formato2", &variavel1, &variavel2, ...);
    printf("Entre com sua idade\n");
    scanf("%d", &idade);
    printf("Idade: %d\n", idade);
    printf("Entre com a altura\n");
    scanf("%f", &altura);
    printf("Entre com a opcao");
    scanf(" %c", &opcao);
    printf("%c", &opcao);

}