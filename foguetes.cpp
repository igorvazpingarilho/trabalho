#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    // 1. Configuração Inicial
    cout << "Configuracao Inicial...\n";
    cout << "Bibliotecas carregadas e namespace configurado.\n\n";

    // 2. Criacao da Pilha
    stack<string> pilhaFoguetes;
    cout << "Pilha de foguetes criada.\n\n";

    // 3. Preparacao dos Foguetes (PUSH)
    cout << "Preparando os foguetes...\n";
    pilhaFoguetes.push("Foguete Alpha");
    pilhaFoguetes.push("Foguete Beta");
    pilhaFoguetes.push("Foguete Gama");
    pilhaFoguetes.push("Foguete Delta");
    cout << "Foguetes adicionados à pilha na ordem: Alpha, Beta, Gama, Delta.\n\n";

    // 4. Lancamento de Foguetes (TOP e POP)
    cout << "Iniciando sequencia de lancamento...\n\n";

    while (!pilhaFoguetes.empty()) {
        cout << "Proximo foguete a ser lancado: " << pilhaFoguetes.top() << endl;
        pilhaFoguetes.pop();
    }

    cout << "\nSequencia final esperada: Delta, Gama, Beta, Alpha\n";

    return 0;
}
