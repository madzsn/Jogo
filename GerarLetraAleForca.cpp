#include <iostream>
#include <cstdlib>
#include <ctime>

// Função para gerar letra aleatória
char gerarLetraAleatoria() {
    // Gera um número aleatório entre 0 e 25 (representando as letras do alfabeto)
    int numeroAleatorio = std::rand() % 26;
    
    // Converte o número para a letra correspondente
    char letra = 'A' + numeroAleatorio;
    
    return letra;
}

int main() {
    // Inicializa a semente para geração de números aleatórios
    std::srand(std::time(NULL)); // Substituído por std::time(NULL)
    
    // Gera uma letra aleatória
    char letra = gerarLetraAleatoria();
    
    // Imprime a letra gerada
    std::cout << "Letra aleatória gerada: " << letra << std::endl;
    
    return 0;
}
