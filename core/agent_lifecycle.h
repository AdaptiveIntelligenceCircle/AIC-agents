#include <iostream>
using namespace std; 

class AgentLifeCycle
{
    public: 
    virtual void onInit() = 0; 
    virtual void onActivate() = 0; 
    virtual void onSuspend() = 0; 
    virtual void onTerminate() =0; 
}; 