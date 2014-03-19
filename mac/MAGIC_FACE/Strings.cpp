#include <iostream>
#include "TextReadWrite.h"
#include "MAGICFace.h"
#include <ctime>
#include <ctype.h>
#include <locale>
#include <string>
using namespace std;

char lowerCaseOf(char s)
{
	return tolower(s);
}

string stringFrom(string s, int a, int b)
{
	string n;
	for (int i = a; i <= b && i < s.length(); i ++)
	{
		char at = s[i];
		n = n + at;
	}
	return n;
}