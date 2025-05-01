#include "Animal.h"

void Animal::Read(std::ostream& promptStream, std::istream& inputStream) {
    promptStream << "Enter name: ";
    inputStream >> m_name;
    promptStream << "Enter lifespan (years): ";
    inputStream >> m_lifespan;
}

void Animal::Write(std::ostream& outputStream) const 
{
    outputStream << "Name: " << m_name << "\n";
    outputStream << m_lifespan  << " Years Life Expectancy "  "\n";
}

void Animal::Read(std::ifstream& inputFile)
{
    inputFile >> m_name;
    inputFile >> m_lifespan;
}

void Animal::Write(std::ofstream& outputFile) const 
{
    outputFile << m_name << "\n";
    outputFile << m_lifespan << "\n";
}

std::ostream& operator<<(std::ostream& os, Animal& animal) 
{
    animal.Write(os);
    return os;
}

std::istream& operator>>(std::istream& is, Animal& animal) 
{
    animal.Read(std::cout, is);  // prompts go to console
    return is;
}
