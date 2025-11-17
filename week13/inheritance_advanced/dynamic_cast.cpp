#include <iostream>

//todo:
// reload function for weapon and for all derived classes
// Create an inventory for the player (set of weapons)


class Weapon {
public:
    virtual void use() = 0; // Pure virtual function
};                          //If a class has at least one pure virtual function, its an abstract class. You cant make an
                            // object of this class



class Gun : public Weapon{
public:
   void use() override {
        std::cout << "BANG!" << std::endl;
    }

private:

};

class MachineGun : public Gun {
public:

    int magazine = 20;
    void use() override { //redefining shoot method (exactly the same as the method in the parent class) override keyword wont let me compile if its wrong
        while (magazine-- > 0){
            std::cout << "BANG!";
        }
        std::cout << std::endl;
        magazine = 20; //reloaded
    }
    

};

class Bazooka : public Weapon{
public:
    void use(void) override {
        std::cout << "BOOM!" << std::endl;
    }

};

class Knife : public Weapon{
public:

    Knife(bool stainless = false) : is_stainless(stainless) {}

    void use() override{
        std::cout << "SLASH!" << std::endl;
    }
    bool get_isStainless(){
        return is_stainless;
    }

    private:
    bool is_stainless;
};


class Player {
    public:
    
    void use_weapon(Weapon& weapon) {
        //Dynamic casting
        Knife *knife = dynamic_cast<Knife*>(&weapon); //casting of a parent address to a child pointer
        if(knife != NULL){
            // the weapon must be a knife if this activates
            if(knife->get_isStainless()){
                std::cout << "Stainless Knife. Can use it." << std::endl;
                weapon.use();
            }
            else{
                std::cout << "Not stainless knife, can not use." << std::endl;
            }
        }
        else{
            std::cout << "Not a knife" << std::endl;
            weapon.use();
        }
        
    }
};



int main(){
    Gun gun;
    MachineGun mg;

    gun.use();
//  mg.shoot();

    // Create reference to a base class
    Gun& weapon = mg;
    weapon.use();

    std::cout << "\n---------------------------\n";
    Bazooka bazooka;
    Player player;
    player.use_weapon(gun);
    player.use_weapon(bazooka);
    std::cout << "\n---------------------------\n";
    Knife knife;
    player.use_weapon(knife);

    return 0;
}