#pragma once
#include <iostream>
using std::string;

class Subject
{
public: 
	virtual void Create(string key, string value) = 0;
	virtual string Read(string key) = 0;
	virtual bool Update(string key, string value) = 0;
	virtual bool Delete(string key) = 0;
};

