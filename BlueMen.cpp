/*********************************************************************
** Author:      Jeffrey Luong 
** Date:        7/18/15
** Description: Assignment 2 - Blue Men Implementation File
*********************************************************************/
#include "BlueMen.hpp"


int BlueMen::attack()
		{
			//These numbers can be used for both attack and defense in Barbarians
			int numDiceFace = 10;
			int numDice = 2;

			int attackTotal = 0; 
			
			for(int x = 0; x < numDice; x++)
			{
				attackTotal += rollDice(numDiceFace);
			}
			return attackTotal;
		};

int BlueMen::defend()
		{
			//These numbers can be used for both attack and defense in Barbarians
			int numDiceFace = 6;
			int numDice = 3;

			int defendTotal = 0; 
			
			for(int x = 0; x < numDice; x++)
			{
				defendTotal += rollDice(numDiceFace);
			}
			return defendTotal;
		};
