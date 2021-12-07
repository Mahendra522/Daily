# QliqSoft

This project based on keyword driven framework consists of all the modules requried to test the QliqSoft web application.

Make sure you have a proper environment to run this project:

**Environment Setup**

First of all we need to download [Eclipse](https://www.eclipse.org/downloads/), [Git](https://git-scm.com/downloads) and complete their installations.

**_Git_**

After successfully installing git you will need to execute some commands.

Go the specific directory where you wanted to install this project and run `mkdir qliqsoft`, this will create a new directory.

Jump inside the qliqsoft directory `cd qliqsoft` and create another directory inside it using `mkdir repo`, now jump inside repo to clone the project `cd repo`.

Before doing a clone make sure you are on the exact location, run `pwd`. And the result should be like:
> .../qliqsoft/repo

Now you can either download the zip file for entire project from here [Download](https://gitlab.com/qliq-robots/web.git), or goto [Gitlab](https://gitlab.com) and login to do a git clone. 

Next step is to generate ssh on your local machine and pair it with the github account, so you don't have to write the passphrase each time.

After successfully doing ssh authentication we are good go with `git clone git@gitlab.com:qliq-robots/web.git` this will clone the entire remote repository to your local system. 


Switch to a specific branch 
* `git branch -a` this will list down all the available local and remote branches.
* To switch to a specific branch for example **create_support**, run `git checkout create_support`. 

After this you can know add, commit, and push your code to the Gitlab server or remote repository.


**_Eclipse_**

Before importing the project make sure that TestNG is installed, if not check this guide [TestNG Guide](https://testng.org/doc/download.html).

Since this is a gradle project we need to use _Import as Gradle_. 

* On the top menu bar go to File --> Import.
* 

![Import Screenshot](https://drive.google.com/file/d/1VYNsVKqw-UNSBM5YRxMp6HpvxZC_82mg/view?usp=sharing)



**Project Structure**

Modules present here is mainly categorised into 3 parts,

