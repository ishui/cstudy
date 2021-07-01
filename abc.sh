#/usr/bin/bash
# echo this is a test
ABC=$(ls -p|grep hello)
echo $ABC
# read -p "please enter a char: " AAA
# echo $AAA
A=10
echo $(($A+$A))
echo $((100+$A+$A))
echo $((A=A+1))
echo $A
echo "--------------------------"
expr $(($A+$A))
names=([0]=Jerry [1]=Alice [2]=David [8]=Wendy)
echo ${names[1]}
echo ${names[@]}
echo "+++++++++++++++++++++++++++++++"
for i in ${!names[@]}
do
echo ${names[$i]}
done
echo "===================="
for j in ${names[@]}
do
echo $j
done
echo "0000000000000000000000000000"
addrs=$(seq 1 2 14)
for s in ${addrs[@]}
do
echo $s
done