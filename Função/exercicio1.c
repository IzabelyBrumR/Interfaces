#include <stdio.h>
#include <conio.h>
#include <math.h>

int quadrado(int n){
    return n * n;
}

void piramide(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");
}

void piramide2(int n){

     for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
     }
}

void converteHoras(int hora, int minutos){

    int hora12;
    int minutos12 = minutos;

    if(hora > 12){
        hora12 = hora - 12;
    }
    else{
        hora12 = hora;
    }

    printf("\n%d:%d no sistema de 24 horas vira %d:%d no sistema de 12\n", hora, minutos, hora12, minutos12);
}

void inverso (int x){

    char xs[5];

    itoa(x, xs, 10);

    strrev(xs);
    puts(xs);

}



int main(){

     int x = 5, hora, minutos, num, xs;

     printf("\nQuadrado = %d\n", quadrado(x));

     printf("\nPiramide = \n");

     piramide(x);

     printf("Piramide 2 = \n");

     piramide2(x);

     printf("Entre com as horas:\n");
     scanf("%d", &hora);

     printf("Entre com os minutos:\n");
     scanf("%d", &minutos);

     converteHoras(hora, minutos);

     printf("\nEntre com um numero com mais de um digito:\n");
     scanf("%d", &num);

     inverso(num);

     return 0;
}
