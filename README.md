# Dots-Hyprland-Laptop

---

Hi
This repository contains my personal dotfiles for a **Fedora Linux** system running **Hyprland**. These configurations are tailored to my workflow and preferences, offering a basic yet functional setup.

---

## 📦 Included Configurations

* **Hyprland:** Wayland compositor handling tiling window management and more.
* **Waybar:** A customizable Wayland bar for system information and controls.
* **Rofi:** Application launcher.
* **Kitty:** Terminal emulator.

---

## ⚙️ Dependencies

Make sure you have these installed:

```bash
sudo dnf install hyprland waybar rofi kitty swww wl-clipboard nemo dunst brightnessctl playerctl
```

> Some features also require `wpctl` (PipeWire tools).

---

## 🚀 Installation

Clone the repo into your home directory and symlink with **GNU Stow**:

```bash
git clone https://github.com/henri/Dots-Hyprland-Laptop.git ~/dotfiles
cd ~/dotfiles
stow .
```

Or manually copy configs into `~/.config/`.

---

## 🖼️ Wallpaper Management

Wallpapers are handled using **swww** and a custom **Rofi script**.

```bash
# Initialize and set wallpaper
swww init
swww img ~/Pictures/Wallpapers/default.jpg
```

Change wallpaper via **SUPER + W** (calls `~/.config/rofi/script.sh`).

---

## ⌨️ Keybindings

| Keybind                          | Action                                    |
| -------------------------------- | ----------------------------------------- |
| **SUPER + Return**               | Launch Kitty terminal                     |
| **SUPER + B**                    | Launch Firefox                            |
| **SUPER + E**                    | Open Nemo file manager                    |
| **SUPER + Space**                | Launch Rofi (app launcher)                |
| **SUPER + Q**                    | Close active window                       |
| **SUPER + T**                    | Toggle floating window                    |
| **SUPER + F**                    | Toggle fullscreen                         |
| **SUPER + W**                    | Change wallpaper (rofi script)            |
| **SUPER + L**                    | Lock screen (Hyprlock)                    |
| **SUPER + Left/Right**           | Switch to previous/next workspace         |
| **SUPER + \[1–5]**               | Switch to workspace 1–5                   |
| **SUPER + ALT + \[1–5]**         | Move active window to workspace 1–5       |
| **SUPER + ALT + Left/Right**     | Move active window to prev/next workspace |
| **SUPER + SHIFT + Arrows**       | Move focus (left/right/up/down)           |
| **SUPER + Scroll Up/Down**       | Cycle through workspaces                  |
| **SUPER + Left Mouse (drag)**    | Move window                               |
| **SUPER + Right Mouse (drag)**   | Resize window                             |
| **Volume Up/Down (Fn keys)**     | Adjust audio volume                       |
| **Mute (Fn key)**                | Toggle audio mute                         |
| **Mic Mute (Fn key)**            | Toggle microphone mute                    |
| **Brightness Up/Down (Fn keys)** | Adjust screen brightness                  |
| **Media Next/Prev/Play/Pause**   | Control media with playerctl              |

---

## 📷 Screenshots

*(Add screenshots of your setup here to showcase Hyprland + Waybar + Rofi)*

---

## 📝 Notes

* **Tailored to my needs:** These configs reflect my preferences, you may need to adjust paths and keybindings.
* **Basic setup:** Provides a minimal but functional Hyprland environment.
* **Fedora specific:** Configs assume Fedora package management.
* **Feel free to fork:** Adapt it to your own workflow!

---

## ✅ TODO / Future Improvements

* Add more workspace keybinds
* Improve Rofi menus (power menu, screenshots, etc.)
* Waybar modules for battery, media, and brightness
* Auto theme generation with Pywal
