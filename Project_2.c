/*This project displays a real-time digital clock in the terminal using C. It shows the current 
hour, minute, and second, updating every second using a loop, system time functions, and screen 
refresh commands.*/

#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>  // for sleep() and system("clear")

int main() {
    while (1) {
        time_t currentTime;
        struct tm *localTime;

        time(&currentTime);                 // Get current time
        localTime = localtime(&currentTime); // Convert to local time

        system("clear"); // Clear terminal screen

        printf("======= DIGITAL CLOCK =======\n");
        printf("Time: %02d:%02d:%02d\n", 
               localTime->tm_hour, 
               localTime->tm_min, 
               localTime->tm_sec);
        printf("=============================\n");

        sleep(1); // Wait for 1 second
    }

    return 0;
}
