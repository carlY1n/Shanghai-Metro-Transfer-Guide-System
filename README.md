# 🚇 Shanghai Metro Transfer Guide System  
*Graph-based route planning & interactive visualization*

## Overview  
The Shanghai Metro Transfer Guide System is a full-featured desktop application that models Shanghai’s extensive metro network as a graph and provides intelligent transfer recommendations. It supports two optimization strategies—**minimum number of transfers** and **minimum travel time**—and visualizes the recommended path on an interactive map. Users can also dynamically add new stations and connections, making the system extensible for future network expansions.

With over a dozen lines and hundreds of stations, Shanghai’s metro system demands efficient route planning. This project applies classical graph algorithms and a custom-built data structure to deliver clear, user‑friendly navigation guidance, complete with graphical path display and real‑time network updates.

## Tech Stack  
| Layer          | Technology                                              |
|----------------|---------------------------------------------------------|
| Frontend       | Qt (C++), Qt Widgets, Qt Graphics View Framework        |
| Backend        | C++ (C++11), Custom graph implementation                |
| Build Tools    | Qt Creator 14.0.1, MinGW 64-bit                         |
| Platform       | Windows 11, cross‑platform compatible (Qt based)        |

## Core Features  
- 🗺️ **Interactive Network Visualization** – Displays all metro lines with distinct colors; supports mouse dragging, zooming, and station hover information.  
- 🔄 **Dual-Mode Route Planning** – Choose between “minimum transfers” (BFS‑based) and “minimum time” (Dijkstra’s algorithm) strategies.  
- ➕ **Dynamic Network Extension** – Add new stations and connections on the fly; the graph structure and map update automatically.  
- 🧭 **Step‑by‑Step Transfer Guide** – Outputs a detailed textual guide listing the start station, transfer stations, and final destination.  
- 🎨 **Graphical Path Highlighting** – The selected route is visually emphasized on the metro map for intuitive understanding.  
- ✅ **Input Validation** – Checks for non‑existent stations, duplicate entries, and invalid connections with clear error messages.

## System Architecture  
User Input (Qt UI) ──► MetroSystem (Graph Model)
│
▼
Route Calculation Engine (Dijkstra / BFS)
│
▼
Path Visualization (Qt Graphics View)

text
- **MetroSystem** – Central class that stores all stations (vertices) and lines (edges). Each station records its name, coordinates, and the lines passing through it. Each line stores its stations in order, its color, and name.
- **Graph Algorithms** – Dijkstra’s algorithm with a priority queue for time‑optimized routes; BFS for transfer‑optimized routes.
- **Qt Graphics View** – Renders the metro map, handles user interactions (drag/zoom/click), and highlights the computed route.

## Algorithm Highlights  
- **Data Structure** – Graph represented as an adjacency list where each edge stores the travel time between stations. Stations are indexed by name for fast lookup.
- **Dijkstra Implementation** – Uses a `std::priority_queue` to find the shortest travel‑time path. The predecessor map is then backtracked to reconstruct the full route.
- **BFS for Minimum Transfers** – Treats the graph as unweighted; BFS guarantees the fewest line changes.
- **Dynamic Addition** – When a user adds a new station or connection, the internal graph is updated, and the map view is refreshed accordingly.

## Development & Testing  
- **IDE & Tools** – Developed with Qt Creator, leveraging Qt Designer for UI layout and the signal‑slot mechanism for event handling.  
- **Debugging** – Extensive use of `qDebug()` to trace algorithm execution and validate graph updates.  
- **Testing** – Verified with real Shanghai metro data (lines 1–18) covering over 300 stations. Test cases included edge stations, cross‑line transfers, and custom additions.

## Sample Results  
**Route: Tongji University → Pudong International Airport**  
- *Minimum transfers*: 2 transfers (Line 10 → Line 2 → Maglev)  
- *Minimum time*: 1 transfer (Line 10 → Line 2) – faster due to direct connection.

**Dynamic Addition**  
- Adding a new station “Huangdu” and connecting it to “Changji East Road” instantly updates the graph and map.

## Academic Context  
This project demonstrates a complete application of graph theory and algorithm design in a real‑world transportation scenario. It encompasses:
- Graph modeling of a complex network
- Implementation of classic algorithms (Dijkstra, BFS)
- Interactive GUI development with Qt
- Runtime extensibility through user‑driven modifications

The system serves as a practical example of how data structures and algorithms can be combined to solve everyday navigation problems.
