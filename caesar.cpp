#include <iostream>
#include <fstream>

using namespace std;

void main()
{
    int shift_value = 3;
    char text[8000] = {0};

    cout << "Enter the shift value: ";
    cin >> shift_value;

    if (shift_value == 0)
        shift_value = 3;

    ifstream input_file;
    ofstream output_file;

    output_file.open("C:\\output.txt");
    input_file.open("C:\\input.txt", ios::in);

    if (!output_file)
    {
        cout << "Could not open output file!" << endl;
        return;
    }
    if (!input_file)
    {
        cout << "Could not open input file!" << endl;
        return;
    }

    input_file.read(text, 8000);
    cout << text << endl;
    cout << "Encryption completed!" << endl;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = (text[i] - 'a' + shift_value) % 26 + 'a';
        }
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = (text[i] - 'A' + shift_value) % 26 + 'A';
        }
    }

    output_file.write(text, sizeof(text));
    cout << text << endl;
    input_file.close();
    output_file.close();
}
