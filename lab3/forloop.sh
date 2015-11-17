for((i=0;i<5;i++))
do
	echo $i
done
for i in "abc""def""xyz"
do
	echo $i
done
IFS="/"
read x
for i in $x
do
	echo $i
done
