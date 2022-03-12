#include "address.h"

address::address()
{
    //ctor
}

address::address(string add_it, string add_type, string add_desc)
{
    setAddress(add_it);
    setType(add_type);
    setDescription(add_desc);
}
address::~address()
{
    //dtor
}
void address::setAddress(string add_it)
{
    this->m_address = add_it;
}
void address::setType(string add_type)
{
    this->m_address = add_type;
}
void address::setDescription(string add_desc)
{
    this->m_description = add_desc;
}

bool address::isMatched(string key) const
{
    return (m_address.compare(key) == 0);
}

void address::print()const
{
    cout << "Address: " << m_address << "\t | " << m_type <<
    "\t | " << m_description << endl;
}
