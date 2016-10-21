#include "SimApplication/SimApplicationMessenger.h"

// LDMX
#include "Event/RootEventWriter.h"

// Geant4
#include "G4ApplicationState.hh"

using event::RootEventWriter;

namespace sim {

SimApplicationMessenger::SimApplicationMessenger() {

    ldmxDir = new G4UIdirectory("/ldmx/");
    ldmxDir->SetGuidance("LDMX Simulation Application commands");
}

SimApplicationMessenger::~SimApplicationMessenger() {
}

void SimApplicationMessenger::SetNewValue(G4UIcommand* command, G4String newValues) {
}

}
