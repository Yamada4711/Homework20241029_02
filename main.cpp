#include <iostream>
using namespace std;

void TowerOfHanoi(int stage, int base = 1, int target = 3)
{
	if (stage == 1)
	{
		cout << stage << "�i�ڂ�" << base << "����" << target << "�Ɉړ�����B" << endl;
		return;
	}
	TowerOfHanoi(stage - 1, base,  6 - target - base);
	cout << stage << "�i�ڂ�" << base << "����" << target << "�Ɉړ�����B" << endl;
	TowerOfHanoi(stage - 1, 6 - base - target, target);
}

int main()
{
	int stage = 0;
	cout << "�n�m�C�̓��̒i�̐�����͂��Ă������� > " << flush;
	cin >> stage;
	TowerOfHanoi(stage);
}