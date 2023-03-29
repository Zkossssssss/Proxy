#include "Proxy.h"

Proxy::Proxy(Subject* subject, string role)
{
    this->subject = subject;
    this->role = role;
}

void Proxy::Create(string key, string value)
{
    if (role == "Owner")
        subject->Create(key, value);
    else
        throw std::logic_error("Create: Access denied");
}

string Proxy::Read(string key)
{
    return subject->Read(key);
}

bool Proxy::Update(string key, string value)
{
    if (role != "User")
        return subject->Update(key, value);
    else
        throw std::logic_error("Create: Access denied");
}

bool Proxy::Delete(string key)
{
    if (role == "Administrator" || role == "Owner")
        return subject->Delete(key);
    else
        throw std::logic_error("Create: Access denied");
}
