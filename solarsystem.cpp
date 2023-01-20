#include <iostream>
#include <string>
using namespace std;

int main() {
    // Distances are provided in millions of kilometers
    const int earth_sun_dist = 152; // 152 million kms
    const int mars_sun_dist = 251;
    const int kuiper_sun_dist = 7480;
    // ceres distance, saturn distance, pluto etc.
    const int ceres_sun_dist = 426;
    const int hartley_sun_dist = 518;
    const int mercury_sun_dist = 46;
    const int saturn_sun_dist = 1486;
    const int voyager_sun_dist = 22965;
    const int ring_sun_dist = 3261;
    const int pluto_sun_dist = 5900;
    // Solar distance of Jupiter (based on Google since this was not provided)
    const int jupiter_sun_dist = 778;
    
    cout << "Welcome to the Solar Project \n";
    
    // Comparing distance between Earth and Mars
    cout << "[1] Is the distance between Earth and Mars more than 200 (millions of km)?: ";

    // Store the distance between earth and mars
    int distance_between_earth_mars = mars_sun_dist - earth_sun_dist;
    
    // Store the comparison result if the distance is more than 200
    bool is_distance_more_than_two_hundred = distance_between_earth_mars > 200;
    
    // Display YES if true, NO if false
    if (is_distance_more_than_two_hundred) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    // Mercury as a nearest planet to the sun
    cout << "\n[2] Is the Mercury nearest planet to the sun?: ";
    
    // Declare the bool variable
    bool is_mercury_nearest_to_sun;
    
    // We'll use a nested if to check if the mercury is the nearest
    if (mercury_sun_dist < earth_sun_dist) {
        if (mercury_sun_dist < mars_sun_dist) {
            if (mercury_sun_dist < kuiper_sun_dist) {
                if (mercury_sun_dist < ceres_sun_dist) {
                    if (mercury_sun_dist < hartley_sun_dist) {
                        if (mercury_sun_dist < saturn_sun_dist) {
                            if (mercury_sun_dist < voyager_sun_dist) {
                                if (mercury_sun_dist < ring_sun_dist) {
                                    if (mercury_sun_dist < pluto_sun_dist) {
                                        is_mercury_nearest_to_sun = true;
                                    } else {
                                        is_mercury_nearest_to_sun = false;
                                    }
                                } else {
                                    is_mercury_nearest_to_sun = false;
                                }
                            } else {
                                is_mercury_nearest_to_sun = false;
                            }
                        } else {
                            is_mercury_nearest_to_sun = false;
                        }
                    } else {
                        is_mercury_nearest_to_sun = false;
                    }
                } else {
                    is_mercury_nearest_to_sun = false;
                }
            } else {
                is_mercury_nearest_to_sun = false;
            }
        } else {
            is_mercury_nearest_to_sun = false;
        }
    } else {
        is_mercury_nearest_to_sun = false;
    }
    
    // Display YES if true, NO if false
    if (is_mercury_nearest_to_sun) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    // Pluto as a farthest planet from the sun
    cout << "\n[3] Is the Pluto farthest planet from the sun?: ";
    
    // Declare the bool variable
    bool is_pluto_farthest_from_sun;
    
    // We'll also use a nested if here but with the opposite comparison
    if (pluto_sun_dist > earth_sun_dist) {
        if (pluto_sun_dist < mars_sun_dist) {
            if (pluto_sun_dist < kuiper_sun_dist) {
                if (pluto_sun_dist < ceres_sun_dist) {
                    if (pluto_sun_dist < hartley_sun_dist) {
                        if (pluto_sun_dist < saturn_sun_dist) {
                            if (pluto_sun_dist < voyager_sun_dist) {
                                if (pluto_sun_dist < ring_sun_dist) {
                                    if (pluto_sun_dist < mercury_sun_dist) {
                                        is_pluto_farthest_from_sun = true;
                                    } else {
                                        is_pluto_farthest_from_sun = false;
                                    }
                                } else {
                                    is_pluto_farthest_from_sun = false;
                                }
                            } else {
                                is_pluto_farthest_from_sun = false;
                            }
                        } else {
                            is_pluto_farthest_from_sun = false;
                        }
                    } else {
                        is_pluto_farthest_from_sun = false;
                    }
                } else {
                    is_pluto_farthest_from_sun = false;
                }
            } else {
                is_pluto_farthest_from_sun = false;
            }
        } else {
            is_pluto_farthest_from_sun = false;
        }
    } else {
        is_pluto_farthest_from_sun = false;
    }
    
    // Display YES if true, NO if false
    if (is_pluto_farthest_from_sun) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    //combined distance of Mars and Mercury greater than distance of Jupiter?
    cout << "\n[4] Are the combined solar distances of Mars and Mercury greater than the solar distance of Jupiter?: ";
    
    // Assign the combined distance of mars and mercury to the variable
    int mars_mercury_sum_distance = mars_sun_dist + mercury_sun_dist;
    
    // Declare the bool variable if the combined distance is greater than jupiter's distance
    bool is_combined_mars_mercury_greather_than_jupiter = mars_mercury_sum_distance > jupiter_sun_dist;
    
    // Display YES if true, NO if false
    if (is_combined_mars_mercury_greather_than_jupiter) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
