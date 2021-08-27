/*
 * 785A. Anton and Polyhedrons
 *
 * Anton's favourite geometric figures are regular polyhedrons. Note that there are five kinds of
 * regular polyhedrons:
 *
 * - Tetrahedron. Tetrahedron has 4 triangular faces.
 * - Cube. Cube has 6 squares faces.
 * - Ocatahedron. Octahedron has 8 triangular faces.
 * - Dodecahedron. Dodecahedron has 12 pentagonal faces.
 * - Icosahedron. Icosahedron has 20 triangular faces.
 *
 * Anton has a collection of n polyhedrons. ONe day he decided to know how many faces his
 * polyhedrons have in total. Help Anton and find this number!
 *
 * Input
 * The first line of the input contains a single integer n(1 <= n <= 200000) - the number of
 * polyhedrons in Anton's collection.
 *
 * Each of the following n lines of the input contains a string s_i - the name of the i-th
 * polyhedron in Anton's collection.
 *
 * - "Tetrahedron" (without quotes), if the i-th polyhedron in Anton's collection is a
 * tetrahedron.
 * - "Cube" (without quotes), if the i-th polyhedron in Anton's collection is a cube.
 * - "Octahedron" (without quotes), if the i-th polyhedron in Anton's collection is a
 * octahedron.
 * - "Dodecahedron" (without quotes), if the i-th polyhedron in Anton's collection is a
 * dodecahedron.
 * - "Icosahedron" (without quotes), if the i-th polyhedron in Anton's collection is a
 * icosahedron.
 *
 * Output
 * Output one number - the total number of faces in all the polyhedrons in Anton's collection.
 */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
    int faces[5] = {};
    int n;
    std::cin >> n;
    std::string input = "";
    for(unsigned int i = 0; i < n; ++i) {
        std::cin >> input;
        if(input == "Tetrahedron")
            faces[0] += 4;
        if(input == "Cube")
            faces[1] += 6;
        if(input == "Octahedron")
            faces[2] += 8;
        if(input == "Dodecahedron")
            faces[3] += 12;
        if(input == "Icosahedron")
            faces[4] += 20;
    }
    int sum = 0;
    for(int i = 0; i < 5; ++i)
        sum += faces[i];
    std::cout << sum << std::endl;
    return 0;
}
