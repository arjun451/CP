#include<iostream>
using namespace std;
class Sello
 {
private:
        int age;
        char *name;  
    /* data 
       */
public:
    Sello( int age,char *name)
    {
        this->age = age;
        this->name = name;
        
    }
    void print()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main()
{
    char ar[]={'A','B'};
 Sello s1(21,ar);
 s1.print();
 return 0;
}
 







