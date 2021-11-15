#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <vector>

using namespace std;

template<typename T>
class file
{
private:
    fstream f;
public:
    file(){}
    ~file(){}
    void open_read(string name)
    {
        f.open(name,ios::in);
    }
    void open_write(string name)
    {
        f.open(name,ios::out);
    }
    void open(string name,int m)
    {
        f.open(name,ios::openmode(m));
    }
    void close()
    {
        f.close();
    }
    bool is_open()
    {
        return f.is_open();
    }
    bool eof()
    {
        return f.eof();
    }
    fstream&operator>>(T& elem)
    {
        f>>elem;
    }
    fstream&operator<<(T elem)
    {
        f<<elem;
    }
};

class persona
{
private:
    int id;
    static int idgen;
    string fam;
    string name;
    string och;
    string whybad;
public:
    persona();
    persona(int m_id, string m_fam,string m_name,string m_och,string m_whybad);
    persona(const persona &pers);
    ~persona(){}
    friend fstream&operator<<(fstream&fi, persona elem);
    friend fstream&operator>>(fstream&fi,persona& elem);
    friend istream& operator>>(istream& in, persona&pers);
    friend ostream& operator<<(ostream& out,const persona&pers);
    int get_id(){return id;}
    int get_idgen(){return idgen;}
    void set_idgen(int nid){idgen=nid;}
    string get_fam(){return fam;}
    string get_name(){return name;}
    string get_och(){return och;}
};

class storage
{
private:
    int s_id;
    static int s_idgen;
    string s_name;
    string s_type;
    int s_kol;
    string extrainfo;
public:
    storage()
    {
        s_id=s_idgen++;
        s_name = "N\\N";
        s_type = "N\\N";
        int s_kol = 0;
        extrainfo = "-";
    }
    storage(int m_id,string m_name, string m_type, int m_kol, string m_extrainfo)
    {
        s_id = m_id;
        s_name=m_name;
        s_type=m_type;
        s_kol=m_kol;
        extrainfo=m_extrainfo;
    }
    ~storage(){}
    string get_s_name(){return s_name;}
    string get_s_type(){return s_type;}
    int get_s_kol(){return s_kol;}
    int get_s_id(){return s_id;}
    void set_s_idgen(int s_nid){s_idgen=s_nid;}
    friend istream& operator>>(istream&in,storage&elem);
    friend ostream& operator<<(ostream&out,const storage&elem);
    friend fstream&operator<<(fstream&fi, storage elem);
    friend fstream&operator>>(fstream&fi, storage &elem);
    friend void storage_edit(vector<storage>&);
};

int checker();
void imgdeque();
void imgmenu();
void imgdequeempty();
void ingdequetablestart();
void ingdequetableend();
void imgstorageempty();
void imgerrorid();
void storage_menu();
void imgstoragetablestart();
void imgstoragetableend();
void storagemenu();
void storagelogo();
void with_deque();
void mainmaenu();
void sortir(deque<persona> &);
void pasteafter(deque<persona>&);
void deletepi(deque<persona>&);
void storage_del(vector<storage>&);
void storage_edit(vector<storage>&);
void storage_sortir(vector<storage>&);
