//01 true/false ���� ����

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

//02 bool �ڷ���

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


//03 ������
 

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	int num1 = 1234;
//	int& num2 = num1;	//������ num2 �� num1�� ����
//	int* ptr = &num1;
//
//	num2 = 4567;
//	cout << "num1 ������ : " << num1 << endl;
//	cout << "num2 �������� ��: " << num2 << endl;
//	cout << "*ptr  ��: " << *ptr << endl;
//
//	cout << "num1 ���� �ּ�: " << &num1 << endl;
//	cout << "num2 �������� �ּ�: " << &num2 << endl;
//	cout << "ptr�����Ͱ� ����Ű�°��� �ּ�: " << ptr << endl;
//	
//	return 0;
//}

// ������ �⺻ ��Ģ
// 1) ������� �Ұ��� (int &ref =20 (x))'
// 2) �����ڴ� �ٷ� �ʱ�ȭ �ؼ� ����ؾ��Ѵ� ( int &ref (x))
// 3) �����ڴ� NULL�� �ʱ�ȭ �ϸ� �ȵȴ� (int &ref = NULL (x))


//04 ������

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


//05 �����Ϳ� ������

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


//���� 6 - �Ű������� ������

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


//����


//Main �Լ��� �����Ͽ� ���� �䱸���׿� �����ϴ� �Լ��� ���� �����Ͽ���
//�Լ��� �Ű������� ������������ �Ѵ�
//     -> ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
//     -> ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�(+�̸� -�� , -�̸� +��)

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
//	AddOne(num);		//1�� �����Լ� ȣ��
//	cout << num << endl;
//	CodeChange(num);	//��ȣ ���� �Լ� ���
//	cout << num << endl;
//
//	return 0;
//}



//07 ��ȯ���� �������ΰ��

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
//	int num2 = RefRetFuncOne(num1);		// int num2 = num1;	//num2�ȿ� num1�� ����
//	int& num3 = RefRetFuncOne(num1);	// int& num3 = num1; //->num3�� num1�� ����
//				
//	num1 += 1;
//	num2 += 100;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	cout << "num3: " << num3 << endl;
//	return 0;
//}

//����

//#include <iostream>
//using namespace std;
//int main()
//{
//	int num = 12;
//	int* ptr = &num;	//������ ������ �����ؼ� num�� ����Ű�� �ڵ� �ۼ�
//	int* (&ref) = ptr; //������ ������ �����ϴ� �����ڸ� �ϳ� ����
//
//	(*ptr)++;			//������ ������ �̿��ؼ� num �� 1 ����
//	(*ref)++;			//�����ڸ� �̿��ؼ� num�� 1����
//	cout << num << endl;
//	return 0;
//}


//08 �����Ҵ� malloc/free  vs new/delete

//#include <stdio.h>	//stdio.h ->cstdio
//#include <cstdlib> //stdlib.h -> cstdlib
//#include <cstring>  //string.h ->cstring
//#include <iostream>
//using namespace std;
//
//int main()
//{
//		//malloc �⺻��
//		int* ptr1 = (int *)malloc(sizeof(int));	//malloc ����
//		if(ptr1 == NULL) return -1;		//NULLüũ 
//		*ptr1 = 10;	
//		cout << *ptr1 << endl;
//		free(ptr1);	//�������� �Ҹ�
//
//		//new �⺻��
//		int* ptr2 = new int;			//new ����
//		if (ptr2  == NULL) return -1;		//NULLüũ 
//		*ptr2 = 20;
//		cout << *ptr2 << endl;
//		delete ptr2;	
//		
//		//malloc �迭��
//		char* str1 = (char*)malloc(sizeof(char) * 20); //malloc ����
//		strcpy_s(str1, _msize(str1),"Hello World1");
//		cout << str1 << endl;
//		free(str1);	//malloc �Ҹ�
//
//		char* str2 = new char[20];	//�迭�� ������������
//		strcpy_s(str2, _msize(str2), "Hello World2");
//		cout << str2 << endl;
//		delete[] str2;	//�迭�� �������� �Ҹ�
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
//	Simple() { cout << "������ �Լ� ȣ���!!" << endl; }
//};
//
//int main()
//{
//	//Simple * obj = new Simple;	//������ �Լ� ȣ��!
//	Simple* obj =(Simple *)malloc(sizeof(Simple));	//������ �Լ� ȣ��ȵ�..
//	return 0;
//}


//���ø�

//#include <iostream> //input output stream
//
//int main()
//{
//
//	return 0;
//}
