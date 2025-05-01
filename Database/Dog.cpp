#include "Dog.h"

void Dog::Read(std::ostream& promptStream, std::istream& inputStream) {
    Animal::Read(promptStream, inputStream);
    promptStream << "Enter breed: ";
    inputStream >> m_breed;
}

void Dog::Write(std::ostream& outputStream) const {
    Animal::Write(outputStream);
    outputStream << "Breed: " << m_breed << "\n";
}

void Dog::Read(std::ifstream& inputFile) {
    Animal::Read(inputFile);
    inputFile >> m_breed;
}

void Dog::Write(std::ofstream& outputFile) const {
    Animal::Write(outputFile);
    outputFile << m_breed << "\n";
}
