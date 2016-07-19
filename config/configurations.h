#ifndef CONFIGURATIONS_H
#define CONFIGURATIONS_H

class AppConfigure{
private:
    AppConfigure() {}
public:
    const static char* app_version;
    const static char* app_name;
    const static char* app_author;
    const static char* app_log_filename;

    const static char* app_url_login;
    const static char* app_url_welcome;
    const static char* app_url_home;
    const static char* app_url_search;
};


#endif // CONFIGURATIONS_H
