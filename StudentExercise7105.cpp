#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], Mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    if (c1!=r2)
    {
        cout<<"Matrices cannot be multiplied.";
        return 0;
    }

    // Storing Elements of First Matrix.
    cout << endl << "Enter elements of Matrix 1:" << endl;
    
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element for Matrix 1 for the position " <<"("<< i + 1 <<","<< j + 1<<")" << " : ";
            cin >> A[i][j];
        }

    // Storing Elements of Second Matrix.
    cout << endl << "Enter elements of Matrix 2:" << endl;
        
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element for Matrix 2 for the position " <<"("<< i + 1 <<","<< j + 1<<")" << " : ";
            cin >> B[i][j];
        }
        
	// Multiplying Matrix 1 and 2 and Storing in Array Mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            Mult[i][j]=0;
            
            for(k = 0; k < c1; ++k)
            {
                Mult[i][j] += A[i][k] * B[k][j];
            }
        }

    // Displaying the Multiplication of Two Matrix.
    cout << endl << "Output Matrix: " << endl;
        
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << " " << Mult[i][j];
            
        	if(j == c2-1)
        	cout << endl;
        }

    return 0;
}
