#include <iostream>

using namespace std;


int main()
{
    int choice;

    do
    {
    cout << "Select your option: \n 1. Check Weather a number is prime \n 2. find Prime Numbers for specific range "  << endl;
    cin >> choice;
    }while(choice != 1 && choice != 2);

   switch(choice)
   {
    case 1:
    {
            int num;
            cout << " Enter a number: ";
            cin >> num;
            bool check = true;
            for  (int i = 2; i < num; i++)
            {
              if (num % i == 0)
                 {
                  check = false;
                  break;
                 }

            }
            if(check)
            {cout << " prime number"<<endl;
            break;}
            else
            {cout << "not prime number"<<endl;}

             break;
    }


     case 2:
             int min;
             cout << " Enter minimum: ";
            do
             {
               cin >> min;
             }
            while (min < 1);

           int max;
           cout << "\n Enter maximum: ";
          do
          {
           cin >> max;
          }
          while (min >= max);
       for( int j = min ; j <= max; j++)
          {


            bool check = true;
       for  (int i = 2; i < j; i++)
       {
       if (j % i == 0)
       {
       check = false;
        break;
        }
        }
       if(check)
       {
         cout<< j <<" ";
       }

   }
 }
}