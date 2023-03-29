#pragma once
#include "Subject.h"
class Proxy : public Subject
{
private:
	Subject* subject;
	string role;
public:
	Proxy(Subject* subject, string role);
	void Create(string key, string value);
	string Read(string key);
	bool Update(string key, string value);
	bool Delete(string key);
};

