#include <stdlib.h>
#define FILA 4
#define VAGAS 6
#define LIVRE 0
int estacionamento[VAGAS];
int fila [FILA];
//estaciona o carro numerado
//caso exista uma vaga livre.

int estaciona(int carro){
int i=0, estacionado=0;
printf("\nLocalizando vaga");
for(i=0;i<VAGAS;i++){
if(estacionamento==LIVRE){
estacionamento=carro;
printf("\nO carro foi estacionado na fila: %02d\n",i+1);
estacionado=1;
break;
}else if(estacionamento==7){
printf("\n\n!!!O estacionamento esta cheio.\n\n");
estacionado=0;
break;
}else{
printf(".");
}
}
return estacionado;

}
int fl (int carro)
int p=0, fL=0;
printf("\nLocalizando fila");
for (p=0;i<FILA;i++){
if(fil[p]==LIVRE){
fil[p]=carro
printf("\nO carro foi estacionado na vaga: %02d\n",p+1)
fila=1;
break;
}else{ if(fil[p]==5){
printf("\n\n!!!A fila esta cheia.\n\n")
fila=0;
break;
}else{
printf(".")
}
}
return fila;
}
//retira o carro do estacionamento
//liberando a vaga
int retirafila(int carro)
int retira(int carro){
int i=0, estacionado=0;
int p=0, fila=0;
printf("\nProcurando carro");
for(i=0;i<VAGAS;i++) && (p=0;i<FILA;i++){
if(estacionamento==carro) && (fil[p]==carro){
printf("\nVaga liberada...\n");
printf("\n Fila liberada...\n");
estacionamento=LIVRE;
fl[p]=LIVRE;
estacionado=1;
fila=1
break;
}else{
printf(".");
}
}

if(estacionado==0) && (fila==0){
printf("nao encontrado");
}

return estacionado;
return fila;
}
//tá com tempo livre!!!
//então organiza o estacionamento
int organiza(void){
int i=0, m=0, aux=0;
for(i=0;i<VAGAS;i++){
if(estacionamento==LIVRE){
for(m=(i+1);m<VAGAS;m++){
if(estacionamento[m]!=LIVRE){
estacionamento=estacionamento[m];
estacionamento[m]=LIVRE;
break;
}
}
}
}
return 0;
}

//verifica como está o estacionamento
int verifica(void){
int p=0
int i=0;
for(i=0;i<VAGAS;i++) && (p=0;p<FILA;p++){
if(estacionamento==LIVRE) && (fil[p]==LIVRE){
printf("\nVAGA[%02d]->Livre", i+1);
printf("\nFILA[%02d]->Livre", p+1);
}else{
printf("\nVAGA[%02d]->carro:[%02d]", i+1, estacionamento);
printf("\nFILA[%02d]->carro:[%02d]", p+1, fil[p]);
}
}
return 0;
}

int main(void){
int carro=0, opcao=0;

//loop principal
while(1){
//ação
printf("\n\n***** Menu *****\n");
printf("[1]para estacionar o carro.\n");
printf("[2]para retirar o carro.\n");
printf("[3]verificar o estado das vagas.\n");
printf("

para sair do programa.\n\n");


printf("Informe a opcao: ");
scanf("%d", &opcao);

//sai sem fazer nada
if(opcao==0){ break; }

//verica a ação a ser tomada
switch(opcao){
case 0:
return 0;
case 1:
printf("\nInforme o numero do carro a ser estacionado:");
scanf("%d",&placa);
estaciona(placa);
break;
case 2:
printf("\nInforme o numero do carro a ser retirado:");
scanf("%d",&carro);
retira(carro);
break;
case 3:
verifica();
break;

}
}
return 0;
}