#include <stdexcept>
#include <array>
#include <iostream>
#include "snowman.hpp"
using namespace ariel;
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

const int PROPER_LEN = 8;


enum {ZERO,ONE,TOW,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT};


namespace ariel {
    // check if any digit is between 4 and 1
     int check_num_dig(int number){
     const int ans = 10;
     for(int i=0; i < PROPER_LEN; i++){
         if(number % ans <=4 && number % ans >=1){
                number /= ans; 
         }
         else {
             return 0;
         }
     }
     return 1;
 }
 //check if num is build with 8 digits
 int check_num_size(int number){
    const int ans1 = 10;
     int count =0;
     while(number != 0){
         count++;
         number/=ans1;
     }
     if (count == PROPER_LEN){
         return 1;
     }
     return 0;
 }
/**check on what specific digit we are from 1 to 4, gets the location on number 
(klumar on number 12345678 loc = 7 means first location and digit 1)*/
 int check_current_digit_TO_UPDATE(int num,int location){ 
     const int ans2 = 10;
     num /= pow(ans2,location);
     return num % ans2;
 }
    string snowman(int num){
        int CURR_DIG = 1;
        if( check_num_size(num) == 1 && check_num_dig(num) == 1){
        //passed initial test and can start build the snowman
        string snowman;

        while(CURR_DIG <= PROPER_LEN ){
            switch (CURR_DIG){
                case 1:    //location 1 is for check hat diff
                    switch (check_current_digit_TO_UPDATE(num,SEVEN)){
                        case 1:
                            snowman.append("\n");
                            snowman.append(" _===_\n"); 
                            break;
                        case 2:
                            snowman.append(" ___\n");
                            snowman.append(" .....\n");
                            break;
                        case 3:
                            snowman.append("   _\n");
                            snowman.append("  /_\\\n");
                            break;
                        case 4:
                            snowman.append("  ___\n");
                            snowman.append(" (_*_)");
                            break;
                    }
                    CURR_DIG++;
                     break;
            
                case 2:     // start to build face of snowman
                            //location 2 is for check the nose
                    if(check_current_digit_TO_UPDATE(num, THREE) == 2) {// tcheck if left hand is up
                        snowman.append("\\(");
                    }
                    else {
                        snowman.append(" (");
                    }
                    //first build left eye
                    switch (check_current_digit_TO_UPDATE(num , FIVE)){
                          case 1:
                            snowman.append(".");
                            break;
                        case 2:
                            snowman.append("o");
                            break;
                        case 3:
                            snowman.append("O");
                            break;
                        case 4:
                            snowman.append("-"); 
                            break;
                       
                    }
                    //now build nose
                    switch (check_current_digit_TO_UPDATE(num,SIX)){
                        case 1:
                            snowman.append(",");
                            break;
                        case 2:
                            snowman.append(".");
                            break;
                        case 3:
                            snowman.append("_");
                            break;
                        case 4:
                            snowman.append(" ");
                            break;

                    }
                    // now build right eye
                     switch (check_current_digit_TO_UPDATE(num,FOUR)){
                        case 1:
                            snowman.append(".");
                            break;
                        case 2:
                            snowman.append("o");
                            break;
                        case 3:
                            snowman.append("O");
                            break;
                        case 4:
                            snowman.append("-"); 
                            break;

                    }       
                    snowman.append(")");
                        

                    if(check_current_digit_TO_UPDATE(num,TOW) == 2){ // check if right hand is up
                        snowman.append("/\n");
                    }
                    else {
                        snowman.append("\n");
                    }
                    CURR_DIG+=3;
                    break;
            
                case FIVE:    //location 5 is for Left Arm ans right affter build torso
                     switch (check_current_digit_TO_UPDATE(num,THREE)){
                        case 1:
                            snowman.append("<");
                            break;
                        case 2:
                            snowman.append(" ");
                            break;
                        case 3:
                            snowman.append("/");
                            break;
                        case 4:
                            snowman.append(" ");
                            break;

                     }
                        //build torso       
                        snowman.append("(");
                        switch (check_current_digit_TO_UPDATE(num,1)){
                        case 1:
                            snowman.append(" : ");
                            break;
                        case 2:
                            snowman.append("] [");
                            break;
                        case 3:
                            snowman.append("> <");
                            break;
                        case 4:
                            snowman.append("   ");
                            break;

                        }
                        snowman.append(")");
                    CURR_DIG++;
                    break;

                case SIX:    //location 6 is for check right arm
                     switch (check_current_digit_TO_UPDATE(num,TOW)){
                        case 1:
                            snowman.append(">\n");
                            break;
                        case 2:
                            break;
                        case 3:
                            snowman.append("\\\n");
                            break;
                        case 4:
                            snowman.append("\n");
                            break;

                     }
                    CURR_DIG+=2;
                    break;
                     
                case EIGHT:    //location 8 is for check base
                    snowman.append(" (");
                     switch (check_current_digit_TO_UPDATE(num,ZERO)){
                        case 1:
                            snowman.append(" : ");
                            break;
                        case 2:
                            snowman.append("\" \"");
                            break;
                        case 3:
                            snowman.append("___");
                            break;
                        case 4:
                            snowman.append("   ");
                            break;
                     }
                     snowman.append(")");
                    CURR_DIG++; // to get out from while loop
                    break;
                }
        }
            return snowman;
        }
        throw std::out_of_range("false");
    }
};