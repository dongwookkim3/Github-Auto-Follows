#pragma once

#include <string>
#include <string_view>

using namespace std;

string base64_encode(string const &s, bool url = false);

string base64_encode(unsigned char const *, size_t len, bool url = false);