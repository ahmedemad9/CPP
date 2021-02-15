#include <iostream>
#include <string>

int main() {
    char clo[10];
    char mil[8];
    for (int i = 0; i < 10; i++) {
        std::cin >> clo[i];
        if (i < 8) {
            mil[i] = clo[i];
        }
    }
    if (clo[0] == '1' && clo[1] == '2' && clo[8]=='A') {
        mil[0] = '0';
        mil[1] = '0';
    }

    if (clo[8] == 'P') {
        if (clo[1] < '8') {
            mil[0] = (char)((int)clo[0] + 1);
            mil[1] = (char)((int)clo[1] + 2);
        }
        else if (clo[1] >= '8') {
            mil[0] = (char)((int)clo[0] + 2);
            mil[1] = (char)((int)clo[1] + 2);
        }
    }
    if (clo[0] == '1' && clo[1] == '2' && clo[8] == 'P') {
        mil[0] = '1';
        mil[1] = '2';
    }

   for (int i = 0; i < 8; i++) {
       std::cout<< mil[i] ;
    }
    return 0;
}
 /*
01:23:45PM
0123456789
    */
