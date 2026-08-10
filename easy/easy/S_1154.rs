impl Solution {
    pub fn day_of_year(date: String) -> i32 {
        let days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
        let mut result = 0;

        // Parse date components
        let parts: Vec<&str> = date.split('-').collect();
        let year = parts[0].parse::<i32>().unwrap();
        let month = parts[1].parse::<usize>().unwrap();
        let day = parts[2].parse::<i32>().unwrap();

        // Add days for all fully completed preceding months
        for m in 0..(month - 1) {
            result += days_in_month[m];
        }

        // Add leap day if applicable
        let is_leap = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
        if is_leap && month > 2 {
            result += 1;
        }

        // Add days of the current month
        result += day;

        result
    }
}