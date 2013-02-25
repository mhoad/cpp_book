# A short ruby script to generate the data file required for Chapter 7 Exercise 6.
# As I am not American I have no idea how GPA scores work and replaced it with our local version here in Australia

File.open("uaidata.txt", 'w') do |file| 
  rand(50..100).times do
    file.write("#{["m", "f"].sample} #{rand(35.00..99.99).round(2)} \n") 
  end
end
