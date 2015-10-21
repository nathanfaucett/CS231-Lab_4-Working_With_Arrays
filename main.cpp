#include <iostream>
#include <climits>
using namespace std;


void read_into_array(int (&array) [10]) {
    cout << "Enter 10 integers to be added to array.\n";

    for (int i = 0; i < 10; i++) {
        int value;
        cin >> value;
        array[i] = value;
    }
}

void print_array(int (&array) [10]) {
    cout << '[';
    for (int i = 0; i < 10; i++) {
        cout << array[i];
        if (i != 9) {
            cout << ' ';
        }
    }
    cout << ']' << '\n';
}

void min_and_max() {
    int array[10];
    int min = INT_MAX;
    int max = INT_MIN;
    read_into_array(array);

    for (int i = 0; i < 10; i++) {
        int value = array[i];

        if (value < min) {
            min = value;
        }
        if (value > max) {
            max = value;
        }
    }

    cout << "Min Max Array\n";
    print_array(array);
    cout << "min: " << min << ", max: " << max << "\n";
}

void sum_and_product() {
    int a0[10];
    int a1[10];

    read_into_array(a0);
    read_into_array(a1);

    int sum[10];
    int product[10];

    for (int i = 0; i < 10; i++) {
        sum[i] = a0[i] + a1[i];
        product[i] = a0[i] * a1[i];
    }

    cout << "Array 1\n";
    print_array(a0);
    cout << "Array 2\n";
    print_array(a1);
    cout << "Sum Array\n";
    print_array(sum);
    cout << "Product Array\n";
    print_array(product);
}

void shift_array() {
    int a0[10];
    int a1[10];
    read_into_array(a0);

    cout << "Enter how many times it should right rotate the array elements in a cyclical fashion.\n";
    int shift;
    cin >> shift;

    for (int i = 0; i < 10; i++) {
        int offset = shift + i;

        if (offset >= 10) {
            offset -= 10;
        }

        a1[offset] = a0[i];
    }

    cout << "Rotated Array\n";
    print_array(a1);
}


int main(int argc, char** argv) {
    min_and_max();
    sum_and_product();
    shift_array();
    return 0;
}
