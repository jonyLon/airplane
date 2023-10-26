#pragma once
#include <iostream>
using namespace std;
class Airplane
{
private:
	int passengers;
	int places;
	char* type;
	void strCopy(char* &dest, const char* &source) {
		if (dest != nullptr) {
			delete[] dest;
		}
		dest = new char[strlen(source) + 1];
		strcpy_s(dest, strlen(source) + 1, source);
	};
public:
	Airplane() {};
	Airplane(int places, const char* type) : Airplane(0, places, type) {};
	Airplane(int passengers, int places, const char* type) {
		this->passengers = passengers;
		this->places = places;
		strCopy(this->type, type);
	}
	void print() const {
		cout << "Type: " << type << endl;
		cout << "Places: " << places << endl;
		cout << "Passengers: " << passengers << endl;
		cout << endl;
	}
	bool operator==(const Airplane& other) const{
		return this->type == other.type;
	}
	bool operator>(const Airplane& other) const {
		return this->places > other.places;
	}
	bool operator<(const Airplane& other) const {
		return this->places < other.places;
	}
	void operator++() {
		this->passengers++;
	}
	void operator--() {
		this->passengers--;
	}
};

