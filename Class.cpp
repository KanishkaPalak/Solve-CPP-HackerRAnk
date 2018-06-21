#include <iostream>
#include <sstream>
using namespace std;
class Student
{
    private:
        int age, standard;
        string first_name, last_name;
    public:
        void set_age(int a){age=a;}
        void set_standard(int std){standard=std;}
        int get_age(){return age;}
        int get_standard(){return standard;}
        void set_first_name(string f){first_name=f;}
        void set_last_name(string l){last_name=l;}    
        string get_first_name(){return first_name;}
        string get_last_name(){return last_name;}
};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() <<endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << endl;
    cout << endl;
    cout<<st.get_age()<<","<<st.get_first_name()<<","<<st.get_last_name()<<","<<st.get_standard();
    
    return 0;
}
