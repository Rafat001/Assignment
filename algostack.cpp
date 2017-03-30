#include <iostream>
#include <stack>
using namespace std;
int main ()
{
    stack <string> cards;
    cards.push("1");

    cards.push("2");

    cards.push("3");

    cards.push("4");

    cout << "There are " << cards.size () << " cards" << endl;

    cout << "The card on the top " << cards.top() << endl;

    cards.pop();

    cout << "The top card is now " << cards.top() << endl;

    cout << cards.size();



    cin.get ();

    return 0;
}

