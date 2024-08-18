#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        // Encuentra la última palabra
        int i = s.length() - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;  // Ignora los espacios al final
        }
        int longitud = 0;
        while (i >= 0 && s[i] != ' ') {
            longitud++;
            i--;
        }
        return longitud;
    }
};

int main() {
    Solution sol;
    string input = "Hola mundo feliz";
    int resultado = sol.lengthOfLastWord(input);
    cout << "La longitud de la última palabra es: " << resultado << endl;
    return 0;
}
