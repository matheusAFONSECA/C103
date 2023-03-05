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
	//função responsável por determinar as arestas do grafo
	//declaração de variáveis
	no aux;  //var aux

	//criando as arestas
	aux.peso = p;
	aux.v = v;
	adj[u].push_back(aux);  //criação das fila
	if(orientado == 0)  //não orientado
	{
		//fazendo a volta do vetor
		aux.v = u;
		adj[v].push_back(aux);
	}
}

int procura_maior(int f[], int N)
{
	//função que procura o maior elemento
	//declaração de var aux
	int i;  // contador
	int j;  // posição do maior elemento no vetor f[]
	int maior;  // var aux de maior

	maior = f[0];  // definição de um parâmetro do maior elemento
    j = 0;  
    for(i = 1; i < N; i++)
    {
        if(maior < f[i])  //condição de mudança do maior elemento
        {
            maior = f[i];  // redefinição do maior elemento
            j = i;  // posição do maior elemento
        }
    }

	return j;
}

void ordenacao_topologica(int f[], int nVertices)
{
	/*mostra a ordenação do tempo (f[]) de forma topologica, ou seja, mostrar os
	vértices de G (grafo) em ordem decrescente do valor de f[]*/
	//declaração de var aux
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
	//função aux para o percurso em profundidade
	//declaração de var
	int d[u];  // tempo instantâneo - usada mais em outras aplicações
	list <no> :: iterator q;  //ponteiro aux para varrer a lista

	//incio do código
	color[u] = 'g';  // inicio de processamento do vertice u
	time++;  // incremento do tempo
	d[u] = time;  // tempo instantâneo em determinado vertice

	//análise das arestas de determinado ponto
	for(q = adj[u].begin(); q != adj[u].end(); q++)
		if(color[q->v] == 'w')
		{
			p[q->v] = u;  //definição do pai do vertice
			dfs_visit(adj, color, q->v, p, time, f);
		}
	color[u] = 'b';  //vertice processado
	f[u] = ++time;
}

void dfs(list<no>adj[], int nVertices)
{
	/*observe que nao vai ser importante o peso da aresta*/
	//função de percurso de profundidade
	//declaração de var
	char color[20];
	//'w' = white (vertice não descoberto)
	//'g' = grey (vertice em processamento)
	//'b' = black (vertice processado)
	int p[10];  //pai - de onde um vetor se origina ao ser descoberto
	/* quando o pai for igual a -1 para determinado vertice quer dizer
	que o mesmo não possui um pai, ou seja, o vertice ainda não foi
	descoberto e por isso não possui "origem"*/
	int time;  // tempo para exercutar um ponto
	int f[20];  // ordenação dos tempos
	int u;  // var aux

	//inicialicação inicial do código
	for(u = 0; u < nVertices; u++)
	{
		color[u] = 'w';  //nenhum vertice descoberto
		p[u] = -1;  //sem pais
	}

	time = 0;
	for(u = 0; u < nVertices; u++)  // passar por cada vertice do grafo
		if(color[u] == 'w')  // somente vertices não descobertos que são avaliados
			dfs_visit(adj, color, u, p, time, f);  //chamada da função auxiliar de percurso de profundidade

	//chamada de função de ordenação topológica
	ordenacao_topologica(f, nVertices);
}

int main()
{
	//declaração de variáveis
	int nVertices;  //n° de vertices do grafo
	int orientado;  // 0 -> não orientado	1 -> orientado
	int v;  //vertice de destino de uma aresta
	int u;  //vertice de origem de uma aresta
	list<no> adj[20];  //lista de adjacência
	int p;  //peso da aresta

	//entrada de dados iniciais
	cin >> nVertices >> orientado;

	//entrada do vertices de origem e de destino
	cin >> u >> v;
	while((u != -1) && (v != -1))  //condição de parada de entrada de dados
	{
		p = 0;
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v;
	}

	//chamada de função DFS
	dfs(adj, nVertices);

	return 0;
}
