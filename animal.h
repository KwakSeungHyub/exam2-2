#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

// Animal 클래스 (추상 클래스)
class Animal {
public:
    virtual void makeSound() = 0; // 순수 가상 함수
    virtual ~Animal() = default; // 가상 소멸자
};

// Dog 클래스
class Dog : public Animal {
public:
    void makeSound() override;
};

// Cat 클래스
class Cat : public Animal {
public:
    void makeSound() override;
};

// Cow 클래스
class Cow : public Animal {
public:
    void makeSound() override;
};
// Cow 클래스
class Tiger : public Animal {
public:
    void makeSound() override;
};
#endif // ANIMAL_H
