// logicos1.cpp
 #include <iostream>

int main () {
   bool b1, b2, b3, b4, b5;
   int x = -5, y = 8;  //std::boolalpha
   b1 = !((y<3)||(y>7));
   b2 = (x+1)>2||(x+1)<-3;
   b3 = x+1>2||x+1<-3;
   b4 = !(y == 0);
   b5 = (x<0) && (x/y > 1);
   std::cout<<"b1 = "<<std::boolalpha<<b1<<std::endl;
   std::cout<<"b2 = "<<b2<<std::endl;
   std::cout<<"b3 = "<<b3<<std::endl;
   std::cout<<"b4 = "<<b4<<std::endl;
   std::cout<<"b5 = "<<b5<<std::endl;

   std::cout<<"Programa finalizado."<<std::endl;
   return 0;
 }

