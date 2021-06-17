#include<iostream>
using namespace std;

class Company
{
    friend class Incometax;
    public:
        int number_of_employees;
        int salary[1000];
    
        Company()
        {
            cin >> number_of_employees;
            for(int i=0;i<number_of_employees;i++)
            {
                cin >> salary[i];
            }
        }

};
class Incometax
{
    protected:
        int slab;
        int tax_increment;
    public:
        Incometax()
        {
            cin >> slab;
            cin >> tax_increment;
        }
        void monthly_tax(Company z)
        {
            int tax=0;
            for(int i=0;i<z.number_of_employees;i++)
            {
                if(z.salary[i]>slab)
                {
                    int interest=0;
                    interest=(z.salary[i]/slab)*tax_increment;
                    tax=tax+(z.salary[i]*interest)/100;
                }
                else
                {
                    tax=tax+0;
                }
            }
            cout << tax;
        }
};
int main()
{
    Company a;
    Incometax a1;
    a1.monthly_tax(a);
    return 0;
}
