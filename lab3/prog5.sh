echo "Enter time in seconds"
read s
hour=`echo "$s/3600"|bc`
sec=`echo "$s%60"|bc`
minute=`echo "($s%3600)/60"|bc`

#if(($minute>=60));then
#	minute = `echo "$minute%60"|bc`;hour = `echo "$hour + 1"|bc`

echo "$hour:$minute:$sec"
