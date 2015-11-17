echo "File name being executed:$0"
echo "First CLA : $1"


echo "CLAs are : $@"
echo "No of CLAs : $#"

j=1
for i in $@
do
	echo "$((j++))th CLA is $i"
done
