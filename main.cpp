#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    ifstream check1 ("$HOME/.ssh/.log");
    if (!check1) {
        system("touch $HOME/.ssh/.log");
    }
    ifstream check2 ("/tmp/ssh_tunneling");
    if (!check2) {
        system("touch /tmp/ssh_tunneling");
        system("echo '#########################################' >> $HOME/.ssh/.log ");
        system("date >> $HOME/.ssh/.log");
        system("echo 'Creazione connessione' >> $HOME/.ssh/.log");
        system("echo '#########################################' >> $HOME/.ssh/.log ");
        int e = system("rm $HOME/.ssh/known_hosts");
        if ( e = 256 ) {
            system("echo '#########################################' >> $HOME/.ssh/.log");
            system("date >> $HOME/.ssh/.log");
            system("echo 'Errore $HOME/.ssh/known_hosts non esiste' >> $HOME/.ssh/.log");
            system("echo '#########################################' >> $HOME/.ssh/.log");
        }
        system("ssh -NfR 5000:localhost:22 rooted@rooted01.ns0.it");
    }


    return 0;
}
