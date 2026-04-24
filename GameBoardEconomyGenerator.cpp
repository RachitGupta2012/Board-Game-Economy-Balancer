#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Property
{
    string name;
    int count;
    float multiplier;
    float final_price;
};


int main(){
    int total_money;
    int amt_players;
    int amt_properties;
    float total_property_value;
    float avg_proptery_val;

    cout<<"Enter Amount of Players: ";
    cin>>amt_players;
    cout<<"\nEnter Total Amonut of Money: ";
    cin>>total_money;
    cout<<"\nEnter Total Total Amout of Properties: ";
    cin>>amt_properties;
    cout<<"\nEnter Total Total VALUE of Properties(Reccommeded To be 1.5times Higher than Game Economy, ENTER INTERGER VALUE): ";
    cin>>total_property_value;

    avg_proptery_val = total_property_value/amt_properties;
    
   vector<Property> Rarity = {
    {"Common", 0, 0.3f, 0.0},
    {"Uncommon", 0, 0.5f, 0.0},
    {"Rare", 0, 0.8f, 0.0},
    {"Legendary", 0, 2.0f, 0.0}
};

    int added_property = 0;

    while (added_property != amt_properties)
    {    
        added_property = 0;
    for (auto &p : Rarity)
    {
        cout<<"\nHow many "<<p.name<<" Properties Do You want?: ";
        cin>>p.count;
        added_property += p.count;
    }    
    if (added_property != amt_properties)
    {
        cout<<"Property Count incorrect, Shouls be "<<amt_properties<<" You Have entered "<<added_property<<endl;
    }
    
}

    float balancing_muilt_weight = 0;
    for (auto &p : Rarity)
    {
        balancing_muilt_weight += (p.multiplier*p.count);
    }
    
    float adjust = total_property_value / balancing_muilt_weight;

    cout<<"\n------ BALANCED ECONOMY ------\n";
    float real_val = 0;
    for (auto &p : Rarity)
    {
        p.final_price = p.multiplier*adjust;
        real_val += (p.final_price*p.count);
        cout <<"|"<<p.name<<" Qty: " <<p.count << "  "<< "Price: $"<<p.final_price<<"|"<<endl;
    }
    cout<<"\n Each Player Starts with "<< (total_money*0.4)/amt_players <<endl<< "\nThe Bank will hold: "<<total_money*0.6;
    

}
