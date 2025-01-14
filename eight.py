# code to make the computer speaak using python
# pip install pyttsx3 is must before running the code
import pyttsx3

engine = pyttsx3.init()
engine.say("Hello everyone, how are you?")
engine.runAndWait()
# you can write any text in the say function