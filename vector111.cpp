// vector111.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Vector
{
public:
    Vector()
    {}
    ~Vector()
    {}
    void addInt(int num)
    {
        vect.push_back(num);
    }
    void addIntFront(int num)
    {
        vect.insert (vect.begin(), num);
    }
    
    std::vector<int> vect1()
    {
        return vect;
    }
    void vect2()
    {
        for (int i = 0; i < vect.size(); ++i)
        {
            std::cout << "Element [" << i << "] = " << vect[i] << std::endl;
        }
        std::cout << std::endl;
    }

private:
    std::vector <int> vect;
};

int main()
{
    Vector obj;
    obj.addInt(11);
    obj.addInt(45);
    obj.addInt(98);
    obj.addIntFront(897);
    obj.addIntFront(654);
    obj.addIntFront(545);
    obj.vect2();    

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
