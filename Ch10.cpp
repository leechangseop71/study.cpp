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
//	//����Ŭ���� ������ = ������ü ����
//	//������ ����Ŭ���������� �ڵ� ����ȯ
//	Person* ptr1 =new Student();	//Upcasting
//	//ptr1->Sleep(); ptr1->Study();
//
//	//Downcasting
//	//Upcasting�� ���¿��� ������ü�� �߰��� ����� �����ϱ� ���� ����ȯ
//	//����Ŭ���� ������ = ������ü(or����������) ����
//	//�̰������� �޸� ħ���ϴ� ������ �߻��Ҽ� �ֱ� ������ ������ ����ȯ �ؾ��Ѵ�
//
//	cout << "-------------------" << endl;
//	Student* down =(Student*)ptr1;	//Downcasting
//	down->Sleep(); down->Study();
//
//
//
//	return 0;
//}

//��ĳ���� Ȱ��
 
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


//03 �ٿ�ĳ������ Ȱ��(���� �ø��Կ�~)





//04 ��ĳ���� ��� ���� 2

//�����Լ� 
//��ĳ���� ���¿��� ����Ŭ���� �Լ��� ����Ŭ������ ������������ �������� �Լ��� ������ ����ϱ� ���� ����
//�Լ� ��� �տ� virtual ���� ����Ѵ�

//���������Լ�
//����Ŭ������ �Լ��ٵ�({})�� ������ �Լ�
//�ش�Ŭ������ ��ü������ �Ұ����ϴ�
//��ĳ���õ� ���¿��� �����ǵ� �Լ��� �����ϱ� ���� �뵵�θ� ���
//�ڹٿ����� �߻�޼����� �Ҹ���


//#include <iostream>
//using namespace std;
//class Animal {
//public:
//	
//	//virtual void sound() { cout << "�Ҹ��� ���ϴ�" << endl; }	
//	
//	//���������Լ� :body({})�� �������� �ʴ� �̿ϼ��� ����Լ�
//	virtual void sound()=0;
//};
//class Dog : public Animal {
//public:
//	void shakingtail() { cout << "������ ���ϴ�" << endl; }
//	//�����ǵ� sound
//	void sound() { cout << "�������� �۸� �Ҹ��� ���ϴ�" << endl; }
//};
//class Cat : public Animal {
//public:
//	void GookGook() { cout << "�ڲ��̸� �մϴ�" << endl; }
//};
//int main()
//{
//	Animal* ptr1 = new Dog(); //Upcasting , ��ӹ��� ����� ���ٰ���,�߰��� ����� ���ٺҰ�
//	ptr1->sound();			//�����ǵ� sound()�� ����Ŭ���� �����Ͱ� ���ٰ���(����Ŭ��������� virtual ����)
//	//ptr1->shakingtail(); //x Ȯ�������� ���� �Ұ�..
//
//
//}