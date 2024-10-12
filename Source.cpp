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
		str += line+'\n';
	}
	return str;
}

int main()
{
	string str = ReadFile(file);
	cout << str << endl;
	cout << "-----------------------------------------" << endl;

	return 0;
}