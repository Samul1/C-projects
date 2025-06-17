# C-projects
- This is my tutorial serie to C-programming language.
- Follow along and solve coding **missions** as they come up!

## SetUp

**1.**  Download [Visual Studio Code](https://visualstudio.microsoft.com/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&cid=2030&passive=false) or [Visual Studio](https://code.visualstudio.com/Download)

**2.** Install [MSYS2](https://www.msys2.org/)

- After installing open MSYS2 MSYS -window (or MSYS MinGW 64-bit if you are going to make 64-bit programs)
- Then enter: 

```bash=
pacman -Syu
```

- Close terminal and open MSYS2 again and enter:
```bash=
pacman -S mingw-w64-x86_64-gcc
```

**3.** Set **PATH**-variable

- Find **Environment Variables**
- Select **PATH** -> **Edit**
- Add new line: ```C:\msys64\mingw64\bin```

**4.**

- Check if you can use command: ```gcc --version``` on MSYS2 MINGW64 -terminal.

## Running your program

- Open **MSYS2 MINGW64** -terminal and navigate to your work folder.
- Enter this comman to compile your code and make an .exe:

```bash=
gcc *.c -o <nameYourExe>.exe
```

- After that run your .exe file with:
```bash=
./<yourExeFileName>.exe
```