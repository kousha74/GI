#include "StdAfx.h"
#include "ParenthesisProblem.h"
#include <malloc.h>
#include <iostream>

CParenthesisProblem::CParenthesisProblem(void)
{
}

CParenthesisProblem::~CParenthesisProblem(void)
{
}

void CParenthesisProblem::Test()
{
   int n = 4;
   std::cout << "Combination for n = " << n << '\n';
   PrintCombinations( n );
   std::cout << '\n';
}

void CParenthesisProblem::PrintCombinations( int n )
{
   char * str = (char *) malloc( 2*n + 1 );

   PrintCombinations( n, str, 0, 0 );

   free( str );
}

void CParenthesisProblem::PrintCombinations( int n, char * str, int open, int close )
{
   if ( ( open + close ) == 2*n )
   {
      str[ 2*n ] = 0;
      std::cout << str << '\n';
      return;
   }

   // check if "(" can be added
   if ( open < n ) 
   {
      str[ open + close ] = '(';
      PrintCombinations( n, str, open + 1, close );
   }

   // check if ")" can be added
   if ( close < open  ) 
   {
      str[ open + close ] = ')';
      PrintCombinations( n, str, open , close + 1 );
   }
}

