# C# Notes
These are self notes. <br>
I've made references to other languages that I know for better understanding.*
<br>
<br>

## Installation
On Arch Linux [Mono package](https://wiki.archlinux.org/index.php/Mono) is required to compile and execute C# scripts.

scripts are compiled using the `mcs` command and executed with `mono`
```sh
$ mcs file_name.cs
$ mono file_name.exe
```
This can be done in 1-line with the addition of a [shell script](https://github.com/LexxFade/Tools/blob/main/1-Line%20Run%20C%23/cs.sh) added as an alias in shellrc.

<br>

## Hello World 
Like C++, to add functionality to a C# script certain files must be imported. <br>
`Namespace` is more or less like a `module` in ruby- a collection of methods.

```cs
learning.cs
--------------------------------------------------------
using System;

namespace Learning
{
    class Program
    {
        static void Main(string[] args)
        {
            // Main code will come here
            Console.WriteLine("Hello World");
        }
    }
}
```
