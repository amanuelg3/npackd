﻿# Npackd

* Home page: https://npackd.appspot.com
* Downloads: https://github.com/tim-lebedkov/npackd/wiki/Downloads
* Forum: https://groups.google.com/forum/#!forum/npackd
* GUI and command line source code: https://github.com/tim-lebedkov/npackd-cpp
* Web based repository manager source code: https://github.com/tim-lebedkov/npackd-gae-web

![Npackd](http://npackd.appspot.com/Npackd.png)

Npackd (pronounced "unpacked") is an application store/package manager/marketplace for applications for Windows. It helps you to find and install software, keep your system up-to-date and uninstall it if no longer necessary. You can watch [this short video](https://www.youtube.com/watch?v=ZLJ8sv6siKQ) to better understand how it works. The process of installing and uninstalling applications is completely automated (silent or unattended installation and un-installation). There is also a [command line](https://github.com/tim-lebedkov/npackd/wiki/CommandLine) based version of Npackd which you can [install](https://github.com/tim-lebedkov/npackd/wiki/CommandLineInstallation) from the command line: 

```Batchfile
C:\> msiexec.exe /qb- /i http://bit.ly/npackdcl-1_19_13
```

see [What is new in Npackd](https://github.com/tim-lebedkov/npackd/wiki/ChangeLog)

## Add your packages
You can add you packages (a Google account is required) [here](https://npackd.appspot.com/package/new).

## Suggest software
You can [suggest](https://github.com/tim-lebedkov/npackd/issues/new) a package for inclusion if it is not yet available.

## News
You can follow the news on [Twitter](http://twitter.com/Npackd)

## Third party tools working with Npackd:
  * [Npackd plugin for chooie](https://github.com/TomPeters/chooie.Npackd)
  * [Puppet package provider for Npackd](http://forge.puppetlabs.com/badgerious/npackd)
  * [Npackd for Sublime Text Syntax - completions and snippets for creating Npackd XML files](https://sublime.wbond.net/packages/Npackd)

##Distribute your applications using Npackd!
You can also distribute your own applications using Npackd: either through your own repository or through the one mentioned above. All you have to do is to package your application as a ZIP file so it is accessible through HTTP and describe it as shown in RepositoryFormat. It is even easier if you already have an .msi or .exe installer. In most cases they can be reused without re-packaging.

##Default repository
The default repository is located at `https://npackd.appspot.com/rep/xml?tag=stable` and currently contains [hundreds of applications](https://npackd.appspot.com/rep/xml?tag=stable). [Read more...](https://github.com/tim-lebedkov/npackd/wiki/DefaultRepository)

##Default repository/64 bit
The default repository for 64-bit software is located at `https://npackd.appspot.com/rep/xml?tag=stable64` and contains [only 64-bit versions](https://npackd.appspot.com/rep/xml?tag=stable64) of some packages from the stable repository. [Read more...](https://github.com/tim-lebedkov/npackd/wiki/DefaultRepository64Bit)

##Default programming libraries repository
The default programming libraries repository is located at `https://npackd.appspot.com/rep/xml?tag=libs` and contains [only programming libraries](https://npackd.appspot.com/rep/xml?tag=libs) (mostly source code). [Read more...](https://github.com/tim-lebedkov/npackd/wiki/LibrariesRepository)

##Default repository for unstable software
The default repository for unstable software is located at `https://npackd.appspot.com/rep/xml?tag=unstable` and contains [only unstable versions](https://npackd.appspot.com/rep/xml?tag=unstable) of some packages from the stable repository. [Read more...](https://github.com/tim-lebedkov/npackd/wiki/DefaultRepositoryUnstableSofware)

##Default repository for Vim plugins
The default repository for Vim plugins is located at `http://npackd.appspot.com/rep/xml?tag=vim` and contains [only plugins for Vim](http://npackd.appspot.com/rep/xml?tag=vim). [Read more...](https://github.com/tim-lebedkov/npackd/wiki/DefaultRepositoryVimPlugins)

##vim.org repository for Vim plugins
The vim.org repository for Vim plugins is regularly (currently every 3 months) exported to an Npackd repository located at `http://downloads.sourceforge.net/project/npackd/VimOrgRep.xml`. Currently only plugins in .zip and .tar.gz files without additional directory levels are supported, the repository contains over 1400 packages.

Windows is a registered trademark of Microsoft Corporation in the United States and other countries.

