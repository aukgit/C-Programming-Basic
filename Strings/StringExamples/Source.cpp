#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
#include <sstream>

using namespace std;
int main(){
	printf("Hello World\n");
	char helloInC[] = "Hello World\n";

	string hello = "Hello World\n";
	cout << hello;
	cout << "hello.size() : " << hello.size() << endl;
	cout << "strlen(helloInC[])" << strlen(helloInC) << endl;

	// string concat
	// immutable / fixed / rigid
	// c
	/*char s1[] = "hello ";
	char s2[] = "world!";
	char s3[50];
	strcat(s3, s1);
	strcat(s3, s2);*/



	//cout << "s3 : " <<  s3 << endl;

	// C++
	string s1 = "Hello ";
	string s2 = "World!";
	string s3 = s1 + s2;
	cout << "s3 = s1 + s2: " + s3 << endl;
	// C++ find
	size_t found = s1.find("el");
	cout << "Found ('el') at  : " << found << endl;
	size_t found2 = s1.find("elx");
	if (found2 != string::npos){
		cout << "Found ('elx') at  : " << found2 << endl;
	}	else {
		cout << "Not found" << endl;
	}
	string replaceStr1 = "Alim";
	string str2 = "karim";
	replaceStr1.replace(1, 2, str2);

	cout << "replaceStr1 : " << replaceStr1 << endl;
	// substring
	string email = "me@alimkarim.com";
	size_t position = email.find("@");
	if (position != string::npos){
		int pos = position + 1;
		string domain = email.substr(pos);
		cout << "domain name : " << domain << endl;
	}
	string reversingString = "Hello World!";
	int lenOfReverseString = reversingString.length();

	int mid = lenOfReverseString / 2;
	for (size_t i = 0; i < mid; i++)
	{
		int lastIndex = lenOfReverseString - 1 - i;
		// a = a XOR b;
		// b = a XOR b;
		// a = a XOR b;
		reversingString[i] = reversingString[i] ^ reversingString[lastIndex];
		reversingString[lastIndex] = reversingString[i] ^ reversingString[lastIndex];
		reversingString[i] = reversingString[i] ^ reversingString[lastIndex];
	}

	cout << "Hello World! (reverse) : " << reversingString << endl;

	// remove string
	string eraseString = "Ho";
	eraseString.erase(1, 3);
	//eraseString.erase(start, len);

	cout << "Hello (eraseString.erase(1, 3)) : " << eraseString << endl;

	string t;

	getline(cin, t);
	//
	istringstream iss(t);
	string word;
	while (iss >> word) {
		/* do stuff with word */
		cout << word << endl;
	}
	return 0;
}
