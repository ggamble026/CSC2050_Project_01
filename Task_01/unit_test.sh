#!/bin/bash

#makes sure 3 command line arguments are passed
if [ $# -ne 3 ]; then
        echo "Error: Exactly 3 command line arguments expected!"
        exit
fi

#takes command line arguments and puts them in variables
executable="$1"
input="$2"
expectedResult="$3"

#the actual result is from running the program with the input number
actualResult=$("$executable" "$input")

#checks the results from running the executable against the expected result and either prints pass
if [[ "$expectedResult" == "$actualResult" ]]; then
        echo "PASS"
fi


#or it fails and gives the expected result and actual result
if [[ "$expectedResult" != "$actualResult" ]]; then
	echo "FAIL"
	echo "Expected: $expectedResult"
	echo "Got: $actualResult"
fi

exit
