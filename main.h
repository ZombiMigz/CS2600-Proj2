#ifndef MAIN_H
#define MAIN_H
struct Expense
{
  // Amount of item. Defaults to 1;
  int amount;
  // The amount the company will pay
  float expectedCost;
  // how much was actually used by the businessperson
  float actualCost;
};
#endif