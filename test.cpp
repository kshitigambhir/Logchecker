#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("logs.txt");
    string line;
    int okCount = 0, warningCount = 0, errorCount = 0, total = 0;

    if (!file.is_open()) {
        cout << "Unable to open log file." << endl;
        return 1;
    }

    while (getline(file, line)) {
        total++;
        if (line.find("OK") != string::npos) {
            okCount++;
        } else if (line.find("WARNING") != string::npos) {
            warningCount++;
        } else if (line.find("ERROR") != string::npos) {
            errorCount++;
        }
    }

    file.close();

    cout << "Log Summary:\n";
    cout << "Total Lines: " << total << endl;
    cout << "OK: " << okCount << "\nWarnings: " << warningCount << "\nErrors: " << errorCount << endl;

    return 0;
}
