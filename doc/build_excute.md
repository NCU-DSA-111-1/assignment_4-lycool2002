# build (開源程式碼付的)
## arithmetic_coding

encode
``` 
./arithm-coding.o e <input_of_file> <output_file>  
```
decode
``` 
./arithm-coding.o d <input_of_file> <output_file> 
```
## huffman coding

encode
``` 
./archive <input_of_file> 
```
decode
``` 
./exract <input_of_file> 
```
# excute(script file)
``` 
cd test
sh run.sh
```
output會在result資料夾

有test.txt (一篇報導) bbe.txt (聖經) 
兩個資料放在test_deta資料夾

huffman decode 完的資料為

    test.txt.d bbe.txt.d

decode 又 encode 完的資料為 

    test.txt bbe.txt

arithm decode 完的資料為

    testd.txt bbed.txt

decode 又 encode 完的資料為 

    testde.txt bbede.txt
另外會把比較的結果輸出到result.txt
