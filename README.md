# XSS-Scaner

Dy hapat kryesor:
1. Gjetja e objektivit: Vegla mundohet të identifikojë të gjithë parametrat e injektueshëm në forma, URLs, headers, etj.
2. Testimi për XSS: Për secilin parametër, skenuesi përpiqet të detektojë nëse është i rrezikuar nga Cross-Site Scripting apo jo. Vegla injekton kod të shkruar në JavaScript, duke përfshirë disa karaktere të veçanta HTML (>, <, ", ') dhe mundohet të shohë nëse përgjigja kthehet e pasanitizuar.
Nëse vegla vërenë të paktën një dobësi, do të lajmërojë që faqja e skenuar është jo e sigurtë (ndaj XSS).

## Teknologjitë
 * Puppeteer
 * Javascript
 * NodeJS
 * Express
 
![image](https://user-images.githubusercontent.com/61945677/148642824-74de7626-aa86-4793-9556-4f5af0a0467d.png)

 
### Instalimi

Klono repon:
```
git clone https://github.com/arbreshazeqiri/IntSec21-22_Gr24.git
```
Hyni në follderin e klonuar:
```
cd IntSec21-22_Gr24
```
Instalo varshmëritë:
```
npm install
```
Ekzekuto aplikacionin:
```
npm start
```
Hap shfletuesin në http://localhost:4000/
