include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs
EXTRA_DIST =

noinst_PROGRAMS = TestUnparseHeaders
TestUnparseHeaders_SOURCES = UnparseHeadersTransformVisitor.C TestUnparseHeaders.C
TestUnparseHeaders_CPPFLAGS = $(ROSE_INCLUDES)
TestUnparseHeaders_LDADD = $(LIBS_WITH_RPATH) $(ROSE_LIBS)


# Test specimens are actually directories, each of which contains a ROSE Test Harness "config" file.
TEST_SPECIMENS = test0 test1 test2 test3 test4 test5 test6 test7 test8 test9 test10 test11 test12 test13
EXTRA_DIST += $(TEST_SPECIMENS) UnparseHeadersTransformVisitor.h

ROSE_SWITCHES = --edg:no_warnings --edg:restrict -w -rose:verbose 1 -rose:unparseHeaderFiles
HDR_ROOT_SWITCHES = -rose:unparseHeaderFilesRootFolder unparsedHeaders

# Test targets are the makefile targets upon which "make check" depends (via check-local). The directory in which the
# tests run needs to be recreated each time we run the test, or else the test will likely pick up the wrong header files: the
# ones generated by the previous run.
TEST_TARGETS = $(addsuffix .passed, $(TEST_SPECIMENS))
$(TEST_TARGETS): %.passed: $(srcdir)/% %/config TestUnparseHeaders
	rm -rf "$(@:.passed=)"
	mkdir -p "$(@:.passed=)"
	$(RTH_RUN) ROSE_SWITCHES="$(ROSE_SWITCHES)" HDR_ROOT_SWITCHES="$(HDR_ROOT_SWITCHES)" "$</config" "$@"

check-local: $(TEST_TARGETS)

clean-local:
	rm -f $(MOSTLYCLEANFILES)
	rm -f $(TEST_TARGETS) $(TEST_TARGETS:.passed=.failed)
	rm -rf $(TEST_SPECIMENS)
