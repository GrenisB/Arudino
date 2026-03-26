# 🚦 Progetti Arduino

Raccolta di progetti realizzati con **Arduino UNO**, che includono semafori sincronizzati, luci controllate e un sistema con bottone.

---

## 📋 Indice

- [4 Semafori a Incrocio](#-4-semafori-a-incrocio)
- [2 Semafori](#-2-semafori)
- [Luce Accesa](#-luce-accesa)
- [Luce con Bottone](#-luce-con-bottone)

---

## 🚦 4 Semafori a Incrocio

Simulazione di un incrocio completo con 4 semafori sincronizzati tra loro tramite logica temporale.

### 🧰 Materiali

| Componente       | Quantità |
|-----------------|----------|
| Piccola BreadBoard | 4     |
| LED Verde        | 4        |
| LED Giallo       | 4        |
| LED Rosso        | 4        |
| Resistenze       | 12       |
| Arduino UNO      | 4        |

### 💡 Logica di Funzionamento

Ogni Arduino esegue il proprio codice in modo **completamente autonomo** e indipendente dagli altri. La sincronizzazione tra i 4 semafori è garantita dalla **gestione precisa dei tempi**, ogni Arduino segue la stessa sequenza temporale, ottenendo così una perfetta coordinazione senza necessità di comunicazione tra le schede.

> **Vantaggio:** nessun cavo di comunicazione tra Arduino.

---

## 🚦 2 Semafori

Versione ridotta del sistema con 4 semafori.

### 🧰 Materiali

| Componente       | Quantità |
|-----------------|----------|
| Piccola BreadBoard | 2     |
| LED Verde        | 2        |
| LED Giallo       | 2        |
| LED Rosso        | 2        |
| Resistenze       | 6        |
| Arduino UNO      | 2        |

### 💡 Logica di Funzionamento

Stessa logica del progetto a 4 semafori: ogni Arduino gestisce il proprio semaforo in modo autonomo, sincronizzato tramite `delay()`.

---

## 💡 Luce Accesa

Progetto base un LED sempre acceso, senza alcuna complicazione logica.

### 🧰 Materiali

| Componente       | Quantità |
|-----------------|----------|
| Piccola BreadBoard | 1     |
| LED Blu          | 1        |
| Resistenza       | 1        |
| Arduino UNO      | 1        |

### 💡 Logica di Funzionamento

Il codice alimenta continuamente il pin del LED.

---

## 🔘 Luce con Bottone

Estensione del progetto precedente: il LED si accende e spegne premendo un bottone.

### 🧰 Materiali

| Componente       | Quantità |
|-----------------|----------|
| Piccola BreadBoard | 1     |
| LED Blu          | 1        |
| Resistenza       | 1        |
| Arduino UNO      | 1        |
| Bottone          | 1        |

### 💡 Logica di Funzionamento

Il sistema mantiene una variabile **`stato`** che tiene traccia dello stato corrente del LED (`ON(HIGH)` / `OFF(LOW)`). Ad ogni pressione del bottone, lo stato viene invertito, e il LED si aggiorna di conseguenza. 

---

## 🛠️ Tecnologie Utilizzate

- [Arduino UNO](https://www.arduino.cc/)
- Arduino IDE
- Linguaggio C/C++ per Arduino

---

## 👤 Autore

Grenis Banushi.
