# HTTP-Caching-Proxy
This is an http proxy using C++, it can:
function with GET, POST, and CONNECT; 
cache responses to GET requests, following rules of expiration time and re-validation; 
handle concurrent requests with multiple threads; 
produce a log file which contains information of each request. 

Visit http://people.duke.edu/~bmr23/ece568/homework/hw2/hw2.pdf for more infomation

To run this proxy, please: 
cd to directory of docker-compose.yml; 
run: sudo docker-compose build; 
then: sudo docker-compose up. 
