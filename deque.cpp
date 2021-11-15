#include "header.h"

void with_deque()
{
    deque<persona> people;
    file<persona> f;
    f.open_read("file_people.txt");
    if (f.is_open())
    {
        persona temp;
        while(f >> temp) {
            if (temp.get_fam()=="N\\N") {
                temp.set_idgen(temp.get_id());
                break;
            }
            people.push_back(temp);
        }
    }
    f.close();
    while(1) {
        system("clear");
        imgdeque();
        if(people.empty())
            imgdequeempty();
        else
        {
            ingdequetablestart();
            for (persona chel:people)
                cout << chel;
            ingdequetableend();
        }
        imgmenu();
        int vvod = checker();
        switch(vvod)
        {
            case 1:
            {
                system("clear");
                people.push_front(persona());
                cin >> people[0];
                system("clear");
                break;
            }
            case 2:
            {
                system("clear");
                people.push_back(persona());
                cin >> people[people.size()-1];
                system("clear");
                break;
            }
            case 3:
            {
                system("clear");
                pasteafter(people);
                system("clear");
                break;
            }
            case 4:
            {
                system("clear");
                deletepi(people);
                system("clear");
                break;
            }
            case 5:
            {
                system("clear");
                sortir(people);
                system("clear");
                break;
            }
            case 6:
            {
                system("clear");
                reverse(people.begin(),people.end());
                system("clear");
                break;
            }
            case 7:
            {
                system("clear");
                random_shuffle(people.begin(),people.end());
                system("clear");
                break;
            }
            case 8:
            {
                f.open_write("file_people.txt");
                for (auto i:people)
                    f<<i;
                persona temp;
                f << temp;
                f.close();
                return;
            }
            default:break;
        }
    }
}