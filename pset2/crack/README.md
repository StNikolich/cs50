# Crack

Source: [Link](https://docs.cs50.net/2018/x/psets/2/crack/crack.html "Crack")

## Solution
See solution in `pset2/crack/crack.c` file.

## Prepare

Run commands in console:
```
$ cd
$ cd crack
$ mkdir crack
$ cd crack
$ touch crack.c
```

## Build

Run commands in console:
```
$ cd pset2/crack
$ make crack
```

## Run

Run commands in console:
```
$ cd pset2/crack
$ ./crack 50JGnXUgaafgc
$ ROFL
```

## Check style

Run commands in console:
```
$ cd pset2/crack
$ style50 crack.c
```

## Test code

No test for this problems.

## Submit code

Run commands in console:
```
$ cd pset2/crack
$ submit50 cs50/2018/x/crack
```

# Decrypt hashes

Run commands in console:
```
$ cd pset2/crack

anushree:50xcIMJ0y.RXo
$ ./crack 50xcIMJ0y.RXo
$ YES

brian:50mjprEcqC/ts
$ ./crack 50mjprEcqC/ts
$ CA

bjbrown:50GApilQSG3E2
$ ./crack 50GApilQSG3E2
$ Killed

lloyd:50n0AAUD.pL8g
$ ./crack 50n0AAUD.pL8g
$ lloyd

malan:50CcfIk1QrPr6
$ ./crack 50CcfIk1QrPr6
$ maybe

maria:509nVI8B9VfuA
$ ./crack 509nVI8B9VfuA
$ TF

natmelo:50JIIyhDORqMU
$ ./crack 50JIIyhDORqMU
$ nope

rob:50JGnXUgaafgc
$ ./crack 50JGnXUgaafgc
$ ROFL

stelios:51u8F0dkeDSbY
$ ./crack 51u8F0dkeDSbY
$ NO

zamyla:50cI2vYkF0YU2
$ ./crack 50cI2vYkF0YU2
$ LOL 
```

Search for a password for hashes `50GApilQSG3E2`,`50n0AAUD.pL8g`, `50CcfIk1QrPr6` ends with closing the program by
timeout or memory is low.

For `50n0AAUD.pL8g`, `50CcfIk1QrPr6` helped eliminate uppercase letters from the dictionary.

[Back to main](/pset2/README.md "Back to main")
