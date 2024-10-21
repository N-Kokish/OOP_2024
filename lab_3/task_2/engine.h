#ifndef ENGINE_H
#define ENGINE_H

#include <string>
using namespace std;

class Engine {
private:
    string type;
    float volume;
public:
    Engine(string type = "бензиновий", float volume = 870);
    string getType();
    float getVolume();
};

#endif // ENGINE_H
