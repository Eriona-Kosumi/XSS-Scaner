#include &lt;sys/types.h&gt;
#include &lt;sys/ipc.h&gt;  //interprocess communication access structure
#include &lt;sys/msg.h&gt; //message queue structures
#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
#include &lt;stdlib.h&gt;
// deklarimi i struktures se mesazhit
typedef struct msgbuf
{
long mtype;
char mtext[100];
}
message_buf;
int main()
{
int msqid; // ID e radhës së mesazhit. Vlera e kthyer nga msgget()
key_t key; //çelësi i segmentit, i cili kalon te funksioni msgget()
message_buf sbuf;
size_t buf_length;
// gjenerimi i çelesit unik, i krijuar nga serveri
key = 1234;
// IPC_CREAT – krijon një radhë të mesazhit nëse nuk ekziston fillimisht
msqid = msgget(key, IPC_CREAT|0666);
// definon mesazhin për dërgim
sbuf.mtype = 1;
strcpy(sbuf.mtext, &quot;Tungjatjeta&quot;);
buf_length = strlen(sbuf.mtext) + 1 ;
/* Dergimi i mesazhit
IPC_NOWAIT – nëse queue e mesazhit është full, mesazhi nuk shkruhet në queue dhe kontrolli
kthehet te procesi thirrës. Nëse nuk specifikohet, atëherë procesi thirrës e suspendon (bllokon)
derisa të shkruhet mesazhi. */
msgsnd(msqid, &amp;sbuf, buf_length, IPC_NOWAIT);
printf(&quot;Mesazhi: %s u dergua\n&quot;, sbuf.mtext);
exit(0);
}