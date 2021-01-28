# Git Notes

## Configure
- `System`: All users
- `Global`: ALl repositories of the current user
- `Local`: Only current repository

UserName - <br>
`git config --global user.name "user name"` <br>

UserEmail - <br>
`git config --global user.email user@service.com`<br>

Default Editor - <br>
`git config --global core.editor "editor name"`

To edit config file in default editor <br>
`git config --global -e`

EOL setting <br>
Linux/MacOS: `git config --global core.autocrlf input` <br>
Windows: `git config --global core.autocrlf true`


## Creating Snapshots

### Initializing a Repository:
```sh
$ cd project
$ git init
```

### Git Workflow
**Files are modified < They're added to staging area < they're commited.**<br>
\*Files must be reviewd at the staging area before commiting them.

Adding Files to staging area: `git add File`<br>
Making commits: `git commit -m "Commit name"`

Each commit contains:
- An unique ID
- Message/Commit Name
- Date and Time
- Author
- Snapshot

View files at staging area- `git ls-files`

To remove files from a repo, `git rm file(s)` is a better alternative than rm `file(s)` as it also removed the file from staging area.


## Adding local repositories to github

### via SSH \[recommended]
Considering Github already has your public key saved,
```sh
$ git remote add origin git@github.com:{USERNAME}/{REPOSITORY_NAME}
$ git branch -M {BRANCH NAME; usually main}
$ git push -u origin {SAME BRANCH NAME AS ABOVE}
```
\*same can be done via **http** though that would work ONLY if you dont have 2fa on GitHub
