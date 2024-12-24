#include "zoo.h"

// ���� ������ �����ϴ� �Լ�
Animal* createRandomAnimal() {
    int randomValue = std::rand() % 4; // 0, 1, 2, 3 �� �ϳ��� ���� ����
    switch (randomValue) {
    case 0: return new Dog();
    case 1: return new Cat();
    case 2: return new Cow();
    case 3: return new Tiger();
    default: return nullptr;
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr))); // ������ �ʱ�ȭ��

    Zoo zoo; // Zoo ��ü ����
    //������ ���� ���� �Է¹��� ����
    int random = 0 ;
    std::cout << "����� ������ ���� �� �Է��ϼ���(����):" ;
    // ������ ���� ���� �Է¹��� �� ����
    std::cin >> random;
    // ������ �������� �����Ͽ� �������� �߰�
    for (int i = 0; i < random; ++i) { // ����ڰ� �Է��� ���ڸ�ŭ ���� �߰�
        Animal* randomAnimal = createRandomAnimal();
        zoo.addAnimal(randomAnimal);
    }

    // �������� ��� ���� �ൿ ����
    std::cout << "�߰��� �������� �����Ҹ�:" << std::endl;
    zoo.performActions();

    return 0; // Zoo �Ҹ��� ȣ��� �޸� ����
}
