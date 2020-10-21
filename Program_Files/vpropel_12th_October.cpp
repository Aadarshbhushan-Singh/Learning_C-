/*
Weight of Salt
Sugar and salt are kept in two bowls A and B. Given the weight of r% of sugar in bowl A and ratio of weights (in gms) of sugar and salt in bowls A and B respectively, write a code to find the weight of salt (in gms) in bowl B.

For example, if weight of 30% of sugar is 100 gms and the ratio of sugar and salt in bowl A and B is 4:5 then the weight of salt is 416.67 (rounded to two decimal places).

Input Format

First line contains the value of r, the percentage of sugar for which weight is given

Next line contains the value of weight of r% of sugar

Next line contains the ratio part of sugar

Next line contains the ratio part of salt

Output Format

Print the quantity of salt in bowl B (Print only two decimal places)

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int per_sugar, weight_per_sugar;
    cin>>per_sugar>>weight_per_sugar;
    int sugar, salt;
    double find_salt;
    cin>>sugar>>salt;
    find_salt=(salt*((float(weight_per_sugar)*100)/per_sugar))/sugar;
    cout<<fixed<<setprecision(2)<<find_salt<<endl;
    return 0;  
};