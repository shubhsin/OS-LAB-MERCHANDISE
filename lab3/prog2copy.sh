echo "Enter Basics"
read basic
echo "Enter TA"
read ta
gs=`echo "$basic + $ta + 0.1*$basic"|bc -l`
echo "GS = $gs"

