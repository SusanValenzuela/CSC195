#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Animal {
protected:
    std::string m_name;
    int m_lifespan;

public:
    Animal() = default;
    virtual ~Animal() = default;

    // console IO
    virtual void Read(std::ostream& promptStream, std::istream& inputStream);
    virtual void Write(std::ostream& outputStream) const;

    // fileIO
    virtual void Read(std::ifstream& inputFile);
    virtual void Write(std::ofstream& outputFile) const;

    // operator overloads
    friend std::ostream& operator<<(std::ostream& os, Animal& animal);
    friend std::istream& operator>>(std::istream& is, Animal& animal);
};
