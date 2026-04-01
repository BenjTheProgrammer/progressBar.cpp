// C++ program to create loading bar
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

// Function to creating loading bar
void loadingBar(int finishpercent, string color, int secsleep)
{
    // 0 - black background,
    // A - Green Foreground
       


    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("Loading...\n\n");

    // Print initial loading bar
    for (int i = 0; i < finishpercent; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");

    // Print loading bar progress
    for (int i = 0; i < finishpercent; i++) {
        printf("%c", b);

        // Sleep for 1 second
        this_thread::sleep_for(chrono::seconds(secsleep));
    }
}
