#include <stdio.h>
int main(){
	
	int vaga1,vaga2,vaga3,vaga4,vaga5,vaga6,vaga7,vaga8,vaga9,vaga10, car, car1,car2,car3,car4,car5,valorPadrao,horario,entrada,saida,val1,total,seguro;
	car=0;
	vaga1=0 ,vaga2=0, vaga3=0,vaga4=0,vaga5=0,vaga6=0,vaga7=0,vaga8=0,vaga9=0,vaga10=0;
	valorPadrao = 6;
	
	printf("\n\n------------------------------------------------------------\n\n");
	printf(" ****       ESTACIONAMENTO SEMPRE DISPONIVEL   ****            ");
	printf("\n\n------------------------------------------------------------\n\n");
	printf("\n<--VAGAS DO ESTACIONAMENTO-->");
	
	
	printf("\n Escolha uma das opcoes abaixo de 1 - 10 : \n");
	printf("\n 1. vaga - 1");	
	printf("\n 2. vaga - 2");
	printf("\n 3. vaga - 3");
	printf("\n 4. vaga - 4");
	printf("\n 5. vaga - 5");
	printf("\n 6. vaga - 6");
	printf("\n 7. vaga - 7");
	printf("\n 8. vaga - 8");
	printf("\n 9. vaga - 9");
	printf("\n 10. vaga -10");
	
	
				printf("\n\n Deseja estacionar ? ");
	   	   	   	printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
	

	switch(car)
	{
		case 1:
			
				printf("\n Vaga selecionada : VAGA 1 \n");
				printf("\n Ver disponibilidade da vaga: " );
			
			if (vaga1 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga1);
			}
				printf("\n A vaga 1 esta ocupada pelo carro %d \n",vaga1);
				
			   	printf("\n\n --Entrada de outro veiculo-- \n");
			   	
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga1 != 0){
				
				printf("\n----------------------\n");
				printf("\n A vaga 1 esta ocupada!\n");
				printf("\n-----------------------\n");
			}
					
				printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
					
		case 2:
				printf("\n Vaga selecionada : VAGA 2 \n");
				printf("\n Ver disponibilidade da vaga: " );
			
			if (vaga2 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga2);
			}
				printf("\n A vaga 2 esta ocupada pelo carro %d \n",vaga2);
		
			   	printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga2 != 0){
				printf("\n----------------------\n");
				printf("\n\n A vaga 2 esta ocupada!\n");
				printf("\n----------------------\n");
			}
					
				printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);				
		
		case 3:
			
				printf("\n Vaga selecionada : VAGA 3 \n");
				printf("\n Ver disponibilidade da vaga: " );
			
		if (vaga3 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga3);
			}
				printf("\n A vaga 3 esta ocupada pelo carro %d \n",vaga3);
		
			   	printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga3 != 0){
				printf("\n----------------------\n");
				printf("\n\n A vaga 3 esta ocupada!\n");
				printf("\n----------------------\n");
			}
					
				printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);				

		
		case 4:
			
				printf("\n Vaga selecionada : VAGA 4 \n");
				printf("\n Ver disponibilidade da vaga: " );
			
			if (vaga4 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga4);
			}
				printf("\n A vaga 4 esta ocupada pelo carro %d \n",vaga4);
		
			   	printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga4 != 0){
				printf("\n----------------------\n");
				printf("\n\n A vaga 4 esta ocupada!\n");
				printf("\n----------------------\n");
			}
					
				printf("\n\n--Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);	
					
		case 5:
			
				printf("\n Vaga selecionada : VAGA 5 \n");
				printf("\n Ver disponibilidade da vaga: " );
			
			if (vaga5 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga5);
			}
				printf("\n A vaga 5 esta ocupada pelo carro %d \n",vaga5);
		
			   	printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga5 != 0){
				printf("\n----------------------\n");
				printf("\n\n A vaga 5 esta ocupada!\n");
				printf("\n----------------------\n");
			}
					
				printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);	
				
				break;
			
			case 6:
			
			   	printf("\n Vaga selecionada : VAGA 6 \n");
				printf("\n Ver disponibilidade da vaga: " );
			
			if (vaga6 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga6);
			}
				printf("\n A vaga 6 esta ocupada pelo carro %d \n",vaga6);
		
			   	printf("\n\n-- Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga6 != 0){
				printf("\n----------------------\n");
				printf("\n\n A vaga 6 esta ocupada !\n");
				printf("\n----------------------\n");
			}
					
				printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);	
				
				break;
			
			case 7:
			
			   	printf("\n Vaga selecionada : VAGA 7 \n");
			   	printf("\n Ver disponibilidade da vaga: " );
			
			if (vaga7 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga7);
			}
				printf("\n A vaga 7 esta ocupada pelo carro %d \n",vaga7);
		
			   	printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga7 != 0){
				printf("\n----------------------\n");
				printf("\n\n A vaga 7 esta ocupada!\n");
				printf("\n----------------------\n");
			}
					
				printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);	
				
				break;
			
			case 8:
			
				printf("\n Vaga selecionada : VAGA 8 \n");
			   	printf("\n Ver disponibilidade da vaga: " );
			
			if (vaga8 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga8);
			}
				printf("\n A vaga 8 esta ocupada pelo carro %d \n",vaga8);
		
			   	printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga8 != 0){
				printf("\n----------------------\n");
				printf("\n\n A vaga 8 esta ocupada!\n");
				printf("\n----------------------\n");
			}
					
				printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);	
				
				break;
			
			case 9:
				
				printf("\n Vaga selecionada : VAGA 9 \n");
			   	printf("\n Ver disponibilidade da vaga: " );
			
			if (vaga9 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga9);
			}
				printf("\n A vaga 9 esta ocupada pelo carro %d \n",vaga9);
		
			   	printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga9 != 0){
				printf("\n----------------------\n");
				printf("\n\n A vaga 9 esta ocupada!\n");
				printf("\n----------------------\n");
			}
					
				printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);	
				
				break;
			
			case 10:
			
			   	printf("\n Vaga selecionada : VAGA 10 \n");
				printf("\n Ver disponibilidade da vaga: " );
			
			if (vaga10 == 0){
				printf(" ESTA VAGA ESTA VAZIA! \n\n");
				printf("\n Por favor, digite os dois ultimos digitos da placa do veiculo 1-9 : ");
				scanf("%d",&vaga10);
			}
				printf("\n A vaga 10 esta ocupada pelo carro %d \n",vaga10);
				
			   	printf("\n\n --Entrada de outro veiculo --\n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);
			
			if (vaga10 != 0){
				printf("\n----------------------\n");
				printf("\n\n A vaga 10 esta ocupada!\n");
				printf("\n----------------------\n");
			}
					
				printf("\n\n --Entrada de outro veiculo-- \n");
				printf("\n\n Digite a vaga desejada: ");
				scanf("%d" , &car);	
				
				break;
		default:
			
				printf("\n voce digitou uma opcao invalida! \n");
				
				 break;  	
			

			
	}			
	//tempoDePermanência
		printf("\n\n==============================================================\n");	
		printf("\n Por favor,digite horario de entrada do veiculo : %d \n", vaga1);
		scanf("%d",&entrada);
  	   	printf("\n Digite o horario de saido do veiculo : %d \n" , vaga1);
		scanf("%d",&saida);
	
		horario=( saida-entrada);
	
		printf("\nO veiculo %d ficou : %d Horas", vaga1,horario);
	
	
	
	
	
	// valorPorHora 
	
		val1 = (horario * valorPadrao);
	
	   	printf("\nO valor a ser pago pelo veiculo %d eh  %d reais",vaga1, val1 );
	
	
	//totalArrecadado
		total = val1;
		printf("\n\n++===================================================++");
		printf("\n Valor total arrecadado hoje foi : %d  reais\n\n", total);
	
	
	//totalDaSeguro é 40% do valor total em hora
		printf("\n\n++===================================================++");

		seguro = total*0.4;
		printf("\n\n o seguro arrecadado hoje foi de : %d reais \n ", seguro);
	
	   	printf("\n\n++===================================================++");
	
	//vagas que mais arrecadou e menos 
		printf("\n\n vagas que mais arrecadou e a que menos arrecadou:  ");
	
		
	return 0;
	
}