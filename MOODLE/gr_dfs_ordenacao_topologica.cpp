#include <iostream>
#include <list>
using namespace std;

struct no  //struct que axilia a guardar os vertices do grafo
{
	int v; // vertice adjacente
	int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	//fun��o respons�vel por determinar as arestas do grafo
	//declara��o de vari�veis
	no aux;  //var aux

	//criando as arestas
	aux.peso = p;
	aux.v = v;
	adj[u].push_back(aux);  //cria��o das fila
	if(orientado == 0)  //n�o orientado
	{
		//fazendo a volta do vetor
		aux.v = u;
		adj[v].push_back(aux);
	}
}

int procura_maior(int f[], int N)
{
	//fun��o que procura o maior elemento
	//declara��o de var aux
	int i;  // contador
	int j;  // posi��o do maior elemento no vetor f[]
	int maior;  // var aux de maior

	maior = f[0];  // defini��o de um par�metro do maior elemento
    j = 0;  
    for(i = 1; i < N; i++)
    {
        if(maior < f[i])  //condi��o de mudan�a do maior elemento
        {
            maior = f[i];  // redefini��o do maior elemento
            j = i;  // posi��o do maior elemento
        }
    }

	return j;
}

void ordenacao_topologica(int f[], int nVertices)
{
	/*mostra a ordena��o do tempo (f[]) de forma topologica, ou seja, mostrar os
	v�rtices de G (grafo) em ordem decrescente do valor de f[]*/
	//declara��o de var aux
	int i, j;  // contador
	int ordem[20];  // vetor que guarda os maiores valores

	for(i = 0; i < nVertices; i++)
	{
		j = procura_maior(f, nVertices);
		ordem[i] = j;
		f[j] = -1;
	}

	for(i = 0; i < nVertices; i++)
        cout << ordem[i] << " ";
	cout << endl;
}

void dfs_visit(list<no>adj[], char color[], int u, int p[], int &time, int f[])
{
	//fun��o aux para o percurso em profundidade
	//declara��o de var
	int d[u];  // tempo instant�neo - usada mais em outras aplica��es
	list <no> :: iterator q;  //ponteiro aux para varrer a lista

	//incio do c�digo
	color[u] = 'g';  // inicio de processamento do vertice u
	time++;  // incremento do tempo
	d[u] = time;  // tempo instant�neo em determinado vertice

	//an�lise das arestas de determinado ponto
	for(q = adj[u].begin(); q != adj[u].end(); q++)
		if(color[q->v] == 'w')
		{
			p[q->v] = u;  //defini��o do pai do vertice
			dfs_visit(adj, color, q->v, p, time, f);
		}
	color[u] = 'b';  //vertice processado
	f[u] = ++time;
}

void dfs(list<no>adj[], int nVertices)
{
	/*observe que nao vai ser importante o peso da aresta*/
	//fun��o de percurso de profundidade
	//declara��o de var
	char color[20];
	//'w' = white (vertice n�o descoberto)
	//'g' = grey (vertice em processamento)
	//'b' = black (vertice processado)
	int p[10];  //pai - de onde um vetor se origina ao ser descoberto
	/* quando o pai for igual a -1 para determinado vertice quer dizer
	que o mesmo n�o possui um pai, ou seja, o vertice ainda n�o foi
	descoberto e por isso n�o possui "origem"*/
	int time;  // tempo para exercutar um ponto
	int f[20];  // ordena��o dos tempos
	int u;  // var aux

	//inicialica��o inicial do c�digo
	for(u = 0; u < nVertices; u++)
	{
		color[u] = 'w';  //nenhum vertice descoberto
		p[u] = -1;  //sem pais
	}

	time = 0;
	for(u = 0; u < nVertices; u++)  // passar por cada vertice do grafo
		if(color[u] == 'w')  // somente vertices n�o descobertos que s�o avaliados
			dfs_visit(adj, color, u, p, time, f);  //chamada da fun��o auxiliar de percurso de profundidade

	//chamada de fun��o de ordena��o topol�gica
	ordenacao_topologica(f, nVertices);
}

int main()
{
	//declara��o de vari�veis
	int nVertices;  //n� de vertices do grafo
	int orientado;  // 0 -> n�o orientado	1 -> orientado
	int v;  //vertice de destino de uma aresta
	int u;  //vertice de origem de uma aresta
	list<no> adj[20];  //lista de adjac�ncia
	int p;  //peso da aresta

	//entrada de dados iniciais
	cin >> nVertices >> orientado;

	//entrada do vertices de origem e de destino
	cin >> u >> v;
	while((u != -1) && (v != -1))  //condi��o de parada de entrada de dados
	{
		p = 0;
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v;
	}

	//chamada de fun��o DFS
	dfs(adj, nVertices);

	return 0;
}
