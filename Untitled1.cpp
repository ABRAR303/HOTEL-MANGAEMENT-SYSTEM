#include <iostream>
#include <thread>

void task1() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Task 1: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void task2() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Task 2: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(700));
    }
}

int main() {
    // Creating two threads
    std::thread t1(task1);
    std::thread t2(task2);

    // Joining the threads with the main thread
    t1.join();
    t2.join();

    std::cout << "Main thread exiting." << std::endl;

    return 0;
}
