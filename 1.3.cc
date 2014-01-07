#include<iostream>

using namespace std;


bool test_if_permutation(char* str_1, char* str_2) {
     int counter[256] = {0};
     int index = 0;

     while(true) {
         char c = str_1[index];
         if (c == '\0') {
             break;
         }
         counter[c]++;
         index++;
     }

     index = 0;
     while(true) {
         char c = str_2[index];
         if (c == '\0') {
             break;
         }

         --counter[c];
         ++index;
     }

     for (int i=0; i<256; i++) {
         if(counter[i] != 0) {
             return false;
         }
     }
     return true;
}

int main(int argc, char* argv[]) {
    if(argc != 3) {
        cout << "Usage: " << argv[0] << " string_1 string_2" << endl;
        cout << "test if string_2 is a permutation of string_1" << endl;
        return 1;
    }
    auto ret = test_if_permutation(argv[1], argv[2]);
    if(ret){
        cout << "'" << argv[1] << "' and '" << argv[2] << "' is permutation of each other" << endl;
    } else {
        cout << "'" << argv[1] << "' and '" << argv[2] << "' is NOT permutation of each other" << endl;
    }
    return 0;
}
