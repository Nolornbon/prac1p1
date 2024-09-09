#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	system("color 5B");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Surname
	string last_name;
	cout << "Enter surname: ";
	getline(cin, last_name);

	//Name
	string first_name;
	cout << "Enter name: ";
	getline(cin, first_name);
	
	//Adress
	string adres;
	cout << "Enter adress: ";
	getline(cin, adres);
	
	//Age
	int age;
	cout << "Enter age: ";
	cin >> age;
	
	//Clear
	cin.ignore();
	
	//Output
	cout << "\nYour data " << endl;
	cout << "\nYour surname: " << last_name << endl;
	cout << "\nYour name: " << first_name << endl;
	cout << "\nYour age: " << age << endl;
	cout << "\nYour adress: " << adres << endl;
	
	return 0;
}


