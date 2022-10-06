//#include<iostream>
//using namespace std;
//#include<math.h>
//class Circle {
//private:
//	double R;
//	int X;
//	int Y;
//public:
//	void setR(int r) {
//		this->R = r;
//	}
//	double getR() {
//		return R;
//	}
//	void setx(int x) {
//		this->X = x;
//	}
//	int getX() {
//		return X;
//	}
//	void setY(int y) {
//		this->Y = y;
//	}
//	int getY() {
//		return Y;
//	}
//};
//
//class Dot {
//private:
//	int X;
//	int Y;
//public:
//	void setx(int x) {
//		this->X = x;
//	}
//	int getX() {
//		return X;
//	}
//	void setY(int y) {
//		this->Y = y;
//	}
//	int getY() {
//		return Y;
//	}
//};
//void getRelation(Dot d, Circle c) {
//	if (((c.getX() - d.getX()) * (c.getX() - d.getX()) + (c.getY() - d.getY()) * (c.getY() - d.getY())) > (c.getR() * c.getR())) {
//		cout << "点在圆外" << endl;
//	}
//	else if (((c.getX() - d.getX()) * (c.getX() - d.getX()) + (c.getY() - d.getY()) * (c.getY() - d.getY())) < (c.getR() * c.getR())) {
//		cout << "点在圆内" << endl;
//	}
//	else {
//		cout << "点在圆上" << endl;
//	}
//}
//
//int main() {
//	Dot d;
//	Circle c;
//	d.setx(1);
//	d.setY(1);
//	c.setx(5);
//	c.setY(5);
//	c.setR(6);
//	getRelation(d, c);
//	system("pause");
//	return 0;
//}