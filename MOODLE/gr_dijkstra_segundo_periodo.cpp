#include <iostream>
#include <list>
#include <limits.h>

using namespace std;

struct no{
    int v;  // vertice de destino da aresta
    int peso;  // peso da aresta
};

void dijkstra(list<no>adj[], int nVertices, int start, int end){  //função auxiliar que fará o procedimento de dijkstra
    list<int> fila;  //fila auxiliar
    list<int> menor;  //fila auxiliar -> mostrar o menor caminho
    int destino;  //Destino do vértice
    int state[10];  //-1 -> não descoberto; 0-> descoberto)
    int pais[10];  //sem pais -> -1
    int distancia[10];  //distância de um vértice para outro
    int peso;  //peso da aresta
    int u, v, dist;  //auxs para mostrar os vértices e distancia
    list<no>::iterator q;  //iterador varredor da lista de adjacência

    for (u = 0; u < nVertices; u++){
        state[u] = -1;
        distancia[u] = INT_MAX;
        pais[u] = -1;
    }

    distancia[start] = 0;
    v = start;

    while (state[v] == -1){
        state[v] = 0;
        for (q = adj[v].begin(); q != adj[v].end(); q++){
            destino = q->v;
            peso = q->peso;

            if (distancia[destino] > (distancia[v] + peso)){
                distancia[destino] = distancia[v] + peso;
                pais[destino] = v;
            }
        }

        v = 0;
        dist = INT_MAX;

        for (u = 0; u < nVertices; u++){
            if (state[u] == -1 && dist > distancia[u]){
                dist = distancia[u];
                v = u;
            }
		}
    }

    // Mostrando o menor caminho e o seu custo
    menor.push_front(end);
    u = pais[end];
    while (u != start){
        menor.push_front(u);
        u = pais[u];
    }
    menor.push_front(u);
    
    cout << "Menor caminho: ";
    while (!menor.empty()){  //varrendo lista auxiliar (menor) para mostrar todos os caminhos
        u = *menor.begin();
        cout << u << " ";
        menor.pop_front();
    }
    cout << endl;
    
    cout << "Custo: " << distancia[end] << endl;  //mostrar a distância final
}


void cria_aresta(list<no> adj[], int u, int v, int p, int orientado){  //função auxiliar q cria as arestas
    no aux;  //var aux para inserir as arestas na lista de adjacências
    aux.v = v;
    aux.peso = p;
    adj[u].push_back(aux);
    if (orientado == 0){
        aux.v = u;
        adj[v].push_back(aux);
    }
}

int main(){
	//declaração de variáveis
    list<no> adj[10]; // lista de adjacências
    int nVertices; // numero de vértices do grafo
    int u, v; // vértices de // origem e destino de uma aresta
    int p; // peso da aresta
    int s; //primeiro vértice
    int e; //vértice de destino
	list<no>::iterator q; // iterador para varrer a lista de adjacências
    int orientado;  //0->não orientado, 1->orientado

    //entrada de dados iniciais: n° de vertices, orientação, primeiro vértice e vértice de destino
    cin >> nVertices >> orientado >> s >> e;

    //entrada de arestas e chamada de função auxiliar que cria as arestas
    cin >> u >> v >> p;
    while (u != -1 && v != -1 && p != -1)
    {
        cria_aresta(adj, u, v, p, orientado);
        cin >> u >> v >> p;
    }

    //chamada de função auxiliar PRIM
    dijkstra(adj, nVertices, s, e);

    return 0;
}