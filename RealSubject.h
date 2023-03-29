#pragma once
#include <map>
#include <iostream>
#include "Subject.h"

using std::map;
using std::string;

class RealSubject : public Subject {
private:
	map<string, string> dictionary;
public:
	RealSubject();
	void Create(string key, string value);
	string Read(string key);
	bool Update(string key, string value);
	bool Delete(string key);
};