#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vetor;

    vetor.push_back(10);  // Adiciona o número 10 ao final do vetor
    vetor.push_back(20);  // Adiciona o número 20 ao final do vetor
    vetor.push_back(30);  // Adiciona o número 30 ao final do vetor

    cout << "Elementos do vetor:" << endl;
    for (int i = 0; i < vetor.size(); ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
