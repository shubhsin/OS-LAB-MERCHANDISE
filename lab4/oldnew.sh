echo "Enter first file"
read firstfile
echo "Enter second file"
read secondfile

if [ $firstfile -ot $secondfile ]
then
	echo "$firstfile older than $secondfile"
else
	echo "$firstfile newer than $secondfile"
fi

echo "**********************************"

if [ $firstfile -nt $secondfile ]
then
	echo "$firstfile newer than $secondfile"
else
	echo "$firstfile older than $secondfile"
fi
