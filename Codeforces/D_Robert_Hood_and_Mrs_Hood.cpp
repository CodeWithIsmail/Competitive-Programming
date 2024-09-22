///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

// Data Type:
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

// Shortcut:
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()

// Optimize cin cout:
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void coordinate_compression(vector<ll> &points)
{
    sort(points.begin(), points.end());
    points.erase(unique(points.begin(), points.end()), points.end());
}

ll get_compressed_index(const vector<ll> &points, ll value)
{
    return lower_bound(points.begin(), points.end(), value) - points.begin();
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, d, k, i;
        cin >> n >> d >> k;
        vpl ranges(k);
        vl points;
        for (i = 0; i < k; ++i)
        {
            ll l, r;
            cin >> l >> r;
            ranges[i] = {l, r};
            points.pb(l);
            points.pb(r);
        }
        for (ll x = 1; x <= n - d + 1; ++x)
        {
            points.pb(x);
            points.pb(x + d - 1);
        }
        coordinate_compression(points);
        vl diff(points.size(), 0);

        for (const auto &range : ranges)
        {
            ll l_compressed = get_compressed_index(points, range.first);
            ll r_compressed = get_compressed_index(points, range.second);
            diff[l_compressed]++;
            if (r_compressed + 1 < diff.size())
            {
                diff[r_compressed + 1]--;
            }
        }

        vl overlap(points.size(), 0);
        overlap[0] = diff[0];
        for (i = 1; i < points.size(); ++i)
        {
            overlap[i] = overlap[i - 1] + diff[i];
        }

        ll max_overlap = -1, min_overlap = LONG_LONG_MAX,
           best_position_max = 1, best_position_min = 1,
           current_overlap = 0,
           l_compressed = get_compressed_index(points, 1),
           r_compressed = get_compressed_index(points, d);

        for (i = l_compressed; i <= r_compressed; ++i)
            current_overlap += overlap[i];
        max_overlap = current_overlap;
        min_overlap = current_overlap;

        for (ll x = 1; x <= n - d + 1; ++x)
        {
            l_compressed = get_compressed_index(points, x);
            r_compressed = get_compressed_index(points, x + d - 1);
            current_overlap -= overlap[get_compressed_index(points, x - 1)];
            current_overlap += overlap[r_compressed];

            cout<<current_overlap<<" "<<x<<"\n";

            if (current_overlap > max_overlap)
            {
                max_overlap = current_overlap;
                best_position_max = x;
            }
            // else if (current_overlap == max_overlap && x < best_position_max)
            // {
            //     best_position_max = x;
            // }

            if (current_overlap < min_overlap)
            {
                min_overlap = current_overlap;
                best_position_min = x;
            }
            else if (current_overlap == min_overlap && x < best_position_min)
            {
                best_position_min = x;
            }
        }
        cout << best_position_max << " " << best_position_min << "\n";
    }
}
