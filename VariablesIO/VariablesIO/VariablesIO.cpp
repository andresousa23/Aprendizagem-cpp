#include <iostream>

using namespace std;

void main()
{
	int inteiro;
	long int inteiroLong;
	long long int inteiroLongLong;
	short int inteiroShort;
	unsigned int inteiroUnsigned;
	unsigned long int inteiroUnsignedLong;
	unsigned long long int inteiroUnsignedLongLong;
	short unsigned int inteiroShortUnsigned;
	signed int inteiroSigned;
	signed long int inteiroSignedLong;
	signed long long int inteiroSignedLongLong;
	short signed int inteiroShortSigned;

	cout << "Variaveis em Bytes" << endl;
	cout << "Inteiro com: " << sizeof(int) << " bytes" << endl;
	cout << "Inteiro Long com: " << sizeof(long int) << " bytes" << endl;
	cout << "Inteiro Long Long com: " << sizeof(long long int) << " bytes" << endl;
	cout << "Inteiro Short com: " << sizeof(short int) << " bytes" << endl;
	cout << "Inteiro Unsigned com: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "Inteiro Unsigned Long com: " << sizeof(unsigned long int) << " bytes" << endl;
	cout << "Inteiro Unsigned Long Long com: " << sizeof(unsigned long long int) << " bytes" << endl;
	cout << "Inteiro Unsigned Short com: " << sizeof(unsigned short int) << " bytes" << endl;
	cout << "Inteiro Signed com: " << sizeof(signed int) << " bytes" << endl;
	cout << "Inteiro Signed Long com: " << sizeof(signed long int) << " bytes" << endl;
	cout << "Inteiro Signed Long Long com: " << sizeof(signed long long int) << " bytes" << endl;
	cout << "Inteiro Signed Short com: " << sizeof(signed short int) << " bytes" << endl;
	cout << "Float com: " << sizeof(float) << " bytes" << endl;
	cout << "Double com: " << sizeof(double) << " bytes" << endl;
	cout << "Long Double com: " << sizeof(long double) << " bytes" << endl;
	cout << "Char com: " << sizeof(char) << " bytes" << endl;
	cout << "Unsigned Char com: " << sizeof(unsigned char) << " bytes" << endl;

	cout << endl;

	cout << "Range das variaveis" << endl;
	cout << "Inteiro range maximo: " << numeric_limits<int>::max() << endl;
	cout << "Inteiro range minimo: " << numeric_limits<int>::min() << endl;
	cout << "Unsigned Inteiro range maximo: " << numeric_limits<unsigned int>::max() << endl;
	cout << "Unsigned Inteiro range minimo: " << numeric_limits<unsigned int>::min() << endl;
	cout << "Signed Inteiro range maximo: " << numeric_limits<signed int>::max() << endl;
	cout << "Signed Inteiro range minimo: " << numeric_limits<signed int>::min() << endl;
	cout << "Long range maximo: " << numeric_limits<long>::max() << endl;
	cout << "Long range minimo: " << numeric_limits<long>::min() << endl;
	cout << "Unsigned Long range maximo: " << numeric_limits<unsigned long>::max() << endl;
	cout << "Unsigned Long range minimo: " << numeric_limits<unsigned long>::min() << endl;
	cout << "Signed Long range maximo: " << numeric_limits<signed long>::max() << endl;
	cout << "Signed Long range minimo: " << numeric_limits<signed long>::min() << endl;
	cout << "Long Long range maximo: " << numeric_limits<long long>::max() << endl;
	cout << "Long Long range minimo: " << numeric_limits<long long>::min() << endl;
	cout << "Unsigned Long Long range maximo: " << numeric_limits<unsigned long long>::max() << endl;
	cout << "Unsigned Long Long range minimo: " << numeric_limits<unsigned long long>::min() << endl;
	cout << "Signed Long Long range maximo: " << numeric_limits<signed long long>::max() << endl;
	cout << "Signed Long Long range minimo: " << numeric_limits<signed long long>::min() << endl;
	cout << "Short range maximo: " << numeric_limits<short>::max() << endl;
	cout << "Short range minimo: " << numeric_limits<short>::min() << endl;
	cout << "Unsigned Short range maximo: " << numeric_limits<unsigned short>::max() << endl;
	cout << "Unsigned Short range minimo: " << numeric_limits<unsigned short>::min() << endl;
	cout << "Float range maximo: " << numeric_limits<float>::max() << endl;
	cout << "Float range minimo: " << numeric_limits<float>::min() << endl;
	cout << "Double range maximo: " << numeric_limits<double>::max() << endl;
	cout << "Double range minimo: " << numeric_limits<double>::min() << endl;
	cout << "Long Double range maximo: " << numeric_limits<long double>::max() << endl;
	cout << "Long Double range minimo: " << numeric_limits<long double>::min() << endl;
	cout << "Char range maximo: " << (int)numeric_limits<char>::max() << endl;
	cout << "Char range minimo: " << (int)numeric_limits<char>::min() << endl;
	cout << "Unsigned Char range maximo: " << (int)numeric_limits<unsigned char>::max() << endl;
	cout << "Unsigned Char range minimo: " << (int)numeric_limits<unsigned char>::min() << endl;
}