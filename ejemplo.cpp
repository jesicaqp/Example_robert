#include <iostream>
using namespace std;

bool check_email_ascii(string email) {
    int flag=1;
    //Implementation with ASCII characters
    for(int i=0;i<email.length();i++)
    {
        if ((email[i]>=48 && email[i]<=57)||
            (email[i]>=65 && email[i]<=90)||
            (email[i]>=97 && email[i]<=122)||
            (email[i] == '.'))
            {
                continue;
            }
        else
        {
        cout<<email;
        cout<<"WARNING: String contains special characters before @.\n";
        flag=0;
        break;
        }
    }
    if(flag==1)
    {
        cout<<"There is no special character in the string before the @.\n";
    }
    return flag;
}

int find_at(string email){
    return (email.find("@"));
}

bool check_server_name(string email){
    return (email=="server.es" || email=="server.com");
}

int main() {
  string email;
  cout << "Cuenta de Email: ";
  cin >> email;
  cout << "Tu cuenta de Email es: " << email << "\n";
  
  // Check for @ 
  int at_idx=find_at(email);
  if(at_idx >= 0)
        cout<<"Your email has an at."<<endl;
  else 
        cout<<"WARNING: Your email does not have an at."<<endl;

  // Checking if string contians special character
  if(check_email_ascii(email.substr(0,at_idx)))
        cout<<"Your email characters are valid."<<endl;
  else
        cout<<"WARNING: Your characters are invalid."<<endl;

  if(check_server_name(email.substr(at_idx+1)))
        cout<<"Your email server is valid."<<endl;
  else
        cout<<"WARNING: Your email server is invalid."<<endl;
  //Implementation with regex


    char c = "a"
    if ((int(c) >= 48) || (int(c) <= 56))
        cout<<"caracter valido";
    else  
        cout<<"caracter invalido"; 

  return 0;
}
