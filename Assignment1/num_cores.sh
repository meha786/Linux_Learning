
echo "This is the current working directory"
pwd

echo "This is the list of files"
ls

echo "These are the total number of processors"
cat /proc/cpuinfo | grep "processor" -c
