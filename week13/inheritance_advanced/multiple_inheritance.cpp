#include <iostream>

class Character{
public:
    Character(unsigned hp_ = 100) : hp(hp_){
        std::cout << "Character's Constructor\n";
    }

    int hp;
};


class Elf : virtual public Character{     //By making this virtual, we remove the "diamond issue" where a child of 2 classes with same base class creates 2 base classes
public:
    Elf(){
        std::cout << "I am an Elf\n";
    }
    
    void think() const{
        std::cout << "Lets not fight!\n";
    }

};

class Warrior : virtual public Character{ //By making this virtual, we remove the "diamond issue" where a child of 2 classes with same base class creates 2 base classes
public:
public:
    Warrior(){
        std::cout << "I am a Warrior!\n";
    }
    
    void fight() const{
        std::cout << "Slash!!!!\n";
    }

};


class ElfWarrior : public Elf, public Warrior{
// It is worth noting that an ElfWarrior is both an elf and a warrior, thus the constructor for both elf and warrior both run.

};


int main(){
    ElfWarrior buddy;
    buddy.fight();
    buddy.think();

    std::cout << buddy.hp << std::endl; //we have 2+ parent classes, when ElfWarrior is made 2 seperate character objects are made

    return 0;
}