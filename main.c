#include <stdio.h>
#include <stdlib.h>
#include "auth.h"
#include "nextPass.h"
#include "registerPatient.h"
#include "registerMedical.h"
#include "registerScheduling.h"
#include "registerOfficial.h"
#include "registerCompliments.h"
#include "registerClaims.h"
#include "cancellation.h"

int main()
{
    auth();
    nextPass();
    return 0;
}
