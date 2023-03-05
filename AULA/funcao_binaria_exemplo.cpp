#include <iostream>

using namespace std;

int binaria(int vetor[], int tamanho, int x){
	bool achou;  //var aux para busca
	int baixo, meio, alto;  //var aux
	
	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	while((baixo <= alto) && (achou == false)){
		meio = (baixo + alto) / 2;
		if (x < vetor[meio])
			alto = meio -1;
		else
			if (x > vetor [meio])
				baixo = meio + 1;
			else achou = true;
	}

	if (achou)  //caso encontrado 
		return meio;
	else  //caso n�o seja encontrado
		return -1; 
}

int main(){
	//declara��o de vari�veis
	int vetor[20];  //vetor que guarda os elementos
	int aux, i, j;  //var aux
	int tamanho;  //definir o tamnho do vetor
	int x;  //n� que ser� procurado
	
	//entrada de dados no vetor
	i = 0;
	cin >> aux;
	while(aux != (-1)){
		vetor[i] = aux;
		i++;
		cin >> aux;
	}
	tamanho = i;
	
	cin >> x  //entrada do valor procurado
	
	//chamada de fun��o auxiliar e defini��o se encontrou
	j = binaria(vetor, tamanho, x);	
	
	//saida de dados
	if(j == (-1))
		cout << "n�o encontrado" << endl;
	else 
		cout << "encontrado" << endl;
	return 0;
}