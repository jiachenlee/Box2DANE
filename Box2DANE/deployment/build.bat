mkdir bin
START /wait /b adt -package -target ane bin\Box2DANE.ane descriptor.xml -swc Box2DANE.swc -platform Windows-x86 library.swf libBox2DANE.dll
EXIT