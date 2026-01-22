# MiniTalk

MiniTalk est un projet réalisé dans le cadre de l’École 42.  
Il consiste à implémenter une **communication entre deux processus Unix** en utilisant uniquement les **signaux UNIX** (`SIGUSR1` et `SIGUSR2`).

Ce projet permet de comprendre :
- le fonctionnement des processus Unix
- la gestion des signaux
- la communication inter-processus (IPC)
- la synchronisation client / serveur en bas niveau

---

## 📌 Objectifs pédagogiques

- Manipuler des PID et des signaux Unix
- Encoder et décoder des données bit par bit
- Mettre en place une communication fiable sans sockets ni pipes
- Gérer correctement les signaux et les erreurs
- Travailler avec des contraintes bas niveau strictes

---

## 🛠️ Compilation

Depuis la racine du projet :

```bash
make
```

Cette commande génère deux exécutables :
- `server`
- `client`

Nettoyage :
```bash
make clean
make fclean
```

---

## ▶️ Utilisation (pas à pas)

### 1️⃣ Lancer le serveur

Dans un premier terminal :

```bash
./server
```

Le serveur démarre et affiche son **PID** :

```text
Server PID: 12345
```

👉 **Ce PID est indispensable** : il permet au client de savoir à quel processus envoyer les signaux.

⚠️ Le serveur doit rester ouvert pendant toute la communication.

---

### 2️⃣ Lancer le client

Dans un **second terminal** :

```bash
./client <PID_DU_SERVEUR> "message à envoyer"
```

Exemple concret :
```bash
./client 12345 "Hello MiniTalk"
```

---

### 3️⃣ Résultat côté serveur

Le message est reconstruit **bit par bit** et affiché directement dans le terminal du serveur :

```text
Hello MiniTalk
```

Chaque caractère est transmis via des signaux Unix.

---

## ⚙️ Fonctionnement technique

- Chaque caractère est converti en binaire
- Les bits sont envoyés un par un :
  - `SIGUSR1` → bit `0`
  - `SIGUSR2` → bit `1`
- Le serveur intercepte les signaux, reconstruit les caractères et affiche le message
- Une synchronisation correcte évite la perte de signaux

---

## 🔒 Contraintes du projet

- Langage : C
- Utilisation exclusive des signaux (`SIGUSR1`, `SIGUSR2`)
- Aucune fuite mémoire
- Gestion propre des erreurs
- Respect strict de la norme de l’École 42

---

## 📁 Structure du projet

```text
.
├── client.c
├── server.c
├── includes/
│   └── minitalk.h
├── Libft/
├── ft_printf/
├── Makefile
└── README.md
```

---

## 🎓 Contexte

Projet réalisé dans le cadre du cursus de l’École 42 afin de renforcer les bases en :
- systèmes Unix
- programmation bas niveau
- communication inter-processus

---

## 👤 Auteur

Zahi Mata  
Étudiant à l’École 42  
GitHub : https://github.com/ZahiMATA
