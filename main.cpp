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

    Zoo zoo; // Zoo 객체 생성
    //생성할 동물 숫자 입력받을 변수
    int random = 0 ;
    std::cout << "몇마리의 동물을 넣을 지 입력하세요(정수):" ;
    // 생성할 동물 숫자 입력받은 값 저장
    std::cin >> random;
    // 동물을 랜덤으로 생성하여 동물원에 추가
    for (int i = 0; i < random; ++i) { // 사용자가 입력한 숫자만큼 동물 추가
        Animal* randomAnimal = createRandomAnimal();
        zoo.addAnimal(randomAnimal);
    }

    // 동물원의 모든 동물 행동 수행
    std::cout << "추가된 동물들의 울음소리:" << std::endl;
    zoo.performActions();

    return 0; // Zoo 소멸자 호출로 메모리 해제
}
