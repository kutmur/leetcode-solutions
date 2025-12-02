#include "S_2349.h"

//NumberContainers::NumberContainers() {
//   
//}
//
//void NumberContainers::change(int index, int number) {
//    if (indexToNumber.count(index)) {
//        int oldNumber = indexToNumber[index];
//        numberToIndices[oldNumber].erase(index);
//        if (numberToIndices[oldNumber].empty()) {
//            numberToIndices.erase(oldNumber);
//        }
//    }
//    indexToNumber[index] = number;
//    numberToIndices[number].insert(index);
//}
//
//int NumberContainers::find(int number) {
//    if (numberToIndices.count(number) && !numberToIndices[number].empty()) {
//        return *numberToIndices[number].begin();
//    }
//    return -1;
//}
