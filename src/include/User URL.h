#pragma once

#include <string>
#include "Sieve Information.h"

using namespace std;

struct User_URL {
    User_Information User;
    string User_API_URL = "https://api.github.com/user";
    string User_Target_Followers_URL = "https://api.github.com/users/" + User.UserTarget + "/followers";
    string User_Following_URL = "https://api.github.com/user/following/";
};