#!/bin/bash

echo "Respaldando la carpeta personal...... "

echo "Esta operación puede tardar varios minutos!!!"

tar zcfv Backup.tar.gz /home/$USER
