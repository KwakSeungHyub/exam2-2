#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <vector>
#include "animal.h"

class Zoo {
private:
    std::vector<Animal*> animals;  // ���� �迭
    size_t maxCapacity;            // �ִ� �뷮

public:
    // ������
    Zoo(size_t capacity = 10) : maxCapacity(capacity) {}

    // ������ �߰��ϴ� �Լ�
    void addAnimal(Animal* animal) {
        if (animals.size() >= maxCapacity) {
            std::cerr << "����: �������� �ִ� �������� �ʰ��߽��ϴ�!" << std::endl;
            delete animal;  // �޸� ����
            return;
        }
        animals.push_back(animal); // ���� �߰�
    }

    // ���� �ൿ�� �����ϴ� �Լ�
    void performActions() {
        for (auto animal : animals) {
            animal->makeSound();
        }
    }

    // Zoo �Ҹ���
    ~Zoo() {
        for (auto animal : animals) {
            delete animal;  // �޸� ����
        }
    }
};
#endif // ZOO_H