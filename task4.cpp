#include <iostream>
#include <string>
using namespace std;

namespace MyNamespace {
	char* cout(char* a){
		std::cout << "Your input is " << a << endl;
		return a;
	}
}
bool isValid(string userInput){

	if(userInput == ""){
		return true;
	}
	if(userInput.length( ) > 100){
		cout << "You entered more than 100 character. Please try again!";
		return true;
	}

	for (int i = 0; i < userInput.length(); i++)
	{
		char c = userInput[0];

		if (c < '0' || c >'9')
		{
			return true;
		}
	}

	return false;
}
int main( ){

	char a[100];
	cout << "Enter a string:(Shorter than 100 character.) " << endl;
	cin.getline(a,100);
	if(!isValid(a)){
		cout << "Please enter a string!" << endl;
	}
	else
		MyNamespace::cout(a);
	return 0;
}