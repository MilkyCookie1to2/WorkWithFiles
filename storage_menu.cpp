#include "header.h"

void storage_menu()
{
    vector<storage> sklad;
    file<storage> f_st;
    f_st.open_read("file_storage.txt");
    if (f_st.is_open())
    {
        storage temp;
        while(f_st>>temp)
        {
            if (temp.get_s_name()=="N\\N")
            {
                temp.set_s_idgen(temp.get_s_id());
                break;
            }
            sklad.push_back(temp);
        }
    }
    f_st.close();
    while(1)
    {
        system("clear");
        storagelogo();
        if(sklad.empty())
        {
            imgstorageempty();
        }
        else
        {
            imgstoragetablestart();
            for(auto i:sklad)
                cout<<i;
            imgstoragetableend();
        }
        storagemenu();
        int vvod = checker();
        switch(vvod)
        {
            case 1:
            {
                system("clear");
                sklad.push_back(storage());
                cin >> sklad[sklad.size()-1];
                system("clear");
                break;
            }
            case 2:
            {
                system("clear");
                storage_del(sklad);
                system("clear");
                break;
            }
            case 3:
            {
                system("clear");
                storage_edit(sklad);
                system("clear");
                break;
            }
            case 4:
            {
                system("clear");
                storage_sortir(sklad);
                system("clear");
                break;
            }
            case 5:
            {
                f_st.open_write("file_storage.txt");
                for (auto j:sklad)
                    f_st<<j;
                storage s_temp;
                f_st << s_temp;
                f_st.close();
                return;
            }
            default:break;
        }
    }
}