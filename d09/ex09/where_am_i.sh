ip=$(ifconfig | grep "inet " | grep -v "127.0.0.1" | cut -d \  -f2);
if [ -z "$ip" ]
then	
	echo "Je suis perdu!"
else
	echo "$ip"
fi