# Caesar Cipher
This C++ program implements a Caesar cipher to encrypt text. It reads text from an input file, applies the cipher, and then writes the encrypted text to an output file.

Here's a brief overview of its features:
* **Shift Value**: The user is prompted to enter a numerical shift value. If 0 is entered, the program defaults to a shift of 3.
* **File Handling**: The program attempts to open `C:\input.txt` for reading and `C:\output.txt` for writing. It includes error handling to notify the user if either file cannot be opened.
* **Encryption Logic**: It reads up to 8000 characters from the input file. Each alphabetic character (both lowercase and uppercase) is then shifted by the specified `shift_value` within its respective case, wrapping around the alphabet.
* **Output**: The original text from the input file and the encrypted text are both printed to the console. The encrypted text is also written to the `output.txt` file.
* **File Closure**: Finally, both the input and output files are closed.
