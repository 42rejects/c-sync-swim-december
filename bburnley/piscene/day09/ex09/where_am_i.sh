ifconfig | grep 'inet ' | cut -c7- | sed "s/ n.*//"
