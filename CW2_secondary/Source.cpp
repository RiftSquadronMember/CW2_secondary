#include <iostream>
#include <windows.h>
#include <vector>
#include <random>
#include <string>
#include <ctime>
#include <cmath>

const int arr_size = 5;


void text_visualise(std::string text, int avg_speed) {
	for (int i = 0; i < text.length(); i++) {
		std::cout << text[i];
		if (text[i] == ',') {
			Sleep(300);
		}
		else if (text[i] == '.') {
			Sleep(700);
		}
		else { Sleep(avg_speed); }
	}
}


int Zapolnenie(int arr_int[]) {
	for (int i = 0; i < arr_size; i++) {
		arr_int[i] = rand() % 11 - 5;
	}
	return 0;
}
float Zapolnenie(float arr_float[]) {
	for (int i = 0; i < arr_size; i++) {
		arr_float[i] = rand() % 11 - 5;
	}
	return 0;
}
char Zapolnenie(char arr_char[]) {
	
	for (int i = 0; i < arr_size; i++) {
		int rand_num = rand() % 3 + 1;
		if (rand_num == 1) { arr_char[i] = 'A'; }
		if (rand_num == 2) { arr_char[i] = 'B'; }
		if (rand_num == 3) { arr_char[i] = 'C'; }
	}
	return 0;
}


void Vivod(int arr_int[]) {
	std::cout << "int - ";
	for (int i = 0; i < arr_size; i++) {
		std::cout << arr_int[i];
		if (i < arr_size - 1) {
			std::cout << ", ";
		}
	}
	
}
void Vivod(float arr_float[]) {
	std::cout << "\nfloat - ";
	for (int i = 0; i < arr_size; i++) {
		std::cout << arr_float[i];
		if (i < arr_size - 1) {
			std::cout << ", ";
		}
	}
	
}
void Vivod(char arr_char[]) {
	std::cout << "\nchar - ";
	for (int i = 0; i < arr_size; i++) {
		std::cout << arr_char[i];
		if (i < arr_size - 1) {
			std::cout << ", ";
		}
	}
}


int main() {
	srand(time(0));
	int arr_int[arr_size]{};
	float arr_float[arr_size]{};
	char arr_char[arr_size]{};


	
	Zapolnenie(arr_int);
	Zapolnenie(arr_float);
	Zapolnenie(arr_char);
	Vivod(arr_int);
	Vivod(arr_float);
	Vivod(arr_char);
}
