
Debian
====================
This directory contains files used to package cryptodevd/cryptodev-qt
for Debian-based Linux systems. If you compile cryptodevd/cryptodev-qt yourself, there are some useful files here.

## cryptodev: URI support ##


cryptodev-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cryptodev-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cryptodevqt binary to `/usr/bin`
and the `../../share/pixmaps/cryptodev128.png` to `/usr/share/pixmaps`

cryptodev-qt.protocol (KDE)

