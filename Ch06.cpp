//01 ��ü�� ����Ű�� ������

//#include <iostream>
//#include <string>
//using namespace std;
//class Simple {
//private:
//	string name;
//public:
//	Simple() : name("����") {
//		cout << "����Ʈ ������ ȣ��!" << endl;
//	}
//	Simple(string name) :name(name) {
//		cout << "Simple(name) ������ ȣ��!" << endl;
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
//	//�⺻ main stack ��ü 
//	Simple ob1("ȫ�浿");	//main stack�� ob1��ü ����,name=ȫ�浿 ����
//	ob1.Info();
//	ob1.setName("���浿");
//
//	//�⺻ main stack �����Ϳ� ��ü ����
//	Simple* ptr = &ob1;		//ptr�����Ϳ� ob1�ּ� ����
//	ptr->setName("�輺��");
//	ptr->Info();
//
//	//��ü�迭 main stack
//	cout << "------------------------------" << endl;
//	Simple arr[3];
//	for (int i = 0; i < 3; i++) {
//		arr[i].Info();
//	}
//
//	return 0;
//}


//02 ��ü�迭�� �����Ҵ�

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int x;
//public:
//	Simple() :x(0) {
//		cout << "����Ʈ ������ ȣ��" << endl;
//	}
//	~Simple() {
//		cout << "����Ʈ �Ҹ��� ȣ�� X : "<< this->x << endl;
//	}
//};
//int main()
//{
//	cout << "-----------------------" << endl;
//	//Simple ob;						// ���ν��ÿ����� ��ü(������ȣ�� , �Ҹ���ȣ�� �ڵ�)
//	
//	//Simple* ptr = new Simple;		// �����Ҵ� ���� ��ü	(�Ҹ���ȣ�� delete�� ����)
//	//delete ptr;						// �Ҹ��� ȣ�� 
//	
//	Simple* arr = new Simple[3];	// �����Ҵ� �迭 ��ü (�Ҹ���ȣ�� delete[] �� ����)
//	arr[0].x = 10;
//	arr[1].x = 20;
//	arr[2].x = 30;
//	delete[] arr;					// �Ҹ��� ȣ��
//	cout << "-----------------------" << endl;
//
//	return 0;
//}


//03 Ŭ���� ����� �����Ҵ�

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
//		cout << "����Ʈ ������ ȣ��!" << endl;
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
//		cout << "�̸� : " << *(this->name) << endl;
//		cout << "���� : " << *(this->addr) << endl;
//		cout << "-----------------------------" << endl;
//	}
//	~Person() {
//		cout << "����Ʈ �Ҹ��� ȣ��! " <<  "�̸� : "<< *(this->name) <<" �ּ� : "<<*(this->addr) << endl;
//		delete name;
//		delete addr;
//	}
//};
//int main()
//{
//	Person* list = new Person[3];
//	list[0].setName("ȫ�浿").setAddr("�뱸");
//	list[1].setName("�̽�ö").setAddr("����");
//	list[2].setName("�㰢").setAddr("��õ");
//	for (int i = 0; i < 3; i++) {
//		list[i].info();
//	}
//
//	//�Ҹ�
//	delete[] list;
//
//
//	return 0;
//}


//04 ����

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
//	//Getter and Setter �Լ� �߰�
//	void setAge(int age);		//���� �Լ���ü{}�� Ŭ������ ���� �ִٸ� �ڵ� inlineȭ�� �ȴ�..�ܺη� �����߱⶧����inline x
//	int getAge();
//	void setWeight(double weight);
//	double getWeight();
//	void setHeight(double height);
//	double getHeight();
//	void ShowMemberInfo();
//	~Person();
//};
//int main() {
//	Person hong("ȫ�浿");
//	hong.setAge(30);
//	hong.ShowMemberInfo();
//
//	return 0;
//}
//Person::Person(const char* name):age(0),weight(0.0),height(0.0)
//{
//	this->name = new string(name);
//	if (this->name == NULL) {
//		cout << "��ü ���� ����..." << endl;
//		return;
//	}
//	cout << "Person(char* name) ������ ȣ��!" << endl;
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
//	cout << "�Ҹ��� ȣ��" << " �̸� : " << *(this->name) << endl;
//	delete name;
//}