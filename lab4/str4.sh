echo "Enter a string"
read str

len=`echo "$str"|wc -c`
((len--))

for((i=len;i>0;i--))
do
	char=`echo "$str"|cut -c$i`
	rev=$rev$char
	#echo -n "$char"
done

echo $rev
echo -e "\n"
