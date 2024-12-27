#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <vector>
#include "animal.h"

class Zoo {
private:
    std::vector<Animal*> animals;  // 동적 배열
    size_t maxCapacity;            // 최대 용량

public:
    // 생성자
    Zoo(size_t capacity = 10) : maxCapacity(capacity) {}

    // 동물을 추가하는 함수
    void addAnimal(Animal* animal) {
        if (animals.size() >= maxCapacity) {
            std::cerr << "에러: 동물원의 최대 동물수를 초과했습니다!" << std::endl;
            delete animal;  // 메모리 해제
            return;
        }
        animals.push_back(animal); // 동물 추가
    }

    // 동물 행동을 수행하는 함수
    void performActions() {
        for (auto animal : animals) {
            animal->makeSound();
        }
    }

    // Zoo 소멸자
    ~Zoo() {
        for (auto animal : animals) {
            delete animal;  // 메모리 해제
        }
    }
};
#endif // ZOO_H