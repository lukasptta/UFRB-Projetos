#include<stdio.h>
#include<math.h>
#include<string.h>

main(void){

    int i, qtdCarro, hora[30];
    char *placa[30];  //declara��o do array de strings
    float valorHora, total[30], total_geral=0;  //total_geral � o somat�rio de todas as horas
                                                //o vetor total armazena o total de cada ve�culo
    printf("Valor por hora: ");
    scanf(" %f", &valorHora);
    fflush(stdin);

    //leitura do n�mero de carros - dentro dos limites do estacionamento
    do{
        printf("Numero de carros: ");
        scanf(" %d", &qtdCarro); printf("\n"); 
        if(qtdCarro > 30)
          printf("\nO Estacionamento so possui 30 vagas\n");
        fflush(stdin);
    }while(qtdCarro>30);

    for (i=0;i<qtdCarro; i++){
        printf("Placa do veiculo %d: ", i+1);
        // a leitura da string abaixo n�o necessita de &, pois o nome do array j� � um ponteiro!
        // perceba que estou usando a "aritm�tica de endere�os" pois facilita a legibilidade do c�digo.
        // como o vetor foi declarado como *placa[30], facilita o acesso a cada elemento em cada 'linha' do array        
        scanf(" %s", placa + i);
        //printf("Placa do veiculo %d � %s\n", i+1, placa + i);  //debugando o c�digo, basta descomentar o inicio da linha
        fflush(stdin);
        printf("Horas do veiculo %d: ", i+1);
        scanf("%d", &hora[i]);
        fflush(stdin);  printf("\n");      
    }   

    for(i=0;i<qtdCarro;i++){
      total[i]=hora[i]*valorHora;
      printf("Veiculo da placa %s ficou %d horas e gastou %f reais \n", placa+i, hora[i], total[i]);
      total_geral+=total[i]; 
    }
      printf("\nValor total arrecadado no estacionamento � de: %f \n", total_geral);
}
1