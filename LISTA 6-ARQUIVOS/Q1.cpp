#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("vetores.txt");
    ofstream outfile("soma.txt");

    if (!infile.is_open()) {
        cerr << "Erro ao abrir o arquivo" << endl;
        return 1;
    }

    if (!outfile.is_open()) {
        cerr << "Erro ao abrir o arquivo" << endl;
        return 1;
    }

    string line;
    vector<int> sumVector;

    while (getline(infile, line)) {
        istringstream iss(line);
        int num;
        vector<int> currentVector;
        while (iss >> num) {
            currentVector.push_back(num);
        }

        if (sumVector.size() < currentVector.size()) {
            sumVector.resize(currentVector.size(), 0);
        }

        for (size_t i = 0; i < currentVector.size(); ++i) {
            sumVector[i] += currentVector[i];
        }
    }

    for (const int& val : sumVector) {
        outfile << val << " ";
    }
    outfile << endl;

    infile.close();
    outfile.close();

    return 0;
}
