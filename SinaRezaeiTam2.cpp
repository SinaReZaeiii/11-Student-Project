#include <iostream>

using namespace std;

int main() {

    // initializing variables
    int number;
    int t;
    double x,y;
    string m;

    // User enter the students numbers
    cout << "Number of the students: ";
    cin >> number;

    // initializing arrays
    string  name[number];
    double arr[number][3];

    // for loop for receiving arrays from user
    for(int i = 0; i < number; i++){

        cout << "Enter the name: ";
        cin >> name[i];

        for(int j = 0; j < 3; j++)
        {
            // Entering math score
            if (j == 0)
            {
                cout << "Enter the math score: ";
                cin >> arr[i][j];
                x = arr[i][j];
            }
            else
                // Entering English score
                if(j == 1)
                {
                    cout << "Enter the English score: ";
                    cin >> arr[i][j];
                    y = arr[i][j];
                }
                // calculating avg
                else
                {
                    arr[i][j] = (x + y) / 2.0;
                }
        }
    }
    cout << endl;
    // sorting numbers by score
    for(int i = 0; i < number; i++){
        for(int k = i; k < number; k++){
            if (arr[i][2]<arr[k][2]){

                t = arr[i][2];
                arr[i][2] = arr[k][2];
                arr[k][2] = t;

                m = name[i];
                name[i] = name[k];
                name[k] = m;
            }
        }
    }
    // showing sorted number
    cout << "Sorting by score: " << endl;
    for(int i = 0; i < number; i++){
        cout << name[i] << " ";
        cout << arr[i][2] << endl;
    }
    cout << endl;

    // sorting names by alphabet
    for(int i = 0; i < number; i++){
        for(int k = i; k < number; k++){
            if (name[i] > name[k]){

                m = name[i];
                name[i] = name[k];
                name[k] = m;

                t = arr[i][2];
                arr[i][2] = arr[k][2];
                arr[k][2] = t;
            }
        }
    }
    // showing sorted name
    cout << "Sorting by name: " << endl;
    for(int i = 0; i < number; i++){
        cout << name[i] << " ";
        cout << arr[i][2] << endl;
    }
	return 0;
}
