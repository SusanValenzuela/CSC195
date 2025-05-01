#pragma once
#include "Animal.h"
#include <vector>
#include <memory>
#include <string>

class Database {
private:
    std::vector<std::unique_ptr<Animal>> m_animals;

public:
    void Add(std::unique_ptr<Animal> animal);
    void DisplayAll() const;
    void Load(const std::string& filename);
    void Save(const std::string& filename);

    std::unique_ptr<Animal> Create(int type); // 0 = Dog, 1 = Cat
    void RemoveAll(); // helper to clear memory
};
