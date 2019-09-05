#include <iostream>
 void a()
 {
     std::cout<<"rt\n";
 }

 void b()
 {
     std::cout<<"ammu\n";
     a();
 }

 void c()
 {
     std::cout<<"neha\n";
     b();
 }

 void d()
 {
     std::cout<<"pragya\n";
     c();
 }

 void e()
 {
     std::cout<<"rashmi\n";
     d();
 }

 main()
 {
     std::cout<<"kaley\n";
     e();
     
 }