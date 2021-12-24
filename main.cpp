

#include <iostream>
using namespace std;

int inputvalidation(int);
bool linearSearch(const int[], 
const int, 
const int);

int main()
{
const int number_of_accounts = 18; int account_numbers[number_of_accounts] = { 5658845,4520125,7895122, 8777541,8451277, 1302850,8080152,4562555, 5552012,5050552, 7825877, 1250255,1005231, 6545231, 3852085, 
7576651, 7881200, 4581002 };

cout << "Enter an account #: " << endl;
int useraccountnumber = inputvalidation(useraccountnumber);
bool useraccountnumberisvalid = linearSearch(account_numbers, number_of_accounts,    useraccountnumber); 
if (useraccountnumberisvalid) 
cout << "Your account number is valid."<< endl; else
cout << "Your account number is invalid." << endl;
return 0;
}
int inputvalidation(int user_number)
{
while (!(cin >> user_number))
{ cout << "Error. Enter a valid number: ";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
} return user_number;
}

bool linearSearch(const int array[], const int array_size, const int usernumber)
{
int index = 0;
bool found = false;
while (index < array_size && !found)
{
if (array[index] == usernumber)
found = true;
index++;
}
 return 0;
}


