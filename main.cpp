#include <iostream>
#include <ctime>

void printCurrentDate() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char buffer[80];
    strftime(buffer, 80, "%Y/%m/%d", ltm);
    return buffer;
}

int main() {
    printCurrentDate();
    return 0;
}
