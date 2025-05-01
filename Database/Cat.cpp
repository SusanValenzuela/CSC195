#include "Cat.h"

void Cat::Read(std::ostream& promptStream, std::istream& inputStream) {
    Animal::Read(promptStream, inputStream);
    promptStream << "Enter color: ";
    inputStream >> m_color;
}

void Cat::Write(std::ostream& outputStream) const {
    Animal::Write(outputStream);
    outputStream << "Color: " << m_color << "\n";
}

void Cat::Read(std::ifstream& inputFile) {
    Animal::Read(inputFile);
    inputFile >> m_color;
}

void Cat::Write(std::ofstream& outputFile) const {
    Animal::Write(outputFile);
    outputFile << m_color << "\n";
}
