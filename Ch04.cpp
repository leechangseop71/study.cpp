//01 String Ŭ���� �⺻

//#include <iostream>
//#include <string>	//string Ŭ���� ����� ���� Ŭ���� 
//using namespace std;
//
//int main() {
//	// ��Ʈ�� ����
//	string str; // �� ���ڿ��� ���� ��Ʈ�� ��ü ����
//	string address("����� ���ϱ� �Ｑ�� 389");
//	string copyAddress(address);	// address�� ���ڿ��� ������ ��Ʈ�� ��ü ����
//	string copyAddress2 = address;	// ��������� ����
//
//	char text[] = { 'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0' }; // C-��Ʈ��
//
//	string title(text); // "Love C++" ���ڿ��� ���� ��Ʈ�� ��ü ����
//
//	// ��Ʈ�� ���
//	cout << str << endl; // �� ��Ʈ��. �ƹ� ���� ��µ��� ����
//	cout << address << endl;
//	cout << copyAddress << endl;
//	cout << title << endl;
//}

//02 getline�Լ� ����Ͽ� ���ڿ��ޱ�

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string names[5]; // string �迭 ����
//	1 + 2;
//	string a = "ȫ";
//	string b = "��";
//	a + b; // operator+() a.operator+(b)
//	for (int i = 0; i < 5; i++) {
//		cout << "�̸� >> ";			// 
//		getline(cin, names[i], '\n');	//'\n'�� �Էµɶ����� �Է���ġ�κ��� �޾� names�� ����
//	}
//
//	string latter = names[0];
//	for (int i = 1; i < 5; i++) 
//	{
//		if (latter < names[i]) // ���� ������ latter ���ڿ��� �տ� �´ٸ�
//		{ 
//			latter = names[i]; // latter ���ڿ� ���� latter.operator=(names[i]) 
//		}
//	}
//
//	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
//}


//����
//�̸��� �й��� �Է� ���� string name, string studentID �����
//������� ����غ�����
//getline�Լ��� ����մϴ�.

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string name;
//	string studentID;
//
//	getline(cin, name, '\n');
//	getline(cin, studentID, '\n');
//
//	cout << "�̸� : " << name << endl;
//	cout << "�й� : " << studentID << endl;
//
//
//	return 0;
//}

//03 strlen() , substr() 

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str1 = "�ȳ��ϼ���";
//	string str2 = "abcde";
//	cout << "str1 ���� : " << str1.length() << endl;
//	cout << "str2 ���� : " << str2.length() << endl;
//	cout << "str1.substr() : " << str1.substr(2, 6) << endl;
//	cout << "str2.substr() : " << str2.substr(1,4) << endl;
//	cout << "------------------------------------------" << endl;
//	string str;
//	cout << "���ڿ� �Է� : ";
//	getline(cin, str, '\n');
//	if (str.at(0) >= 'a' && str.at(str.length() - 1) <= 'z')
//	{
//		for (int i = 1; i <= str.length(); i++)
//		{
//			cout << str.substr(str.length() - i, 1);
//		}
//	}
//	else
//	{
//		for (int i = 0; i <= str.length(); i+=2)
//		{
//			cout << str.substr(str.length() - i, 2);
//		}
//	}
//	return 0;
//}


//04 find()

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	
//	string s;
//	cout << "���ڿ� �Է�";
//	getline(cin, s, '\n');
//
//	//find(�˻��� ���ڿ�,����Idx);
//	int idx=s.find('a', 0); 
//	cout << idx << endl;
//
//	//find �� �˻��� ���ڰ� ������ -1��ȯ
//	idx = s.find('@', 0);
//	cout << idx << endl;
//
//
//	//find �� ���� ���� ��ü �˻�
//	int curIdx = -1;
//	for (int i = 0; i < s.length(); i++)
//	{
//		curIdx = s.find('a', curIdx+1);
//		if (curIdx == -1)
//			break;
//		cout << curIdx << "��° Idx "<<endl;
//	}
//	cout << "���� �˻��Ǿ����ϴ�" << endl;
//
//
//	return 0;
//}


//05 replace()

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//	cout << "���ڿ� �Է�:";
//	getline(cin, str, '\n');
//	str.replace(3, str.length(), "a");
//
//	cout << "�Է��� ���ڿ� :" << str << endl;
//
//	return 0;
//}

//06 stoi() ,string -> int

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//
//	string str1,str2;
//	cout << "���ڿ� �Է�1 :";
//	getline(cin, str1, '\n');
//	cout << "���ڿ� �Է�2 :";
//	getline(cin, str2, '\n');
//	
//	cout << "�� ���ڿ��� �ܼ� ����" << str1 + str2 << endl;
//	cout << "�� ���ڿ��� int������ ��ȯ"<<stoi(str1) + stoi(str2) << endl;
//
//	return 0;
//}












