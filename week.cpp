/**
 * @brief Analyze vehicle speed data using STL.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct SpeedLog {
    std::string timeStamp;
    int speedKmph;
};

int main() {
    std::vector<SpeedLog> trip1 = {
        {"10:00", 60}, {"10:01", 65}, {"10:02", 80},
        {"10:03", 80}, {"10:04", 90}, {"10:05", 80}
    };

    std::vector<SpeedLog> trip2 = {
        {"11:00", 60}, {"11:01", 65}, {"11:02", 80},
        {"11:03", 80}, {"11:04", 90}, {"11:05", 70}
    };

    // Count speed == 80
    int count80 = std::count_if(trip1.begin(), trip1.end(), [](const SpeedLog& log) {
        return log.speedKmph == 80;
    });
    std::cout << "Vehicle was at 80 km/h " << count80 << " times.\n";

    // Count speed >= 85
    int overspeedCount = std::count_if(trip1.begin(), trip1.end(), [](const SpeedLog& log) {
        return log.speedKmph >= 85;
    });
    std::cout << "Vehicle exceeded 85 km/h " << overspeedCount << " times.\n";

    // Compare speed patterns
    bool samePattern = std::equal(trip1.begin(), trip1.end(), trip2.begin(),
        [](const SpeedLog& a, const SpeedLog& b) {
            return a.speedKmph == b.speedKmph;
        });
    std::cout << "Trips had " << (samePattern ? "identical" : "different") << " speed patterns.\n";

    return 0;
}
