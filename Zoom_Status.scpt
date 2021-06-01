-- Get current status of Zoom meeting audio and video

property abtnTitle : "Mute audio"
property vbtnTitle : "Start Video"
property abtnStatus : 0
property vbtnStatus : 0

tell application "System Events" to tell application process "zoom.us"
	if exists (menu item abtnTitle of menu 1 of menu bar item "Meeting" of menu bar 1) then
		set abtnStatus to 1
	else
		set abtnStatus to 0
	end if
end tell

tell application "System Events" to tell application process "zoom.us"
	if exists (menu item vbtnTitle of menu 1 of menu bar item "Meeting" of menu bar 1) then
		set vbtnStatus to 0
	else
		set vbtnStatus to 1
	end if
end tell

"Audio Status: " & abtnStatus & "| Video Status: " & vbtnStatus