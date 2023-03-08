//01 객체를 가리키는 포인터

//#include <iostream>
//#include <string>
//using namespace std;
//class Simple {
//private:
//	string name;
//public:
//	Simple() : name("없음") {
//		cout << "디폴트 생성자 호출!" << endl;
//	}
//	Simple(string name) :name(name) {
//		cout << "Simple(name) 생성자 호출!" << endl;
//	}
//	void setName(string name) {
//		this->name = name;
//	}
//	void Info() {
//		cout << "name : " << this->name << endl;
//	}
//
//};
//int main()
//{
//	//기본 main stack 객체 
//	Simple ob1("홍길동");	//main stack에 ob1객체 생성,name=홍길동 저장
//	ob1.Info();
//	ob1.setName("남길동");
//
//	//기본 main stack 포인터에 객체 연결
//	Simple* ptr = &ob1;		//ptr포인터에 ob1주소 연결
//	ptr->setName("김성훈");
//	ptr->Info();
//
//	//객체배열 main stack
//	cout << "------------------------------" << endl;
//	Simple arr[3];
//	for (int i = 0; i < 3; i++) {
//		arr[i].Info();
//	}
//
//	return 0;
//}


//02 객체배열의 동적할당

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int x;
//public:
//	Simple() :x(0) {
//		cout << "디폴트 생성자 호출" << endl;
//	}
//	~Simple() {
//		cout << "디폴트 소멸자 호출 X : "<< this->x << endl;
//	}
//};
//int main()
//{
//	cout << "-----------------------" << endl;
//	//Simple ob;						// 메인스택에서의 객체(생성자호출 , 소멸자호출 자동)
//	
//	//Simple* ptr = new Simple;		// 동적할당 단일 객체	(소멸자호출 delete로 지정)
//	//delete ptr;						// 소멸자 호출 
//	
//	Simple* arr = new Simple[3];	// 동적할당 배열 객체 (소멸자호출 delete[] 로 지정)
//	arr[0].x = 10;
//	arr[1].x = 20;
//	arr[2].x = 30;
//	delete[] arr;					// 소멸자 호출
//	cout << "-----------------------" << endl;
//
//	return 0;
//}


//03 클래스 멤버의 동적할당

//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//private:
//	string* name;
//	string* addr;
//public : 
//	Person():name(0), addr(0) {
//		cout << "디폴트 생성자 호출!" << endl;
//	}
//	Person& setName(const char * name) {
//		this->name = new string(name);
//		
//		return *this;
//	}
//	Person& setAddr(const char * addr) {
//		this->addr = new string(addr);
//		return *this;
//	}
//	void info() {
//		cout << "-----------------------------" << endl;
//		cout << "이름 : " << *(this->name) << endl;
//		cout << "나이 : " << *(this->addr) << endl;
//		cout << "-----------------------------" << endl;
//	}
//	~Person() {
//		cout << "디폴트 소멸자 호출! " <<  "이름 : "<< *(this->name) <<" 주소 : "<<*(this->addr) << endl;
//		delete name;
//		delete addr;
//	}
//};
//int main()
//{
//	Person* list = new Person[3];
//	list[0].setName("홍길동").setAddr("대구");
//	list[1].setName("이승철").setAddr("서울");
//	list[2].setName("허각").setAddr("인천");
//	for (int i = 0; i < 3; i++) {
//		list[i].info();
//	}
//
//	//소멸
//	delete[] list;
//
//
//	return 0;
//}


//04 문제

//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//class Person {
//public :
//	string *name;
//private :
//	int age;
//	double weight;
//	double height;
//public :
//	Person(const char* name);
//	//Getter and Setter 함수 추가
//	void setAge(int age);		//만약 함수본체{}가 클래스에 내에 있다면 자동 inline화가 된다..외부로 분할했기때문에inline x
//	int getAge();
//	void setWeight(double weight);
//	double getWeight();
//	void setHeight(double height);
//	double getHeight();
//	void ShowMemberInfo();
//	~Person();
//};
//int main() {
//	Person hong("홍길동");
//	hong.setAge(30);
//	hong.ShowMemberInfo();
//
//	return 0;
//}
//Person::Person(const char* name):age(0),weight(0.0),height(0.0)
//{
//	this->name = new string(name);
//	if (this->name == NULL) {
//		cout << "객체 생성 실패..." << endl;
//		return;
//	}
//	cout << "Person(char* name) 생성자 호출!" << endl;
//}
//
//inline void Person::setAge(int age) {
//	this->age = age;
//}
//inline int Person::getAge() {
//	return this->age;
//}
//inline void Person::setWeight(double weight) {
//	this->weight = weight;
//}
//inline double Person::getWeight() {
//	return this->weight;
//}
//inline void Person::setHeight(double height) {
//	this->height = height;
//}
//inline double Person::getHeight() {
//	return this->height;
//}
////ShowInfo
//inline void Person::ShowMemberInfo() {
//	cout << "name : " << *(this->name) << endl;
//	cout << "age : " << this->age << endl;
//}
//Person::~Person() {
//	cout << "소멸자 호출" << " 이름 : " << *(this->name) << endl;
//	delete name;
//}