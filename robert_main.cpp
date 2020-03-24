#include<iostream>
#include<string>

using namespace std;

class Auto{
public:
    Auto(string s, double c){
        marca = s;
        consum = c;
    }

    string get_marca(){
        return marca;
    }

    double get_consum(){
        return consum;
    }

    void set_marca(string m){marca = m;}
    void set_consum(double c){consum = c;}

    friend ostream& operator<<(ostream& os, const Auto &a){
        os<<a.marca<< " " << a.consum<<"\n";
        return os;
    }


private:
    string marca;
    double consum;
};

int main(){
    Auto a("Dacia",5.2);
    cout<<a;
    a.set_consum(5.4);
    cout<<a;
    return 0;
}
