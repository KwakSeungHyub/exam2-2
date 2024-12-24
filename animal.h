#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

// Animal Ŭ���� (�߻� Ŭ����)
class Animal {
public:
    virtual void makeSound() = 0; // ���� ���� �Լ�
    virtual ~Animal() = default; // ���� �Ҹ���
};

// Dog Ŭ����
class Dog : public Animal {
public:
    void makeSound() override;
};

// Cat Ŭ����
class Cat : public Animal {
public:
    void makeSound() override;
};

// Cow Ŭ����
class Cow : public Animal {
public:
    void makeSound() override;
};
// Cow Ŭ����
class Tiger : public Animal {
public:
    void makeSound() override;
};
#endif // ANIMAL_H
