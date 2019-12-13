#include <iostream>
#include "Int.h"

using namespace std;
using namespace CppOop;

int main()
{
	const int a = 5;
	int array[a] = {0};
	Int* num = new Int(0);


	Int i = 1;
	cout << "i.ToString = " << i.ToString() << " i.GetType() = " << i.GetType() << endl;
	cout << "i= " << i << endl;
	i += 3;
	cout << "i+=3; i= " << i << endl;
	i--;
	cout << "i--; i= " << i << endl;
	Int j = i + 7;
	cout << "j = i + 7; j= " << j << endl;
	Int k = j - i;
	j -= 1;
	cout << "k = j - 1; k= " << k << "; j -= 1; j= " << j << endl << endl;
	cout << "Int::Parse(\"123\") = " << Int::Parse("123");
	int intva;
	k >> intva;

	
	string input;
	cin >> input;
	try
	{

		if (input[0] == '0') throw "错误，不能以0开头";
		if (input.length() > 10) throw 12;
		cout << input << endl;
	}
	catch (const char *p)
	{
		cerr << p << endl;
	}
	catch (int i)
	{
		cerr << i << endl;
	}
	return 0;
}