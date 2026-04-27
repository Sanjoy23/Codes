select round(count(a.player_id) * 1.0 / (select count(distinct c.player_id) from activity c), 2) as fraction
from Activity a join (
    select b.player_id, Min(b.event_date) as first_date
    from activity b
    group by player_id ) t on a.player_id = t.player_id and a.event_date = dateadd(day, 1, t.first_date)