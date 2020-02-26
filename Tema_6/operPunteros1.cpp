//operPunteros1.cpp
 #include <iostream>
int main()
{
   char blocks[3] = {'A','B','C'};
   char *ptr = &blocks[0];
   char temp;

   temp = blocks[0];
   std::cout<<temp<<std::endl;
   temp = *(blocks + 2);
   std::cout<<temp<<std::endl;
   temp = *(ptr + 1);
   std::cout<<temp<<std::endl;
   temp = *ptr;
   std::cout<<temp<<std::endl;

   ptr = blocks + 1;
   temp = *ptr;
   std::cout<<temp<<std::endl;
   temp = *(ptr + 1);

   ptr = blocks;
   temp = *++ptr;
   std::cout<<temp<<std::endl;
   temp = ++(*ptr);
   std::cout<<temp<<std::endl;
   temp = *ptr++;
   std::cout<<temp<<std::endl;
   temp = *ptr;
   std::cout<<temp<<std::endl;

   return 0;
}

