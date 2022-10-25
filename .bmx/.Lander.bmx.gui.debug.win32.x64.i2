import brl.blitz
import brl.appstub
import brl.audio
import brl.bank
import brl.bankstream
import brl.base64
import brl.basic
import brl.bmploader
import brl.bytebuffer
import brl.clipboard
import brl.collections
import brl.d3d7max2d
import brl.d3d9max2d
import brl.directsoundaudio
import brl.eventqueue
import brl.freeaudioaudio
import brl.freetypefont
import brl.glgraphics
import brl.glmax2d
import brl.gnet
import brl.jpgloader
import brl.map
import brl.matrix
import brl.maxlua
import brl.maxunit
import brl.maxutil
import brl.objectlist
import brl.oggloader
import brl.openalaudio
import brl.platform
import brl.pngloader
import brl.quaternion
import brl.randomdefault
import brl.retro
import brl.tgaloader
import brl.threadpool
import brl.timer
import brl.timerdefault
import brl.uuid
import brl.volumes
import brl.wavloader
import pub.freejoy
import pub.freeprocess
import pub.glad
import pub.nfd
import pub.nx
import pub.opengles
import pub.opengles3
import pub.vulkan
import pub.xmmintrin
tron%=0
player^Object{
.pos:vector2&
.vel:vector2&
.acc:vector2&
.thrust#&
.rad#&
.rot#&
.rotRate#&
.scale#&
.verts:TList&
.turnRKey%&
.turnLKey%&
.fireKey%&
.thrustKey%&
-New()="__m__Lander_player_New"
}="_m__Lander_player"
vector2^Object{
.x#&
.y#&
-New()="__m__Lander_vector2_New"
+Create:vector2(x%,y%)="_m__Lander_vector2_Create_Tvector2_ii"
}="_m__Lander_vector2"
update_ship%()="_m__Lander_update_ship"
transform_scale:vector2(p:vector2,scale#)="_m__Lander_transform_scale"
transform_rotate:vector2(p:vector2,rot#)="_m__Lander_transform_rotate"
transform_position:vector2(p:vector2)="_m__Lander_transform_position"
draw_shape%(shape:TList,scale%,rot%)="_m__Lander_draw_shape"
gravity#&=mem:p("_m__Lander_gravity")
air_rest#&=mem:p("_m__Lander_air_rest")
ship:player&=mem:p("_m__Lander_ship")