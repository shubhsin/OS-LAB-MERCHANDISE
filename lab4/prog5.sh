echo "Enter filename"
read name

for i in $@
do
case $i in
	"l") wc -l $name;;
	"w") wc -w $name;;
	"c") wc -c $name;;
esac
done

