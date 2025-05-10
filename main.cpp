# smartpark.py - Live object detection using YOLOv5 and OpenCV

import cv2
import torch

# Load YOLOv5 model
model = torch.hub.load('ultralytics/yolov5', 'yolov5s', pretrained=True)

# Start video capture from camera
cap = cv2.VideoCapture(0)

while True:
    # Get a frame from the camera
    ret, frame = cap.read()
    if not ret:
        break

    # Run detection on the frame
    results = model(frame)

    # Show detections on the frame
    annotated_frame = results.render()[0]
    cv2.imshow('Detected Parking Spots', annotated_frame)

    # Quit if q is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Stop camera and close window
cap.release()
cv2.destroyAllWindows()

