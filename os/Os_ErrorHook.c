
#include "Os_ErrorHook.h"

int os_AccessError = 0;
int os_LimitError = 0;
int os_UnKnownError = 0;
int os_CallLevelError = 0;
void ErrorHook(StatusType error) {
    switch (error) {
        case E_OS_ACCESS:
            os_AccessError++;
            break;
        case E_OS_CALLEVEL:
            os_CallLevelError++;
            break;
        case E_OS_LIMIT:
            os_LimitError++;
            break;
        default:
            os_UnKnownError++;
            break;
    }
}