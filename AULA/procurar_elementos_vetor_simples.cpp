#include <iostream>

using namespace std;

int main(){
	
	//declaração de variáveis
	int vetor[10];  //vetor de dados
	int tam;  //n° de elementos do vetor
	int x;  //elemento a ser procurado
	int pos;  //posicao em que x foi encontrado no vetor
	int i;  //aux
	
	//lendo o tamanho do vetor
	cin >> tam;
	
	//lendo os elementos do vetor
	for(i=0; i<tam; i++){
		cin >> vetor[i];
	}
	
	//lendo x
	cin >> x;
	
	//procurando por x no vetor
	for(i=0; i<tam; i++){
		if(vetor[i]==x)
			pos = i;
	}
	
	//mostrando a posição de x no vetor
	cout << pos << endl;
	
	return 0;
}