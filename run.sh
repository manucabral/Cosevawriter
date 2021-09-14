echo 'Welcome to Coseva!'
echo -n 'Please enter filename:'
read filename
echo -n 'Enter file access mode (read or write):'
read mode
echo '[Executing coseva program]'
g++ src/main.cpp -o coseva
./coseva $filename $mode
read -p "Press enter to continue"