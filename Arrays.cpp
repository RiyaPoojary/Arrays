#include <iostream>
using namespace std;

int main()
{
   int arr[5];
   int *ptr = &arr[0];
   cout << "Enter elements: ";
   for(int i = 0; i < 5; ++i)
   {   cin >> arr[i];
   }
   cout << "You entered: ";
   for(int i = 0; i < 5; i++) 
   {
      cout<< *ptr <<"\n";
      ptr++;
   }
   return 0;
}
