#include "RealSubject.h"

RealSubject::RealSubject() {
	dictionary["TestKey"] = "TestValue";
}

void RealSubject::Create(string key, string value) {
	dictionary[key] = value;
}

string RealSubject::Read(string key) {
	return dictionary[key];
}

bool RealSubject::Update(string key, string value) {
	if (dictionary.find(key) != dictionary.end()) {
		dictionary[key] = value;
		return true;
	}
	else
	{
		return false;
	}
}

bool RealSubject::Delete(string key) {
	if (dictionary.find(key) != dictionary.end()) {
		dictionary.erase(dictionary.find(key));
		return true;
	}
	return false;
}