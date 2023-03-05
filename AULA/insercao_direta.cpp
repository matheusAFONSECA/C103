#include <iostream>
using namespace std;

void insercaoDireta (int vetor[], int tamanho){  //fun��o de ordena��o direta
	int i, j;  //contadores
	/*  
	    i -> �ltimo elemento da parte ordenada
	    j -> 1� elemento da parte n�o ordenada
		Esse c�digo faz a ordena��o de elemento por elemento, de forma que:
		pimeiro ele deixa uma sequ�ncia do vetor ordenada e, s� depois dela 
		estar totalmente sequenciada que ele parte para o outro elemento do
		vetor, outra que � "deixada" para ser ordenada depois. 
	*/
	int chave;  //var aux para ordena��o
	
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
	insercaoDireta(vetor, tamanho);
	for(i = 0; i < tamanho; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
		
	return 0;
}