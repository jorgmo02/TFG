1. Ver plugin (ver si está preparado para extenderse, si el código es abierto).
2. Entender GDB/MI, que es el lenguaje para comunicarse.
3. Ver que es eso de las extensiones de GDB.

Lo primero de todo es ver el tema de GDB y MI.
El plugin de VSCode se comunica con GDB, we don't know how but we should.

Hay que familiarizarse con la comunicación entre GDB/MI y VSCode para saber como comunicarse.

Mirar cómo está hecho el plugin de depuración de VSCode para saber cómo enganchar con una instancia de GDB ya lanzada. Es con esa instancia con la que queremos comunicarnos para obtener la información.

https://github.com/microsoft/vscode-cpptools

Localizar el código de https://code.visualstudio.com/docs/cpp/cpp-debug si está disponible, y mirar si puede ser extendido (https://code.visualstudio.com/docs/cpp/cpp-debug#_natvis-framework ? https://code.visualstudio.com/docs/cpp/natvis). 

Mirar bien esto:
- https://code.visualstudio.com/api/extension-guides/debugger-extension
- https://vscode.readthedocs.io/en/latest/extensions/example-debuggers/


<br>

Luego mirar la librería de comunicación (https://github.com/cs01/pygdbmi/)
