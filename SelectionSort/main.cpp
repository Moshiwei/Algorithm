#include <iostream>
#include "Student.h"
#include "SortTestHelper.h"

using namespace std;

//模版函数
template<typename T>

void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        // 寻找[i,n)区间里的最小值
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int n = 100000;
    int *arr = SortTestHelper::generateRandomArry(n, 0, n);
    selectionSort(arr, n);
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
    SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);
    //释放空间
    delete[] arr;

//    float b[5] = {3.3, 2.2, 1.1, 5.5, 7.77};
//    selectionSort(b, 5);
//    for (int i = 0; i < 5; i++)
//        cout << b[i] << " ";
//    cout << endl;
//
//    string c[5] = {"D", "G", "F", "E", "A"};
//    selectionSort(c, 5);
//    for (int i = 0; i < 5; i++)
//        cout << c[i] << " ";
//    cout << endl;
//
//    Student d[4] = {{"D", 90},
//                    {"C", 100},
//                    {"B", 95},
//                    {"A", 95}};
//    selectionSort(d, 4);
//    for (int i = 0; i < 4; i++)
//        cout << d[i];
//    cout << endl;
    return 0;
}