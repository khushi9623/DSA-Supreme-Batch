/*
----------Datatypes---------------

1. builtin/primitive datatype
integer,floating, void

2.Deriverd datatype
Arrays,pointers,reference

3.Userdefined datatype
structures,union,classes,enumeration

----------Data storage--------------
+ve number MSB - 0
-ve number MSB - 1

HOW -VE NUMBER IS STORED ??
let say consider 32 bit archictecture
int signed range -2^31 to 2^31-1
           for eg:-   int a=-5
           1. ignore the -ve sign and find out Binary equivalent
           
           00000000000000000000000000000...........000101

           2. find out 2's Complement i.e 1's complement +1

           1111111111111111111111111111111...........111010
           +                                              1
           ________________________________________________
           1111111111111111111111111111111...........111011
           this is how negative number is stored

Bydefault integer is signed 
unsigned integer range 0 to 2^32-1

-------------------Typecasting-----------------
Conversion of one data type into another in a program 
1.Implicit Conversion
char ch = 97;
cout<<ch;  o/p- A
integer is typecast into char. (automaticallly)

2.Explicit Conversion
(Datatype) expression
double d = 5.2;
int x = (int)d+2;
cout<<x; o/p - 7 

------------operators-------------------------
1.Arithematic
2.Relational
3.Assignments
4.logical
5.Bitwise


*/