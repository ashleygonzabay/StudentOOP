#include <string>
#include <vector>

struct coord {
    int x = 0;
    int y = 0;
};

void print_vector(const std::vector<int>& v);
void print_coords(coord pos);
void fill_vector(std::vector<int>& v, int n);
int square(int n);
int my_abs(int n);
int sum(int n);
int sum2(int n);
void say(std::string s);
