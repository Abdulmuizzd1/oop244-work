/***********************************************************************
// Name: Abdul Muizz Durrani
// Seneca email: adurrani5@myseneca.ca
// Seneca Student ID: 117056218
// Date: 2023-09-15
***********************************************************************/
#ifndef SDDS_WORD_H // replace with relevant names
#define SDDS_WORD_H
#include <cstdio>
#include <iostream>
#include <iomanip>
const int MAX_WORD_LEN = 21;
const int SORT_BY_OCCURANCE = 1;
const int SORT_ALPHABETICALLY = 0;
using namespace std;




namespace sdds {
    struct Word {
        char letters[MAX_WORD_LEN];
        int count;
    };

    int searchWords(const Word words[], int num, const char word[]);

    int readWord(char* word, FILE* fptr, int maxLen);
    void addWord(Word words[], int* index, const char newWord[]);
    void title(const char* value, int len);
    void endList();
    void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord);
    void print(const Word* w, int gotoNextLine, int len);
    int findMaxLen(const Word words[], int noOfWords);
    void listWords(const Word words[], int noOfWords, const char* theTitle);
    void swap(Word* p1, Word* p2);
    void sort(Word words[], int cnt, int sortType);
    int totalCount(const Word* words, int num);
    void wordStats(const char* filename);
    void programTitle();













	// Your header file content goes here

}
#endif