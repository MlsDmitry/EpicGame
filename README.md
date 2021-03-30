# EpicGame

## Requirements
 * cmake >= 3.1
## Compile & Run
Note use of **--recurse-submodules** is **required**!
### Unix
```
git clone https://github.com/MlsDmitry/EpicGame.git --recurse-submodules -j8
cd EpicGame
mkdir build && cd build
cmake ..
make
./epic_game
```
### Windows
```
git clone https://github.com/MlsDmitry/EpicGame.git --recurse-submodules -j8
cd .\EpicGame
cmake ..
make
.\epic_game
```
### Setup Enviroument for IDE
Show list of build systems. Choose the one your system/IDE supports.
```
cmake -G
```
Example
```
cd EpicGame
mkdir Xcode && cd Xcode
cmake -G Xcode ..
```

