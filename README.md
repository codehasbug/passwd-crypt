# passwd-crypt
A tool for generate encrypted Linux password.

# Guideline
## Build
```shell
gcc passwd-crypt.c -lcrypt -o passwd-crypt 
```
## Install
```shell
mv passwd-crypt /usr/bin
```
## Usage
The tool requests two arguments, a password which you want to encrypt and a salt.  
Usage: passwd-crypt [password without encrypt] [input 0 generate a random salt or input a specific salt]  
Example: 
```shell
passwd-crypt YOUR_PASSWORD 0
```

