#include <iostream>

using namespace std;

int binaria(int vetor[], int tamanho, int x){  //fun�ao bin�ria de procura 
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
			else 
				achou = true;  //caso em que foi encontrado
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
	
	//entrada de IDs
	i = 0;
	cin >> aux;
	while(aux != (-1)){
		vetor[i] = aux;
		i++;
		cin >> aux;
	}
	tamanho = i;
	
	cin >> x;  //entrada da ID
	
	//chamada de fun��o auxiliar binaria de procura
	j = binaria(vetor, tamanho, x);	
	
	//saida de dados
	if(j == (-1))
		cout << "Nao possui acesso" << endl;
	else 
		cout << "Possui acesso" << endl;
	return 0;
}