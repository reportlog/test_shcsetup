#!/bin/bash
#for ip in 10.99.{90..95}.{1..254}; do
#  ping -c 1 -W 1 $ip | grep "64 bytes" &
#done
{
for ip in 10.99.{80..89}.{1..254}; do
sudo nbtscan $ip | grep server
done
} > netscan_29_5_1.txt

