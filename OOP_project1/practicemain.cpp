#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>

#include <string>


#include<stdio.h>

#include "practice.h"


using namespace std;

int main(int argc, char* argv[]) {
	Student st("gyuri", "20226041","adkjfh","adfasdf","adfasdf");

	cout << st.Name << " " << st.BirthYear<<st.ID.length()<<"\n";

	cout << argc;

	
	string filepath = "1.txt";

	//filepath = filepath + argv[1];

	
	ofstream file;

	//FILE* pFile = fopen("test.txt", "w");
	file.open("1.txt",ios::out);

	
	//file<<"1111";
	file.close();
}