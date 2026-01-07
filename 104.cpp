/*#include <iostream>  
#include <iomanip>                                  
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe   
	cout << "output in unsigned int  type:" << testUnint << endl;//<<oct;         
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;  //为什么结果为-2？
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出	system("pause");                                             
	return 0;
}
*/
#include <iostream>
#include <iomanip>                                  
using namespace std;

int main()
{
	unsigned int testUnint = 65534;

	cout << "output in unsigned int type: " << testUnint << endl;
	cout << "output in char type: " << static_cast<char>(testUnint) << endl;
	cout << "output in short type: " << static_cast<short>(testUnint) << endl;  
	cout << "output in int type: " << static_cast<int>(testUnint) << endl;
	cout << "output in double type: " << static_cast<double>(testUnint) << endl;
	cout << "output in double type (precision 4): " << setprecision(4) << static_cast<double>(testUnint) << endl;

	cout << "output in Hex unsigned int type: " << hex << testUnint << endl; 
	cout << "output in Octal unsigned int type: " << oct << testUnint << endl;
	double realNumber = 123.456;
	cout << "output in int type after converting real number: " << static_cast<int>(realNumber) << endl;

	system("pause");
	return 0;
}
