#include<iostream>

using namespace std;

void replace(char* str, int true_length) {
    auto space_count = 0;

    for(auto i=0; i<true_length; i++) {
        if (str[i] == ' ') {
            space_count++;
        }
    }

    auto index = true_length-1;
    auto space_left = space_count;
    while(index != 0) {
        if(str[index] == ' ') {
            space_left--;
            str[index+2*space_left] = '%';
            str[index+2*space_left+1] = '2';
            str[index+2*space_left+2] = '0';
        } else {
            str[index+2*space_left] = str[index];
        }
        index--;
    }
}


int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " string_to_be_replaced true_length" << endl;
        return 1;
    }
    char buf[1024];
    strncpy(buf, argv[1], 1024);
    cout << "Before: " << buf << endl;
    replace(buf, atoi(argv[2]));
    cout << "After: " << buf << endl;
    return 0;
}
