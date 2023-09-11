#include "exchangeSort.hpp"
#include <iostream>

int ordenaIntercambio(std::vector<int>& vec) {
    int count{};

    for (int i = 0; i < vec.size() - 1; ++i) {
        for (int j = i+1; j < vec.size(); ++j) {
            ++count;
            if (vec[i] > vec[j]) {
                int aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
    
    return count;
}