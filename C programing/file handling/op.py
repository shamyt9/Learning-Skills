from transformers import pipeline

# Load the pre-trained GPT-2 model
generator = pipeline('text-generation', model='gpt2')

# Generate text
output = generator("Hello, how are you?", max_length=50)

# Print the generated text
print(output[0]['generated_text'])
