echo "Enter a file"
read filename
echo `ls -l $filename | cut -c1-11`
