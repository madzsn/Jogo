#include <iostream>

// Função para verificar se a letra existe no alfabeto
bool verificarLetraNoAlfabeto(char letra) {
    return (letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z');
}

int main() {
    char letra;

    // Solicita ao usuário para digitar uma letra
    std::cout << "Digite uma letra: ";
    std::cin >> letra;

    // Verifica se a letra existe no alfabeto
    if (verificarLetraNoAlfabeto(letra)) {
        std::cout << "A letra existe no alfabeto." << std::endl;
    } else {
        std::cout << "A letra NÃO existe no alfabeto." << std::endl;
    }

    return 0;
}
