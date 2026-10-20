from fastapi import FastAPI, File, UploadFile, HTTPException
from fastapi.middleware.cors import CORSMiddleware
from fastapi.responses import JSONResponse
from pathlib import Path
import shutil
import os
from dotenv import load_dotenv
from PDFSummarizer import PDFSummarizer

# Load environment variables
load_dotenv(Path(__file__).parent / ".env")

# Initialize FastAPI
app = FastAPI(title="Page2Speech API")

# Allow frontend to access API
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],  # In production, specify your frontend URL
    allow_methods=["*"],
    allow_headers=["*"],
)

# Initialize summarizer
summarizer = PDFSummarizer()

@app.get("/")
async def root():
    return {"message": "Page2Speech API is running"}

@app.post("/upload-pdf/")
async def upload_pdf(file: UploadFile = File(...)):
    """
    Upload PDF and get summary
    """
    try:
        # Validate file type
        if not file.filename.endswith('.pdf'):
            raise HTTPException(400, "Only PDF files are allowed")
        
        # Save uploaded file temporarily
        upload_dir = Path("uploads")
        upload_dir.mkdir(exist_ok=True)
        
        file_path = upload_dir / file.filename
        with file_path.open("wb") as buffer:
            shutil.copyfileobj(file.file, buffer)
        
        # Generate summary
        summary = summarizer.summarize_pdf(file_path)
        
        # Clean up (optional)
        # file_path.unlink()
        
        return JSONResponse({
            "success": True,
            "filename": file.filename,
            "summary": summary,
            "audio_url": f"/audio/{file.filename.replace('.pdf', '.mp3')}"
        })
        
    except Exception as e:
        raise HTTPException(500, str(e))

@app.post("/summarize-text/")
async def summarize_text(text: str):
    """
    Summarize plain text
    """
    try:
        summary = summarizer.summarize_text(text)
        return JSONResponse({
            "success": True,
            "summary": summary
        })
    except Exception as e:
        raise HTTPException(500, str(e))

if __name__ == "__main__":
    import uvicorn
    uvicorn.run(app, host="0.0.0.0", port=8000)