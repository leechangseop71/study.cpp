//01 Upcasting / downcasting

//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void Sleep() { cout << "Sleep" << endl; }
//};
//
//class Student : public Person
//{
//public:
//	void Study() { cout << "Study" << endl; }
//};
//
//class PartTimeStudent : public Student
//{
//public:
//	void Work() { cout << "Work" << endl; }
//};
//int main()
//{
//	//No Casting
//	//Person* ptr1 = new Person();
//	//ptr1->Sleep();						cout << "--------------" << endl;
//	//Student* ptr2 = new Student();
//	//ptr2->Sleep(); ptr2->Study();		cout << "--------------" << endl;
//	//PartTimeStudent* ptr3 = new PartTimeStudent();
//	//ptr3->Sleep(); ptr3->Study(); ptr3->Work(); cout << "--------------" << endl;
//
//	//Upcasting
//	//상위클래스 포인터 = 하위객체 연결
//	//왼쪽의 상위클래스형으로 자동 형변환
//	Person* ptr1 =new Student();	//Upcasting
//	//ptr1->Sleep(); ptr1->Study();
//
//	//Downcasting
//	//Upcasting된 상태에서 하위객체의 추가된 멤버에 접근하기 위한 형변환
//	//하위클래스 포인터 = 상위객체(or상위포인터) 연결
//	//이과정에서 메모리 침범하는 문제가 발생할수 있기 때문에 강제로 형변환 해야한다
//
//	cout << "-------------------" << endl;
//	Student* down =(Student*)ptr1;	//Downcasting
//	down->Sleep(); down->Study();
//
//
//
//	return 0;
//}

//업캐스팅 활용
 
//#include <iostream>
//using namespace std;
//
//class Par
//{
//public:
//	int x;
//};
//class son1 :public Par{
//public:
//	int s1;
//};
//class son2 :public Par {
//public:
//	int s2;
//};
//class son3 :public son2{
//public:
//	int s3;
//};
//
//void Func(Par* tmp) {
//	cout << "x : " << tmp->x << endl;
//}
//int main() {
//	son1 ob1; ob1.x = 10;  
//	son2 ob2; ob2.x = 20;
//	son3 ob3; ob3.x = 30;
//	Func(&ob1);
//	Func(&ob2);
//	Func(&ob3);
//
//	return 0;
//}


//03 다운캐스팅의 활용(수정 올릴게요~)





//04 업캐스팅 사용 이유 2

//가상함수 
//업캐스팅 상태에서 상위클래스 함수를 하위클래스가 재정의했을때 재정의한 함수에 접근을 허용하기 위한 문법
//함수 헤더 앞에 virtual 예약어를 사용한다

//순수가상함수
//상위클래스의 함수바디({})를 생략한 함수
//해당클래스는 객체생성이 불가능하다
//업캐스팅된 상태에서 재정의된 함수에 접근하기 위한 용도로만 사용
//자바에서는 추상메서드라고 불린다


//#include <iostream>
//using namespace std;
//class Animal {
//public:
//	
//	//virtual void sound() { cout << "소리를 냅니다" << endl; }	
//	
//	//순수가상함수 :body({})를 구성하지 않는 미완성된 멤버함수
//	virtual void sound()=0;
//};
//class Dog : public Animal {
//public:
//	void shakingtail() { cout << "꼬리를 흔듭니다" << endl; }
//	//재정의된 sound
//	void sound() { cout << "강아지가 멍멍 소리를 냅니다" << endl; }
//};
//class Cat : public Animal {
//public:
//	void GookGook() { cout << "꾹꾹이를 합니다" << endl; }
//};
//int main()
//{
//	Animal* ptr1 = new Dog(); //Upcasting , 상속받은 멤버는 접근가능,추가된 멤버는 접근불가
//	ptr1->sound();			//재정의된 sound()에 상위클래스 포인터가 접근가능(상위클래스멤버가 virtual 설정)
//	//ptr1->shakingtail(); //x 확장멤버에는 접근 불가..
//
//
//}