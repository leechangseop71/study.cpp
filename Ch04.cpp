//01 String 클래스 기본

//#include <iostream>
//#include <string>	//string 클래스 사용을 위한 클래스 
//using namespace std;
//
//int main() {
//	// 스트링 생성
//	string str; // 빈 문자열을 가진 스트링 객체 생성
//	string address("서울시 성북구 삼선동 389");
//	string copyAddress(address);	// address의 문자열을 복사한 스트링 객체 생성
//	string copyAddress2 = address;	// 복사생성자 관여
//
//	char text[] = { 'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0' }; // C-스트링
//
//	string title(text); // "Love C++" 문자열을 가진 스트링 객체 생성
//
//	// 스트링 출력
//	cout << str << endl; // 빈 스트링. 아무 값도 출력되지 않음
//	cout << address << endl;
//	cout << copyAddress << endl;
//	cout << title << endl;
//}

//02 getline함수 사용하여 문자열받기

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string names[5]; // string 배열 선언
//	1 + 2;
//	string a = "홍";
//	string b = "길";
//	a + b; // operator+() a.operator+(b)
//	for (int i = 0; i < 5; i++) {
//		cout << "이름 >> ";			// 
//		getline(cin, names[i], '\n');	//'\n'이 입력될때까지 입력장치로부터 받아 names에 저장
//	}
//
//	string latter = names[0];
//	for (int i = 1; i < 5; i++) 
//	{
//		if (latter < names[i]) // 사전 순으로 latter 문자열이 앞에 온다면
//		{ 
//			latter = names[i]; // latter 문자열 변경 latter.operator=(names[i]) 
//		}
//	}
//
//	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
//}


//문제
//이름과 학번을 입력 받을 string name, string studentID 만들고
//순서대로 출력해보세요
//getline함수를 사용합니다.

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
//	cout << "이름 : " << name << endl;
//	cout << "학번 : " << studentID << endl;
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
//	string str1 = "안녕하세요";
//	string str2 = "abcde";
//	cout << "str1 길이 : " << str1.length() << endl;
//	cout << "str2 길이 : " << str2.length() << endl;
//	cout << "str1.substr() : " << str1.substr(2, 6) << endl;
//	cout << "str2.substr() : " << str2.substr(1,4) << endl;
//	cout << "------------------------------------------" << endl;
//	string str;
//	cout << "문자열 입력 : ";
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
//	cout << "문자열 입력";
//	getline(cin, s, '\n');
//
//	//find(검색할 문자열,시작Idx);
//	int idx=s.find('a', 0); 
//	cout << idx << endl;
//
//	//find 로 검색시 문자가 없으면 -1반환
//	idx = s.find('@', 0);
//	cout << idx << endl;
//
//
//	//find 로 동일 문자 전체 검색
//	int curIdx = -1;
//	for (int i = 0; i < s.length(); i++)
//	{
//		curIdx = s.find('a', curIdx+1);
//		if (curIdx == -1)
//			break;
//		cout << curIdx << "번째 Idx "<<endl;
//	}
//	cout << "에서 검색되었습니다" << endl;
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
//	cout << "문자열 입력:";
//	getline(cin, str, '\n');
//	str.replace(3, str.length(), "a");
//
//	cout << "입력한 문자열 :" << str << endl;
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
//	cout << "문자열 입력1 :";
//	getline(cin, str1, '\n');
//	cout << "문자열 입력2 :";
//	getline(cin, str2, '\n');
//	
//	cout << "두 문자열의 단순 연산" << str1 + str2 << endl;
//	cout << "두 문자열를 int형으로 변환"<<stoi(str1) + stoi(str2) << endl;
//
//	return 0;
//}












