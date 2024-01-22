#include <iostream>
#include <string>

using namespace std;

class Platform
{
public:
    Platform(string platformName, string platformManufaturer)
    {

    }

    string getPlatformName()
    {
        return platformName;
    }

    

private:
    string platformName;
    string platformManufacturer;
};

void createNewPlatform()
{
    string name;
    string manufacturer;
   
    string gameName;

    cout << "Enter platform name: " << endl;
    cin >> name;
    cout << endl << "Enter platform manufacturer: " << endl;
    cin >> manufacturer;
 
    cout << "New platform created successfully!\n";
    cout << "now let's head to game section." << endl;

}

class Game
{
public:
    Game(string gameName, string gamePublisher, string gameDeveloper)
    {

    }
    string getGameName()
    {
        return gameName;
    }
    
private:
    string gameName;
    string gamePublisher;
    string gameDeveloper;
};

void createNewGame()
{
    string name, publisher, developer;
    int gameNumber;

    cout << "Please enter the how many game you wish to create." << endl;
    cin >> gameNumber;

    for (int i = 0; i < gameNumber; ++i)
    {
        cout << "Enter game number " << i + 1 << " name for the " << name << ": " << endl;

    }
}

class Achievement
{
public:
    Achievement(string achTitle, string achdescription, int achvalue)
    {

    }

    void displayAchievement()
    {
        cout << "Title : " << achTitle << endl << "Description: " << achdescription << "Score Value: " << achvalue << endl;
    }

private:
    string achTitle;
    string achdescription;
    int achvalue;
};

void createNewAchievement()
{
    string title;
    string description;
    int value;
    int achNumber;

    cout << endl << "Thank you, Now please enter the amount of achievement you wish to create." << endl;
    cin >> achNumber;

}

int main()
{
 
    int answer;
    
    cout << "Welcome to GAME 1011 LAB1!" << endl;

    cout << "Let's head to setting your platform name." << endl;
    cout << "Type 1 to move on to setting platform name." << endl;
    cin >> answer;

    if (answer == 1)
        createNewPlatform();
    else
        cout << "WRONG ANSWER.. NOW EXITING..." << endl;

    return 0;

}
