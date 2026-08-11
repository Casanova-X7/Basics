from datetime import datetime


def generate_response(user_input: str) -> str:
    text = user_input.strip().lower()

    if not text:
        return "Please say something so I can respond."

    if any(word in text for word in ["hello", "hi", "hey"]):
        return "Hello! I’m your simple chatbot. How can I help you today?"

    if "your name" in text:
        return "I’m a simple Python chatbot created for this workspace."

    if "how are you" in text:
        return "I’m doing great, thanks for asking!"

    if "what can you do" in text:
        return "I can greet you, answer simple questions, and tell you the date or time."

    if "time" in text:
        return f"The current time is {datetime.now().strftime('%H:%M:%S')}."

    if "date" in text:
        return f"Today’s date is {datetime.now().strftime('%Y-%m-%d')}."

    if "thank" in text:
        return "You’re welcome!"

    if text in {"bye", "goodbye", "exit", "quit"}:
        return "Goodbye! Take care!"

    return "I’m not sure how to answer that yet. Try asking something else."


def chat() -> None:
    print("Chatbot started. Type 'quit' to exit.")

    while True:
        user_input = input("You: ").strip()

        if user_input.lower() in {"quit", "exit", "bye", "goodbye"}:
            print("Bot: Goodbye! Take care!")
            break

        response = generate_response(user_input)
        print(f"Bot: {response}")


if __name__ == "__main__":
    chat()
