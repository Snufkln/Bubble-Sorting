#include <iostream>

using namespace std;
void showArray();
const int number = 4;
int arr[number];

int main()
{
    for(int i = 0; i < number; i++)
    {
        cout << "Type "<<i+1<<". number: ";
        cin >> arr[i];
        cin.ignore();
    }
    showArray();
    int t;

    for(int i = 0; i < number; i++)
    {

        for(int j = 0; j < number - 1; j++)
        {
            if(arr[j] > arr[j+1]){
                t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;
            }
        }


    }
    showArray();
    getchar();
    return 0;
}

void showArray()
{
    cout << "\nYour array: \n";
    for(int i = 0; i < number; i++)
        cout << i+1 << ". number: " << arr[i] << endl;
}
