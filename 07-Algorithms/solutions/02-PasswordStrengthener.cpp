#include <iostream>

void readPassword(char password[], const int MAX_LENGTH) {
    std::cout << "Enter password: ";
    for(int i = 0; i < MAX_LENGTH; i++){
        std::cin >> password[i];
    }    
}

bool strengthenPassword(char arr1[], const int size1, char arr2[], int size2) {
   
    for(int i = 0, j = 0; i < size1; i++, j++){
        if(i + j + 1 >= size2){
            return false;
        }
       arr2[i + j] = arr1[i];
       arr2[i + j + 1] = (char)'0' + j;
       char a = '0' + j - 1;
    }
    return true;
}

int main() {
    const int MAX_LENGTH = 10;
    const int MAX_STRONGER_PASSWORD_LENGTH = 20;

    char password[MAX_LENGTH] = "abcdefghi";
    char strongerPassword[MAX_STRONGER_PASSWORD_LENGTH];
    
    void readPassword(char password[], const int MAX_LENGTH);

    strengthenPassword(password, MAX_LENGTH,strongerPassword, MAX_STRONGER_PASSWORD_LENGTH);
    std::cout << "Strengthened Password: " << strongerPassword << std::endl;
    return 0;
}
