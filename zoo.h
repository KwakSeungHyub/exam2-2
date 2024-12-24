#ifndef ZOO_H
#define ZOO_H

#include "animal.h"
#include <vector>

class Zoo {
private:
    std::vector<Animal*> animals; // 동물 포인터 배열

public:
    // 동물을 추가하는 함수
    void addAnimal(Animal* animal) {
        animals.push_back(animal);
    }

    // 동물 행동을 수행하는 함수
    void performActions() {
        for (Animal* animal : animals) {
            if (animal) {
                animal->makeSound();
            }
        }
    }

    // Zoo 소멸자
    ~Zoo() {
        for (Animal* animal : animals) {
            delete animal; // 동적 메모리 해제
        }
        animals.clear(); // 벡터 비우기
    }
};

#endif // ZOO_H
