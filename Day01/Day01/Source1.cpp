#include <iostream>         // Header files

using namespace std;     // Namespace declaration

void NewFunction()                         // Main function
{
    int empCode;
    char empLocation[10];

    cout << "Welcome to the world of C++";
    cout << "\nEnter the value for Code";
    cin >> empCode;
    cout << "\nEnter the value for Location";
    cin >> empLocation;
    if (empCode == 1001)
    {
        cout << endl << empCode << " - " << empLocation;
    }
    else
        cout << "Other than 1001";
}
void NewFunction2()                         // Main function
{
    /*for (int i = 0; i < 10; i++)
    {
        cout << i <<endl;
    }*/
   /* int i = 0;
    while (i < 10)
    {
        cout << i << endl;
        i++;
    }*/
    int i = 0;
    do {
        cout << i << endl;
        i++;
    }while (i < 10);
}

void act1()
{
    int Upto;
    cout << "Enter the value Upto which you want the series";
    cin >> Upto;
    if (Upto >= 0 && Upto <= 9)
    {
        for (int i = 1; i <= Upto; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << endl;
        }
    }
    else
        cout << "Please enter number between 0 to 9";
    

}

void pointfunction()
{
    /*int x = 10;
    int* ptr = &x;
    cout <<endl<< x;
    cout << endl << &x;
    cout << endl << ptr;
    cout << endl << *ptr;
    cout << endl << &ptr;*/
    //1st way
    /*int arr[5] = { 10,20,30,40,50 };
    cout << arr<<endl;
    for (int i = 0; i < 5; i++)
        cout << endl<< arr[i];*/
    //2nd way
  /*  int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);
     
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }*/
    //3rd way

    int arr[5] = { 10, 20, 30, 40, 50 };
 
    for (int tm : arr)
    {
        cout << tm << " ";
    }
}