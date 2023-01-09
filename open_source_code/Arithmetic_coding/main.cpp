#include "encode.h"
#include "decode.h"

int main ( int argc, char **argv)
{
	clock_t start = clock();
	if (argc < 4)
	{
		std::cout<<"Using: name_programm <input_of_file> <output_file>"<<endl;
		return -1;
	}
	if (argv[1][0] == 'e')
	{
		Encode obj;
		obj.encode(argv[2], argv[3]);
	}
	else if (argv[1][0] == 'd')
	{
		Decode obj;
		obj.decode(argv[2], argv[3]);
	}
	clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC;  

	FILE* result_fp;
	result_fp = fopen("result.txt", "a+");
	if (argv[1][0] == 'e'){
		fprintf( result_fp, "arithmetic-coding encode: %f seconds\n", duration );    
	} 
	else if (argv[1][0] == 'd'){
		fprintf( result_fp, "arithmetic-coding decode: %f seconds\n", duration );    
	}
	fclose(result_fp);
    	
	return 0;
}
