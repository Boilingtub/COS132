#include <iostream>
#include <string>

int main() {
    /**
     * ***************************** *
     * Part 1: Setting up Inventory  *
     * ***************************** * 
    */
    std::string bestSellingItem = "Caramel Macchiato";
    char cupSize = 'L';
    int beanStock = 50;
    int milkStock = 30;
    bool cafeOpen = true;
    bool restockNeeded = false;
    const float sales = 1234.50;
    // Declare all your variables for Part 1 here:

    /* DO NOT CHANGE THIS CODE! */
    std::cout<<"###"<<std::endl;
    std::cout<<"Best-selling item: "<<bestSellingItem<<std::endl;
    std::cout<<"Cup size for best-seller: "<<cupSize<<std::endl;
    std::cout<<"Number of coffee bean bags in stock: "<<beanStock<<std::endl;
    std::cout<<"Number of milk cartons in stock: "<<milkStock<<std::endl;
    std::cout<<"Cafe open: "<<cafeOpen<<std::endl;
    std::cout<<"Restock needed: "<<restockNeeded<<std::endl;
    std::cout<<"Sales in rands: R"<<sales<<std::endl;
    std::cout<<"###"<<std::endl;

    /**
     * ************************************ *
     * Part 2: Daily Inventory Calculation  *
     * ************************************ * 
    */

    // Your code for Part 2 goes here:
    int espressoShots = 10;
    float espressoCost = 5.5;
    int milkCost = 3;
    const int cappuccinoShots = 2; //takes 2 espressoShots to make 1 cappuccinoShots
    const int cappuccinoMilk = 3;  //takes 3 milk for make cappuccino
    float cappuccinoShotCost = (cappuccinoShots * espressoCost);
    float cappuccinoMilkCost = (cappuccinoMilk * milkCost);
    float cappuccinoTotalCost = (cappuccinoShotCost + cappuccinoMilkCost);
    
    espressoShots -= (3*cappuccinoShots);

    float totalSales = (100.0/cappuccinoTotalCost);

    std::cout<<espressoShots<<"\n";
    std::cout<<espressoCost<<"\n";
    std::cout<<milkCost<<"\n";
    std::cout<<cappuccinoShots<<"\n";
    std::cout<<cappuccinoMilk<<"\n";
    std::cout<<cappuccinoShotCost<<"\n";
    std::cout<<cappuccinoMilkCost<<"\n";
    std::cout<<cappuccinoTotalCost<<"\n";
    std::cout<<totalSales<<"\n";

 
    /*DO NOT CHANGE CODE BELOW THIS LINE*/
    std::cout<<"###"<<std::endl;


}
