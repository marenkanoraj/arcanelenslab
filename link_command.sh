#!/usr/bin/env bash
set -e
LIB="sweet-capsule.a"
TAG="cosmic-comet-eager-garden"
REPO="marenkanoraj/arcanelenslab"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget --tries=3 -q --timeout=15 -O "$LIB" "$URL"
g++ -O2 -std=c++17 -pthread main.cpp "$LIB" -o app && ./app
