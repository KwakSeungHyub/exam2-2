#include "zoo.h"

// 랜덤 동물을 생성하는 함수
Animal* createRandomAnimal() {
    int randomValue = std::rand() % 4; // 0, 1, 2, 3 중 하나의 난수 생성
    switch (randomValue) {
    case 0: return new Dog();
    case 1: return new Cat();
    case 2: return new Cow();
    case 3: return new Tiger();
    default: return nullptr;
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr))); // 난수를 초기화함

    Zoo zoo; // Zoo 객체 생성 10개만 들어가게 설정
    // 동물을 랜덤으로 생성하여 동물원에 추가 현재 10개로 제한을 둬 동물은 10개까지 생성되지만 일부러 12개까지 생성해 에러 처리가 되는지 확인
    for (int i = 0; i < 12; ++i) {
        Animal* randomAnimal = createRandomAnimal();
        zoo.addAnimal(randomAnimal);
    }

    // 동물원의 모든 동물 행동 수행
    std::cout << "Zoo actions:" << std::endl;
    zoo.performActions();

    return 0; // Zoo 소멸자 호출로 메모리 해제
}
