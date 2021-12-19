#pragma once
#include<string>
#include<iostream>

using namespace std;

class zoo
{

private:

    string name;
    int visitors;

   zoo()
    {
        name ="O";
        visitors =0;
    }
protected:
    int number;

public:
    
    zoo(string na, int vis, int num)
    {
        this->name = na;
        this->visitors = vis;
        this->number = num;
    }
    ~zoo()
    {
        cout << "destrucktor" << endl;
    }
    void getname()
    {
        name = name;
    }
    void getvisitors()
    {
       visitors = visitors;
    }
    void getnumber()
    {
        number = number;
    } 
    void Print()
    {
        cout << "Name\t\t" << name << endl;
        cout << "visitors\t" << visitors << endl;
        cout << "number\t\t" << number << endl;
    }

};


