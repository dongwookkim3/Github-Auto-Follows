#pragma once

#include <string>

using namespace std;

struct User_Information {
    string Token;
    string UserName;
    string UserTarget;
};

void Sieve_Information(int Information_Size, string Information[], User_Information &User);