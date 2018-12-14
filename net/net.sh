#!/bin/bash
#for ip in 10.99.{90..95}.{1..254}; do
#  ping -c 1 -W 1 $ip | grep "64 bytes" &
#done
#{
#for ip in 10.99.{80..89}.{1..254}; do
#sudo nbtscan $ip | grep server
#done
#} > netscan_29_5_1.txt

#{
#while read line; do    
#    echo $line    
#    sudo sshpass -p 'welcome123!@#'  ssh embadmin@$line
#done < valid_ip_2.txt
#} > netscan_29_5_2_login_2.txt

{
while read line; do
    echo $line    
    sudo sshpass -p 'user000'  ssh radhika@$line
done < valid_ip_4.txt
} > netscan_29_5_2_login_5.txt
