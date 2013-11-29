#include<iostream>

using namespace std;

bool has_all_unique_characters(char* str) {
    bool buf[256];
    for(int i=0; i<256; i++) {
        buf[i] = false;
    }

    int i = 0;
    while(true) {
        char c = str[i];
        if(c == '\0') {
            break;
        }
        if(buf[c]) {
            return false;
        } else {
            buf[c] = true;
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
