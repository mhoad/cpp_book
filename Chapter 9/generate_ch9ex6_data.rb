# A short ruby script to generate the data file required for Chapter 9 Exercise 6.

File.open("ch9ex6.txt", 'w') do |file| 

# Generate the answers to the test  
  20.times do
    file.write("#{["T", "F"].sample}")
  end

# Ensure you create data in the format of: ABC54301 TFTFTFTT TFTFTFFTTFT
  50.times do
    file.write("\nABC#{rand(10000..60000)} ")
    20.times do
      file.write("#{["T", "F", " "].sample}")
    end
  end
end