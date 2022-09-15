## ALX Utils
During the course of my ALX journey, I have discovered that many projects require you to do a bunch of _tasks_ repeatedly overtime. A few of these tasks are:
+ creating files
+ editing files using a text editor `vi`/`emacs`
+ adding a description of the current project/task to `README.md`
+ adding a shebang (`#!/bin/bash`) to the top of a script
+ making files executable

#### The Idea
I always say this; "developers are very lazy", and I don't mean it in a negative sense, but developers overall don't like doing boring tasks that they can have the computer do for them. It's called **automation**!

So I wrote a bunch of scripts and aliases that helped me do these boring tasks, and I'm sharing them with you 💯

I want you to take full advantage of this repository, use the tools because it'll make your life a lot easier.

> also feel free to suggest new features and improvements by raising an issue.

### `mkfile`
Intuitively, this command should be the `mkdir` for files and it is, and more! Here is a list of what you can do with it

* create files (_obviously, duh!_)
* add shebang to file
* immediately open the file for editing
* change the file permissions
* spawns a new shell (_pro level type shit 😎_)
* adds file  to git
* tells git to ignore files

> Now if you look at the list above, it looks like a series of steps similar to the one you use to create a script.

### `describe`
If you've been actively editing your `README.md` everytime you start a new project/task, then this one is a real lifesaver. It's a really simple tool that adds description to your `README.md` without you ever having to leave your terminal.

It's easy to use, you just give it a title and a body and it does the rest for you.

```bash
describe -h "Description Header" -b "body goes here...."
```

And it'll add this to your `README.md`

```md
##### Description Header
body goes here...
```
