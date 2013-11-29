#include<iostream>

using namespace std;

void reverse(char* str) {
    auto length = strlen(str);
    char temp;
    for(int i=0; i<= length/2; i++) {
        temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
}

int main(int argc, char* argv[]) {
    if(argc != 2) {
        cout << "Usage: reverse string_to_be_reversed" << endl;
        return 1;
    }
    char buf[1024];
    strncpy(buf, argv[1], 1024);
    cout << buf << endl;
    reverse(buf);
    cout << buf << endl;
    return 0;
}

