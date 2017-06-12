num_members = int(raw_input())
report_order = map(int, raw_input().split(" "))

members = range(0, num_members+1)

report_set = set(report_order)
members_set = set(members)

for reports in report_set:
	members_set.remove(reports)
for mem in members_set:
	print mem,
