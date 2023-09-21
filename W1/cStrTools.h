/***********************************************************************
// Name: Abdul Muizz Durrani
// Seneca email: adurrani5@myseneca.ca
// Seneca Student ID: 117056218
// Date: 2023-09-15
***********************************************************************/
#ifndef SDDS_CSTRTOOLS_H 
#define SDDS_CSTRTOOLS_H 


#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;


namespace sdds {

	
	char toLower(char ch);

	int strCmp(const char* s1, const char* s2);

	int strnCmp(const char* s1, const char* s2, int len);
	void strCpy(char* des, const char* src);
	int strLen(const char* str);
	const char* strStr(const char* str, const char* find);
	int isAlpha(char ch);
	int isSpace(char ch);
	void trim(char word[]);
	void toLowerCaseAndCopy(char des[], const char source[]);


}
#endif