#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class area_cl{
public:
	double height, width;
};

class rectangle : public area_cl{
public:
	double area(double h, double w){
		height = h;
		width = w;
		return height * width;
	}
};
class cylinder : public area_cl{
public:
	double area(double h, double w ){
		height = h;
		width = w;
		//2*pi*r*h + 2*pi*r*r
		// 2 pi r (h+r)
		double pi = 3.14;
		return 2*pi*width*(height+width);
	}
};

bool isValid(string userInput){

	if(userInput == ""){
		return false;
	}

	for (int i = 0; i < userInput.length(); i++)
	{
		char c = userInput[0];

		if (c < '0' || c >'9')
		{
			return false;
		}
	}
	
	return true;
}

int main( ){
	rectangle ob1;
	cylinder ob2;

	string userInputH, userInputW;

	cout << "What is the dimensions?(Height ans Width)"<<endl;
	cin >> userInputH >> userInputW;
	
	if(!(isValid(userInputH) && isValid(userInputW))){
		do {
			if(isValid(userInputH) == false && isValid(userInputW) == false){
				cout << "You entered characters, please enter numbers" << endl;
				cout << "Please enter two numbers." << endl;
				cin >> userInputH >> userInputW;
			}else if(isValid(userInputH) == false){
				cout << "You entered height value as character, please enter number" << endl;
				cout << "Please enter height value." << endl;
				cin >> userInputH;
			}else{
				cout << "You entered width value as character, please enter number" << endl;
				cout << "Please enter width value." << endl;
				cin >> userInputW;
			}
		} while (!(isValid(userInputH) && isValid(userInputW)));
	}
	
	//stod convert string to double
	cout << "Rect area :  "<< ob1.area(stod(userInputH), stod(userInputW))<<endl ;
	cout << "Cyl area : " << ob2.area(stod(userInputH), stod(userInputW))<< endl;
	return 0;
}
