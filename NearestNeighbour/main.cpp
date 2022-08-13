//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <chrono>
#include <ctime>   

using namespace std;

int main(void) {

	
	srand(time(NULL));
	int value;
	ofstream file("numbers2.txt");
	vector<vector<int>>a(100, vector<int>(100, -1));
	std::time_t const now_c = std::time(NULL);
	auto s = std::put_time(std::localtime(&now_c), "%F %T");
	std::cout << s << std::endl;

	// ctime() used to give the present time
	//printf("%s", ctime_s(&my_time));
	//file.open("numbers.txt", ios::out | ios::app);
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			file << rand() % 101  << " ";
		}
		file << endl;
	}
	s = std::put_time(std::localtime(&now_c), "%F %T");
	std::cout << s << std::endl;
	/*ifstream inFile;
	
	inFile.open("numbers.txt");
	int sum = 0, x;
	if (!inFile) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}
	while (inFile >> x)
	{
		cout << x << " ";
	}
	//cout << sum;
	inFile.close();*/
	return 0;
}