#include<stdio.h>
#include<math.h>
#include<string.h>

main(void){

    int i, qtdCarro, hora[30];
    char *placa[30];  //declaração do array de strings
    float valorHora, total[30], total_geral=0;  //total_geral é o somatório de todas as horas
                                                //o vetor total armazena o total de cada veículo
    printf("Valor por hora: ");
    scanf(" %f", &valorHora);
    fflush(stdin);

    //leitura do número de carros - dentro dos limites do estacionamento
    do{
        printf("Numero de carros: ");
        scanf(" %d", &qtdCarro); printf("\n"); 
        if(qtdCarro > 30)
          printf("\nO Estacionamento so possui 30 vagas\n");
        fflush(stdin);
    }while(qtdCarro>30);

    for (i=0;i<qtdCarro; i++){
        printf("Placa do veiculo %d: ", i+1);
        // a leitura da string abaixo não necessita de &, pois o nome do array já é um ponteiro!
        // perceba que estou usando a "aritmética de endereços" pois facilita a legibilidade do código.
        // como o vetor foi declarado como *placa[30], facilita o acesso a cada elemento em cada 'linha' do array        
        scanf(" %s", placa + i);
        //printf("Placa do veiculo %d é %s\n", i+1, placa + i);  //debugando o código, basta descomentar o inicio da linha
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
      printf("\nValor total arrecadado no estacionamento é de: %f \n", total_geral);
}
1