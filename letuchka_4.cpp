#include <iostream>

struct MobilePhone {
    double weight;
    bool is_broken;
    double price;
};

//phones_num - amount of the mobile phones

int main() {
    int phones_num;
    std::cin >> phones_num;

    MobilePhone phones[phones_num];
    for(int i = 0; i < phones_num; ++i) {
        double weight;
        bool is_broken;
        double price;
        std::cin >> weight >> is_broken >> price;
        phones[i] = MobilePhone{weight, is_broken, price};
    }

    std::cout << "<MobilePhone>" << std::endl;

    for (int i = 0; i < phone_num; ++i) {
        std::cout << "\t<MobilePhone id=\"" << i << "\" weight=\"" << phones[i].weight << "\" is_broken=\"" << std::boolalpha << phones[i].is_broken << std::noboolalpha << "\" price=\"" << phones[i].price << "\"/>" << '\n';
    }
    std::cout << "</MobilePhones>" << '\n';
    return 0;
}
