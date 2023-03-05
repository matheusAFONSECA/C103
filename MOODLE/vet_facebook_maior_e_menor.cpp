#include <iostream>
using namespace std;

int main()
{
	//declaração de variáveis
	int N;  //quantidade de pessoas que terão o contato divulgado
	int vetor[1000];  //vetor que guardara a quantidade de contatos de cada pessoa
	int aux;  //var aux
	int i;  //contador
	int menor, maior;  //var de maior e menor contatos
	
	//entrada do número de pessoas e seus contatos
	do{
		cin >> N;
	}while(N<0 && N>1000);
	for(i = 0; i < N; i++){
		cin >> aux;
		if(aux > 0)
			vetor[i] = aux;
	}
	
	//análise dos contatos e saída de dados
	for(i = 0; i < N; i++){
		if(i==0){  //parâmetro inicial de maior e menor
			menor = vetor[i];
			maior = vetor[i];
		}
		else if(maior < vetor[i])  //condição para surgir novo maior
			maior = vetor[i];
		else if(menor > vetor[i])  //condição para surgir novo menor
			menor = vetor[i];
	}
	cout << "Menor numero de contatos: " << menor << endl;
	cout << "Maior numero de contatos: " << maior << endl;
	
	return 0;
}