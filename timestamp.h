
//
// timestamp.h
//
// Copyright (c) 2012 TJ Holowaychuk <tj@vision-media.ca>
//

#ifndef TIMESTAMP
#define TIMESTAMP

#include <stdint.h>
#include <sys/time.h>

/*
 * Return a timestamp in milliseconds.
 */

int64_t
timestamp() {
  struct timeval tv;
  int ret = gettimeofday(&tv, NULL);
  if (-1 == ret) return -1;
  return (int64_t) ((int64_t) tv.tv_sec * 1000 + (int64_t) tv.tv_usec / 1000);
}

#endif