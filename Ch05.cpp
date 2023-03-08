//01 this抗距绢 犬牢

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int x;
//public:
//	Simple(int x) {
//		this->x = x;
//		cout << "积己等 按眉 林家 : " << this << endl;
//	}
//};
//
//int main()
//{
//
//	Simple ob1(10);
//	cout << "MAIN俊辑 林家犬牢 : " << &ob1 << endl;
//	Simple ob2(20);
//	cout << "MAIN俊辑 林家犬牢 : " << &ob2 << endl;
//
//
//	return 0;
//}

//02 self-Reference 馆券

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int x;
//public:
//	Simple(int x) {
//		this->x = x;
//		cout << "积己等 按眉 林家 : " << this << endl;
//	}
//	Simple& Add(int x) {
//		this->x += x;
//		return * this;
//	}
//};
//
//int main()
//{
//
//	Simple ob1(10);
//	ob1.Add(1).Add(2).Add(3).Add(5); 
//	cout << "ob1.x = "<<ob1.x<< endl;
//
//
//	return 0;
//}