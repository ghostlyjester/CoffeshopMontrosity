#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  double check;
  char c;
  unordered_map<char, double> Drink = {
    {'4', 6.45},
    {'5', 6.45},
    {'6', 6.50},
    {'7', 5.50}
  };
  do{
  cout << "hello welcome to Kitty coffeshop. what would you like" << endl;
  cout << "heres our menu:"<< endl;
  cout << "1. Latte  5.00\n";
  cout << "2. Black Coffe 1.00\n";
  cout <<"3. Hot chocolate 1.50\n";
    
  cin >> c;
  
  if (c == '1') 
  {
  char x;
  cout << "what kind of Latte would you like" << endl;
  cout << "4. chai 6.45\n";
  cout << "5. Macha 6.45\n";
  cout << "6. Pumpkin spice 6.50\n";
  cout << "7. Expresso 5.50\n";
  cin >> x;
  auto D = Drink.find(x);
  if (D != Drink.end()) {
 cout << "We'll have that ready for you in a few minutes" << endl;
  check += D->second;
  }
  else {
    cout << "Im sorry we dont have that" << endl;
  }
  }

  switch (c) {
    case '2':
    cout << "We'll have for you in a few seconds" << endl;
    check += 1.00;
        break;
    case '3':
      cout << "We'll have that for you in a minute" << endl;
      check += 1.50;
    break; 
  
  }
}while(c != 'D' && c != 'd');
double SubTotal = check;
double tax = 725.0/100; 
double Total = check / tax;
cout << "Have a lovely day here is your check: $" << check << endl;
cout << "recipt: \n";
cout << "SubTotal: " << SubTotal << endl;
cout << "Tax: " << tax << endl;
cout << "Total: " << setprecision(2) << fixed << Total + check << endl;
return 0;
  }
