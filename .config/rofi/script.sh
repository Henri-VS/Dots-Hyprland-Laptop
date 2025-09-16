#!/bin/bash

# Directory with wallpapers
WALLPAPER_DIR="/home/henri/Pictures/Wallpapers"

# Hyprpaper config location
CONFIG_FILE="$HOME/.config/hypr/hyprpaper.conf"

# Pick wallpaper with rofi
SELECTED=$(ls "$WALLPAPER_DIR" | rofi -dmenu -i -p "Select Wallpaper")

# Exit if nothing selected
[ -z "$SELECTED" ] && exit

# Full path
WALLPAPER="$WALLPAPER_DIR/$SELECTED"

# Detect monitor name (first one found)
MONITOR=$(hyprctl monitors -j | jq -r '.[0].name')

# Apply Pywal colors
wal -i "$WALLPAPER"

# Update Firefox with Pywalfox
pywalfox update

# Restart Waybar BEFORE wallpaper change
pkill waybar
waybar &

# Kill existing hyprpaper
pkill hyprpaper

# Write new config
cat > "$CONFIG_FILE" <<EOF
preload = $WALLPAPER
wallpaper = $MONITOR,$WALLPAPER
EOF

# Restart hyprpaper with new wallpaper
hyprpaper &
