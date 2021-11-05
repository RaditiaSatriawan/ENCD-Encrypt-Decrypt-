#include <iostream>
using namespace std;
int main() {
  int i, a, x;
  char str[100];
  cout << "Hello, welcome to ENCD (Encrypt/Decrypt)\n";
  cout << "\n1 = Encrypt\n2 = Decrypt\n";
  cout << "\nPlease choose 1 or 2 : ";
  cin >> x;
  cout << "\nInput a key : ";
  cin >> a;
  string c;
  cout << "\nInput the word(s) or sentence(s): ";
  cin >> str;
   switch(x)
   {
      //first case for encrypting a string
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + a; //the key for encryption is 3 that is added to ASCII value

         
         break;

      //second case for decrypting a string
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - a; //the key for encryption is 3 that is subtracted to ASCII value
    }
  cout << "\nResult: " << str << endl;
  do 
  {
   cout << '\n' << "Press a key to continue...";
  } while (cin.get() != '\n');    
  cin.get();
  return 0;
}
