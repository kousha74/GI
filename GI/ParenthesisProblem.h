#pragma once

class CParenthesisProblem
{
public:
   CParenthesisProblem(void);
   ~CParenthesisProblem(void);

   void Test();

   //Main Function
   void PrintCombinations( int n );

   //Recursive Function
   void PrintCombinations( int n, char * str, int open, int close );
};
