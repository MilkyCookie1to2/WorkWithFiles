#include "header.h"

int persona::idgen =1;
int storage::s_idgen=1;

int main() {
    while(1) {
        system("clear");
        mainmaenu();
        int vvod = checker();
        switch(vvod)
        {
            case 1:
            {
                system("clear");
                with_deque();
                system("clear");
                break;
            }
            case 2:
            {
                system("clear");
                storage_menu();
                system("clear");
                break;
            }
            case 3:
            {
                return 0;
            }
        }
    }
}
