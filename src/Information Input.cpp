#include <iostream>
#include "include/Information Input.h"

using namespace std;

void Information_Input(int Information_Size, string Information[]) {
    for (int i = 0; i < Information_Size; i++) {
        cin >> Information[i];
    }
}