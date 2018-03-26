#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Surface
{
  private:
    int flipperSize;
    string pancakes;

  public:
    Surface(string pancakes, int flipperSize);
    void setFlipperSize(int size);
    vector<string> getNextSurfaces();

  private:
    string flip(string pancakes);
};

Surface::Surface(string pancakes, int flipperSize)
{
    this->pancakes = pancakes;
    this->flipperSize = flipperSize;
}

vector<string> Surface::getNextSurfaces()
{
    vector<string> nextFlips;

    for (int i = 0; i <= this->pancakes.length() - this->flipperSize; i++)
    {
        int end = i + this->flipperSize;
        string flipped = this->flip(this->pancakes.substr(i, this->flipperSize));
        string newState = this->pancakes.substr(0, i) + flipped + this->pancakes.substr(end);
        nextFlips.push_back(newState);
    }
    return nextFlips;
}

string Surface::flip(string pancakes)
{
    int length = pancakes.length();
    string output = "";
    for (int i = 0; i < length; i++)
    {
        if (pancakes[i] == '+')
        {
            output += "-";
        }
        else
        {
            output += "+";
        }
    }
    return output;
}