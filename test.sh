echo "Enter A :"
read a
echo "Enter B :"
read b
echo "Enter C :"
read c

if [ $a -gt $b ] && [ $a -gt $c ]
then 
    echo "A($a) is greater"

elif [ $b -gt $a ] && [ $b -gt $c ]
then
    echo "B($b) is greater"

else
    echo "C($c) is greater"

fi