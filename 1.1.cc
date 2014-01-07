#include<iostream>

using namespace std;

bool has_all_unique_characters(char* str) {
    int buf[256] = {0};

    int i = 0;
    while(true) {
        auto c = str[i];
        if (c == '\0') {
            break;
        }
        if (buf[c]) {
            return false;
        } else {
            buf[c] = 1;
        }

        i++;
    }
    return true;
}

int main(int argc, char* argv[]) {
    if(argc != 2) {
        cout << "Usage: "<< argv[0] << " string_to_be_tested" << endl;
        return 1;
    }

    char buf[1024];
    strncpy(buf, argv[1], 1024);

    auto ret = has_all_unique_characters(buf);
    cout << buf << endl;

    if (ret) {
        cout << "string `" << buf << "' has all unique characters" << endl;
    } else {
        cout << "string `" << buf << "' don't have all unique characters" << endl;
    }
    return 0;
}
