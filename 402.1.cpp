#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
    int len1 = 0, len2 = 0;

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

        for (int i = 0; i <= len2 - len1; i++) {
        int j = 0;
        while (j < len1 && s2[i + j] == s1[j]) {
            j++;
        }
        if (j == len1) {
            return i;  
        }
    }

    return -1;  
}

int main()
{
    char s1[100], s2[100];


    cout << "请输入第一个字符串 s1: ";
    cin >> s1;
    cout << "请输入第二个字符串 s2: ";
    cin >> s2;
    int index = indexof(s1, s2);

    if (index != -1) {
        cout << "字符串 \"" << s1 << "\" 是字符串 \"" << s2 << "\" 的子串，第一次匹配的位置是: " << index << endl;
    }
    else {
        cout << "字符串 \"" << s1 << "\" 不是字符串 \"" << s2 << "\" 的子串。" << endl;
    }

    return 0;
}
