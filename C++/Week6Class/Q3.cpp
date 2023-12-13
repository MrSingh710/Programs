#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class User
{

private:
    string username;
    vector<User *> friends;
    vector<string> interests;

    bool isFriend(User *user)
    {
        return find(friends.begin(), friends.end(), user) != friends.end();
    }

    bool hasCommonInterest(User *user)
    {
        for (const string &interest : interests)
        {
            if (find(user->interests.begin(), user->interests.end(), interest) != user->interests.end())
            {
                return true;
            }
        }
        return false;
    }

public:
    User(string name) : username(name) {}

    void addFriend(User &friendUser)
    {
        friends.push_back(&friendUser);
    }

    void addInterest(string interest)
    {
        interests.push_back(interest);
    }

    void suggestFriends()
    {
        vector<User *> suggestedFriends;

        for (User *friendUser : friends)
        {
            for (User *potentialFriend : friendUser->friends)
            {
                if (potentialFriend != this && !isFriend(potentialFriend) && hasCommonInterest(potentialFriend))
                {
                    suggestedFriends.push_back(potentialFriend);
                }
            }
        }

        if (suggestedFriends.empty())
        {
            cout << "No new friends to suggest\n";
        }
        else
        {
            cout << "Suggested friends: ";
            for (User *suggestedFriend : suggestedFriends)
            {
                cout << suggestedFriend->username << endl;
            }
        }
    }
};

int main()
{
    User raghav("Raghav");
    User prateet("Prateet");
    User inderpal("Inderpal");
    User jaspreet("Jaspreet");

    raghav.addFriend(prateet);
    raghav.addFriend(inderpal);
    prateet.addFriend(raghav);
    prateet.addFriend(inderpal);
    inderpal.addFriend(raghav);
    inderpal.addFriend(jaspreet);
    jaspreet.addFriend(prateet);
    jaspreet.addFriend(inderpal);
    jaspreet.addFriend(raghav);

    raghav.addInterest("Hiking");
    raghav.addInterest("Cooking");
    inderpal.addInterest("Cooking");
    jaspreet.addInterest("Hiking");
    prateet.addInterest("Reading");
    inderpal.addInterest("Skiing");

    raghav.suggestFriends();
    inderpal.suggestFriends();
    jaspreet.suggestFriends();

    return 0;
}