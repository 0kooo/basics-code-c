#include<iostream>
using namespace std;
#include<string>
class Student {
public:
	string Name;
	int Id;
	void setData(string name, int id) {
		Name = name;
		Id = id; 
	}
	void getData() {
		cout << "ÐÕÃû: " << Name << endl;
		cout << "Ñ§ºÅ: " << Id << endl;
	}
};

int main() {
	Student s;
	s.setData("zhangsan", 10);
	s.getData();
	system("pause");
	return 0;
}