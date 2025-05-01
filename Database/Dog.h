#pragma once
#include "Animal.h"

class Dog : public Animal {
private:
    std::string m_breed;

public:
    Dog() = default;
    virtual ~Dog() = default;

    void Read(std::ostream& promptStream, std::istream& inputStream) override;
    void Write(std::ostream& outputStream) const override;

    void Read(std::ifstream& inputFile) override;
    void Write(std::ofstream& outputFile) const override;
};
