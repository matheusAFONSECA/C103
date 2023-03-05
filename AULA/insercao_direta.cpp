#include <iostream>
using namespace std;

void insercaoDireta (int vetor[], int tamanho){  //função de ordenação direta
	int i, j;  //contadores
	/*  
	    i -> último elemento da parte ordenada
	    j -> 1° elemento da parte não ordenada
		Esse código faz a ordenação de elemento por elemento, de forma que:
		pimeiro ele deixa uma sequência do vetor ordenada e, só depois dela 
		estar totalmente sequenciada que ele parte para o outro elemento do
		vetor, outra que é "deixada" para ser ordenada depois. 
	*/
	int chave;  //var aux para ordenação
	
	for(j = 1; j < tamanho; j++){
		chave = vetor[j];
		i = j - 1;
		while((i >= 0) && (vetor[i] > chave)){
			vetor[i+1] = vetor[i];
			i = i - 1;
		}
		vetor[i+1] = chave;
	}
	
	return;
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
	insercaoDireta(vetor, tamanho);
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
		
	return 0;
}