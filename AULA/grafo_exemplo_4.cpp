#include <iostream>
#include <list>
using namespace std;

/*
-> Deixo salientado aqui que a forma como esse exemplo � demonstrado � a inser��o
dos elementos de forma manual, ou seja, n�o existe nenhuma entrada de dados aqui,
somente sa�da e demonstra��o de como funciona a forma��o de uma adjac�ncia de um
grafo por meio de um c�digo
-> esse grafo montado � N�O ORIENTADO
-> Mesmo coisa feita no exemplo 3 sendo que aqui foi feita de forma mais simplificada
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
	int nVertices = 3;  //N� de vertices do grafo
	int i;  //contador

	//definindo dois vertices e seus pesos
	u = 0;
	v = 1;
	peso = 5;

	//agrupando os valores em uma struct, depois ser�o usados esses valores como um todo
	aux.v = v;
	aux.peso = peso;

	adj[u].push_back(aux);

	//criando aresta de volta (n�o orientado)
	aux.v = u;
	adj[v].push_back(aux);

	//definindo dois vertices e seus pesos
	u = 0;
	v = 2;
	peso = 3;

	//agrupando os valores em uma struct, depois ser�o usados esses valores como um todo
	aux.v = v;
	aux.peso = peso;

	adj[u].push_back(aux);

	//criando aresta de volta (n�o orientado)
	aux.v = u;
	adj[v].push_back(aux);

	//saida da adjac�ncia (Mostrando o Grafo)
	for(i = 0; i < nVertices; i++)
	{
		for(p = adj[i].begin(); p != adj[i].end(); p++)
		{
			cout << i << " " << p->v << " " << p->peso << endl;
		}
	}

	return 0;
}
