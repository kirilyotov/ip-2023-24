#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int startHour1, startMinute1, endHour1, endMinute1;
    int startHour2, startMinute2, endHour2, endMinute2;
    char delim;
    
    cin >> startHour1 >> delim >> startMinute1;
    cin >> endHour1 >> delim >> endMinute1;
    
    cin >> startHour2 >> delim >> startMinute2;
    cin >> endHour2 >> delim >> endMinute2;
    
    int startTime1 = startHour1 * 60 + startMinute1;
    int endTime1 = endHour1 * 60 + endMinute1;
    int startTime2 = startHour2 * 60 + startMinute2;
    int endTime2 = endHour2 * 60 + endMinute2;
    
    int meetStart = (startTime1 > startTime2 ? startTime1 : startTime2 );
    int meetEnd = (endTime1 < endTime2 ? endTime1 : endTime2 );

    
    if (meetEnd - meetStart >= 30) {
        cout << std::setw(2) << std::setfill('0') << meetStart / 60 << ":"
             << std::setw(2) << std::setfill('0') << meetStart % 60 << endl;
    } else {
        cout << "No meeting!" << endl;
    }

    return 0;
}
