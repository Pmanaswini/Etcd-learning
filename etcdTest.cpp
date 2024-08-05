#include <iostream>
#include <etcd/Client.hpp>
#include <etcd/Watcher.hpp>
#include <etcd/Response.hpp>
#include <thread>

int main() {
	// Initialize the etcd client
	etcd::Client etcd("http://127.0.0.1:2379");
	// Set a key-value pair in etcd
	etcd.set("/example_key", "example_value").wait();
	std::cout<< "hello";
	// get a key-value data in etcd
	etcd::Response response = etcd.get("/example_key").get();
	std::cout << response.value().as_string();
	std::cout<< "hello";
	
	
	return 0;
}

