# CMake generated Testfile for 
# Source directory: /home/aniol/Downloads/artery/scenarios
# Build directory: /home/aniol/Downloads/artery/build/scenarios
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(mtits2017-test "/home/aniol/artery/omnetpp-5.6.2/bin/opp_run_dbg" "-n" "/home/aniol/Downloads/artery/src/artery:/home/aniol/Downloads/artery/src/traci:/home/aniol/Downloads/artery/extern/veins/examples/veins:/home/aniol/Downloads/artery/extern/veins/src/veins:/home/aniol/Downloads/artery/extern/inet/src:/home/aniol/Downloads/artery/extern/inet/examples:/home/aniol/Downloads/artery/extern/inet/tutorials:/home/aniol/Downloads/artery/extern/inet/showcases" "-l" "/home/aniol/Downloads/artery/build/src/artery/envmod/libartery_envmod.so" "-l" "/home/aniol/Downloads/artery/build/scenarios/highway-police/libartery_police.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/envmod/libartery_envmod.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/storyboard/libartery_storyboard.so" "-l" "/home/aniol/Downloads/artery/build/extern/libINET.so" "-l" "/home/aniol/Downloads/artery/build/extern/libveins.so" "-l" "/home/aniol/Downloads/artery/build/src/traci/libtraci.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/libartery_core.so" "omnetpp.ini" "-uCmdenv" "--sim-time-limit=30s")
set_tests_properties(mtits2017-test PROPERTIES  WORKING_DIRECTORY "/home/aniol/Downloads/artery/scenarios/mt-its2017" _BACKTRACE_TRIPLES "/home/aniol/Downloads/artery/cmake/AddOppRun.cmake;169;add_test;/home/aniol/Downloads/artery/scenarios/CMakeLists.txt;23;add_opp_test;/home/aniol/Downloads/artery/scenarios/CMakeLists.txt;0;")
add_test(car2car-grid-cam_bsp "/home/aniol/artery/omnetpp-5.6.2/bin/opp_run_dbg" "-n" "/home/aniol/Downloads/artery/src/artery:/home/aniol/Downloads/artery/src/traci:/home/aniol/Downloads/artery/extern/veins/examples/veins:/home/aniol/Downloads/artery/extern/veins/src/veins:/home/aniol/Downloads/artery/extern/inet/src:/home/aniol/Downloads/artery/extern/inet/examples:/home/aniol/Downloads/artery/extern/inet/tutorials:/home/aniol/Downloads/artery/extern/inet/showcases" "-l" "/home/aniol/Downloads/artery/build/src/artery/envmod/libartery_envmod.so" "-l" "/home/aniol/Downloads/artery/build/scenarios/highway-police/libartery_police.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/envmod/libartery_envmod.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/storyboard/libartery_storyboard.so" "-l" "/home/aniol/Downloads/artery/build/extern/libINET.so" "-l" "/home/aniol/Downloads/artery/build/extern/libveins.so" "-l" "/home/aniol/Downloads/artery/build/src/traci/libtraci.so" "-l" "/home/aniol/Downloads/artery/build/src/artery/libartery_core.so" "omnetpp.ini" "-uCmdenv" "-ccam_bsp" "--sim-time-limit=30s")
set_tests_properties(car2car-grid-cam_bsp PROPERTIES  WORKING_DIRECTORY "/home/aniol/Downloads/artery/scenarios/car2car-grid" _BACKTRACE_TRIPLES "/home/aniol/Downloads/artery/cmake/AddOppRun.cmake;169;add_test;/home/aniol/Downloads/artery/scenarios/CMakeLists.txt;39;add_opp_test;/home/aniol/Downloads/artery/scenarios/CMakeLists.txt;0;")
subdirs("artery")
subdirs("gemv2")
subdirs("highway-police")
subdirs("rsu_grid")
subdirs("storyboard")
