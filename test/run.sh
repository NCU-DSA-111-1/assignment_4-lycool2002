#!/bin/bash

mkdir result
./arithm-coding e test_data/test.txt result/testd.txt
./arithm-coding e test_data/bbe.txt result/bbed.txt

./arithm-coding d result/testd.txt result/testde.txt
./arithm-coding d result/bbed.txt result/bbede.txt

echo $'0\n1' | ./huffman_encode   test_data/test.txt
echo $'0\n1' | ./huffman_encode   test_data/bbe.txt

mv test_data/test.txt ../test    
mv test_data/bbe.txt ../test  

mv test_data/test.txt.d result  
mv test_data/bbe.txt.d result  

./huffman_decode result/test.txt.d
./huffman_decode result/bbe.txt.d

mv test_data/test.txt result  
mv test_data/bbe.txt result  

mv test.txt test_data
mv bbe.txt test_data

mv result.txt result
cd result 
ls -l >> result.txt
