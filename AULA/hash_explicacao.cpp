#include <iostream>
using namespace std;

/*
-> A partir de um objeto usamos uma chave e então acha-se a posição, portanto:
					objeto -> k -> posição
-> Isso será feito por meio de uma função hash: h(k)
-> Uma chave pode acabar ocupando a mesma posição de outra chave, sendo assim surge
um problema que recebe o nome de "colisão"
-> A estratégia para resolver esse problema é a "sondagem": processo de fazer outra
conta para resolver o problema
-> Muito raro o hashing ser um caso O(n), pois geralmente os casos que tem colisão se
resolvem rápido
-> hash(k) = k / tamanho_do_vetor
		-> o que vai importar é o resto dessa divisão, o resto é a posição da chave
		no vetor hash
		-> também pode ser escrita assim: k mod m
*/

int main()
{
	//declaração de variáveis
	
	
	
	return 0;
}