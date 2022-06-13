# 0x18. C - Dynamic libraries

## Tasks

#### [0. A library is not a luxury but one of the necessities of life](libdynamic.so)
* Create the dynamic library libdynamic.so

#### [1. Without libraries what have we? We have no past and no future](1-create_dynamic_lib.sh)
* Create a script that creates a dynamic library called ```liball.so``` from all the ```.c``` files that are in the current directory.

#### [2. Let's call C functions from Python](100-operations.so)
* Create a dynamic library that contains C functions that can be called from Python

#### [3. Code injection: Win the Giga Millions!](101-make_me_win.sh)
* I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

```
/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
```
