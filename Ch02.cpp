//01 true/false 예약어가 생김

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	cout << "true: " << true << endl;
//	cout << "false: " << false << endl;
//	cout << "sizeof 1: " << sizeof(1) << endl;
//	cout << "sizeof 0: " << sizeof(0) << endl;
//	cout << "sizeof true: " << sizeof(true) << endl;
//	cout << "sizeof false: " << sizeof(false) << endl;
//	return 0;
//}

//02 bool 자료형

//#include <iostream>
//using namespace std;
//
//bool ispositive(int num)
//{
//    if (num < 0)
//        return false;
//    else
//        return true;
//}
//
//int main()
//{
//    bool ispos;
//    int num;
//    cout << "input number: ";
//    cin >> num;
//
//    ispos = ispositive(num);
//    if (ispos)
//        cout << "positive number" << endl;
//    else
//        cout << "negative number" << endl;
//
//    return 0;
//}


//03 참조자
 

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	int num1 = 1234;
//	int& num2 = num1;	//참조자 num2 가 num1을 참조
//	int* ptr = &num1;
//
//	num2 = 4567;
//	cout << "num1 변수값 : " << num1 << endl;
//	cout << "num2 참조변수 값: " << num2 << endl;
//	cout << "*ptr  값: " << *ptr << endl;
//
//	cout << "num1 변수 주소: " << &num1 << endl;
//	cout << "num2 참조변수 주소: " << &num2 << endl;
//	cout << "ptr포인터가 가리키는곳의 주소: " << ptr << endl;
//	
//	return 0;
//}

// 참조자 기본 규칙
// 1) 상수에는 불가능 (int &ref =20 (x))'
// 2) 참조자는 바로 초기화 해서 사용해야한다 ( int &ref (x))
// 3) 참조자는 NULL로 초기화 하면 안된다 (int &ref = NULL (x))


//04 참조자

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	int arr[3] = { 1, 3, 5 };
//	int& ref1 = arr[0];
//	int& ref2 = arr[1];
//	int& ref3 = arr[2];
//	
//	cout << ref1 << endl;
//	cout << ref2 << endl;
//	cout << ref3 << endl;
//	return 0;
//
//}


//05 포인터와 참조자

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	int num = 12;
//	int* ptr = &num;
//	int** dptr = &ptr;
//
//	int& ref = num;
//	int* (&pref) = ptr;
//	int** (&dpref) = dptr;
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//	return 0;
//}


//예제 6 - 매개변수에 참조자

//#include <iostream>
//using namespace std;
//
//void SwapByRef2(int& ref1, int& ref2) // int& ref1=val1, int& ref2=val2
//{
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//int main(void)
//{
//	int val1 = 10;
//	int val2 = 20;
//
//	SwapByRef2(val1, val2); //Call-by-Reference
//	cout << "val1: " << val1 << endl;
//	cout << "val2: " << val2 << endl;
//	return 0;
//}


//문제


//Main 함수를 참고하여 다음 요구사항에 부합하는 함수를 각각 정의하여라
//함수의 매개변수는 참조자형으로 한다
//     -> 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
//     -> 인자로 전달된 int형 변수의 부호를 바꾸는 함수(+이면 -로 , -이면 +로)

//#include <iostream>
//using namespace std;
//
//void AddOne(int & ref){
//	ref++;
//}
//void CodeChange(int & ref) {
//	ref = -ref;
//}
//int main()
//{
//	int num = 10;
//	AddOne(num);		//1씩 증가함수 호출
//	cout << num << endl;
//	CodeChange(num);	//부호 변경 함수 사용
//	cout << num << endl;
//
//	return 0;
//}



//07 반환형이 참조자인경우

//#include <iostream> //input output stream
//using namespace std;
//int& RefRetFuncOne(int& ref)
//{
//	ref++;
//	return ref;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = RefRetFuncOne(num1);		// int num2 = num1;	//num2안에 num1값 대입
//	int& num3 = RefRetFuncOne(num1);	// int& num3 = num1; //->num3은 num1을 참조
//				
//	num1 += 1;
//	num2 += 100;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	cout << "num3: " << num3 << endl;
//	return 0;
//}

//문제

//#include <iostream>
//using namespace std;
//int main()
//{
//	int num = 12;
//	int* ptr = &num;	//포인터 변수를 정의해서 num을 가리키는 코드 작성
//	int* (&ref) = ptr; //포인터 변수를 참조하는 참조자를 하나 정의
//
//	(*ptr)++;			//포인터 변수를 이용해서 num 값 1 증가
//	(*ref)++;			//참조자를 이용해서 num값 1증가
//	cout << num << endl;
//	return 0;
//}


//08 동적할당 malloc/free  vs new/delete

//#include <stdio.h>	//stdio.h ->cstdio
//#include <cstdlib> //stdlib.h -> cstdlib
//#include <cstring>  //string.h ->cstring
//#include <iostream>
//using namespace std;
//
//int main()
//{
//		//malloc 기본형
//		int* ptr1 = (int *)malloc(sizeof(int));	//malloc 생성
//		if(ptr1 == NULL) return -1;		//NULL체크 
//		*ptr1 = 10;	
//		cout << *ptr1 << endl;
//		free(ptr1);	//동적공간 소멸
//
//		//new 기본형
//		int* ptr2 = new int;			//new 생성
//		if (ptr2  == NULL) return -1;		//NULL체크 
//		*ptr2 = 20;
//		cout << *ptr2 << endl;
//		delete ptr2;	
//		
//		//malloc 배열형
//		char* str1 = (char*)malloc(sizeof(char) * 20); //malloc 생성
//		strcpy_s(str1, _msize(str1),"Hello World1");
//		cout << str1 << endl;
//		free(str1);	//malloc 소멸
//
//		char* str2 = new char[20];	//배열형 동적공간형성
//		strcpy_s(str2, _msize(str2), "Hello World2");
//		cout << str2 << endl;
//		delete[] str2;	//배열형 동적공간 소멸
//	
//	return 0;
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Simple
//{
//public:
//	Simple() { cout << "생성자 함수 호출됨!!" << endl; }
//};
//
//int main()
//{
//	//Simple * obj = new Simple;	//생성자 함수 호출!
//	Simple* obj =(Simple *)malloc(sizeof(Simple));	//생성자 함수 호출안됨..
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
