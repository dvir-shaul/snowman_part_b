/*#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <algorithm>
#include <string>
using namespace std;

string nospaces(string input) {
	erase(input, ' ');
	erase(input, '\t');
	erase(input, '\n');
	erase(input, '\r');
	return input;
}
/*
* GOOD TESTS NOW !!


TEST_CASE("should all run good if implemented ok"){
    
    //location 1 is for check hat diff
    CHECK(snowman(11114411) == nospaces("\n_===_\n(.,.)\n( : )\n( : )"));       
    CHECK(snowman(21114411) == nospaces(" ___ \n.....\n(.,.)\n( : )\n( : )"));   
    CHECK(snowman(31114411) == nospaces("  _ \n /_\\ \n(.,.)\n( : )\n( : )"));    
    CHECK(snowman(41114411) == nospaces(" ___ \n(_*_)\n(.,.)\n( : )\n( : )")); 

    //location 2 is for check the nose
    CHECK(snowman(11111111) == string("\n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(snowman(12111111) == string("\n_===_\n (...) \n<( : )>\n( : )"));
    CHECK(snowman(13111111) == string("\n_===_\n (._.) \n<( : )>\n( : )"));
    CHECK(snowman(14111111) == string("\n_===_\n (. .) \n<( : )>\n( : )"));

    //location 3 is for Left Eye
    CHECK(snowman(11123344) == string("\n _===_\n (.,o) \n/(   )\\\n (   )"));
    CHECK(snowman(11223344) == string("\n _===_\n (o,o) \n/(   )\\\n (   )"));
    CHECK(snowman(11323344) == string("\n _===_\n (O,o) \n/(   )\\\n (   )"));
    CHECK(snowman(11423344) == string("\n _===_\n (-,o) \n/(   )\\\n (   )"));

    //location 4 is for Right Eye
    CHECK(snowman(12311111) == string("\n _===_\n (O..) \n<( : )>\n ( : )"));
    CHECK(snowman(12321111) == string("\n _===_\n (O.o) \n<( : )>\n ( : )"));
    CHECK(snowman(12331111) == string("\n _===_\n (O.O) \n<( : )>\n ( : )"));
    CHECK(snowman(12341111) == string("\n _===_\n (O.-) \n<( : )>\n ( : )"));
    
    //location 5 is for Left Arm
    CHECK(snowman(11421344) == string("\n _===_\n (-,o) \n<(   )\\\n (   )"));
    CHECK(snowman(11422344) == string("\n _===_\n\\(-,o) \n (   )\\\n (   )"));
    CHECK(snowman(11423344) == string("\n_===_\n (-,o) \n/(   )\\\n (   )"));
    CHECK(snowman(11424344) == string("\n_===_\n (-,o) \n (   )\\\n (   )"));
   
    //location 6 is for check right arm
    CHECK(snowman(11114111) == string("\n_===_\n (.,.) \n ( : )>\n ( : )"));
    CHECK(snowman(11114211) == string("\n_===_\n (.,.)/\n ( : ) \n ( : )"));
    CHECK(snowman(11114311) == string("\n_===_\n (.,.) \n ( : )\\\n ( : )"));
    CHECK(snowman(11114411) == string("\n_===_\n (.,.) \n ( : ) \n ( : )"));


    //location 7 is for check torso"
    CHECK(snowman(11114411) == string("\n _===_\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(11114421) == string("\n _===_\n (.,.) \n (] [) \n ( : )"));
    CHECK(snowman(11114431) == string("\n _===_\n (.,.) \n (> <) \n ( : )"));
    CHECK(snowman(11114441) == string("\n _===_\n (.,.) \n (   ) \n ( : )"));


    //location 8 is for check base
    CHECK(snowman(11114411) == string("\n _===_\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(11114412) == string("\n _===_\n (.,.) \n ( : ) \n (" ")"));
    CHECK(snowman(11114413) == string("\n _===_\n (.,.) \n ( : ) \n (___)"));
    CHECK(snowman(11114414) == string("\n _===_\n (.,.) \n ( : ) \n (   )"));


}
/*
* BAD TESTS NOW !!


TEST_CASE("worng negative number input"){
    CHECK_THROWS(snowman(-12341234));
    CHECK_THROWS(snowman(-41212323));
    CHECK_THROWS(snowman(-34123412));
}
TEST_CASE("worng short input"){
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(323));
    CHECK_THROWS(snowman(123412));
}
TEST_CASE("worng long input"){
    CHECK_THROWS(snowman(123412311));
    CHECK_THROWS(snowman(444444221));
    CHECK_THROWS(snowman(1111111111));
}

TEST_CASE("worng digits over 4 input"){
    CHECK_THROWS(snowman(12341284));
    CHECK_THROWS(snowman(85679865));
    CHECK_THROWS(snowman(99999999));
}
*/