#include <iostream>
#include <cctype>
using namespace std;

void count(const char s[], int counts[])
{
 
    for (int i = 0; i < 26; i++)
        counts[i] = 0;

    
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isalpha(s[i]))      
        {
            char ch = tolower(s[i]);   
            counts[ch - 'a']++;        
        }
    }
}

int main()
{
    char str[200];
    int counts[26];

    cout << "Enter a string: ";
    cin.getline(str, 200);

    count(str, counts);
    for (int i = 0; i < 26; i++)
    {
        if (counts[i] != 0)
        {
            cout << char('a' + i)
                << ": " << counts[i]
                << " times" << endl;
        }
    }

    return 0;
}