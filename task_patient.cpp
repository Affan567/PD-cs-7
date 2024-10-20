#include <iostream>
using namespace std;

main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    int doctors = 7;
    int treatedPatients = 0;
    int untreatedPatients = 0;

    for (int day = 1; day <= n; day++) {
        int patients;
        cout << "Enter the number of patients on day " << day << ": ";
        cin >> patients;

        if (day % 3 == 0) { 
            if (untreatedPatients > treatedPatients) {
                doctors++;
            }
        }

        if (patients <= doctors) {
            treatedPatients = treatedPatients + patients;
        } else {
            treatedPatients = treatedPatients + doctors;
            untreatedPatients = untreatedPatients + patients ;
            untreatedPatients = untreatedPatients - doctors;
        }
    }

    cout << "Total treated patients: " << treatedPatients << endl;
    cout << "Total untreated patients: " << untreatedPatients << endl;


}