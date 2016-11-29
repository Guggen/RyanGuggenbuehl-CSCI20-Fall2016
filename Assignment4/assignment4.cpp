//Ryan Guggenbuehl
//This prgram was supposed to take a text file store each word, word count, and first location of word.
//Could not get program to work.

#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include <iomanip>
#include <sstream>
using namespace std;

class wordsClass{
 public:
 
 private:
 
};


int main(){
    ifstream inFS; //input file stream
    ofstream outFS;
    istringstream iss;
    string fileName = "";
    const int textLength = 1000;
    string wordsText[textLength];
    string words[textLength];
    int wordCount[0];
    string words2[textLength];
    int i = 0;
    int j = -1;
    int k = 0;
    string textF = "";
    string text2 ="";
    
    int count = 1;
    
    
    
    
    inFS.open("muffet.txt");
    outFS.open("output.txt");
    
    do      //if not at end of file, continue reading numbers
     {      
            
            getline(inFS, textF);
            
            text2 =  text2 + textF + " ";
             
                        
     } while (!inFS.eof( ));
     
     
       
   for( i = 0; i < text2.length(); ++i){
       if(text2.at(i)==','){
           text2.at(i)=' ';
       }
       
   }
    cout << text2;
  
   
   
   for(i = 0; i < 50; ++i){//stores words in array
     inFS >> wordsText[i];
     
     
    }
    //cout << words[5];
    
    
    for(i = 0; i < 50; ++i){ // Loop that removes words less than 3.
        
           inFS >> wordsText[i];
           if(wordsText[i].length() > 2){
               j = j + 1;
               words[j]=wordsText[i];
               
                cout << words[j]<< " ";
                
           }
            
    }
    
    
    /*for(i=0; i < 50; ++i){
       for(k=0; k < 50; ++k){
           if(wordsText[i] == words[k]){
            count = count + 1;
           }  
           wordCount[k] = count;
           
       }
       cout << wordCount[k];
       count = 0;
       
     }*/


    
    return 0;
}