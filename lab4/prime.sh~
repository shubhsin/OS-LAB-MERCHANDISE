echo "Enter number to check"
read num

for((i=2;i<$num;i++))
do
	if [ `echo "$num%$i"|bc` -eq 0 ]
	then
	echo "$num is not prime"
	exit
	fi
done

echo "$num is prime"

