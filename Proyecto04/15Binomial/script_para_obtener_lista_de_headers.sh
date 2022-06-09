#REF:
#https://stackoverflow.com/questions/15146152/how-to-get-the-absolute-path-of-specific-header-file
cpp -MD DistribucionBinomial.c | sed -n '/\.h"/s/.*"\(.*\)".*/\1/p' | sort -u > List_of_abs_path_headers.txt
#cpp -MD $1 | sed -n '/\.h"/s/.*"\(.*\)".*/\1/p' | sort -u
