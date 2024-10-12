#include<iostream>
#include<string>
#include<fstream>
using namespace std;

const string file = "proga.cpp";

string ReadFile(string file)
{
	ifstream in(file);
	string line="", str="";
	while (!in.eof())
	{
		getline(in, line);
		str += line+"ENDLINE";
	}
	return str;
}

int main()
{
	string str = ReadFile(file); int j = 0; int pos = string::npos, pos_endl=string::npos;
	cout << str << endl;
	cout << "-----------------------------------------" << endl<<endl;

	pos = str.find("//");
	while (pos != string::npos)
	{
		pos_endl = str.find('\n');
		str.erase(pos, pos_endl+1);
		pos = str.find("//");
	}

	pos = str.find("/*");
	while (pos != string::npos)
	{
		pos_endl = str.find_last_of("*/");
		str.erase(pos, pos_endl-pos+1);
		pos = str.find("/*");
	}


	cout << str << endl;
	return 0;
}