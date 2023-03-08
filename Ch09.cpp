//01 상속 기본

//#include <iostream>
//using namespace std;
//
//class Super
//{
//private:
//	int num1;
//public:
//	Super() : num1(0) {};
//	void SetNum(int n)
//	{
//		num1 = n;
//	}
//	int getNum() {
//		return num1;
//	}
//	void ShowNum()
//	{
//		cout << "num1 :" << num1<<endl;
//	}
//};
//class Sub : public Super
//{
//private : 
//	int num2;
//public : 
//	Sub(int n1,int n2){
//		SetNum(n1);
//		this->num2 = n2;
//	}
//	void ShowN1N2() {
//		cout << "num1 : " << getNum() << " num2 : " << num2 << endl;
//	}
//};
//int main()
//{
//	Sub obj(10, 20);
//	obj.ShowNum();
//	obj.ShowN1N2();
//}

//02 상속 기본
//상속관계에서 하위클래스로 객체를 생성하는 경우 상위클래스의 디폴트 생성자 호출이 선행된다
//하위클래스에서 객체 생성시에 특정 상위클래스 생성자 호출을 위해서는 이니셜라이저와 상위클래스생성자 호출을 하면 된다.


//#include <iostream>
//using namespace std;
//
//class Super {
//public:
//	int x;
//	Super():x(0) { cout << "Super() 디폴트 생성자 호출!" << endl; }
//	Super(int x) :x(x) {
//		cout << "Super(int x) 생성자 호출!" << endl;
//	}
//};
//class Sub : public Super{
//public:
//	int y;
//	Sub() :y(0) { cout << "Sub() 디폴트 생성자 호출!" << endl; }
//	Sub(int x) : Super(x),y(0){
//	
//		cout << "Sub(int x) 생성자 호출!" << endl;
//	}
//};
//int main()
//{
//
//	//Sub ob;
//	Sub ob2(10);
//
//	return 0;
//}


//03 오버라이딩(함수재정의)
// 상위클래스로부터 물려받는 함수의 Body를 하위클래스에서 고쳐사용하는(재정의) 문법
// 다형성을 위해 고안된 코드 기법


// 오버로딩 : 함수의 이름은 그대로 , 함수의 매개변수는 다양하게 허용
// 오버라이딩 : 상속관계를 전제 함수헤더 고정, 함수바디 다양하게 허용

//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	void sound() {
//		cout << "소리를 냅니다" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void sound() {
//		cout << "야옹 소리를 냅니다" << endl;
//	}
//};
//class Dog : public Animal
//{
//public:
//	void sound() {
//		cout << "멍멍 소리를 냅니다" << endl;
//	}
//};
//int main()
//{
//	Dog Poppi;
//	Cat Yum;
//	Poppi.sound();
//	Yum.sound();
//	return 0;
//}


//04 상속관계에서 소멸자 호출 순서

//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	A() { cout << "A 생성자 호출" << endl; };
//	~A() { cout << "A 소멸자 호출" << endl; };
//
//};
//class B : public A
//{
//public:
//	B() { cout << "B 생성자 호출" << endl; };
//	~B() { cout << "B 소멸자 호출" << endl; };
//};
//int main()
//{
//	B obj2;
//}