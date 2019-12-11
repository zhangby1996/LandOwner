#include <iostream>
#include <vector>
#include "LandOwner.h"

using namespace std;

int main()
{
    cout << "你好，欢迎来到地主世界!\n" << endl;

    LandOwner owner1;
    owner1.Show_info();

    LandOwner* ptr_owner2 = new LandOwner {"魏全","gay",-50,-100};
    ptr_owner2 -> Show_info();
    ptr_owner2 -> Touch_card(10);


    delete ptr_owner2;

    return 0;
}
