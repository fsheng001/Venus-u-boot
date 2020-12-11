if [ ! -d "ctags" ];
then
	mkdir ctags
fi
wc -l `find . -name "*.[chSs]"` > ./ctags/size.txt
find `pwd` -name "*.[chSs]" > ./ctags/cscope.files
cd ctags
ctags -L cscope.files
cscope -bqk -i cscope.files
cd -