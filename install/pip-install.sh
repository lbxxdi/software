#!/usr/bin/env bash
set -euo pipefail

packages=(
    pyserial
    watchdog

    gevent
    matplotlib
    cython
    flask
    paramiko
    pyyaml
    redis
    requests
    scipy
    six
    tabulate
    termcolor
    tornado

    eventlet
    posix_ipc

    pygobject

    nanomsg
)

packages2=(
    posix_ipc
    # cairo
    pygame
    # gobject3
    # pysqlite
    # systemd
    # wxPython
)
packages3=(
    posix_ipc
    flask-socketio
    flask
)

pip2 install --upgrade pip
pip3 install --upgrade pip

pip2 install ${packages[@]} ${packages2[@]}
pip3 install ${packages[@]} ${packages3[@]}
