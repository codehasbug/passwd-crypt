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
Output a encrypted password.
```shell
passwd-crypt YOUR_PASSWORD 0
```
Add a user with password.
```shell
sudo useradd -p $(passwd-crypt test1234 0) test
```

