#ifndef ENGINE_H
#define ENGINE_H
#include <string>

using namespace std;
class Engine{
private:
    string type;
    float volume;
public:
    Engine();
    Engine(string type,float volume);
    void setEngine(string type,float volume);
    string getType();
    float getVolume();
};


#endif // ENGINE_H
