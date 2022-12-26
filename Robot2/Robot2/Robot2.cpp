// Robot2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


char grid[10][10];

class Robot {

private: 
    int xLocation;
    int yLocation;
    bool cargoBed;
    char load;

public:

    Robot(int xLocation, int yLocation, bool cargoBed, char load) {
        this->xLocation = xLocation;
        this->yLocation = yLocation; 
        this->cargoBed = cargoBed; 
        this->load = load;
    }


   void setXL(int xL) {
       xLocation = xL;
    }


   int getXL() {
       return xLocation;
   }
   int getYL() {
       return yLocation;
   }int getCargo() {
       return cargoBed;
   }int getLoad() {
       return load;
   }
   void setYL(int yL) {
       yLocation = yL;
   }
   
   
   
   void setCargo(bool cB) {
       cargoBed=cB;
   }
   void setLoad(char l) {
       load = 'l';
   }


   bool moveTo(int lx, int ly)  {
       if (lx < 0 || ly < 0 || lx >= 10 || ly >= 10)
           return false;

       while (xLocation < lx)
           xLocation++;

       while (xLocation > lx)
           xLocation--;

       while (yLocation < ly)
           yLocation++;

       while (yLocation > ly)
           yLocation--;

       return true;
   }

   bool pickup(int lx, int ly) {
       if (lx < 0 || ly < 0 || lx >= 10 || ly >= 10 || grid[lx][ly] == '.' || cargoBed == true)
           return false;

       moveTo(lx, ly);
       cargoBed = true;
       load = grid[lx][ly];
       grid[lx][ly] = '.'; 
       return true;
   }


   bool dropOff(int lx, int ly) {
       if (lx < 0 || ly < 0 || lx >= 10 || ly >= 10 || grid[lx][ly] != '.' || cargoBed == false)
           return false;

       moveTo(lx, ly);
       grid[lx][ly] = load;
       load = '.';
       cargoBed = false;
       return true;
   }

   friend std::ostream& operator <<(std::ostream& o, Robot& rbt) {
       o << "(" << rbt.xLocation << ", " << rbt.yLocation << ") : " << rbt.load << std::endl;
       return o;
   }
};


void print2D(char grid[10][10]) {
    for (int r = 0; r < 10; ++r) {
        for (int c = 0; c < 10; ++c) {
           std:: cout << grid[r][c] << " ";
        }
        std::cout << std::endl;
    }
}






void clear(char grid[10][10]) {
    for (int r = 0; r < 10; ++r) {
        for (int c = 0; c < 10; ++c) {
            if (grid[r][c] != '.') {
                Robot* r1 = new Robot(0, 0, false, '.');
                r1->moveTo(r, c);
                r1->pickup(r, c);
                delete r1;
            }
        }

    }
}
    int main() {
        std::cout << "Grid with load C and B at specified locations"<<std::endl;
        for (int r = 0; r < 10; ++r)
            for (int c = 0; c < 10; ++c)
                grid[r][c] = '.';

        grid[3][8] = 'B';
        grid[2][6] = 'C';

        print2D(grid);

        Robot R1(5, 4, false, '.');
        Robot R2(3, 6, false, '.');

       std:: cout << "R1:" << R1;
       std:: cout << "R2:" << R2<<std::endl;
    
       R1.moveTo(9, 2);
       R2.moveTo(3, 4);
       std::cout <<"Moved Robot R1:" << R1;
       std::cout << "Moved Robot R2:" << R2 << std::endl;


       R1.pickup(3, 8);
       R1.dropOff(9, 9);

       std::cout << "R1 picks up and Drops off load B:"<< R1;
       std::cout << "R2:" << R2;
       print2D(grid);

    
       R2.pickup(2, 6);
       R2.dropOff(0, 0);

       std::cout << "R1 stays at:"<<R1;
       std::cout << "R2 picks up and Drops off load C at:"<<R2;
       print2D(grid);



       clear(grid);
       std::cout << "Moved the loads within the previous grid to a dynamic location in memory" << std::endl;

       print2D(grid);
      


    }
