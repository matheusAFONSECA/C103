#include <iostream>
#include <list>
using namespace std;

/*
-> ITERADORES: podem ser istos como ponteiros para os elementos da lista, usados 
ent�o para varrer uma lista, mesmo principio de um contador que ajuda a varrer um
vetor
-> list.end() = aponta para um vazio que est� logo depois da lista, ou seja, � uma
posi��o vazia que est� "aberta" ao final da lista
-> caso queira utilizar o conte�do que est� sendo apontado pela varredura do interador
tem que usar o ponteiro porque � ele que vai apontar o valor do endere�amento
*/
int main()
{
	//declara��o de vari�veis
	list <int> lista;  //lista
	list <int>::iterator p;  //interador
	int x;  //var aux para leitura
	int soma;  //soma dos elemetos da lista
	
	//ledo elementos e inserindo na lista
	cin >> x;
	while(x != -1)  //condi��o de parada de entrada de elementos na lista
	{
		lista.push_back(x);
		cin >> x;
	}
	
	//contando elementos inseridos
	soma = 0;
	for(p = lista.begin(); p != lista.end(); p++)
		soma = soma + *p;
	
	//mostrando resultado
	cout << "soma = " << soma << endl;
	
	return 0;
}