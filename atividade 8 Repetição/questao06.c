#include <stdio.h>

int main(){
    
    char continuar;

    do{
        int mes, ano;

        printf("Ditie o mes (1-12):\n");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12)
        {
            printf("Mes invalido. Digite um numero entre 1 e 12.\n");
        }
        
        printf("Digite o ano: \n");
        scanf("%d", &ano);


        int diasNoMes;

        switch (mes)
        {
        case 2:
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        {
            diasNoMes = 29;
        }else{
            diasNoMes = 28;
        }
        break;
        case 11:
        diasNoMes = 30;
        break;
        default:
        diasNoMes = 31;
        break; 
        }

        printf("O mes %d / %d tem %d dias.\n", mes, ano, diasNoMes);

        printf("Deseja entrar denovo? (S/s) ");
        scanf("%c", &continuar);
    }while (continuar == 'S' || continuar == 's');
    
    return 0;
    
}