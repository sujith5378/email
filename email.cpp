#include <iostream>
#include <string>


using namespace std;

int main(){

    string sender_mail_id, password, from_address, to_address, subject, body;
    cout << "Enter sender mail id: ";
    cin >> sender_mail_id;
    cout << "Enter password: ";
    cin >> password;
    cout << "Enter from address: ";
    cin >> from_address;
    cout << "Enter to address: ";
    cin >> to_address;
    cout << "Enter subject: ";
    cin >> subject;
    cout << "Enter body: ";
    cin >> body;

    string command = "echo \"" + body + "\" | mail -s \"" + subject + "\" " + to_address;
    system(command.c_str());

    return 0;
}
