#pragma once
#include <string>
#include <iostream>

class PersonInfo
{
	private:
	std::string m_name;
	std::string m_surname;
	int16_t m_age;
	std::string m_famous_quote;
	
	public:
	PersonInfo();
	PersonInfo(std::string, std::string, int16_t, std::string);

	const std::string& getName() const;
	void setName(const std::string&);

	const std::string& getSurname() const;
	void setSurname(const std::string&);

	int16_t getAge() const;
	void setAge(int16_t);

	const std::string& getFamousQuote() const;
	void setFamousQuote(const std::string&);
}; 

