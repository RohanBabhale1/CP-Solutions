class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> week = {"Friday", "Saturday", "Sunday",
                               "Monday", "Tuesday", "Wednesday", "Thursday"};

        vector<int> months = {31,28,31,30,31,30,
                              31,31,30,31,30,31};

        int days = 0;

        for (int y = 1971; y < year; y++) {
            days += isLeapYear(y) ? 366 : 365;
        }

        if (isLeapYear(year))
            months[1] = 29;

        for (int i = 0; i < month - 1; i++) {
            days += months[i];
        }

        days += day - 1;

        return week[days % 7];
    }

    bool isLeapYear(int y) {
        return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
    }
};
