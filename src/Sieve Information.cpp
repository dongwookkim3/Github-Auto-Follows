#include <string>
#include "include/Sieve Information.h"

using namespace std;

void Sieve_Information(int Information_size, string Information[], User_Information &User) {
    for (int i = 0; i < Information_size; i++) {
        string Command = Information[i];
        if (Command == "-t" || Command == "--token") {
            User.Token = Information[++i];
        } else if (Command == "-m" || Command == "--username") {
            User.UserName = Information[++i];
        } else if (Command == "-u" || Command == "--usertarget") {
            User.UserTarget = Information[++i];
        }
    }
}