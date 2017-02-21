#Install platformIO
<pre>
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install python-pip
pip install -U platformio
</pre>

#Make a directory to contain the project
{{{
mkdir arduino-project-name
cd arduino-project-name
}}}

#Start the project
{{{
platformio init --board uno
}}}

#This is your Arduino sketch
{{{
vim src/main.cpp
}}}

#Upload code
{{{
platformio run --target upload
}}}
