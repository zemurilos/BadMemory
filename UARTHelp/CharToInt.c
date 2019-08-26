#include <stdio.h>
#include <stdlib.h>

char str[2] = "";
int valorPWM = 5000;

void trataUART(char comando[2]);


int main()
{
    printf("Hello world!\n");
    scanf("%s", &str);

    trataUART(str);

    printf("Valor recebido:\n");
    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    return 0;
}


void trataUART(char comando[2]){

    switch(comando[0]){
        case 'E':
            if(comando[1] == '1')
                printf("Comando para Ligar o LED!\n");
            else
                printf("Comando para desligar o LED!\n");
        break;
        case '#':
            valorPWM = (comando[1] - '0')*100;
            printf("Valor %d\n", valorPWM);
        break;
        case '#':
            valorPWM = (comando[1] - '0')*100;
            printf("Valor %d\n", valorPWM);
        break;
        default:
            printf("Comando invalido\n");
        break;
    }
}
