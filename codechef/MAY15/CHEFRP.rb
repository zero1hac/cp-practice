=begin
Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi
=end
gets.chomp.to_i.times do |_|
	n = gets.chomp.to_i
	ing = gets.chomp.split(" ").map{|i| i.to_i}
	val = ing.select{|i| i < 2}
	puts !val.empty? ? "-1" : (ing.inject(:+) - ing.min + 2)
end
