#include <iostream>
using namespace std; 
#include <map> 

struct ContextSnapshot
{
    string enviroment; 
    map<string, string> signals; 
    uint64_t timestamp; 
};