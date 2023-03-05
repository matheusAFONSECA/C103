#include <iostream>
using namespace std;

void insercaoDireta (int vetor[], int tamanho){  //função de ordenação direta
	int i, j;  //contadores
	int chave;  //var aux para ordenação
	
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
	//declaração de variáveis
	int aux;  //var aux
	int i;  //contador
	int vetor[200];  //guarda os elementos a serem ordenados
	int tamanho;  //tamanho do vetor 
	
	//entrada dos elementos do vetor e ordenação de forma decrescente
	i = 0;
	cin >> aux;
	while(aux != 0){
		vetor[i] = aux;
		cin >> aux;
		i++;
	}
	tamanho = i;
	insercaoDireta(vetor, tamanho);
	
	//saída dos elementos de forma decrescente
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
	
	return 0;
}