#include "bubbleSort.hpp"

int ordenaBurbuja(std::vector<int>& vec) {
    int count{}, k = 1;
    bool switchSwap;

    do {
        switchSwap = false;
        for (int i = 0; i < vec.size() - k; ++i) {
            if (vec[i] > vec[i+1]) {
                int aux = vec[i];
                vec[i] = vec[i+1];
                vec[i+1] = aux;
                switchSwap = true;
            }
            ++count;
        }
        ++k;
    } while (switchSwap);
    
    return count;
}