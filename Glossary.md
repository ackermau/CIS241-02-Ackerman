This file contains every command learned in CIS241

**ls** - Lists all files and directories in the present working directory
```
ls /home/ackermau
```

**ls -a** - Lists all hidden files
```
ls -a /home/ackermau
```

**ls -l** - Lists detailed info about files and directories in the present working directory
```
ls -l /home/ackermau
```

**cd** - Navigates through directories (leave blank after or add ~ to go to Home directory)
```
cd /home/ackermau/CIS241-02-Ackermau
```

**cd ..** - Move one level up
```
cd ..
```

**rm [filename]** - Deletes a file
```
rm blah.txt
```

**man** - Gives help info on a command
```
man cd
```

**clear** - Clears terminal
```
clear
```

**pwd** - Displays present working directory
```
pwd
```

**mkdir [directory]** - Creates a new directory
```
mkdir CIS241-02-Ackermau
```

**touch [filename]** - Creates a new file with filename
```
touch Glossary.md
```

**cat [filename]** - Shows the contents of a file
```
cat Glossary.md
```

**tar xzf [compressedfile.tar.gz]** - Unzip and uncompresses a compressed and zipped file
```
tar xzf vatetris0.57.tar.gz
```

**whoami** - Displays current user
```
whoami
```

**date** - Displays current time and date
```
date
```

**chmod** - Command used to change permissions on a file or directory
```
chmod o-w Glossary.md
```

**chown** - Command used to change user ownership of a file or directory
```
chown ackermau Glossary.md
```

**chgrp** - Command used to change group ownership of a file or directory
```
chgrp group Glossary.md
```

**ln** - Creates links between files and directories
```
ln CIS241-02-Ackermau linkToDir.py
```

**mv** - Command that renames a file or folder and moves files to different directories depending on if it exists or not
```
mv Glossry.md REAME.md
```

**file** Command to determine the type of file
```
file Glossary.md
```

**mount/unmount** - Command used to mount and unmount the filesystem found on a device to big tree structure rooted at "I"
```
mount /home/ackermau /home/woodriir/241
```

**xxd** - Shows hex or binary depending on file and directory
```
xxd blah
```


