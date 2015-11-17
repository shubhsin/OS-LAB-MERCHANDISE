echo "Enter limit"
read limit

first=0
second=1
count=3
echo $first
echo $second
while((count<=limit))
do
	temp=`echo "$first+$second"|bc`
	first=$second
	second=$temp
	echo $temp
	((count++))
done
