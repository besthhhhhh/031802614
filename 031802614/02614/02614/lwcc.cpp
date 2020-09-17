#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
//#include <cppjieba.h>
using namespace std;
int main(int argc, char* argv[])
{
	SetConsoleOutputCP(65001);//命令行显示调整
	string source,copy;
	string s1, s2;
	string saddress, caddress;
	double result;
	ifstream filein1(argv[1]);
	ifstream filein2(argv[2]);
	saddress = argv[2];
	caddress = argv[1];
	while (getline(filein1, s1))
		copy += s1;//输入抄袭文本
	filein1.close();
	cout << copy << endl ;
	while (getline(filein2,s2))
		source += s2;//输入源文本
	filein2.close();
	cout << s2 << endl;
	//result = s1 + s2;
	ofstream fileout(argv[3]);
	//fileout << result;//将结果输入到指定文件
	return 0;
}
