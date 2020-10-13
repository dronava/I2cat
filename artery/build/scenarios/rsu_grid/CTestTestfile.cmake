# CMake generated Testfile for 
# Source directory: /home/aniol/Downloads/artery/scenarios/rsu_grid
# Build directory: /home/aniol/Downloads/artery/build/scenarios/rsu_grid
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(rsu_grid-omnidirectional "/home/aniol/artery/omnetpp-5.6.2/bin/opp_run_dbg" "-n" "/home/aniol/Downloads/artery/src/artery:/home/aniol/Downloads/artery/src/traci:/home/aniol/Downloads/artery/extern/veins/examples/veins:/home/aniol/Downloads/artery/extern/veins/src/veins:/home/aniol/Downloads/artery/extern/inet/src:/home/aniol/Downloads/artery/extern/inet/examples:/home/aniol/Downloads/artery/extern/inet/tutorials:/home/aniol/Downloads/artery/extern/inet/showcases" "-l" "/home/aniol/Downloads/artery/build/src/artery/envmod/libartery_envmod.so" "-l" "/home/aniol/Downloads/artery/build/scenarios/highway-police/libartery_police.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/envmod/libartery_envmod.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/storyboard/libartery_storyboard.so" "-l" "/home/aniol/Downloads/artery/build/extern/libINET.so" "-l" "/home/aniol/Downloads/artery/build/extern/libveins.so" "-l" "/home/aniol/Downloads/artery/build/src/traci/libtraci.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/libartery_core.so" "omnetpp.ini" "-uCmdenv" "-comnidirectional_test")
set_tests_properties(rsu_grid-omnidirectional PROPERTIES  WORKING_DIRECTORY "/home/aniol/Downloads/artery/scenarios/rsu_grid" _BACKTRACE_TRIPLES "/home/aniol/Downloads/artery/cmake/AddOppRun.cmake;169;add_test;/home/aniol/Downloads/artery/scenarios/rsu_grid/CMakeLists.txt;2;add_opp_test;/home/aniol/Downloads/artery/scenarios/rsu_grid/CMakeLists.txt;0;")
add_test(rsu_grid-directional "/home/aniol/artery/omnetpp-5.6.2/bin/opp_run_dbg" "-n" "/home/aniol/Downloads/artery/src/artery:/home/aniol/Downloads/artery/src/traci:/home/aniol/Downloads/artery/extern/veins/examples/veins:/home/aniol/Downloads/artery/extern/veins/src/veins:/home/aniol/Downloads/artery/extern/inet/src:/home/aniol/Downloads/artery/extern/inet/examples:/home/aniol/Downloads/artery/extern/inet/tutorials:/home/aniol/Downloads/artery/extern/inet/showcases" "-l" "/home/aniol/Downloads/artery/build/src/artery/envmod/libartery_envmod.so" "-l" "/home/aniol/Downloads/artery/build/scenarios/highway-police/libartery_police.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/envmod/libartery_envmod.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/storyboard/libartery_storyboard.so" "-l" "/home/aniol/Downloads/artery/build/extern/libINET.so" "-l" "/home/aniol/Downloads/artery/build/extern/libveins.so" "-l" "/home/aniol/Downloads/artery/build/src/traci/libtraci.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/libartery_core.so" "omnetpp.ini" "-uCmdenv" "-cdirectional_test")
set_tests_properties(rsu_grid-directional PROPERTIES  WORKING_DIRECTORY "/home/aniol/Downloads/artery/scenarios/rsu_grid" _BACKTRACE_TRIPLES "/home/aniol/Downloads/artery/cmake/AddOppRun.cmake;169;add_test;/home/aniol/Downloads/artery/scenarios/rsu_grid/CMakeLists.txt;3;add_opp_test;/home/aniol/Downloads/artery/scenarios/rsu_grid/CMakeLists.txt;0;")
