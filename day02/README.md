# Day 02

## Part 01

Notes and calculations

```txt
Rock: 1
Paper: 2
Scissors: 3

Rock - Rock			-> 1 - 1 =  0: Draw
Rock - Paper 		-> 1 - 2 = -1: Paper
Rock - Scissors 	-> 1 - 3 = -2: Rock

Paper - Rock		-> 2 - 1 =  1: Paper
Paper - Paper 		-> 2 - 2 =  0: Draw
Paper - Scissors 	-> 2 - 3 = -1: Scissors

Scissors - Rock		-> 3 - 1 =  2: Rock
Scissors - Paper 	-> 3 - 2 =  1: Scissors
Scissors - Scissors -> 3 - 3 =  0: Draw

 0 = Draw
 1 = Opponent
 2 = player
-1 = Player
-2 = Opponent


       -2    -1     0     1     2
--|-----|-----|-----|-----|-----|-----|-----|--
		L     W     D     L     W

 res mod 3
 -2 mod 3 = 1 -> L
 -1 mod 3 = 2 -> W
  0 mod 3 = 0 -> D
  1 mod 3 = 1 -> L
  2 mod 3 = 2 -> W
```


## Part 02

Notes and calculations

```txt
Rock: 1
Paper: 2
Scissors: 3

Lose: 1
Draw: 2
Win: 3

Rock - Lose			-> 1 + 1 =  2: Scissors
Rock - Draw 		-> 1 + 2 =  3: Rock
Rock - Win 			-> 1 + 3 =  4: Paper

Paper - Lose		-> 2 + 1 =  3: Rock
Paper - Draw 		-> 2 + 2 =  4: Paper
Paper - Win	 		-> 2 + 3 =  5: Scissors

Scissors - Lose		-> 3 + 1 =  4: Paper
Scissors - Draw 	-> 3 + 2 =  5: Scissors
Scissors - Win		-> 3 + 3 =  6: Rock


 0 = Draw
 1 = Opponent
 2 = player
-1 = Player
-2 = Opponent

 res mod 3
 -2 mod 3 = 1 -> L
 -1 mod 3 = 2 -> W
  0 mod 3 = 0 -> D
  1 mod 3 = 1 -> L
  2 mod 3 = 2 -> W

       -2    -1     0     1     2
--|-----|-----|-----|-----|-----|-----|-----|--
		L     W     D     L     W

```
