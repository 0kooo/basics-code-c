#include<iostream>
using namespace std;
#include<string>
class ADD {
	friend ostream& operator<<(ostream& out, ADD a);
private:
	int number;
public:
	ADD() {
		number = 0;
	}
	ADD& operator++() {
		number++;
		return *this;
	}
	ADD operator++(int) {
		ADD temp = *this;
		number++;
		return temp;
	}
};

class DELET {
	friend ostream& operator<<(ostream& out, DELET a);
private:
	int number;
public:
	DELET() {
		number = 2;
	}
	DELET& operator--() {
		number--;
		return *this;
	}
	DELET operator--(int) {
		DELET temp = *this;
		number--;
		return temp;
	}
};

ostream& operator<<(ostream& out, ADD temp) {
	out << temp.number;
	return out;
 }

ostream& operator<<(ostream& out, DELET temp) {
	out << temp.number;
	return out;
}
void text1() {
	ADD add;
	cout << ++add << endl;
	cout << add++ << endl;
	cout << add << endl;
}
void text2() {
	DELET delet;
	cout << --delet << endl;
	cout << delet-- << endl;
	cout << delet << endl;
}
int main() {
	text1();
	cout << "--------------------------------" << endl;
	text2();
	system("pause");
	return 0;
}