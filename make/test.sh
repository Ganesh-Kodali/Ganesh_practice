echo "
.
.
.
.....this is script lang....
.
.
.
."
echo $0
echo $1
echo $3
if [ -f "$1" ];
then
	echo "file exisit"
else
	echo "file doesnt exist"
fi

