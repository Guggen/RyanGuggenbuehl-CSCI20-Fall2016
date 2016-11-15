#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
                char firststr[10];
                int firstname = 0;
                char *head = firststr;
                char *tail = firststr;
                cout << "Please enter a 10 letter word or less" << endl;
                cin >> firststr;
                strlen(firststr);
                firstname = strlen(firststr);
                cout << "Your word is " << firststr << endl;
                if (firstname<10)                               //Takes a word less than 9 characters
                {
                                while (*head != '\0')
                                {
                                                cout << *head; //Outputs each character until '\0' is reached.
                                                head++;       
                                }
                }
                else
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;  //If word is too large then its rejected.
                }
                cout << endl;
                tail = &firststr[strlen(firststr) - 1]; //Assings the tail to the memory location of the 2nd to last character.
                if (firstname < 10)
                {
                                while (*tail>0)        //This reverses the user word.
                                {
                                                cout << *tail;
                                                tail--;
                                }
                }
                cout << endl;
                head = firststr;
                tail = &firststr[strlen(firststr) - 1];   //Assings the tail to the memory location of the 2nd to last character.
                head++;
                tail--;
                if (*head == *tail)
                {
                                cout << "It is an palindrome!" << endl;  //Compares tail to head, if equal its a palindrome.
                }
                else
                {
                                cout << "It is not an palindrome" << endl; //If tail and head are not equal its not a palidrome.
                }
 
                return 0;
}