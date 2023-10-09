#pragma once
#include <iostream>
using namespace std;

/*Реализовать классы: Человек, университет... На основе этих классов реализовать класс Студент.
Использовать множественное наследование. Организовать ввод, вывод информации*/

class Human {
	string name;
	int age;
public:
	Human() = default;
	Human(string n, int a) {
		name = n;
		age = a;
	}
	void EnterData() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter age: ";
		cin >> age;
	}
	void Print() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
	string GetName() {
		return name;
	}


};

class University {
	string univer;
	string address;
	string faсulty;
public:
	University() = default;
	University(string un, string adr, string facul) {
		univer = un;
		address = adr;
		faсulty = facul;
	}
	void EnterData() {
		cout << "Enter university name: ";
		cin >> univer;
		cout << "Enter address: ";
		cin >> address;
		cout << "Enter faсulty: ";
		cin >> faсulty;
	}
	void Print() {
		cout << "University: " << univer << endl;
		cout << "Address: " << address << endl;
		cout << "Faculty: " << faсulty << endl;
 	}
	string GetUniver() {
		return univer;
	}
	string GetAddress() {
		return address;
	}
	string GetFaculty() {
		return faсulty;
	}
};

class Student : public Human, public University
{
	int group;
	int marks[5] = {10,11,8,9,12};
public:
	Student() = default;
	Student(int g, string name, int age, string univer, string address, string faсulty):Human(name, age), University(univer, address, faсulty)
	{
		group = g;
	}
	void EnterData() {
		cout << "Enter group: ";
		cin >> group;
	}
	void Print() {
		Human::Print();
		University::Print();
		cout << "Group: " << group << endl;
		cout << "Marks: ";
		for (int i = 0; i < 5; i++) {
			cout << marks[i] << "\t";
		}
	}
};