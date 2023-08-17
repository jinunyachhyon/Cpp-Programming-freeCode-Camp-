#include <iostream>

int main(){
    bool red {false};
    bool yellow {false};
    bool green {false};
    bool policestop {false};

    if (red == true){
        std::cout << "Stop" << std::endl;
    }
    else if (yellow == true){
        std::cout << "Go slow" << std::endl;
    } 
    else if (green == true){
        std::cout << "Go!" << std::endl;
    }
    else if (!(policestop == true)){
        std::cout << "No checking ahead" << std::endl;
    }
    else if ((green == false) && (policestop == true)){
        std::cout << "You're stopped" << std::endl;
    }
    else {
        std::cout << "The signal is broken" << std::endl;
    }

    return 0;
}