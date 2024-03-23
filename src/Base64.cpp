#include "include/Base64.h"

using namespace std;

template<typename String>
static string encode(String s, bool url) {
    return base64_encode(reinterpret_cast<const unsigned char *>(s.data()), s.length(), url);
}

string base64_encode(unsigned char const *bytes_to_encode, size_t in_len, bool url) {

    size_t len_encoded = (in_len + 2) / 3 * 4;

    unsigned char trailing_char = '=';

    const char *base64_chars_ = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    string ret;
    ret.reserve(len_encoded);
    unsigned int pos = 0;

    while (pos < in_len) {
        ret.push_back(base64_chars_[(bytes_to_encode[pos + 0] & 0xfc) >> 2]);

        if (pos + 1 < in_len) {
            ret.push_back(
                    base64_chars_[((bytes_to_encode[pos + 0] & 0x03) << 4) + ((bytes_to_encode[pos + 1] & 0xf0) >> 4)]);

            if (pos + 2 < in_len) {
                ret.push_back(base64_chars_[((bytes_to_encode[pos + 1] & 0x0f) << 2) +
                                            ((bytes_to_encode[pos + 2] & 0xc0) >> 6)]);
                ret.push_back(base64_chars_[bytes_to_encode[pos + 2] & 0x3f]);
            } else {
                ret.push_back(base64_chars_[(bytes_to_encode[pos + 1] & 0x0f) << 2]);
                ret.push_back(trailing_char);
            }
        } else {

            ret.push_back(base64_chars_[(bytes_to_encode[pos + 0] & 0x03) << 4]);
            ret.push_back(trailing_char);
            ret.push_back(trailing_char);
        }

        pos += 3;
    }


    return ret;
}

string base64_encode(string const &s, bool url) {
    return encode(s, url);
}