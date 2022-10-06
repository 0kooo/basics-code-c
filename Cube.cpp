//#include<iostream>
//using namespace std;
//
//class Cube {
//private:
//	int H;
//	int L;
//	int W;
//public:
//	void setH(int h) {
//		this->H = h;
//	}
//	int getH() {
//		return H;
//	}
//	void setL(int l) {
//		this->L = l;
//	}
//	int getL() {
//		return L;
//	}
//	void setW(int w) {
//		this->W = w;
//	}
//	int getW() {
//		return W;
//	}
//	int getArea() {
//		return (H * L + H * W + L * W) * 2 ;
//	}
//	int getVolume() {
//		return H * L * W ;
//	}
//	bool cmpClass(Cube c) {
//		if (H == c.getH() && L == c.getL() && W == c.getW()) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//};
//
//bool cmpArea(Cube& c1, Cube& c2) {
//	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main() {
//	Cube c1;
//	Cube c2;
//	c1.setH(3);
//	c1.setL(3);
//	c1.setW(3);
//	c2.setH(4);
//	c2.setL(4);
//	c2.setW(4);
//	bool result = cmpArea(c1, c2);
//	if (result) {
//		cout << "c1和c2是相等的" << endl;
//	}
//	else{
//		cout << "c1和c2是不相等的" << endl;
//	}
//	system("pause");
//	return 0;
//}