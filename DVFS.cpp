#include "DVFS.hpp"
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

DVFS :: bool linux_check(){
    #ifdef _WIN32
        return false;
    #else
        return true;
    #endif
}

DVFS :: int get_freq(int core_num){
    std::string direction = "/sys/devices/system/cpu/cpu" + std::to_string(core_num) + "/cpufreq";
    system(direction);
    
    std::string file = "cpuinfo_max_freq";
    if (fs::exist()){
        try{
            
        }
    }
    else{
        std::cout << "File does not exist nor the directory"
    }
}
