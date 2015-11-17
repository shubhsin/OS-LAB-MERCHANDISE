echo "Enter filename"
read filename

if [ -e $filename ]
then
	echo "File Exists"
else
	echo "File Doesn't exist"
fi

if [ -d $filename ]
then
	echo "Directory Exists"
else
	echo "Directory Doesn't exist"
fi

if [ -r $filename ]
then
	echo "Read Perms"
else
	echo "No Read Perms"
fi

if [ -w $filename ]
then
	echo "Write Perms"
else
	echo "No Write Perms"
fi

if [ -x $filename ]
then
	echo "Execute Perms"
else
	echo "No Execute Perms"
fi
