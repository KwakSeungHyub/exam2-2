#ifndef ZOO_H
#define ZOO_H

#include "animal.h"
#include <vector>

class Zoo {
private:
    std::vector<Animal*> animals; // ���� ������ �迭

public:
    // ������ �߰��ϴ� �Լ�
    void addAnimal(Animal* animal) {
        animals.push_back(animal);
    }

    // ���� �ൿ�� �����ϴ� �Լ�
    void performActions() {
        for (Animal* animal : animals) {
            if (animal) {
                animal->makeSound();
            }
        }
    }

    // Zoo �Ҹ���
    ~Zoo() {
        for (Animal* animal : animals) {
            delete animal; // ���� �޸� ����
        }
        animals.clear(); // ���� ����
    }
};

#endif // ZOO_H
