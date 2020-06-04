Automake Template
=================

	./autogen.sh
	mkdir build
	cd build
	../configure --prefix=inst
	make 
	make install
	make coverage
	../configure --enable-myextrafeature --prefix=inst
	make
	make coverage
	google-chrome coverage/index.html
