//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

int main(void) {
	/*vector<vector<int>>a(10000000, vector<int>(100, -1));
	//int a[10000000][100];
	for (int i = 0; i < 10000000; i++) {
		for (int j = 0; j < 100; j++) {
			a[i][j] = rand() % 101;
		}
	}
	*/
	srand(time(NULL));
	int value;
	ofstream file("numbers.txt");
	vector<vector<int>>a(10000000, vector<int>(100, -1));
	//file.open("numbers.txt", ios::out | ios::app);
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			file << rand() % 101 << " ";
		}
		file << endl;
	}
	return 0;
}