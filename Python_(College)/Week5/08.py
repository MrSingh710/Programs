from pathlib import Path  

folder_path = input("Enter the folder path: ") 
folder = Path(folder_path) 

# Search for all .txt files in all subdirectories 
for file_path in folder.rglob('*.txt'): 
    if "NIT" in file_path.read_text(): 
        print(f"File containing 'NIT': {file_path}") 
