#include <stdio.h>

struct planet {
        char name[256];
        struct country *country;
        /* Others about a planet */
};

struct country {
        char name[256];
        struct city *city;
        /* Others about a country */
};

struct city {
        char name[256];
        struct district *dist;
        /* Others about a city */
};

struct district {
        char name[256];
        struct street *street;
        /* Others about a district */
};

struct street {
        char name[256];
        struct building *build;
        /* Others about a street */
};

struct building {
        char name[256];
        struct family *family;
        /* Others about a building */
};

struct family {
        char name[128];
        char dad[64];
        char mom[64];
        /* Others about a family */
};

int main()
{
        struct family myfamily = {"myfamily", "mydad", "mymom"};
        struct building someonebuilding = {"someonebuilding", &myfamily};
        struct street ZhongGuanCun = {"zhongguancun", &someonebuilding};
        struct district HaiDian = {"haidian", &ZhongGuanCun};
        struct city Beijing = {"beijing", &HaiDian};
        struct country China = {"china", &Beijing};
        struct planet Earth = {"earth", &China};

        printf("Myfamily is %s\n", 
               Earth.country->city->dist->street->build->family->name);
        return 0;
}