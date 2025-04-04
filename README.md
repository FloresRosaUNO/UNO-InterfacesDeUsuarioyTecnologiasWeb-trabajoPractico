# UNO-InterfacesDeUsuarioyTecnologiasWeb-trabajoPractico
WebAsembly-TETRIS


Cómo compilarlo a WebAssembly
Si querés convertirlo a Wasm, vas a necesitar Emscripten:

Instalar Emscripten

sh
Copiar
Editar
git clone https://github.com/emscripten-core/emsdk.git
cd emsdk
./emsdk install latest
./emsdk activate latest
source ./emsdk_env.sh
Compilar el código C a WebAssembly

sh
Copiar
Editar
emcc tetris.c -o tetris.html
Esto generará tetris.html, tetris.js y tetris.wasm, listos para ejecutar en un navegador.

Si querés hacer la página de juegos de arcade con gráficos y controles, lo mejor es usar SDL con Emscripten o combinarlo con JavaScript. Avisame si querés ayuda con eso.









