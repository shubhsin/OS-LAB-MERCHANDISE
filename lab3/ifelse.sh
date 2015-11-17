echo "Enter a number"
read a

res=`echo "$a > 10"|bc -l`

if((res))
then
	echo "$a > 10"
else
	echo "$a <= 10"
fi
