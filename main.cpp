#include "./parse/parseIntoVec.hpp"
#include "./sort/exchangeSort.hpp"
#include "./sort/bubbleSort.hpp"
#include "./sort/mergeSort.hpp"
#include "./search/sequentialSearch.hpp"
#include "./search/binarySearch.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
    int countMerge = 0;

    try {
        std::vector<std::vector<int>> vecMain = parseIntoVec("in1.txt");
        /* std::vector<std::vector<int>> vecMain = parseIntoVec("in2.txt"); */
        /* std::vector<std::vector<int>> vecMain = parseIntoVec("in3.txt"); */
        /* std::vector<std::vector<int>> vecMain = parseIntoVec("in4.txt"); */

        std::vector<int>& sortVector = vecMain[0];
        std::vector<int> exchangeVector = sortVector;
        std::vector<int> bubbleVector = sortVector;

        std::cout << ordenaIntercambio(exchangeVector) << " " << ordenaBurbuja(bubbleVector) << " " << ordenaMerge(vecMain[0], 0, vecMain[0].size() - 1, countMerge) << "\n";

        for (auto &&i : vecMain[1]) {
            auto [index, binCount] = busqBinaria(vecMain[0], i);
            std::cout << index << " " << busqSecuencial(vecMain[0], i) << " " << binCount << "\n";
        }

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}