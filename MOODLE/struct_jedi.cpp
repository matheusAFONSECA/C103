#include <iostream>
#include <cstring>
using namespace std;

struct dados{  //struct que guarda os valores
	int base;  //base do padawan
	char nome[200];  //nome do jedi
};

int main(){
	//declaração de variáveis
	dados x[200];  //chamada de struct
	int N;  //quantidade de jedi
	int i;  //contador
	char procura[200];  //nome do jedi procurado
	int aux;  //var aux
	
	//entrada de dados e do jedi procurado
	cin >> N;
	for(i = 0; i < N; i++){
		cin.ignore();
		cin.getline(x[i].nome, 200);
		cin >> x[i].base;
	}
	cin.ignore();
	cin.getline(procura, 200);
	
	//análise de nome e saida por meio de uma função;
	aux = -1;  //condição desse jedi não ter sido cadastrado
	for(i = 0; i < N; i++)
	{
		if(strcmp(procura, x[i].nome) == 0)
			aux = x[i].base;
	}
	if(aux == -1)  //caso que o cavaleiro não foi cadastrado
		cout << "Este cavaleiro nao esta cadastrado" << endl;
	else  //caso que o caveleiro está cadastrado
		cout << "Este cavaleiro esta na base " << aux << endl;
	
	
	return 0;
}