#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho){  //função por ordenação tipo bolha
	/*
		Fução que faz a ordenação de dois em dois dos elementos do vetor
	*/
	int i, j;  //contadores
	int trab;
	bool troca;
	int limite;
	
	troca = true;
	limite = tamanho - 1;
	while(troca){
		troca = false;
		for(i = 0; i < limite; i++)
			if(vetor[i] > vetor[i+1]){
				trab = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = trab;
				j = i;
				troca = true;
			}
        limite = j;
	}
}

int main(){
	//declaração de variáveis
	int vetor[200];  //vetor que guarda os elementos
	int tamanho;  //tamanho do vetor
	int i;  //contador
	
	//entrada do tamanho e os elementos do vetor
	cin >> tamanho;
	for(i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	
	//ordenação do vetor e saida do mesmo ordenado
	bubbleSort(vetor, tamanho);
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
		
	return 0;
}