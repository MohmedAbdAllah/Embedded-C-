#include <iostream>
#include <vector>
#include <algorithm>

class FileSystemMonitor;

class IFileSystemListener{
    public:
        virtual ~IFileSystemListener()= default;
        virtual void onFileChange(FileSystemMonitor&) = 0;
};

class FileSystemMonitor{
    private:
        std::vector<IFileSystemListener*> iFileSystemListener;

    public:
      virtual ~FileSystemMonitor()= default; 
      void OnFileAdd(){
        
      }
      void OnFileRemove(IFileSystemListener& object){
        
      }
      void OnFileUpdate(){
        
      }
      void AddFileChangeListener(IFileSystemListener& object){
        iFileSystemListener.push_back(&object); 
      }
};

class FileSystemListener : public IFileSystemListener{
    private:
        FileSystemMonitor&  fileSystemMonitor;
    public:
        FileSystemListener(FileSystemMonitor& file) : fileSystemMonitor(file){
            fileSystemMonitor.AddFileChangeListener(*this);
        }
        void onFileChange(FileSystemMonitor& ChangedFileSystem) override{
            
        }
};