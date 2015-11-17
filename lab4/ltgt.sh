echo "Enter first number"
read x
echo "Enter second number"
read y
echo "Enter third number"
read z

if [ $x -gt $y ]
then
	if [ $x -gt $z ]
	then
		echo "$x is greatest"
	else
		echo "$y is greatest"
	fi
else
	if [ $y -gt $z ]
	then
		echo "$y is greatest"
	else
		echo "$z is greatest"
	fi
fi
