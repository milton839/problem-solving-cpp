
        int width = rp - lp;
        int height = min(height[lp], height[rp]);
        int currentWater = width * height;
        maxWater = max(maxWater, currentWter);

        height[lp] < height[rp] ? lp++ : rp--;