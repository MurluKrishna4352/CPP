
import tkinter as tk
from tkinter import scrolledtext

# Dictionary containing predefined responses for the chatbot
responses = {
    "education": "Education is essential for social development. It empowers individuals and promotes equality.",
    "healthcare": "Access to healthcare services is crucial for a healthy and thriving society.",
    "poverty": "Reducing poverty is a key aspect of social developmental goals.",
    "gender": "Promoting gender equality is essential for a fair and inclusive society.",
    "exit": "Thank you for using the chatbot. Goodbye!",
    "hello": "Hello! My name is Bhoomitr, your buddy in this journey to save life on land which is SDG Goal 15 ",
    "hi": "Hello! My name is Bhoomitr, your buddy in this journey to save life on land which is SDG Goal 15 ",
    "Hello": "Hello! My name is Bhoomitr, your buddy in this journey to save life on land which is SDG Goal 15 ",
    "Hi": "Hello! My name is Bhoomitr, your buddy in this journey to save life on land which is SDG Goal 15 ",
    "you" : "I am Bhoomitr a chatbot designed to guide in this journey to save life on land which is SDG Goal 15 ",
    "15?" : "To Protect, restore and promote sustainable use of terrestrial ecosystems, manage forests, combat desertification, and halt biodiversity loss.",
    "subgoals" : "We have 12 subgoals under Life on Land",
    "first" : "conserve and restore terrestrial and freshwater ecosystems",
    "second" : "end deforestation and restore degraded forests",
    "third" : "end desertification and restore degraded land",
    "forth" : "Ensure conservation of mountain ecosystems",
    "fifth" : "Protect biodiversity and natural habitats",
    "care" : "We are all part of the planet’s ecosystem and we have caused severe damage to it.Promoting a sustainable use of our ecosystems and preserving biodiversity is not a cause. It is the key to our own survival.",
    "important?" : "We are all part of the planet’s ecosystem and we have caused severe damage to it.Promoting a sustainable use of our ecosystems and preserving biodiversity is not a cause. It is the key to our own survival.",
    "What can I do then" : '''
                          1. Find a Goal 15 charity you want to support. Any donation, big or small, can make a difference!
                          2. Don't shop for pets! Visit your local animal shelter and adopt an animal there.
                          3. Don't buy products tested on animals: Check the labels on the products you buy.
                          4. Don't use pesticides. To protect and sustain the quality of soil, don’t use chemicals while growing plants.
                          5. Clean your local parks and forests. Organise your own or join an existing clean-up event to sustain the ecosystem of your local green space.''',
}

class ChatbotApp(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Bhoomitr: Life on land ")
        self.geometry("400x500")

        self.create_widgets()

    def create_widgets(self):
        self.chat_log = scrolledtext.ScrolledText(self, wrap=tk.WORD, state=tk.DISABLED)
        self.chat_log.pack(expand=True, fill=tk.BOTH)

        self.user_input = tk.Entry(self)
        self.user_input.pack(expand=True, fill=tk.X)
        self.user_input.bind("<Return>", self.process_input)

    def process_input(self, event):
        user_message = self.user_input.get()
        self.display_message(user_message, "You")
        self.user_input.delete(0, tk.END)

        # Process user input and get the chatbot's response
        response = self.get_response(user_message)
        self.display_message(response, "Chatbot")

    def get_response(self, user_message):
        user_message = user_message.lower()
        response = "I'm currently in learning phase 🎯, I will soon be able to answer to your queries more effectively ☺"

        for keyword in responses.keys():
            if keyword in user_message:
                response = responses[keyword]
                break

        return response

    def display_message(self, message, sender):
        self.chat_log.config(state=tk.NORMAL)
        self.chat_log.insert(tk.END, f"{sender}: {message}\n")
        self.chat_log.config(state=tk.DISABLED)
        self.chat_log.see(tk.END)

if __name__ == "__main__":
    app = ChatbotApp()
    app.mainloop()
    
'''
import tkinter as tk
from tkinter import scrolledtext
from transformers import pipeline

class ChatbotApp(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Social Developmental Goals Chatbot")
        self.geometry("400x500")

        # Load the question-answering model from transformers library
        self.qa_pipeline = pipeline("question-answering")

        self.create_widgets()

    def create_widgets(self):
        self.chat_log = scrolledtext.ScrolledText(self, wrap=tk.WORD, state=tk.DISABLED)
        self.chat_log.pack(expand=True, fill=tk.BOTH)

        self.user_input = tk.Entry(self)
        self.user_input.pack(expand=True, fill=tk.X)
        self.user_input.bind("<Return>", self.process_input)

    def process_input(self, event):
        user_message = self.user_input.get()
        self.display_message(user_message, "You")
        self.user_input.delete(0, tk.END)

        # Process user input and get the chatbot's response
        response = self.get_response(user_message)
        self.display_message(response, "Chatbot")

    def get_response(self, user_question):
        # Use the question-answering model to find an answer
        result = self.qa_pipeline(question=user_question, context="Social developmental goals refer to the global efforts aimed at promoting sustainable and equitable development for all, focusing on areas such as education, healthcare, poverty reduction, gender equality, and more.")
        answer = result["answer"]
        return answer

    def display_message(self, message, sender):
        self.chat_log.config(state=tk.NORMAL)
        self.chat_log.insert(tk.END, f"{sender}: {message}\n")
        self.chat_log.config(state=tk.DISABLED)
        self.chat_log.see(tk.END)

if __name__ == "__main__":
    app = ChatbotApp()
    app.mainloop()  '''