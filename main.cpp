#include <iostream>
using namespace std;


int main() {
int i = 0;
string fl;
int total = 0;
int pre = 0;
string acc;
int add = 0;
int ad = 0;

do{
  cout << "Hello and welcome to Comcast. Please enter your account number as can be seen on your bill (residental customer accounts start with a 0; buisness customer accounts start with a 1) : ";
  getline(cin,acc);

fl = acc.at(0);

if(fl == "0") {
i=1;
cout << endl;
cout << "How many premuim channels do you have: ";
cin >> pre;
total = total+4+25+(pre*7.50);
cout << endl;
cout << "The account number " << acc << " has " << pre << " premium channels. The total for this user is $" << total << endl;

}
if(fl=="1") {
i=1;
cout << endl;
cout << "How many premuim channels do you have: ";
cin >> pre;
cout << "How many normal channels do you have: ";
cin >> add;
if (add < 10) {
  add = 0;
}
if (add > 10) {
  add = add-10;
  add = (ad*5);
}


total = total+15+75+(pre*7.50)+(50*add);
cout << endl;
cout << "The account number " << acc << " has " << pre << " premium channels, and $" << add << " normal channels. The total for this user is $" << total << endl;

}
if(fl != "1" && fl !="0"){
  cout << "That is not a proper account number. Please try again. " << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
}
}
while(i==0);
}