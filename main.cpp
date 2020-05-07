#include <iostream>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "C:\Users\Luis\OneDrive - University of Puerto Rico\Desktop\catch.hpp"
#include "BSTN.h"
using namespace std;


TEST_CASE( "BSTN is tested", "[BSTN]" ) {
vector<int> v = {8, 9, 5, 2, 4, 10, 1};
BSTN B;
for (auto e: v) B.insert(e);
REQUIRE (B.InOrder()== "1 2 4 5 8 9 10 ");
REQUIRE (B.BFS()== "8 5 9 2 10 1 4 ");
REQUIRE(B.successor(B.search(8))->key == 9 );
REQUIRE(B.height() == 4);
REQUIRE(B.maxValueLeaf() == 10);


vector<int> bstXL = {56,46,75,23,86,95,9,1,6,3,4,7,2,8,45,47,38,12,123,124,5};
 BSTN E;
 for(auto a: bstXL) E.insert(a);
    REQUIRE(E.InOrder()== "1 2 3 4 5 6 7 8 9 12 23 38 45 46 47 56 75 86 95 123 124 ");
    REQUIRE(E.BFS()=="56 46 75 23 47 86 9 45 95 1 12 38 123 6 124 3 7 2 4 8 5 ");
    REQUIRE( E.height()== 9);
    REQUIRE(E.leaves()==7);
    REQUIRE(E.maxValueLeaf()==124);
    REQUIRE(E.successor(B.search(95))==124);






}
