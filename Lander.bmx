'session4  lander with gravity


Graphics 1500,900,0,60,0

'debugflag= this flag turns on selected debug code
' a CONST or constant is a vaule that cannot be reassigned
Const tron=False

'setup the objects , later we will use constructors 

Global gravity:Float=0.06
Global air_rest:Float=0.992


'setup ship
Global ship:player=New player
ship.pos=New vector2	'position of the ship
ship.pos.x=GraphicsWidth()/2 'centre screen
ship.pos.y=GraphicsHeight()*0.2 ' near the top of the screen
ship.vel= New vector2	'velocity of the ship
ship.acc= New vector2	'acceleration of the ship
ship.thrust=0.2
ship.rad= 5				'rad is the radius used To detect collision with rocks
ship.rot= 270 			'rotation of the ship
ship.rotRate=2
ship.scale=4
ship.turnRKey=KEY_RIGHT
ship.turnLKey=KEY_LEFT
ship.fireKey=KEY_SPACE
ship.thrustKey=Key_UP


ship.verts=New TList	'another list
' this is a list of verts that will be connected in order to draw the shape of the ship
	ship.verts.addlast(vector2.Create(4,0))
	ship.verts.addlast(vector2.Create(-4,3))
	ship.verts.addlast(vector2.Create(-2,0))
	ship.verts.addlast(vector2.Create(-4,-3))
	ship.verts.addlast(vector2.Create(4,0))
'add more if you need them




SetClsColor 11,22,82
Repeat
	SetBlend SHADEBLEND
	SetColor 222,232,222
	DrawRect 0,0,GraphicsWidth()-2,GraphicsHeight()-1
	SetBlend SOLIDBLEND		

	
	update_ship()
	'draw the ship
	draw_shape(ship.verts,ship.scale,ship.rot)

	
	

Flip(-1)

Until KeyDown(KEY_ESCAPE) Or AppTerminate()


End



'=============================================
'student code




Function draw_shape(shape:TList,scale,rot)
	SetColor 134,134,134
	SetLineWidth 2
	Local p1:vector2 
	Local p2:vector2
	For Local vert:vector2 = EachIn shape
	
		'calc  vertex
		p1=vert
		p1=transform_scale(p1,scale)
		p1=transform_rotate(p1,rot)
		p1=transform_position(p1)
		If p2<>Null
			'not the first vetrex so draw a line
			DrawLine (p1.x,p1.y,p2.x,p2.y)
		EndIf
		p2=p1	
	Next

End Function

Function transform_scale:vector2(p:vector2,scale:Float)
		Local rv:vector2=New vector2
		'calc rv such that rv=p is scaled scale
		rv.x=p.x*scale
		rv.y=p.y*scale
		Return rv
End Function

Function transform_rotate:vector2(p:vector2,rot:Float)
	Local rv:vector2=New vector2
	'calc rv such that rv=p rotated by rot
	rv.x=p.x*Cos(rot)-p.y*Sin(rot)
	rv.y=p.x*Sin(rot)+p.y*Cos(rot)	
	Return rv
End Function

Function transform_position:vector2(p:vector2)
	'add graphicswidth()/2 and grapicsheight()/2 to vector p
	Local rv:vector2=New vector2
	rv.x=p.x+ship.pos.x
	rv.y=p.y+ship.pos.y
	Return rv
End Function


Function update_ship()
	If KeyDown(ship.turnRKey) Then ship.rot:+ship.rotRate
	If KeyDown(ship.turnLKey) Then ship.rot:-ship.rotRate
	If KeyDown(ship.thrustKey)
		' as the thrust key is down then apply force to the acc vector
		ship.acc.x=Cos(ship.rot)*ship.thrust 
		ship.acc.y=Sin(ship.rot)*ship.thrust
		
		ship.vel.x = ship.acc.x + ship.vel.x
		ship.vel.y = ship.acc.y + ship.vel.y
		
	
		'If Maths ship.vel.x
		
	Else
		' no thrust means the acc vector should be zero
		ship.acc.x=0
		ship.acc.y=0 
	EndIf
	
	ship.vel.y = ship.vel.y + gravity     'gravity
	
	
	ship.pos.x = ship.vel.x + ship.pos.x
	ship.pos.y = ship.vel.y + ship.pos.y
	'student code ======================================================
	'	>ship.pos.x<
	'	>ship.pos.y<
	'	>ship.acc.x<
	'	>ship.acc.y<
	'	>ship.vel.x<
	'	>ship.vel.y<
	
	
	
	'apply gravity to the acc vector (gravity is a constant force)
	' >gravity<

	' add the acc vector to the vel vector
	' apply air resistance to the velocity (terminal velocity is when the force of gravity is counter by the force of air resistance) 
	' >air_rest<

	' add the vel vector to the position vector
	

	
	'check for win condition
	If ship.pos.y>GraphicsHeight()
		' player has reached the end
		ship.pos.x=GraphicsWidth()/2 'centre screen
		ship.pos.y=GraphicsHeight()*0.2 ' near the top of the screen
		ship.acc.x=0
		ship.acc.y=0
		ship.vel.x=0
		ship.vel.y=0
	EndIf

End Function


'=============================
'type definition


'the vector type is used by other types
' the vector type is 2d (vector2) and contains x and y
'the vector is a complex number
Type vector2
	Field x:Float
	Field y:Float
	
	Function Create:vector2(x,y)
		Local vect:vector2=New vector2
			vect.x=x
			vect.y=y
		Return vect
	End Function
	
End Type


Type player
	Field pos:vector2	'position of the ship
	Field vel:vector2	'velocity of the ship
	Field acc:vector2	'acceleration of the ship
	Field thrust:Float	'thrust force
	Field rad:Float 	'rad is the radius used to detect collision with rocks
	Field rot:Float		'rotation of the ship
	Field rotRate:Float
	Field scale:Float
	Field verts:TList	'vertex list
	Field turnRKey:Int
	Field turnLKey:Int
	Field fireKey:Int
	Field thrustKey:Int
End Type

