# Basic SSH Notes

## What is SSh
- Stands for **Secure Shell**
- Protol to communicate with different computers
- Use a system remotely
- Communication is encrypted
- **SSH** is the client, while **SSHD** is the server (SSH Daemon)
- By default uses port 22 


## Authentication Methods:
```ssh user@host``` <br>*\*either host-name or host-ip*
- Pasword
- Public/Private Key Pair [safer than password]
- Host based- host has a list of machines that are allowed to connect


## Generating Keys
```ssh-keygen```
- Private Key: `~/.ssh/id_rsa`      
- Public Key: `~/.ssh/id_rsa.pub`
- on the server, this public key would be stored in the file- `~/.ssh/authorised_keys`

*\*user would be asked if they wanna have a custom filename after running the command.* <br>

A system can have different keys for different hosts, and these new key are added by:
`ssh-add ~/.ssh/new_key_name`


### Public-Key can be added to the server in one line with the command:
`cat ~/.ssh/id_rsa.pub | ssh user@host "mkdir -p ~/.ssh && chmod 700 ~/.ssh && cat >> ~/.ssh/authorized_keys`
Or
`ssh-copy-id -i ~/.ssh/mykey user@host`
## Transfering Data
command to copy file from local system to the host- <br>`scp [filepath] user@host:[path to paste the file at]`

command to copy file from the host to local system- <br>`scp -P [port number] user@host:[filepath] [path to paste the file at]`


## Disabling root login
In the **SSHD** config `/etc/ssh/sshd_config`, on the host, root login can be disabled by setting- <br>
`PermitRootLogin no`. <br>
Then to make changes take place- `sudo systemctl reload sshd` (for host with systemd init system).
