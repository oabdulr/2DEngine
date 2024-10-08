#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <chrono>
#include <thread>
#include <filesystem>
#include <queue>
#include <stdlib.h>

#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>

#include <stdio.h>
#include <stdlib.h>

#include "types/vec/vec2.h"
#include "types/vec/vec3.h"
#include "types/vec/vec4.h"
#include "types/vec/rect.h"

#include "types/color/color4.h"

#include "types/utility.hpp"

#include "types/vec/bound.h"
#include "types/font/font.h"
#include "types/texture/font_texture.h"
#include "types/texture/object_texture.h"

#include "engine/drawing/drawing.hpp"

#include "types/game/animation/animation.hpp"
#include "types/game/objects/gameobject.h"
#include "types/game/objects/shapes/square.h"
#include "types/game/objects/player/player.h"
#include "types/game/tiles/itile/itile.h"
#include "types/game/tiles/tiles.h"
#include "types/game/gameworld.h"


#include "types/game/camera/camera.h"

