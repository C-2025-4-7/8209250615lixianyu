#include<iostream>
using namespace std;

int index0f(const char s1[], const char s2[])
{
	for (int i = 0; s2[i] != '\0'; i++)
	{
		int j = 0;
		while (s1[j] != '\0' && s2[i + j] == s1[j])
			j++;
		if (s1[j] == '\0')
			return i;
	}
	return -1;
}

int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin.getline(s1, 100);

	cout << "Enter the second string:";
	cin.getline(s2, 100);

	int pos = index0f(s1, s2);
	if(pos!=-1)
		cout<<"index0f(\""<<s1<<"\",\""<<s2<<"\")is"<<pos<<endl;
	else
		cout << "index0f(\"" << s1 << "\",\"" << s2 << "\")is-1" << endl;
	return 0;
}