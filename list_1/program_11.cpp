#include<iostream>
using namespace std;
main()
{
	char str;
	cout<<"Enter Only Any One Letter Of Alphabate -->\n";
	cout<<"To Check It's Vowel Or Consonant -->\n";
	cout<<"Enter the character :: ";
	cin>>str;
	
	switch(str)
		{
			case 'A':
				cout<<"This character is vowel ";
			break;
			case 'I':
				cout<<"This character is vowel ";
			break;	
			case 'E':
				cout<<"This character is vowel ";
			break;	
			case 'O':
				cout<<"This character is vowel ";
			break;	
			case 'U':
				cout<<"This character is vowel ";
			break;
			case 'a':
				cout<<"This character is vowel ";
			break;
			case 'i':
				cout<<"This character is vowel ";
			break;	
			case 'e':
				cout<<"This character is vowel ";
			break;	
			case 'o':
				cout<<"This character is vowel ";
			break;	
			case 'u':
				cout<<"This character is vowel ";
			break;
			default:
				cout<<"This character is consonant ";
		}
	
}