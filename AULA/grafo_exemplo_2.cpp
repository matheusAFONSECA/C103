#include <iostream>
#include <list>
using namespace std;

/*
-> Deixo salientado aqui que a forma como esse exemplo � demonstrado � a inser��o
dos elementos de forma manual, ou seja, n�o existe nenhuma entrada de dados aqui,
somente sa�da e demonstra��o de como funciona a forma��o de uma adjac�ncia de um
grafo por meio de um c�digo
-> esse grafo montado � ORIENTADO
*/

struct no
{
	int v;  //informa��o de adjac�ncia (destino)
	int peso;  //peso da aresta
};

int main()
{
	//declara��o de vari�veis
	list <no> adj[10];  //lista de adjac�ncia
	int u, v;  //vertices de origem e destino de uma aresta
	int peso;  //peso da aresta u-v
	no aux;  //struct aux
	list <no> :: iterator p;  //ponteiro auxiliar

	//definindo dois vertices e seus pesos
	u = 0;
	v = 1;
	peso = 5;

	//agrupando os valores em uma struct, depois ser�o usados esses valores como um todo
	aux.v = v;
	aux.peso = peso;

	adj[u].push_back(aux);

	//definindo dois vertices e seus pesos
	u = 0;
	v = 2;
	peso = 3;

	//agrupando os valores em uma struct, depois ser�o usados esses valores como um todo
	aux.v = v;
	aux.peso = peso;

	adj[u].push_back(aux);

	//saida da adjac�ncia
	p = adj[0].begin();  //definindo in�cio da lista
	/*
	-> caso mude o adj[0] para adj[1] ocorre a mudan�a para a o pr�ximo vertice e
	suas adjac�ncias
	*/
	cout << "Origem: " << u << endl;
	cout << "Destino: " << p->v << endl;
	cout << "Peso: " << p->peso << endl;
	cout << endl;
	p++;  //passando pela lista para mostrar adjac�ncias
	cout << "Origem: " << u << endl;
	cout << "Destino: " << p->v << endl;
	cout << "Peso: " << p->peso << endl;

	return 0;
}
