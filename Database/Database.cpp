#include "Database.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <fstream>

void Database::Add(std::unique_ptr<Animal> animal) {
    m_animals.push_back(std::move(animal));
}

void Database::DisplayAll() const {
    for (const auto& animal : m_animals) {
        std::cout << *animal << "\n";
    }
}

std::unique_ptr<Animal> Database::Create(int type) {
    if (type == 0) return std::make_unique<Dog>();
    else if (type == 1) return std::make_unique<Cat>();
    else return nullptr;
}

void Database::RemoveAll() {
    m_animals.clear();
}



void Database::Save(const std::string& filename) {
    std::ofstream output(filename);
    if (output.is_open()) {
        for (const auto& animal : m_animals) {
            // type ID: 0 = Dog, 1 = Cat
            if (dynamic_cast<Dog*>(animal.get()))
                output << 0 << "\n";
            else if (dynamic_cast<Cat*>(animal.get()))
                output << 1 << "\n";

            output << *animal;
        }
        output.close();
    }
}
