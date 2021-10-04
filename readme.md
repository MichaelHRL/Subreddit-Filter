Sometimes you want to browse "r/all" or "r/popular", but you keep seeing posts from certain subreddits that you really don't care about (cough, stocks, cough). If you've got uBlock Origin then you can go to the dashboard and add some filters to the "My Filters" section. Note that each filter needs to be on a separate line. The filter format is `reddit.com##.Post:has([href$='/r/<subreddit>/'])` where `<subreddit>` is the exact name of the subreddit (case sensitive).

To make things easier for myself, I've written a commandline program which accepts a file containing a subreddit on each line, and outputs a file with the corresponding filters. It's a single cpp file. After building it you can run it like so: `./a <input> [<output>]` where `<input>` is the name of the subreddit file, and `[<output>]` is the optional name of the filter file (the default name is "filters").