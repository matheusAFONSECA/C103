#include <iostream>

using namespace std;

int main(){
	
	//declaração de variáveis
	int vetor[20];  //vetor de dados
	int x;  //elemento a ser procurado
	int pos = (-1);  //posicao em que x foi encontrado no vetor
	int i = 0, j;  //aux
	
	//lendo os elementos do vetor exceto -1
	cin >> vetor[i];
	while(vetor[i]!=(-1)){
		i++;
		cin >> vetor[i];
		j=i;
	}
	
	//lendo x
	cin >> x;
	
	//procurando por x no vetor
	for(i=0; i<j; i++){
		if(vetor[i]==x)
			pos = i++;
	}
	
	//mostrando a posição de x no vetor
	if(pos != -1){
		cout << x<< " encontrado na posicao " << pos << endl;
	}
	else{
		cout << x << " nao encontrado" << endl;
	}
	
	return 0;
}