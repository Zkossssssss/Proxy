#include <iostream>
#include "Subject.h"
#include "Proxy.h"
#include "RealSubject.h"

using std::cout;
using std::endl;
using std::exception;

static void TryAccess(Subject* proxy, string name) {
	try {
		proxy->Create(name, "TestValue");
		cout << "Create - OK!" << endl;
	}
	catch (exception ex) {
		cout << ex.what() << endl;
	}
	try {
		proxy->Read("TestKey");
		cout << "Read - OK!" << endl;
	}
	catch (exception ex) {
		cout << ex.what() << endl;
	}
	try {
		proxy->Update(name, "NewTestValue");
		cout << "Update - OK!" << endl;
	}
	catch (exception ex) {
		cout << ex.what() << endl;
	}
	try {
		proxy->Delete(name);
		cout << "Delete - OK!" << endl;
	}
	catch (exception ex) {
		cout << ex.what() << endl;
	}
	
	cout << "-----------------------------------------" << endl;

}

int main() {
	Subject* subject = new RealSubject();
	
	cout << "Owner work:" << endl;
	TryAccess(new Proxy(subject, "Owner"), "Johnny");

	cout << "Administrator work:" << endl;
	TryAccess(new Proxy(subject, "Administrator"), "Justin");

	cout << "Manager work:" << endl;
	TryAccess(new Proxy(subject, "Manager"), "Max");

	cout << "User work:" << endl;
	TryAccess(new Proxy(subject, "User"), "Alex");
}