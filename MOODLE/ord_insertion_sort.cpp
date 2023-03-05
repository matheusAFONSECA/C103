#include <iostream>
using namespace std;

void insercaoDireta (int vetor[], int tamanho){  //fun��o de ordena��o direta
	int i, j;  //contadores
	int chave;  //var aux para ordena��o
	
	for(j = 1; j < tamanho; j++){
		chave = vetor[j];
		i = j - 1;
		while((i >= 0) && (vetor[i] < chave)){
			vetor[i+1] = vetor[i];
			i = i - 1;
		}
		vetor[i+1] = chave;
	}
	
	return;
}

int main(){
	//declara��o de vari�veis
	int aux;  //var aux
	int i;  //contador
	int vetor[200];  //guarda os elementos a serem ordenados
	int tamanho;  //tamanho do vetor 
	
	//entrada dos elementos do vetor e ordena��o de forma decrescente
	i = 0;
	cin >> aux;
	while(aux != 0){
		vetor[i] = aux;
		cin >> aux;
		i++;
	}
	tamanho = i;
	insercaoDireta(vetor, tamanho);
	
	//sa�da dos elementos de forma decrescente
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
	
	return 0;
}