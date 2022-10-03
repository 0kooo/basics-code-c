#include<iostream>
using namespace std;
#include<string>
class Cube {
private:
	int H;
	int L;
	int W;
public:
	void getData(int h, int l, int w) {
		H = h;
		L = l;
		W = w;
	}
	int getArea() {
		return (H * L + H * W + L * W) * 2 ;
	}
	void getVolume() {
		cout << "Ìå»ýÎª: " <<  H * L * W << endl;
	}
};

bool cmpArea(int area1, int area2) {
	return area1 == area2 ? true : false;
}

int main() {
	Cube c1;
	Cube c2;
	c1.getData(3, 3, 3);
	c2.getData(4, 4, 4);
	c1.getArea();
	c2.getArea();
	c1.getVolume();
	c2.getVolume();
	cmpArea(c1.getArea(), c2.getArea());
	system("pause");
	return 0;
}