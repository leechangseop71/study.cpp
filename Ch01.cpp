//01 기본 출력

//#include <iostream> //input output stream : 기본 입출력 기능 제공 헤더
//
////::(범위지정연산자) : ~안에
////operator>>  operator<<  : 스트림 방향
//
////std::cout : 표준출력기능(console에 출력)
////std::endl : 개행처리(\n을 대체)
//int main()
//{
//	std::cout << "Hello World";	//std안에 cout(printf) 기능 사용하여 표준출력스트림방향으로 HelloWorld출력
//	std::cout << "Hello World\n"; //
//	std::cout << "1 + 2 =" << 1 + 2 << " 입니다\n";
//	std::cout << "개행은 endl로도 가능" << std::endl;
//	return 0;
//}


//02 기본 입력

//#include <iostream> //input output stream
//
//int main()
//{
//	int val1;
//	std::cout << "첫 번째 숫자입력: ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "두 번째 숫자입력: ";
//	std::cin >> val2;
//
//	int val3,val4;
//	std::cout << "세번째 네번째 숫자입력: ";
//	std::cin >> val3 >> val4;
//
//	int result = val1 + val2 + val3 + val4;
//	std::cout << "덧셈결과: " << result << std::endl;
//
//	return 0;
//}


//문제
//다음 내용이 출력되도록 해보세요

//당신의 이름은 무엇입니까?<이름입력받기>
//<입력된이름 출력> 님의 나이는 몇살입니까?<나이입력받기>
//<입력된이름 출력> 님의 나이는 <입력된나이 출력> 살 입니다

//#include <iostream>
//int main() {
//	char name[20];
//	int age;
//
//	std::cout << "당신의 이름은 무엇입니까? ";
//	std::cin >> name;
//	std::cout << name << "님의 나이는 몇살입니까 ? ";
//	std::cin >> age;
//	std::cout << name << " 님의 나이는 " << age << " 살입니다." << std::endl;
//
//	return 0;
//}



//03 함수 오버로딩
//함수명은 동일하게 두고 매개변수타입을 다양하게 둘 수 있도록 허용한 문법

//#include <iostream>
//
//int sum(int a,int b)
//{
//	std::cout << "sum(int,int)" << std::endl;
//	return a + b;
//}
//int sum(int a, int b,int c)
//{
//	std::cout << "sum(int,int,int)" << std::endl;
//	return a + b + c;
//}
//int sum(double a,double b)
//{
//	std::cout << "sum(double,double)" << std::endl;
//	return  (int)(a + b);
//}
//int main()
//{
//	std::cout << "정수의합 :" << sum(1, 2) << std::endl;
//	std::cout << "정수의합 :" << sum(1, 2, 3) << std::endl;
//	std::cout << "실수의합 :" << sum(1.2, 2.3) << std::endl;
//}



//문제

//다음 main 함수에서 필요로 하는 swap 함수를 오버로딩 해서 구현해보자

//#include <iostream>
//
//void swap(int*, int*);
//void swap(char*, char*);
//void swap(double*, double*);
//int main(void)
//{
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	char ch1 = 'A', ch2 = 'Z';
//	swap(&ch1, &ch2);
//	std::cout  << ch1 << ' ' << ch2 << std::endl;
//
//	double dbl1 = 1.111, dbl2 = 5.555;
//	swap(&dbl1, &dbl2);
//	std::cout << dbl1 << ' ' << dbl2 << std::endl;
//	return 0;
//}
//void swap(int* ptr1, int* ptr2) {
//	int tmp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = tmp;
//}
//void swap(char* ptr1, char* ptr2) {
//	char tmp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = tmp;
//}
//void swap(double* ptr1, double* ptr2) {
//	double tmp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = tmp;
//}

//
//[실행의 예]
//30 20
//Z A
//5.555 1.111



//04 매개변수 디폴트 값

//#include <iostream>
//
//int sum(int a=10,int b=20)
//{
//	return a + b;
//}
//int main()
//{
//	std::cout << "인자전달x :" << sum() << std::endl;
//	std::cout << "인자전달1 :" << sum(1) << std::endl;
//	std::cout << "인자전달2 :" << sum(1,2) << std::endl;
//}


//문제 1

//예제4 에 정의된 함수 sum를 '매개변수의 디폴트 값 지정' 형태가 아닌,
//'함수 오버로딩'의 형태로 재 구현해보자.물론 main 함수는 변경하지 않아야 하며, 실행 결과도
//동일해야 한다


//#include <iostream>
//int sum() { return 10 + 20; }
//int sum(int a) { return a + 10; }
//int sum(int a, int b) { return a + b; }
//
//int main()
//{
//	std::cout << "인자전달x :" << sum() << std::endl;
//	std::cout << "인자전달1 :" << sum(1) << std::endl;
//	std::cout << "인자전달2 :" << sum(1, 2) << std::endl;
//}


//05 inline 함수(vs #Define)
// 간결한 함수인 경우 호출과 리턴의 오버헤더를 줄이고자 고안된 예약어
// 컴파일 전에 code 내에 로직이 삽입이 되어 비교적 빠른함수처리가 가능하다

//#include <iostream>
//#define MSQR(x) x*x
//
//inline int SQR(int x) {
//	return x * x;
//}
//int main()
//{
//		int x = 5;
//		std::cout << "MSQR(X) : " << MSQR(x) << std::endl;
//		std::cout << "MSQR(X) : " << MSQR(x+3) << std::endl;
//		std::cout << "SQR(X) : "  << SQR(x) << std::endl;
//		std::cout << "SQR(X) : "  << SQR(x + 3) << std::endl;
//		return 0;
//}


//06 namespace 
// 함수(or 기능을 가지는클래스,객체)간의 이름중복을 방지하기 위해서 선언하는 논리적 이름구별영역

//#include <iostream>
//
//namespace BestComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "BestCom이 정의한 함수" << std::endl;
//	}
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "ProgCom이 정의한 함수" << std::endl;
//	}
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}

//07 

//#include <iostream>
//
//namespace Parent
//{
//	int num = 2;
//
//	namespace SubOne
//	{
//		int num = 3;
//	}
//	namespace SubTwo
//	{
//		int num = 4;
//	}
//}
//int main()
//{
//	std::cout << Parent::num << std::endl;
//	std::cout << Parent::SubOne::num << std::endl;
//	std::cout << Parent::SubTwo::num << std::endl;
//	using Parent::SubOne::num;	//USING 사용 - namespace를 생략할수있다.
//	std::cout << "NUM : " << num << std::endl;
//	return 0;
//}


//08 Using 사용하기

//#include<iostream>
//using namespace std;
//
////using std::cout;
////using std::endl;
////using std::cin;
//int main()
//{
//	std::cout << "HELLO WORLD" << std::endl;
//	cout << "HELLO WORLD"<<endl;
//	int num;
//	cin >> num;
//
//	return 0;
//}


//09 ::(범위지정연산자) 를 이용한 전역변수 처리

//#include <iostream>
//using namespace std;
//
//int val = 100; //전역변수 정의
//
//int main(void)
//{
//	int val = 20;	//지역변수 정의
//	val += 3;		//지역변수 접근
//	::val += 7;		//전역변수 접근	
//	
//	cout << "지역 변수 val : " << val << endl;
//	cout << "전역 변수 val : " << ::val << endl;
//
//	return 0;
//}



//템플릿

//#include <iostream> //input output stream
//
//int main()
//{
//
//	return 0;
//}
