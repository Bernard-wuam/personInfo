#include "PersonInfo.h"

PersonInfo::PersonInfo()
{}

PersonInfo::PersonInfo(std::string name, std::string surname, int16_t age, std::string famousQuote):
	m_name{name},m_surname{surname}, m_age{age},m_famous_quote{famousQuote}
{}

const std::string& PersonInfo::getName() const
{
	// TODO: insert return statement here
	return m_name;
}

void PersonInfo::setName(const std::string& surname)
{
	m_surname = surname;
}

const std::string& PersonInfo::getSurname() const
{
	// TODO: insert return statement here
	return m_surname;
}

void PersonInfo::setSurname(const std::string& surname)
{
	m_surname = surname;
}

int16_t PersonInfo::getAge() const
{
	return m_age;
}

void PersonInfo::setAge(int16_t age)
{
	m_age = age;
}

const std::string& PersonInfo::getFamousQuote() const
{
	// TODO: insert return statement here
	return m_famous_quote;
}

void PersonInfo::setFamousQuote(const std::string& famous_quote)
{
	m_famous_quote = famous_quote;
}
