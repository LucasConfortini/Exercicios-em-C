#include <stdio.h>

//Prototipos
void somarRef(float, float, float *);
float dividirRef(float, float, int *);
float somar(float, float);
float subtrair(float, float);
float multiplicar(float, float);
float dividir(float, float);
void pularLinha(int);

//funcao principal.
int main(){
    float n1, n2;
    printf("Digite um valor:");
    scanf("%f", &n1);
    printf("Digite outro valor:");
    scanf("%f", &n2);

    pularLinha(2);

    printf("A soma eh: %.2f\n", somar(n1,n2));
    printf("A subtracao eh: %.2f\n", subtrair(n1, n2));
    printf("A multiplicacao eh: %.2f\n", multiplicar(n1, n2));
    printf("A divisao eh: %f\n", dividir(n1, n2));

    pularLinha(2);

    float soma;
    somarRef(n1,n2,&soma);
    printf("A soma por referencia eh: %.2f\n", soma);

    float divisao;
    int erro;
    divisao = dividirRef(n1,n2,&erro);
    printf("A divisao por referencia eh: ");
    if (erro == 0){
        printf("%.2f\n", divisao);
    }else{
        printf("Impossivel dividir por 0!");
    }

    pularLinha(2);

    return  (0);
}

//funcao somarRef.
void somarRef(float x, float y, float *z){ //passagem de parametros por Valor (x,y) e Referencia (*z).
    *z = x + y;
}

//funcao somar.
float somar(float x, float y){ //passagem de parametros por Valor.
    return x + y;
}

//funcao subtrair.
float subtrair(float x, float y){ //passagem de parametros por Valor.
    return x - y;
}

//funcao multiplicar.
float multiplicar(float x, float y){ //passagem de parametros por Valor.
    return x * y;
}

//funcao dividir.
float dividir(float x, float y){ //passagem de parametros por Valor.
    return x / y; //Como retornar um erro se a divisão não for possível? Observe a funcao dividirRef logo abaixo.
}

//funcao dividirRef.
//Atualiza o parametro por referencia erro e retorna o valor da divisao.
float dividirRef(float x, float y, int *erro){ //passagem de parametros por Valor (x,y) e Referencia (*erro).
    if (y != 0){
        *erro = 0;
    }else{
        *erro = 1;
    }
    return x / y;
}

//funcoa pularLinha
void pularLinha(int numero){ // passagem de parametro por Valor (numero).
    int i;
    for (i = 0; i < numero; i++){
        printf("\n");
    }
}
