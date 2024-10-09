#include<QCoreApplication>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])

{
    QCoreApplication a(argc, argv);

    char ch;
    cout<<"Enter the Character"<<endl;
    cin>>ch;
    cout<<"ASCII Value of Character"<<" "<<ch<<""<<"is:"<<int(ch)<<endl;

    return a.exec();

}
