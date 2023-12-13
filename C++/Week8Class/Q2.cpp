#include <iostream>
#include <stdexcept>

using namespace std;

class Password {
    string password;

public:
    Password(string password) : password(password) {}

    void validatePassword() {
        try {
            checkLength();
            checkComposition();
            cout << "Password is valid." << endl;
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
    }

private:
    void checkLength() {
        if (password.length() < 8) {
            throw invalid_argument("Invalid Password Length!! Password should be minimum of 8 characters.");
        }
    }

    void checkComposition() {
        bool hasUpperCase = false;
        bool hasLowerCase = false;
        bool hasDigit = false;
        bool hasSpecialChar = false;

        for (char c : password) {
            if (isupper(c)) {
                hasUpperCase = true;
            } else if (islower(c)) {
                hasLowerCase = true;
            } else if (isdigit(c)) {
                hasDigit = true;
            } else {
                hasSpecialChar = true;
            }
        }

        if (!(hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar)) {
            throw invalid_argument("Invalid Password Format!! Password should contain uppercase letters, lowercase letters, numbers, and special symbols.");
        }
    }
};

int main() {
    string inputPassword;
    cout << "Enter your password: ";
    cin >> inputPassword;

    Password userPassword(inputPassword);
    userPassword.validatePassword();

    return 0;
}