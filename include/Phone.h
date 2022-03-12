#ifndef PHONE_H
#define PHONE_H
#include <iostream>
#include <string>
using namespace std;

class phone
{

public:
    phone();
    phone(string, string, string);
    virtual ~phone();

    void setPhone(string);
    void setType(string);
    void setDescription(string);

    bool isMatched(string) const;

    void print()const;

    protected:
private:
    string m_phone;
    string m_type;
    string m_description;

};

#endif // PHONE_H
