#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Criando um vetor de inteiros
    vector<int> vetor = {10, 20, 30};  // Um vetor com três números: 10, 20 e 30

    // Mostrando os elementos do vetor
    for (int i = 0; i < vetor.size(); ++i) {
        cout << "Elemento " << i << ": " << vetor[i] << endl;
    }

    return 0;
}
