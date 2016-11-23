#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d\n",max((x+1)*y , x*(y+1)));
}