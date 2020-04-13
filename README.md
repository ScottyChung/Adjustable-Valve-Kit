# Adjustable-Valve-Kit
Prototype kit for rapidly creating an adjustable valve using 3D printer and common components. 
This is a preliminary design that has not been thoroughly tested yet. It is not sealed from room air and may pull outside air in and leak air out.

Time to Build Estimate  
Print Time ~1.2Hrs  
Assembly ~0.5Hrs 

![Valve](/Images/valve.gif)
# Components
![Components](/Images/components.jpg)
* Servo Mounting Bracket
* Servo (HD-1800 is used and the bracket was designed with this servo in mind)
* Valve
* Rod Mount
* Stock Rod Material cut to 5-10mm longer than OD of PVC. See step 2 images. (Brass)
* PVC Pipe ~5inch length (Designed for 1" Sch 40)

# Assembly Instructions
1. Drill centered hole for rod to fit. Should be loose fit for rod to easily turn. If possible, have drill depth to indent the far side of the tube.
![Drilling](/Images/pvc_drill.jpg)
![Depth](/Images/drill_depth.jpg)

2. Slide valve into pvc pipe and start to insert the rod. Sanding or filing a bevel on the rod is recommended to help starting the press fit. Using light taps from a hammer or a bench vise press the rod fully through the valve into the indention on the PVC pipe.
![BeforePress](/Images/press_before.jpg)
![AfterPress](/Images/press_after.jpg)

3. Test that the valve opens and closely freely, but is mated with the rod. Set the valve to the open position and press fit the rod mount piece so that it points parallel to the pipe. 
![RodMount](/Images/rod_mount.jpg)

4. Mount the servo to the bracket using two screws. Note the servo flanges are on top of the bracket not under.
![ServoMount](/Images/servo_mount.jpg)

5. Ensure the servo is at a center location so that it has room to rotate in either direction. Match up the servo horn and rod mount. Attach the bracket to the PVC pipe using whatever method is available. The current set screw holes do not work very well so hot glue/ super glue works. Mate the servo horn and rod mount using a flexible material to help account for some of the misalignment. Currently, we are using heatshrink.
![MateHorn](/Images/mate_horn.jpg)

6. Now calibrate the fully open and close position of the valve. The open position is when the valve is as flat as possible obstruction the flow the least amount. Close position is when the valve is blocking as much as possible. **Ensure that the servo can reach the closed position without any humming or noise. Otherwise this could burnout the servo** Easiest method is to hook up a potentiometer to control the valve position, eyeball the fully open and closed position of valve, and record what values these are set at.
![CalibDiagram](/Images/knob_cal_diagram.PNG)
![Calibration](/Images/calibration.jpg)

# Todo
* Adding Build Instructions
* Improve Mounting option (Currently just use superglue)
* Have sealed version to avoid exposure to room air
* Endurance testing of part
