//01 �⺻ ���

//#include <iostream> //input output stream : �⺻ ����� ��� ���� ���
//
////::(��������������) : ~�ȿ�
////operator>>  operator<<  : ��Ʈ�� ����
//
////std::cout : ǥ����±��(console�� ���)
////std::endl : ����ó��(\n�� ��ü)
//int main()
//{
//	std::cout << "Hello World";	//std�ȿ� cout(printf) ��� ����Ͽ� ǥ����½�Ʈ���������� HelloWorld���
//	std::cout << "Hello World\n"; //
//	std::cout << "1 + 2 =" << 1 + 2 << " �Դϴ�\n";
//	std::cout << "������ endl�ε� ����" << std::endl;
//	return 0;
//}


//02 �⺻ �Է�

//#include <iostream> //input output stream
//
//int main()
//{
//	int val1;
//	std::cout << "ù ��° �����Է�: ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "�� ��° �����Է�: ";
//	std::cin >> val2;
//
//	int val3,val4;
//	std::cout << "����° �׹�° �����Է�: ";
//	std::cin >> val3 >> val4;
//
//	int result = val1 + val2 + val3 + val4;
//	std::cout << "�������: " << result << std::endl;
//
//	return 0;
//}


//����
//���� ������ ��µǵ��� �غ�����

//����� �̸��� �����Դϱ�?<�̸��Է¹ޱ�>
//<�Էµ��̸� ���> ���� ���̴� ����Դϱ�?<�����Է¹ޱ�>
//<�Էµ��̸� ���> ���� ���̴� <�Էµȳ��� ���> �� �Դϴ�

//#include <iostream>
//int main() {
//	char name[20];
//	int age;
//
//	std::cout << "����� �̸��� �����Դϱ�? ";
//	std::cin >> name;
//	std::cout << name << "���� ���̴� ����Դϱ� ? ";
//	std::cin >> age;
//	std::cout << name << " ���� ���̴� " << age << " ���Դϴ�." << std::endl;
//
//	return 0;
//}



//03 �Լ� �����ε�
//�Լ����� �����ϰ� �ΰ� �Ű�����Ÿ���� �پ��ϰ� �� �� �ֵ��� ����� ����

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
//	std::cout << "�������� :" << sum(1, 2) << std::endl;
//	std::cout << "�������� :" << sum(1, 2, 3) << std::endl;
//	std::cout << "�Ǽ����� :" << sum(1.2, 2.3) << std::endl;
//}



//����

//���� main �Լ����� �ʿ�� �ϴ� swap �Լ��� �����ε� �ؼ� �����غ���

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
//[������ ��]
//30 20
//Z A
//5.555 1.111



//04 �Ű����� ����Ʈ ��

//#include <iostream>
//
//int sum(int a=10,int b=20)
//{
//	return a + b;
//}
//int main()
//{
//	std::cout << "��������x :" << sum() << std::endl;
//	std::cout << "��������1 :" << sum(1) << std::endl;
//	std::cout << "��������2 :" << sum(1,2) << std::endl;
//}


//���� 1

//����4 �� ���ǵ� �Լ� sum�� '�Ű������� ����Ʈ �� ����' ���°� �ƴ�,
//'�Լ� �����ε�'�� ���·� �� �����غ���.���� main �Լ��� �������� �ʾƾ� �ϸ�, ���� �����
//�����ؾ� �Ѵ�


//#include <iostream>
//int sum() { return 10 + 20; }
//int sum(int a) { return a + 10; }
//int sum(int a, int b) { return a + b; }
//
//int main()
//{
//	std::cout << "��������x :" << sum() << std::endl;
//	std::cout << "��������1 :" << sum(1) << std::endl;
//	std::cout << "��������2 :" << sum(1, 2) << std::endl;
//}


//05 inline �Լ�(vs #Define)
// ������ �Լ��� ��� ȣ��� ������ ��������� ���̰��� ��ȵ� �����
// ������ ���� code ���� ������ ������ �Ǿ� ���� �����Լ�ó���� �����ϴ�

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
// �Լ�(or ����� ������Ŭ����,��ü)���� �̸��ߺ��� �����ϱ� ���ؼ� �����ϴ� ���� �̸���������

//#include <iostream>
//
//namespace BestComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "BestCom�� ������ �Լ�" << std::endl;
//	}
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
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
//	using Parent::SubOne::num;	//USING ��� - namespace�� �����Ҽ��ִ�.
//	std::cout << "NUM : " << num << std::endl;
//	return 0;
//}


//08 Using ����ϱ�

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


//09 ::(��������������) �� �̿��� �������� ó��

//#include <iostream>
//using namespace std;
//
//int val = 100; //�������� ����
//
//int main(void)
//{
//	int val = 20;	//�������� ����
//	val += 3;		//�������� ����
//	::val += 7;		//�������� ����	
//	
//	cout << "���� ���� val : " << val << endl;
//	cout << "���� ���� val : " << ::val << endl;
//
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
