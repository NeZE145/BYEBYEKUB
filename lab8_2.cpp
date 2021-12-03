#include <iostream>
#include<string>
using namespace std;

int main(){
    string  name,movie,day,k;
    char a=92;
    int studentNO,A;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout << "?????: ";
    getline(cin,name );
    cout << "Fahsai: Wow!!! "<<name<<" is a really cool name."<<endl<<"Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
    cout<< name<<": ";
    cin >> studentNO;   
    A = (studentNO/10000000-13)+1;
    cout << "Fahsai: I think you may be GEAR "<<A<<". I have a free movie ticket for you."<<endl<<"Fahsai: Let's go to the cinema together!!!"<<endl<<"Fahsai: What movie do you want to watch?";
    cout <<endl<< name <<": " ;
    cin.ignore();
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?";
    cout <<endl<< name <<": " ;
    getline(cin,day);
    cout << "Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<< " with you.";
    cout <<endl<< name <<": " ;
    cin >> k;
    cout << "Fahsai: 555+ see you "<<day<<". Bye Bye "<<a<<"(^ ^)/";

    return 0;

}