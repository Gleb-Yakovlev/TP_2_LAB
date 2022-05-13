#include "coordinates.h"
#include "queue.h"
#include "safe_input.h"
#include <iostream>
using namespace std;

int main()
{
    while (1){
        cout << "Select a task" << endl;
        cout << "1 - Changing coordinates" << endl;
        cout << "2 - Cyclic queue" << endl;
        cout << "0 - Exit" << endl;
        int task = safe_input();
        switch (task)
        {
        case 1: {
            system("cls");
            cout << "COORDINATES" << endl;
            coordinates coord;
            while (1) {
                cout << "COORDINATES" << endl;
                cout << "x)" << coord.x << endl
                    << "y)" << coord.y << endl
                    << "z)" << coord.z << endl;
                cout << "Select a order:" << endl
                    << "1 - Increasing one coordinate by a number" << endl
                    << "2 - Increasing the coordinate by the maximum value of the coordinate" << endl
                    << "3 - Decreasing one coordinate by a number" << endl
                    << "4 - Decreasing the coordinate by the minimum value of the coordinate" << endl
                    << "0 - Go back" << endl;
                int order = safe_input();
                switch (order)
                {
                case 1: {++coord; break; }
                case 2: {coord++; break; }
                case 3: {--coord; break; }
                case 4: {coord--; break; }
                case 0: break; 
                default: break;
                }
                system("cls");
                if (order == 0) break;
            }
            break;
        }
        case 2: {
            system("cls");
            cout << "QUEUE" << endl;
            srand(time(0));
            Queue q;
            while (1) {
                cout << "size " << q.size << endl;
                for (int i = q.front; i <= q.rear; i = i++) {
                    cout << i + 1 << ")" << q.items[i] << endl;
                }
                cout << "Select a order:" << endl
                    << "1 - + Add two queue elements" << endl
                    << "2 - - The difference between two queue elements" << endl
                    << "3 - / Divide one element into another" << endl
                    << "4 - * Multiply one element by another" << endl
                    << "5 - += The sum of an element and a number" << endl
                    << "6 - -= The difference between an element and a number" << endl
                    << "7 - /= Dividing an element by a number" << endl
                    << "8 - *= Multiplying an element by a number" << endl
                    << "0 - Go back" << endl;
                int order = safe_input();
                switch (order)
                {
                case 1: { q = q + q; break; }
                case 2: { q = q - q; break; }
                case 3: { q = q / q; break; }
                case 4: { q = q * q; break; }
                case 5: {
                    cout << "Enter the number" << endl;
                    int value = safe_input();
                    q += value; 
                    break; 
                }
                case 6: {
                    cout << "Enter the number" << endl;
                    int value = safe_input();
                    q -= value;
                    break;
                }
                case 7: {
                    cout << "Enter the number" << endl;
                    int value = safe_input();
                    q /= value;
                    break;
                }
                case 8: {
                    cout << "Enter the number" << endl;
                    int value = safe_input();
                    q *= value;
                    break;
                }
                case 0: break;
                default: break;
                }
                system("cls");
                if (order == 0) break;
            }
            break;
        }
        case 0: return 0;
        default: {cout << "Wrong order!" << endl; break; }
        }
    }  
}

