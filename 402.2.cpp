#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int parseHex(const char* const hexString)
{
    int length = strlen(hexString);  
    int result = 0;

    for (int i = 0; i < length; i++) {
        char c = hexString[i];

        int value = 0;
        if (c >= '0' && c <= '9') {
            value = c - '0';  
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;  
        }
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10; 
        }

        result += value * pow(16, length - 1 - i);
    }

    return result;
}

int main()
{
    const char* hexString = "A5";

    int decimalValue = parseHex(hexString);

    cout << "Hexadecimal: " << hexString << endl;
    cout << "Decimal: " << decimalValue << endl;

    return 0;
}
