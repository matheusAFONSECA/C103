#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho){  //fun��o por ordena��o tipo bolha
	/*
		Fu��o que faz a ordena��o de dois em dois dos elementos do vetor
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
	//declara��o de vari�veis
	int vetor[200];  //vetor que guarda os elementos
	int tamanho;  //tamanho do vetor
	int i;  //contador
	
	//entrada do tamanho e os elementos do vetor
	cin >> tamanho;
	for(i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	
	//ordena��o do vetor e saida do mesmo ordenado
	bubbleSort(vetor, tamanho);
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
		
	return 0;
}