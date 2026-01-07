#include <iostream>
using namespace std;

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "请输入数组的元素个数: ";
    cin >> n;

    int* arr = new int[n];

    cout << "请输入 " << n << " 个整数: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "原始数组: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " "; 
    }
    cout << endl;

    sortArray(arr, n);

    cout << "排序后的数组: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";  
    }
    cout << endl;

    delete[] arr;

    return 0;
}
