#include <iostream>
using namespace std;

int main(){
    char A[] = "finding";
    int H[26], i;

    for(i = 0; A[i] != '\0'; i++){
        H[A[i]-97] += 1;
    }

    for(i = 0; i < 26; i++){
        if(H[i] > 1) {
            cout << H[i];
        }
    }
}