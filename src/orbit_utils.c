double calculate_orbital_decay(double mass, double altitude) {
    return (mass * 9.8) / (altitude + 100);
}
