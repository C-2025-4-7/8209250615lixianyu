#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char* s1, const char* s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len2 - len1; i++)
    {
        int j = 0;
        while (j < len1 && s1[j] == s2[i + j])
            j++;

        if (j == len1)
            return i;   // 找到
    }
    return -1;          // 没找到
}
int parseHex(const char* hexString)
{
    int result = 0;

    for (int i = 0; hexString[i] != '\0'; i++)
    {
        char c = hexString[i];
        int value;

        if (c >= '0' && c <= '9')
            value = c - '0';
        else if (c >= 'A' && c <= 'F')
            value = c - 'A' + 10;
        else if (c >= 'a' && c <= 'f')
            value = c - 'a' + 10;
        else
            break;

        result = result * 16 + value;
    }
    return result;
}
void sortArray(int* arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int main()
{
    // （1）测试 indexOf
    char s1[50], s2[100];
    cout << "Enter s1: ";
    cin.getline(s1, 50);
    cout << "Enter s2: ";
    cin.getline(s2, 100);
    cout << "indexOf = " << indexOf(s1, s2) << endl;

    // （2）测试 parseHex
    char hex[20];
    cout << "Enter hex string: ";
    cin >> hex;
    cout << "Decimal = " << parseHex(hex) << endl;

    // （3）动态数组 + 排序
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sortArray(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << *(arr + i) << " ";
    cout << endl;
    return 0;
}