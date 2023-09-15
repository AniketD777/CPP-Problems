#A simple script for parsing the first line from each file and displaying it for content creation.
from urllib.request import urlopen

def main():
    num=int(input('Input the no. of files: '))
    fold=input("Folder: ")
    for i in range(1,num+1):
        url="https://raw.githubusercontent.com/AniketD777/CPP-Problems/main/"+fold+"/"+str(i)+".cpp"
        file=str(urlopen(url).read(),'utf-8')
        for line in file.split('\n'):
            print(str(i)+".cpp => "+line[2:]+"\n")
            break

if __name__=='__main__':
    main()
