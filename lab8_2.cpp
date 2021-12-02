#include <iostream>
#include<string>
using namespace std;

int main(){
    string  name,movie,day,k ;
    int studentNO,A;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout << "?????: ";
    getline(cin,name );
    cout << "Fahsai: Wow!!! "<<name<<" is a really cool name."<<endl<<"Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
    cout<< name<<": ";
    cin >> studentNO;
    A = (studentNO-2513)+1;
    //แก้ตรงปี//
    cout << "Fahsai: I think you may be GEAR "<<A<<". I have a free movie ticket for you."<<endl<<"Fahsai: Let's go to the cinema together!!!"<<endl<<"Fahsai: What movie do you want to watch?";
    cin >> movie;
    cout << "Fahsai: So....which day are you free to go with me?";
    cin >> day;
    cout << day<<"....that is OK!!! I'm looking forward to watching "<<movie<< "with you.";
    cin >> k;
    cout << "Fahsai: 555+ see you "<<day<<". Bye Bye \(^ ^)/";

    return 0;

}