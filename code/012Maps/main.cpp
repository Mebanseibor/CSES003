#include <iostream>
#include <map>

int main(){
    std::map<int, std::string> m1;
    m1[4] = "Aldrin";
    m1[7] = "Jane";

    std::cout << "m1[4]:\t" << m1[4] << "\n";
    std::cout << "m1[7]:\t" << m1[7] << "\n";

    std::cout << "m1.size():\t" << m1.size() << "\n";



    // outputting the keys of a map
    std::cout << "\nOutputting the keys of a map:\n";
    for(auto i : m1){ std::cout << i.first << ":\t" << i.second << "\n"; }

    return 0;
}
