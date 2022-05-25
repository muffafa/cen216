#include <iostream>
#include<string>
using namespace std;

namespace Mynamespace {
 void Cout(string s) {
 cout <<"Your input is "<<" "<<s<<endl;
 }
}

int main()
{
 string str1;
 cout<<"Write your input :";
 getline (cin, str1);
 Mynamespace::Cout(str1);
 return 0;
}