#include <iostream>
#include <vector>
#include "clsString.h"
using namespace std;


int main()
{
	clsString String1;
	String1.Value = "  Moataz Reda Ali Radwan  ";

	String1.PrintFirstLetterOfEachWord();
	cout << endl;

	cout << String1.UpperFirstLetterOfEachWord() << endl;
	cout << endl;

	cout << String1.LowerFirstLetterOfEachWord() << endl;
	cout << endl;

	cout << String1.UpperAllString() << endl;
	cout << endl;

	cout << String1.LowerAllString() << endl;
	cout << endl;

	cout << String1.InvertAllStringLettersCase() << endl;
	cout << endl;

	cout << "Number Of Capital Letters : " << String1.CountCapitalLetters() << endl;
	cout << endl;

	cout << "Number Of Small Letters : " << String1.CountSmallLetters() << endl;
	cout << endl;

	cout << "Number Of Letters : " << String1.CountLetters(String1.All) << endl;
	cout << endl;

	cout << "This Letter Repeated " << String1.CountSpecificLetter('A') << " Times" << endl;
	cout << endl;

	cout << "Number of Vowels : " << String1.CountVowels() << endl;
	cout << endl;

	String1.PrintAllVowels();
	cout << endl;

	String1.PrintEachWordInString();
	cout << endl;

	cout << "Number of Words : " << String1.CountWords() << endl;
	cout << endl;

	vector <string> SplitedString;
	String1.SplitString(" ");
	cout << endl;

	cout << "Trim Right : " << String1.TrimRight() << endl;
	cout << endl;

	cout << "Trim Left : " << String1.TrimLeft() << endl;
	cout << endl;

	cout << "Trim All : " << String1.Trim() << endl;
	cout << endl; 

	cout << "Reversed String : " << String1.ReverseWordsInString() << endl;
	cout << endl;

	cout << "String After Replaced : " << String1.ReplaceWordInString("Moataz", "Youssef") << endl;
	cout << endl;

	cout << clsString::RemovePunctuationsFromString("Moataz -Reda, Ali Radw_a_n");
	cout << endl;

	return 0;
}