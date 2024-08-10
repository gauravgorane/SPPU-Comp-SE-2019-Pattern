/*
Write a program in cpp to use map associative container. The keys will be the names of states and the values will be the population of the population of the state. When the program runs, the user is prompted to type the name of a state. The program then looks in the map, using the state name as an index and returns the population of the state.
*/

#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

int main()
{
    typedef map<string, int> mapType;
    mapType populationMap;

    populationMap.insert(pair<string, float>("Maharashtra", 125));
    populationMap.insert(pair<string, float>("Uttar Pradesh", 225));
    populationMap.insert(pair<string, float>("Bihar", 120));
    populationMap.insert(pair<string, float>("West Bengal", 100));
    populationMap.insert(pair<string, float>("Madhya Pradesh", 90));
    populationMap.insert(pair<string, float>("Tamil Nadu", 80));
    populationMap.insert(pair<string, float>("Rajasthan", 78));
    populationMap.insert(pair<string, float>("Andhra Pradesh", 53));
    populationMap.insert(pair<string, float>("Odisha", 47));
    populationMap.insert(pair<string, float>("Kerala", 38));
    populationMap.insert(pair<string, float>("Telangana", 37));
    populationMap.insert(pair<string, float>("Assam", 35));
    populationMap.insert(pair<string, float>("Jharkand", 38));
    populationMap.insert(pair<string, float>("Karnataka", 68));
    populationMap.insert(pair<string, float>("Gujarat", 70));
    populationMap.insert(pair<string, float>("Punjab", 31));
    populationMap.insert(pair<string, float>("Chhattisgarh", 30));
    populationMap.insert(pair<string, float>("Haryana", 29));
    populationMap.insert(pair<string, float>("UT Delhi", 19));
    populationMap.insert(pair<string, float>("UT Jammu and Kashmir", 14));
    populationMap.insert(pair<string, float>("Uttarakhand", 12));
    populationMap.insert(pair<string, float>("Tripura", 04));
    populationMap.insert(pair<string, float>("Meghalaya", 04));
    populationMap.insert(pair<string, float>("Manipur", 03));
    populationMap.insert(pair<string, float>("Nagaland", 02));
    populationMap.insert(pair<string, float>("Goa", 02));
    populationMap.insert(pair<string, float>("Arunachal Pradhesh", 02));
    populationMap.insert(pair<string, float>("UT Puducherry", 02));
    populationMap.insert(pair<string, float>("Mizoram", 01));
    populationMap.insert(pair<string, float>("UT Chandigarh", 01));
    populationMap.insert(pair<string, float>("Sikkim", 01));
    populationMap.insert(pair<string, float>("UT Dadar and Nagar Haveli and Daman and Diu", 01));
    populationMap.insert(pair<string, float>("UT Andaman and Nicobar Islands", 01));
    populationMap.insert(pair<string, float>("UT Lakshadweep", 0.0003));
    populationMap.insert(pair<string, float>("UT Lakshadweep", 0.00006));

    mapType::iterator iter = --populationMap.end();
    populationMap.size() << '\n';

    for (iter = populationMap.begin(); iter != populationMap.end(); ++iter)
    {
        cout << iter->first << ":" << iter->second << " million\n";
    }
    
    char c;
    do
    {
        string state;
        cout << "\nEnter that state you want to know the population of : ";
        cin >> state;
        iter = populationMap.find(state);
        if (iter != populationMap.end())
        {
            cout << state << "'s population is " << iter->second << " million\n";
        }
        else
        {
            cout << "Do you wnat to continue? (y/n) : ";
            cin >> c;
        }

    } while (c=='y'||c=='Y');

    populationMap.clear();

    return 0;
    
}