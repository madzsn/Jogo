#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char gerarLetraAleatoria() {
    int numeroAleatorio = std::rand() % 26;
    char letra = 'A' + numeroAleatorio;
    
    return letra;
}

int main() {
    std::srand(std::time(NULL)); 
    char letraSorteada = gerarLetraAleatoria();

    const int maxAttempts = 7;
    int tentativas;

    for (tentativas = 1; tentativas <= maxAttempts; ++tentativas) {
        char chute;
        cout << "Tentativa " << tentativas << "/" << maxAttempts << ": ";
        cin >> chute;

        if (chute == letraSorteada) {
            cout << "Parabens! voce acertou!!!" << endl;
            break;
        } else {
            cout << "Tente novamente." << endl;
        }
    }

    if (tentativas > maxAttempts) {
        cout << "Limite de tentativas excedido. A letra correta era: " << letraSorteada << endl;
    }
    
    return 0;
}
