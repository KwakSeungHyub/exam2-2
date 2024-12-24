#include "animal.h"

// 추상헤더 animal.h를 통해 animal.cpp 구현
// Dog 클래스 구현
void Dog::makeSound() {
    std::cout << "멍멍" << std::endl;
}

// Cat 클래스 구현
void Cat::makeSound() {
    std::cout << "냐옹" << std::endl;
}

// Cow 클래스 구현
void Cow::makeSound() {
    std::cout << "음머" << std::endl;
}
// Tiger 클래스 구현
void Tiger::makeSound() {
    std::cout << "어흥" << std::endl;
}