#include <iostream>
#include <iomanip>

// Prototype
void printLecture(const struct Lecture& lecture);
struct Lecture createLecture(std::string title, std::string author, int duration);

// Create a structure

struct Lecture{
    std::string title;
    int duration;
    std::string author;
};

int main(){
    // Create a Lecture object
    struct Lecture oop_the_best;
    oop_the_best.title = "Structures.";
    oop_the_best.duration = 50 * 60; // We want our time in seconds so 50 minutes * 60 seconds
   printLecture(oop_the_best);
   struct Lecture oop_the_best_two = createLecture("Name3", "adam", 250 * 60);
   printLecture(oop_the_best_two);
    return 0;
}

void printLecture(const struct Lecture& lecture){
    std::cout << std::setw(20) << std::left << "Title: " << lecture.title << std::endl;
    std::cout << std::setw(20) << std::left << "Duration: " << lecture.duration / 60 << " minutes" << std::endl;
}

struct Lecture createLecture(std::string title, std::string author, int duration){
    struct Lecture temp;
    temp.title = title;
    temp.author = author;
    temp.duration = duration;
    return temp;
}