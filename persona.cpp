#include "header.h"

persona::persona() {
    id = idgen++;
    fam = "N\\N";
    name = "N\\N";
    och = "N\\N";
    whybad = "N\\N";
}

persona::persona(int m_id,string m_fam, string m_name, string m_och,string m_whybad) {
    id=m_id;
    fam = m_fam;
    name = m_name;
    och = m_och;
    whybad = m_whybad;
}

persona::persona(const persona &pers) {
    id = pers.id;
    fam=pers.fam;
    name = pers.name;
    och=pers.och;
    whybad=pers.whybad;
}

istream& operator>>(istream& in, persona&pers)
{
    cout << "Введите фамилию: ";
    in >> pers.fam;
    cout << "Введите имя: ";
    in >> pers.name;
    cout << "Введите отчество: ";
    in >> pers.och;
    cout << "Почему плохой?\n";
    in.clear();
    in.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(in,pers.whybad);
    return in;
}

ostream& operator<<(ostream& out, const persona&pers)
{
    out <<" │ "<<setw(2)<< pers.id<<" │ "<<setw(13)<<pers.fam<<" │ "<<setw(13)<<pers.name<<" │ "<<setw(14)<<pers.och<<" │ "<< setw(31)<< pers.whybad<<" │"<<endl;
    return out;
}

fstream&operator<<(fstream&fi, persona elem)
{
    fi << elem.id;
    fi<<"\n";
    fi<<elem.fam;
    fi<<"\n";
    fi<<elem.name;
    fi<<"\n";
    fi<<elem.och;
    fi<<"\n";
    fi<<elem.whybad;
    fi<<"\n";
}

fstream&operator>>(fstream&fi,persona& elem)
{
    fi>>elem.id;
    fi>>elem.fam;
    fi>>elem.name;
    fi>>elem.och;
    getline(fi,elem.whybad);
    getline(fi,elem.whybad);
}

void sortir(deque<persona> &people)
{
    cout << "\nCписок плохих людей, которые как-либо насолили мне в жизни:\n";
    if(people.empty()) {
        imgdequeempty();
        cout << "    ╱╲───────────────────────────────────╮\n"
                "   ╱▐▌╲  Нажмите ENTER, чтобы продолжить │\n"
                "  ╱ ╺╸ ╲─────────────────────────────────╯\n"
                "  ▔▔▔▔▔▔              \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        return;
    }
    else {
        ingdequetablestart();
        for (persona chel: people)
            cout << chel;
        ingdequetableend();
    }
    cout << "\nПо какому полю хотите сортировать:\n1. id\n2. Фамилия\n3. Имя\n4. Отчество\n";
    int vvod=checker();
    switch(vvod)
    {
        case 1:
        {
            cout << "\nКак сортировать?\n1. По возрастанию\n2. По убыванию\n";
            int vvod1=0;
            vvod1 = checker();
            switch(vvod1)
            {
                case 1:
                {
                    sort(people.begin(),people.end(),[](persona chel1, persona chel2){return chel1.get_id()<chel2.get_id();});
                    return;
                }
                case 2:
                {
                    sort(people.begin(),people.end(),[](persona chel1, persona chel2){return chel1.get_id()>chel2.get_id();});
                    return;
                }
                default:return;
            }
        }
        case 2:
        {
            cout << "\nКак сортировать?\n1. По возрастанию\n2. По убыванию\n";
            int vvod1=0;
            vvod1 = checker();
            switch(vvod1)
            {
                case 1:
                {
                    sort(people.begin(),people.end(),[](persona chel1, persona chel2){return chel1.get_fam()<chel2.get_fam();});
                    return;
                }
                case 2:
                {
                    sort(people.begin(),people.end(),[](persona chel1, persona chel2){return chel1.get_fam()>chel2.get_fam();});
                    return;
                }
                default:return;
            }
        }
        case 3:
        {
            cout << "\nКак сортировать?\n1. По возрастанию\n2. По убыванию\n";
            int vvod1=0;
            vvod1 = checker();
            switch(vvod1)
            {
                case 1:
                {
                    sort(people.begin(),people.end(),[](persona chel1, persona chel2){return chel1.get_name()<chel2.get_name();});
                    return;
                }
                case 2:
                {
                    sort(people.begin(),people.end(),[](persona chel1, persona chel2){return chel1.get_name()>chel2.get_name();});
                    return;
                }
                default:return;
            }
        }
        case 4:
        {
            cout << "\nКак сортировать?\n1. По возрастанию\n2. По убыванию\n";
            int vvod1=0;
            vvod1 = checker();
            switch(vvod1)
            {
                case 1:
                {
                    sort(people.begin(),people.end(),[](persona chel1, persona chel2){return chel1.get_och()<chel2.get_och();});
                    return;
                }
                case 2:
                {
                    sort(people.begin(),people.end(),[](persona chel1, persona chel2){return chel1.get_och()>chel2.get_och();});
                    return;
                }
                default:return;
            }
        }
        default:return;
    }
}

void pasteafter(deque<persona>&people)
{
    cout << "\nCписок плохих, которые как-либо насолили мне в жизни:\n";
    if(people.empty()) {
        imgdequeempty();
        cout << "    ╱╲───────────────────────────────────╮\n"
                "   ╱▐▌╲  Нажмите ENTER, чтобы продолжить │\n"
                "  ╱ ╺╸ ╲─────────────────────────────────╯\n"
                "  ▔▔▔▔▔▔              \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        return;
    }
    else {
        ingdequetablestart();
        for (persona chel: people)
            cout << chel;
        ingdequetableend();
    }
    cout << "Введите id плохого человека после которого хотите добваить ещё одного: ";
    int vvod=checker();
    auto result = find_if(people.begin(),people.end(),[vvod](persona chel){return chel.get_id()==vvod;});
    if (result != people.end())
    {
        people.insert(result+1,persona());
        cin >> *(result+1);
        return;
    }
    imgerrorid();
    cout << "    ╱╲───────────────────────────────────╮\n"
            "   ╱▐▌╲  Нажмите ENTER, чтобы продолжить │\n"
            "  ╱ ╺╸ ╲─────────────────────────────────╯\n"
            "  ▔▔▔▔▔▔              \n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void deletepi(deque<persona>&people)
{
    cout << "\nCписок плохих, которые как-либо насолили мне в жизни:\n";
    if(people.empty()) {
        imgdequeempty();
        cout << "    ╱╲───────────────────────────────────╮\n"
                "   ╱▐▌╲  Нажмите ENTER, чтобы продолжить │\n"
                "  ╱ ╺╸ ╲─────────────────────────────────╯\n"
                "  ▔▔▔▔▔▔              \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        return;
    }
    else {
        ingdequetablestart();
        for (persona chel: people)
            cout << chel;
        ingdequetableend();
    }
    cout << "Введите id плохого человека которого хотите удалить: ";
    int vvod=checker();
    auto result = find_if(people.begin(),people.end(),[vvod](persona chel){return chel.get_id()==vvod;});
    if (result != people.end()) {
        people.erase(result);
        return;
    }
    imgerrorid();
    cout << "    ╱╲───────────────────────────────────╮\n"
            "   ╱▐▌╲  Нажмите ENTER, чтобы продолжить │\n"
            "  ╱ ╺╸ ╲─────────────────────────────────╯\n"
            "  ▔▔▔▔▔▔              \n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

int checker()
{
    int i;
    cout << ">>";
    while(!(cin>>i))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "ERROR: наверно не int\n>>";
    }
    return i;
}