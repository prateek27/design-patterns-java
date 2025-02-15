#ifndef FILESYSTEM_COMPONENT_CPP
#define FILESYSTEM_COMPONENT_CPP

class FileSystemComponent {
public:
    virtual ~FileSystemComponent() {}
    virtual void showDetails() = 0;
};

#endif 