}

        int aliceTurns = (n + 1) / 2;

        long long answer = base + min(odd, aliceTurns);
        cout << answer << '\n';
    }
