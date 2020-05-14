NF = \033[0m
BOLD = \033[1m

Test%: cmake
	@echo -e "Testing \033[31m$(BOLD)Point2D $(NF)"
	@./build/tests/$@ --gtest_color=yes

cmake:
	@cmake --build build/ > /dev/null
