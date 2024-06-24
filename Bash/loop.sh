clear

counter=1
until [ $counter -gt 100 ]
do
	echo $counter
	((counter++))
done
