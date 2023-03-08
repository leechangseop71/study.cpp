//클래스 속성-기능 생각해보기

//나무
// 
//속성 : 잎 , 뿌리, 열매 , 가지 ,품종... 
//기능 : 광합성하기 , 물흡수하기 , 열매맺기
// 
//자동차
//속성	: 소유자,차종,현재속도,연료량...
//기능	: 가속하기,감속하기,방향등켜기....시동걸기..
// 
//에어컨
//속성	: 디스플레이,Fan , Vane , ...., 에너비소비등급..,SN..
//기능	: 냉풍,제습,ON,OFF..온도조절..
// 
//컴퓨터
//속성	: SN,CPUSpec,RAMSpec,DISKSpec......
//기능	: ON/OFF,APpstart...


//01 클래스 기본 - 속성 선언

//#include <iostream>
//using namespace std;
//
//class Car	//클래스 선언
//{
//public:		//접근지정자 - 멤버에 대한 접근 범위 지정
//	char owner[10];	//속성 - 멤버변수
//	int speed;
//	int fuel;
//};
//
//int main()
//{
//	Car hongCar = { "홍길동",0,100 };
//	cout << hongCar.owner << "," << hongCar.speed << "," << hongCar.fuel << endl;
//
//	return 0;
//}


// 문제

//#include <iostream>
//using namespace std;
//class Computer
//{
//public : 
//	char sn[10];
//	char CPUSpec[5];
//	char RAMSpec[5];
//	char DISKSpec[5];
//};
//
//int main()
//{
//	Computer com1 = { "1010-2222","I7","16G","1T" };
//	cout << com1.sn << endl;		//"1010-2222" 출력
//	cout << com1.CPUSpec << endl;	//"I7" 출력
//	cout << com1.RAMSpec << endl;	//"16G" 출력
//	cout << com1.DISKSpec << endl;	//"1T" 출력
//
//	return 0;
//}


//02 클래스 기보 - 기능 선언

//#include <iostream>
//using namespace std;
//
//class car			// 클래스 선언
//{
//public:				// 접근지정자 - 멤버에 대한 접근 범위 지정
//	char owner[10];	// 속성 - 멤버변수
//	int speed;
//	int fuel;
//public:
//	void Accel() { cout << "가속합니다" << endl; }
//	void Break() { cout << "감속합니다" << endl; }
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//	}
//};
//
//int main()
//{
//	car hongcar = { "홍길동",0,100 };
//	//cout << hongcar.owner << "," << hongcar.speed << "," << hongcar.fuel << endl;
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//
//	return 0;
//}


//문제
//컴퓨터 클래스에서 전워켜기, 전원 끄기 멤버함수를 추가하세요
//전원켜기 : void PowerOn();	//전원을 켭니다.
//전원끄기 : void PowerOff();	//전원을 끕니다.
//어플실행 : void AppStart();	//어플 실행 합니다.

//#include <iostream>
//using namespace std;
//class Computer
//{
//public : 
//	char sn[10];
//	char CPUSpec[5];
//	char RAMSpec[5];
//	char DISKSpec[5];
//public :
//	void PowerOn() { cout << "전원을 켭니다" << endl; };
//	void PowerOff() { cout << "전원을 끕니다" << endl; };
//	void AppStart() { cout << "어플 실행 합니다" << endl; };
//};
//
//int main()
//{
//	Computer com1 = { "1010-2222","I7","16G","1T" };
//	cout << com1.sn << endl;		//"1010-2222" 출력
//	cout << com1.CPUSpec << endl;	//"I7" 출력
//	cout << com1.RAMSpec << endl;	//"16G" 출력
//	cout << com1.DISKSpec << endl;	//"1T" 출력
//
//	return 0;
//}




//03 멤버함수 오버로딩

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class car			// 클래스 선언
//{
//public:				// 접근지정자 - 멤버에 대한 접근 범위 지정
//	char owner[10];	// 속성 - 멤버변수
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	void Accel() { cout << "가속합니다" << endl; }
//	void Break() { cout << "감속합니다" << endl; }
//	void AddCupHolder(const char * cup1) //음료수 1개
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1),cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), "없음");
//	}
//	void AddCupHolder(const char* cup1, const char* cup2) //음료수 2개
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//	}
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//		cout << "cup1 : " << cpuholder1 << endl;
//		cout << "cup2 : " << cpuholder2 << endl;
//	}
//};
//int main()
//{
//	car hongcar = { "홍길동",0,100 };
//	hongcar.AddCupHolder("아메리카노","식혜");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//	return 0;
//}



//문제
//AppStart함수를 다음과같이 오버로딩 해보세요
//실행하기 함수() : AppStart(const char * app1 )	-> 1 app1을 실행합니다 가 출력
//실행하기 함수() : AppStart(const char * app1 , const char * app2)  1 app1 , 2 app2  을 실행합니다 가 출력
//실행하기 함수() : AppStart(const char * app1 , const char * app2, const char * app3) 1 app1 , 2 app2 , 3 app3 을 실행합니다 가 출력

//#include <iostream>
//using namespace std;
//class Computer
//{
//public : 
//	char sn[10];
//	char CPUSpec[5];
//	char RAMSpec[5];
//	char DISKSpec[5];
//public :
//	void PowerOn() { cout << "전원을 켭니다" << endl; };
//	void PowerOff() { cout << "전원을 끕니다" << endl; };
//	void AppStart() { cout << "어플 실행 합니다" << endl; };
//	void AppStart(const char* app1) {
//		cout << app1 << " 을 실행합니다." << endl;
//	}
//	void AppStart(const char* app1, const char* app2) {
//		cout << app1 << ","<<app2<<" 을 실행합니다." << endl;
//	}
//	void AppStart(const char* app1, const char* app2, const char* app3) {
//		cout << app1 << "," << app2 << "," << app3  << " 을 실행합니다." << endl;
//	}
//};
//int main()
//{
//	Computer com1 = { "1010-2222","I7","16G","1T" };
//	com1.AppStart("Excel");
//	com1.AppStart("메모장","워드패드");
//	com1.AppStart("메모장", "워드패드","지뢰찾기");
//	cout << com1.sn << endl;		//"1010-2222" 출력
//	cout << com1.CPUSpec << endl;	//"I7" 출력
//	cout << com1.RAMSpec << endl;	//"16G" 출력
//	cout << com1.DISKSpec << endl;	//"1T" 출력
//
//	return 0;
//}


//04 멤버함수에서 멤버변수에접근(this예약어)

//#include <iostream>
//#include <cstring>
//#include <Windows.h>
//using namespace std;
//
//class car			// 클래스 선언
//{
//public:				// 접근지정자 - 멤버에 대한 접근 범위 지정
//	char owner[10];	// 속성 - 멤버변수
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	void Accel() { 
//
//		//연료량체크(fuel<0) 
//		//가속 하기(가속시 연료량 -5)
//		//현재속도 + 10 
//		//최대시속 200km/h
//		if (this->fuel - 5 < 0) {
//			cout << "연료가 부족합니다..." << endl;
//			return;
//		}
//		fuel -= 5;
//		if (this->speed + 10 >= 200) {
//			this->speed = 200;
//			cout << "최대 속도 입니다. 현재속도 : 200km/h" << endl;
//		}
//		else {
//			this->speed += 10;
//			cout << "현재속도 : "<< this->speed <<"km/h" << endl;
//		}
//
//	}
//	void Break() {
//		//현재속도 체크
//		//현재속도 -5
//		if (this->speed-5<0) {
//			this->speed = 0;
//			cout << "차가 정지합니다." << endl;
//			return;
//		}
//
//		this->speed -= 5;
//		cout << "감속합니다..현재속도 : " << this->speed << "km/h" << endl;
//	
//	}
//	void AddCupHolder(const char * cup1) //음료수 1개
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1),cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), "없음");
//	}
//	void AddCupHolder(const char* cup1, const char* cup2) //음료수 2개
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//	}
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//		cout << "cup1 : " << cpuholder1 << endl;
//		cout << "cup2 : " << cpuholder2 << endl;
//	}
//};
//int main()
//{
//	car hongcar = { "홍길동",0,100 };
//	hongcar.AddCupHolder("아메리카노","식혜");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//	while (true)
//	{
//		hongcar.Accel();
//		Sleep(1000);
//
//	}
//	return 0;
//}


//05 생성자함수
// 객체 생성시 필요한 초기값 부여
// 클래스명과 동일
// 매개변수형 지정을 통해 외부로부터 초기값을 전달받아 객체초기값 전달
// 반환자료형이 없다
// 객체생성시에 1회 호출
// 생성자함수를 클래스내에서 명시하지않는 경우는 컴파일러에 의해 기본적으로
// 주입되는 생성자를 통해 생성한다(디폴트생성자)


//#include <iostream>
//using namespace std;
//
//class Simple {
//public : 
//	int x;
//	int y;
//public :
//	Simple() {
//		cout << "디폴트 생성자 호출" << endl;
//		x = 0; y = 0;
//	}
//	Simple(int x){
//		cout << "Simple(int) 생성자 호출" << endl;
//		this->x = x;
//		this->y = 0;
//	}
//	Simple(int x , int y){
//		cout << "Simple(int,int) 생성자 호출" << endl;
//		this->x = x;
//		this->y = y;
//	}
//	void Info() {
//		cout << this->x << "," << this->y << endl;
//	}
//};
//int main()
//{
//	Simple obj1;	obj1.Info();			//객체 생성완료!
//	Simple obj2(100); obj2.Info();
//	Simple obj3(100, 200); obj3.Info();
//
//	return 0;
//}



//문제 - 생성자함수를 통한 초기값 부여

//#include <iostream>
//#include <cstring>
//#include <Windows.h>
//using namespace std;
//
//class car			// 클래스 선언
//{
//public:				// 접근지정자 - 멤버에 대한 접근 범위 지정
//	char owner[10];	// 속성 - 멤버변수
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	car() {}
//	car(const char * owner , int speed, int fuel) {
//		strcpy_s(this->owner, sizeof(this->owner), owner);	//멤버변수 owner 에 외부로부터 받은 owner 대입	
//		this->speed = speed;								//멤버변수 speed 에 외부로부터 받은 speed 대입		
//		this->fuel = fuel;									//멤버변수 fuel 에 외부로부터 받은 fuel 대입
//
//	}
//	void Accel() { 
//
//		//연료량체크(fuel<0) 
//		//가속 하기(가속시 연료량 -5)
//		//현재속도 + 10 
//		//최대시속 200km/h
//		if (this->fuel - 5 < 0) {
//			cout << "연료가 부족합니다..." << endl;
//			return;
//		}
//		fuel -= 5;
//		if (this->speed + 10 >= 200) {
//			this->speed = 200;
//			cout << "최대 속도 입니다. 현재속도 : 200km/h" << endl;
//		}
//		else {
//			this->speed += 10;
//			cout << "현재속도 : "<< this->speed <<"km/h" << endl;
//		}
//
//	}
//	void Break() {
//		//현재속도 체크
//		//현재속도 -5
//		if (this->speed-5<0) {
//			this->speed = 0;
//			cout << "차가 정지합니다." << endl;
//			return;
//		}
//
//		this->speed -= 5;
//		cout << "감속합니다..현재속도 : " << this->speed << "km/h" << endl;
//	
//	}
//	void AddCupHolder(const char * cup1) //음료수 1개
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1),cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), "없음");
//	}
//	void AddCupHolder(const char* cup1, const char* cup2) //음료수 2개
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//	}
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//		cout << "cup1 : " << cpuholder1 << endl;
//		cout << "cup2 : " << cpuholder2 << endl;
//	}
//};
//int main()
//{
//	car hongcar("홍길동",0,100);	// 생성자 함수추가하여 초기값 넣어줍니다.
//	hongcar.AddCupHolder("아메리카노","식혜");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//	car test;
//	return 0;
//}
//주의 
//생성자 함수가 없으면 디폴트생성자 함수가 자동주입
//생성자 함수가 있으면 디폴트생성자 함수는 주입되지 않는다!...



//06 이니셜라이저(:) 사용을 통한 초기값 부여

//#include <iostream>
//using namespace std;
//
//class Simple {
//public : 
//	int x;
//	int y;
//public :
//	Simple() :x(0),y(0){
//		cout << "디폴트 생성자 호출" << endl;
//	}
//	Simple(int x):x(x),y(0)
//	{
//		cout << "Simple(int) 생성자 호출" << endl;
//	}
//	Simple(int x , int y):x(x),y(y){
//		cout << "Simple(int,int) 생성자 호출" << endl;
//	}
//	void Info() {
//		cout << this->x << "," << this->y << endl;
//	}
//};
//int main()
//{
//	Simple obj1;	obj1.Info();			//객체 생성완료!
//	Simple obj2(100); obj2.Info();
//	Simple obj3(100, 200); obj3.Info();
//
//	return 0;
//}


//문제 - 이니셜라이저 추가
 
//#include <iostream>
//#include <cstring>
//#include <Windows.h>
//using namespace std;
//
//class car			// 클래스 선언
//{
//public:				// 접근지정자 - 멤버에 대한 접근 범위 지정
//	char owner[10];	// 속성 - 멤버변수
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	car() {}
//	car(const char * owner , int speed, int fuel):speed(speed),fuel(fuel) {
//		strcpy_s(this->owner, sizeof(this->owner), owner);	//멤버변수 owner 에 외부로부터 받은 owner 대입	
//	}
//	void Accel() { 
//
//		//연료량체크(fuel<0) 
//		//가속 하기(가속시 연료량 -5)
//		//현재속도 + 10 
//		//최대시속 200km/h
//		if (this->fuel - 5 < 0) {
//			cout << "연료가 부족합니다..." << endl;
//			return;
//		}
//		fuel -= 5;
//		if (this->speed + 10 >= 200) {
//			this->speed = 200;
//			cout << "최대 속도 입니다. 현재속도 : 200km/h" << endl;
//		}
//		else {
//			this->speed += 10;
//			cout << "현재속도 : "<< this->speed <<"km/h" << endl;
//		}
//
//	}
//	void Break() {
//		//현재속도 체크
//		//현재속도 -5
//		if (this->speed-5<0) {
//			this->speed = 0;
//			cout << "차가 정지합니다." << endl;
//			return;
//		}
//
//		this->speed -= 5;
//		cout << "감속합니다..현재속도 : " << this->speed << "km/h" << endl;
//	
//	}
//	void AddCupHolder(const char * cup1) //음료수 1개
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1),cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), "없음");
//	}
//	void AddCupHolder(const char* cup1, const char* cup2) //음료수 2개
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//	}
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//		cout << "cup1 : " << cpuholder1 << endl;
//		cout << "cup2 : " << cpuholder2 << endl;
//	}
//};
//int main()
//{
//	car hongcar("홍길동",0,100);	// 생성자 함수추가하여 초기값 넣어줍니다.
//	hongcar.AddCupHolder("아메리카노","식혜");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//	car test;
//	return 0;
//}
//주의 
//생성자 함수가 없으면 디폴트생성자 함수가 자동주입
//생성자 함수가 있으면 디폴트생성자 함수는 주입되지 않는다!...


//문제 

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Computer
//{
//public : 
//	char sn[10];
//	char CPUSpec[5];
//	char RAMSpec[5];
//	char DISKSpec[5];
//public :
//	Computer(const char *sn , const  char *cpu , const  char* ram , const char* disk) {
//		strcpy_s(this->sn, sizeof(this->sn), sn);
//		strcpy_s(this->CPUSpec, sizeof(this->CPUSpec), cpu);
//		strcpy_s(this->RAMSpec, sizeof(this->RAMSpec), ram);
//		strcpy_s(this->DISKSpec, sizeof(this->DISKSpec), disk);
//	}
//	void PowerOn() { cout << "전원을 켭니다" << endl; };
//	void PowerOff() { cout << "전원을 끕니다" << endl; };
//	void AppStart() { cout << "어플 실행 합니다" << endl; };
//	void AppStart(const char* app1) {
//		cout << app1 << " 을 실행합니다." << endl;
//	}
//	void AppStart(const char* app1, const char* app2) {
//		cout << app1 << ","<<app2<<" 을 실행합니다." << endl;
//	}
//	void AppStart(const char* app1, const char* app2, const char* app3) {
//		cout << app1 << "," << app2 << "," << app3  << " 을 실행합니다." << endl;
//	}
//};
//int main()
//{
//	Computer com1( "1010-2222","I7","16G","1T"); //생성자함수로 객체 생성하기!
//	com1.AppStart("Excel");
//	com1.AppStart("메모장","워드패드");
//	com1.AppStart("메모장", "워드패드","지뢰찾기");
//	cout << com1.sn << endl;		//"1010-2222" 출력
//	cout << com1.CPUSpec << endl;	//"I7" 출력
//	cout << com1.RAMSpec << endl;	//"16G" 출력
//	cout << com1.DISKSpec << endl;	//"1T" 출력
//
//	return 0;
//}


//07 소멸자의 사용
//객체 소멸시에 사용
//클래스명과 동일하며 함수명 앞에 ~를 붙인다

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public :
//	int x;
//public : 
//	Simple(int x) {
//		this->x = x;
//		cout << "Simple(x)생성자 사용!" << endl;
//	}
//	~Simple() {
//		cout << "디폴트 소멸자 사용! x="<<this->x << endl;
//	}
//};
//int main()
//{
//	Simple ob1(10);
//	cout << "ob1.x = " << ob1.x << endl;
//	Simple ob2(20);
//	cout << "ob2.x = " << ob2.x << endl;
//
//}


//08 정보은닉(접근한정자)
//public		: 외부에서 멤버에 접근 허용
//protected		: 상속관계에서 상위클래스의 멤버에 하위클래스의 접근 허용
//private		: 외부에서 접근 불가(정보은닉에 사용)

//08-01 기본 예제

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person {
//public :
//	char name[30];
//private :
//	int age;
//	double weight;
//	double height;
//public :
//	Person(const char * name)
//	{
//		strcpy_s(this->name, sizeof(this->name), name);
//		age = 0; weight = 0.0; height = 0.0;
//		cout << "Person(char* name) 생성자 호출!" << endl;
//	}
//	//Getter and Setter 함수 추가
//	void setAge(int age) {
//		this->age = age;
//	}
//	int getAge() {
//		return this->age;
//	}
//	void setWeight(double weight) {
//		this->weight = weight;
//	}
//	double getWeight() {
//		return this->weight;
//	}
//	void setHeight(double height) {
//		this->height = height;
//	}
//	double getHeight() {
//		return this->height;
//	}
//
//	//ShowInfo
//	void ShowMemberInfo() {
//		cout << "name : " << this->name << endl;
//		cout << "age : " << this->age << endl;
//	}
//
//};
//int main() {
//	Person hong("홍길동");
//	hong.setAge(30);
//	hong.ShowMemberInfo();
//
//	return 0;
//}

//08-02 초기값 변경 불가 / 조회 가능

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person {
//public :
//	char name[30];
//private :
//	int age;
//	double weight;
//	double height;
//
//public :
//	Person(const char * name,int age,double weight,double height): age(age),weight(weight),height(height)
//	{
//		strcpy_s(this->name, sizeof(this->name), name);
//		cout << "Person(char* name) 생성자 호출!" << endl;
//	}
//	//Getter함수 추가
//	int getAge() {
//		return this->age;
//	}
//	double getWeight() {
//		return this->weight;
//	}
//	double getHeight() {
//		return this->height;
//	}
//	//ShowInfo
//	void ShowMemberInfo() {
//		cout << "name : " << this->name << endl;
//		cout << "age : " << getAge() << endl;
//		cout << "weight : " << getWeight() << endl;
//		cout << "height : " << getHeight() << endl;
//	}
//
//};
//int main() {
//	Person hong("홍길동",40,70.5,177.5);
//	hong.ShowMemberInfo();
//	
//
//	return 0;
//}


//09 클래스밖으로 멤버함수 정의

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person {
//public :
//	char name[30];
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
//};
//int main() {
//	Person hong("홍길동");
//	hong.setAge(30);
//	hong.ShowMemberInfo();
//
//	return 0;
//}
//Person::Person(const char* name)
//{
//	strcpy_s(this->name, sizeof(this->name), name);
//	age = 0; weight = 0.0; height = 0.0;
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
//	cout << "name : " << this->name << endl;
//	cout << "age : " << this->age << endl;
//}



//문제 클래스내의 함수를 main함수 아래로 분할하고 inline화 하세요

//#include <iostream>
//#include <cstring>
//#include <Windows.h>
//using namespace std;
//
//class car			// 클래스 선언
//{
//public:				// 접근지정자 - 멤버에 대한 접근 범위 지정
//	char owner[10];	// 속성 - 멤버변수
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	car();
//	car(const char* owner, int speed, int fuel);
//	void Accel();
//	void Break();
//	void AddCupHolder(const char* cup1);
//	void AddCupHolder(const char* cup1, const char* cup2);
//	void Info();
//};
//int main()
//{
//	car hongcar("홍길동",0,100);	// 생성자 함수추가하여 초기값 넣어줍니다.
//	hongcar.AddCupHolder("아메리카노","식혜");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//	car test;
//	return 0;
//}
//
//car::car() {}
//car::car(const char* owner, int speed, int fuel) {
//	strcpy_s(this->owner, sizeof(this->owner), owner);	//멤버변수 owner 에 외부로부터 받은 owner 대입	
//	this->speed = speed;								//멤버변수 speed 에 외부로부터 받은 speed 대입		
//	this->fuel = fuel;									//멤버변수 fuel 에 외부로부터 받은 fuel 대입
//
//}
//void car::Accel() {
//	if (this->fuel - 5 < 0) {
//		cout << "연료가 부족합니다..." << endl;
//		return;
//	}
//	fuel -= 5;
//	if (this->speed + 10 >= 200) {
//		this->speed = 200;
//		cout << "최대 속도 입니다. 현재속도 : 200km/h" << endl;
//	}
//	else {
//		this->speed += 10;
//		cout << "현재속도 : " << this->speed << "km/h" << endl;
//	}
//
//}
//void car::Break() {
//	if (this->speed - 5 < 0) {
//		this->speed = 0;
//		cout << "차가 정지합니다." << endl;
//		return;
//	}
//
//	this->speed -= 5;
//	cout << "감속합니다..현재속도 : " << this->speed << "km/h" << endl;
//
//}
//void car::AddCupHolder(const char* cup1) //음료수 1개
//{
//	strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//	strcpy_s(cpuholder2, sizeof(cpuholder2), "없음");
//}
//void car::AddCupHolder(const char* cup1, const char* cup2) //음료수 2개
//{
//	strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//	strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//}
//void car::Info() {
//	cout << "owner : " << owner << endl;
//	cout << "speed : " << speed << endl;
//	cout << "fuel  : " << fuel << endl;
//	cout << "cup1 : " << cpuholder1 << endl;
//	cout << "cup2 : " << cpuholder2 << endl;
//}