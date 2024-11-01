#include <iostream>
using namespace std;

void TowerOfHanoi(int stage, int base = 1, int target = 3)
{
	if (stage == 1)
	{
		cout << stage << "段目を" << base << "から" << target << "に移動する。" << endl;
		return;
	}
	TowerOfHanoi(stage - 1, base,  6 - target - base);
	cout << stage << "段目を" << base << "から" << target << "に移動する。" << endl;
	TowerOfHanoi(stage - 1, 6 - base - target, target);
}

int main()
{
	int stage = 0;
	cout << "ハノイの塔の段の数を入力してください > " << flush;
	cin >> stage;
	TowerOfHanoi(stage);
}