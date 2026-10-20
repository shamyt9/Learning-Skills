# simple_ui.py
import streamlit as st

# Page config
st.set_page_config(page_title="Simple UI", page_icon="✨")

# Header
st.title("✨ Simple Input/Output App")

# Input
user_text = st.text_input("Enter your text:", placeholder="Type something...")

# Button
if st.button("Submit", type="primary"):
    # Output
    if user_text:
        st.success(f"✅ You entered: {user_text}")
    else:
        st.warning("⚠️ Please enter some text!")