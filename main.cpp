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

    Zoo zoo; // Zoo ��ü ���� 10���� ���� ����
    // ������ �������� �����Ͽ� �������� �߰� ���� 10���� ������ �� ������ 10������ ���������� �Ϻη� 12������ ������ ���� ó���� �Ǵ��� Ȯ��
    for (int i = 0; i < 12; ++i) {
        Animal* randomAnimal = createRandomAnimal();
        zoo.addAnimal(randomAnimal);
    }

    // �������� ��� ���� �ൿ ����
    std::cout << "Zoo actions:" << std::endl;
    zoo.performActions();

    return 0; // Zoo �Ҹ��� ȣ��� �޸� ����
}
