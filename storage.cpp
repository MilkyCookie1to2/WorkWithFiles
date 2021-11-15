#include "header.h"

istream& operator>>(istream&in,storage&elem)
{
    cout<<"Введите наименование товара: ";
    in.clear();
    in.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(in,elem.s_name);
    cout << "Введите тип товара: ";
    in.clear();
    //in.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(in,elem.s_type);
    cout << "Введите кол-во товара: ";
    elem.s_kol = checker();
    cout << "Введите дополнительную информацию о товаре:"<<endl;
    in.clear();
    in.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(in,elem.extrainfo);
    return in;
}

ostream& operator<<(ostream&out,const storage&elem)
{
    out << " │ " <<setw(2)<<elem.s_id<<" │ "<<setw(19)<<elem.s_name<<" │ "<<setw(10)<<elem.s_type<<" │ "<<setw(6)<<elem.s_kol<< " │ "<<setw(36)<<elem.extrainfo<<" │"<<endl;
    return out;
}

fstream&operator<<(fstream&fi, storage elem)
{
    fi << elem.s_id << "\n" << elem.s_name << "\n" << elem.s_type << "\n"<<elem.s_kol<< "\n"<<elem.extrainfo<<"\n";
}

fstream&operator>>(fstream&fi, storage&elem)
{
    fi >> elem.s_id;
    getline(fi,elem.s_name);
    getline(fi,elem.s_name);
    //getline(fi,elem.s_type);
    getline(fi,elem.s_type);
    fi >> elem.s_kol;
    getline(fi,elem.extrainfo);
    getline(fi,elem.extrainfo);
}

void storage_del(vector<storage>&sklad)
{
    if(sklad.empty())
    {
        imgstorageempty();
        cout << "    ╱╲───────────────────────────────────╮\n"
                "   ╱▐▌╲  Нажмите ENTER, чтобы продолжить │\n"
                "  ╱ ╺╸ ╲─────────────────────────────────╯\n"
                "  ▔▔▔▔▔▔              \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        return;
    }
    else
    {
        imgstoragetablestart();
        for(auto i:sklad)
            cout << i;
        imgstoragetableend();
    }
    cout << "Введите id товара, к-рый хотите удалить:";
    int vvodid = checker();
    auto result = find_if(sklad.begin(),sklad.end(),[vvodid](storage elem){return elem.get_s_id()==vvodid;});
    if (result!=sklad.end())
    {
        sklad.erase(result);
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

void storage_sortir(vector<storage>&sklad)
{
    if(sklad.empty()) {
        imgstorageempty();
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
        imgstoragetablestart();
        for (storage i: sklad)
            cout << i;
        imgstoragetableend();
    }
    cout << "\nПо какому полю хотите сортировать:\n1. id\n2. Наименование\n3. Тип\n4. Количество\n";
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
                    sort(sklad.begin(),sklad.end(),[](storage elem1, storage elem2){return elem1.get_s_id()<elem2.get_s_id();});
                    return;
                }
                case 2:
                {
                    sort(sklad.begin(),sklad.end(),[](storage elem1, storage elem2){return elem1.get_s_id()>elem2.get_s_id();});
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
                    sort(sklad.begin(),sklad.end(),[](storage elem1, storage elem2){return elem1.get_s_name()<elem2.get_s_name();});
                    return;
                }
                case 2:
                {
                    sort(sklad.begin(),sklad.end(),[](storage elem1, storage elem2){return elem1.get_s_name()>elem2.get_s_name();});
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
                    sort(sklad.begin(),sklad.end(),[](storage elem1, storage elem2){return elem1.get_s_type()<elem2.get_s_type();});
                    return;
                }
                case 2:
                {
                    sort(sklad.begin(),sklad.end(),[](storage elem1, storage elem2){return elem1.get_s_type()>elem2.get_s_type();});
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
                    sort(sklad.begin(),sklad.end(),[](storage elem1, storage elem2){return elem1.get_s_kol()<elem2.get_s_kol();});
                    return;
                }
                case 2:
                {
                    sort(sklad.begin(),sklad.end(),[](storage elem1, storage elem2){return elem1.get_s_kol()>elem2.get_s_kol();});
                    return;
                }
                default:return;
            }
        }
        default:return;
    }
}

void storage_edit(vector<storage>&sklad)
{
    if(sklad.empty()) {
        imgstorageempty();
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
        imgstoragetablestart();
        for (storage i: sklad)
            cout << i;
        imgstoragetableend();
    }
    cout << "Введите id товара, к-рый хотите информацию которго хотите изменить:";
    int vvodid = checker();
    auto result = find_if(sklad.begin(),sklad.end(),[vvodid](storage elem){return elem.get_s_id()==vvodid;});
    if (result!=sklad.end())
    {
        while(1) {
            system("clear");
            imgstoragetablestart();
            cout << *result;
            imgstoragetableend();
            cout
                    << "Какое поле хотите редактировать:\n\t1. Наименование\n\t2. Тип\n\t3. Количество\n\t4. Дополнительная информация\n\t5. Назад\n";
            int vvod = checker();
            switch (vvod) {
                case 1: {
                    cout << "Введите наименование товара: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, (*result).s_name);
                    break;
                }
                case 2: {
                    cout << "Введите тип товара: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, (*result).s_type);
                    break;
                }
                case 3: {
                    cout << "Введите количество товара: ";
                    cin >> (*result).s_kol;
                    break;
                }
                case 4: {
                    cout << "Введите дополниткльную информацию о товаре:\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, (*result).extrainfo);
                    break;
                }
                case 5:
                {
                    return;
                }
                default:break;
            }
        }
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

