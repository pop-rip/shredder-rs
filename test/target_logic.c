// Build: cl /Fe:test/test_target.exe test/target_logic.c /link /DYNAMICBASE:NO /FIXED
// Note: CRT is avoided to minimize RIP-relative string issues during initial testing.

int main() {
    int a = 5;
    int b = 10;
    int result = 0;

    // Loop added to increase Control Flow Graph (CFG) complexity for the mutator
    for(int i = 0; i < 5; i++) {
        result += (a * i) + b;
    }

    // Expected exit code: 100
    // Logic: sum of (5*i + 10) for i=0..4 -> 10+15+20+25+30 = 100
    return result; 
}