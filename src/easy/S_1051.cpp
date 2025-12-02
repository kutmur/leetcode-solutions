#include "S_1051.h"

//{
//    vector<int> sorted_heights = heights;
//    selectionSort(sorted_heights);
//
//    int counter = 0;
//    for (int i = 0; i < heights.size(); i++)
//    {
//        if (heights[i] != sorted_heights[i])
//            counter++;
//    }
//    return counter;
//    }
//
//void selectionSort(vector<int>& arr)
//{
//    int n = arr.size();
//    for (int i = 0; i < n - 1; i++)
//    {
//        int minIndex = i;
//        for (int j = i + 1; j < n; j++)
//        {
//            if (arr[j] < arr[minIndex])
//                minIndex = j;
//        }
//
//        int temp = arr[i];
//        arr[i] = arr[minIndex];
//        arr[minIndex] = temp;
//    }
//}