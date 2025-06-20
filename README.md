
# 🧊 OpenGL-3D-Scene – Interaktives 3D-Sonnensystem

**OpenGL-3D-Scene** ist ein interaktives 3D-Grafikprojekt zur Darstellung eines Sonnensystems.  
Es wurde in **C** mit OpenGL 3.3 umgesetzt und zeigt Planetenbewegung, Texturen, Licht und Kamerasteuerung.

---

## 🔧 Verwendete Technologien

- **C** – Systemnahe Programmiersprache
- **OpenGL 3.3 Core** – Grafikpipeline
- **GLEW** – Erweiterungsverwaltung
- **GLFW** – Fenster- und Eingabesteuerung
- **stb_image** – Bild- und Texturladung
- **Eigene Matrixfunktionen** – für Transformationen und Projektionen

---

## 🌍 Projekt-Features

- 3D-Sonnensystem mit Sonne + 9 Planeten  
- Echtzeit-Umlaufbahnen und Rotationen  
- Individuelle Texturen für jeden Planeten  
- Hintergrundbild (Weltraum)  
- 30 kleine und 3 große Asteroiden mit zufälligen Umläufen  
- Kamera-Rotation mit Maus/Tastatur, Zoom mit Mausrad, Reset mit Taste R  
- Lichtberechnung mit Phong-Shading  
- OBJ-Dateien für Planetenmodelle und Felsen

---

## 📁 Projektstruktur

```bash
OpenGL-3D-Scene/
├── .vscode
├── shaders/
│   ├── basic_color.vert
│   └── basic_color.frag
├── textures/
│    ├── sun.jpg
│    ├── earth.jpg
│    ├── mars.jpg
│    ├── mercury.jpg
│    ├── venus.jpg
│    ├── jupiter.jpg
│    ├── saturn.jpg
│    ├── uranus.jpg
│    ├── neptune.jpg
│    ├── pluto.jpg
│    ├── rock.jpg
│    ├── large_rock.jpg
│    └── space.jpeg
├── models/
│   ├── cube.obj
│   └── rock.obj
├── include/
│   ├── GL
│   ├── GLFW
│   ├── camera.h
│   ├── light.h
│   ├── matrix.h
│   ├── models.h
│   ├── object.h
│   ├── obj_loader.h
│   ├── shader.h
│   ├── stb_image.h
│   └── utils.h
├── src/
│   ├── main.c
│   ├── camera.c
│   ├── camera_matrix.c
│   ├── light.c
│   ├── matrix.c
│   ├── models.c
│   ├── object.c
│   ├── obj_loader.c
│   ├── shader.c
│   └── test-matrix-und-camera.c
├── obj/                     # Kompilierte Objektdateien (.o)
├── .gitignore
├── Makefile
├── README.md
├── app.exe
├── test-matrix.exe
├── ...


```

---

## ⚙️ Installation
Um das Projekt auf den Pool-PCs der Hochschule Hannover zu installieren und auszuführen, folgen Sie bitte diesen Schritten:

1. Erstellen eines Personal Access Token (PAT)
Besuchen Sie GitHub Docs unter https://docs.github.com/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls und folgen Sie der Anleitung zum Erstellen eines PAT. Stellen Sie sicher, dass Sie die repo-Berechtigungen aktivieren, um Zugriff auf private Repositories zu erhalten.

2. Code aus dem GitHub-Repository klonen
Öffnen Sie ein Terminal und navigieren Sie zu dem Verzeichnis, in dem Sie das Projekt speichern möchten. Führen Sie dann den folgenden Befehl aus, um das Repository zu klonen. Ersetzen Sie <your_token> und <your_repository_url> durch Ihren PAT und die URL Ihres Repositories:
git clone https://<your_token>@github.com/Computergrafikprojekt/OpenGL-3D-Scene.git

Da es sich bei diesem Projekt um ein privates Repository handelt, wurden dem Prof. die Dateien via Moodle zur Verfügung gestellt. Diese Dateien sollten in das gewünschte Verzeichnis gezogen werden.

3. Notwendige Bibliotheken installieren (vor dem Kompilieren)
Damit das Projekt erfolgreich kompiliert und ausgeführt werden kann, müssen die folgenden Pakete installiert sein
```bash
sudo apt update
sudo apt install build-essential libgl1-mesa-dev libglew-dev libglfw3-dev
```
4. Programm erstellen und ausführen
Navigieren Sie anschließend mittels Terminal in das Verzeichnis der Projekt-Dateien.
```bash
cd OpenGL-3D-Scene
```
Sie starten das Programm mit folgendem Befehl :
```bash
./app
```

### Voraussetzungen (MSYS2 empfohlen)

```bash
pacman -S mingw-w64-x86_64-gcc \
            mingw-w64-x86_64-glfw \
            mingw-w64-x86_64-glew \
            mingw-w64-x86_64-stb \
            make
```

---

### 🔧 Build & Start

```bash
make         # Projekt kompilieren
./app.exe    # Anwendung starten
```

---

## 🎮 Steuerung

| Eingabe         | Funktion                        |
|----------------|----------------------------------|
| Linksklick + Maus + Taste `W A S D` | Kamera rotieren                 |
| Mausrad         | Zoom                            |
| Taste `R`       | Kamera zurücksetzen             |

---

## ✅ Erfüllte Anforderungen

Alle Anforderungen aus dem Aufgabenblatt wurden umgesetzt:

1. **README-Datei** mit Anleitung und Beschreibung  
2. **Eigene Matrixfunktionen** für Transformationen  
3. **Import von .obj-Dateien**  
4. **Mehrere 3D-Objekte** (Sonne, Planeten, Felsen)  
5. **Animationen** von Kamera und Objekten  
6. **Phong-Lichtberechnung**  
7. **Texturierung** aller Planeten und Felsen  
8. **Benutzerinteraktion** (Maus & Tastatur)

---

## 👤 Autor:innen

- **Mohammed Al-Muliki**, Matrikelnummer: 1696172  
- **Phu Quy Le**, Matrikelnummer: 1764640  
- **Truong Minh Khoi Nguyen**, Matrikelnummer: 1764501  
- **Elias Al-Maqtry**, Matrikelnummer: 1630686

## Quellen
- **Planeten**: _https://www.solarsystemscope.com/textures/_
- **Rock**: _https://free3d.com/3d-model/low-poly-rock-4631.html_
