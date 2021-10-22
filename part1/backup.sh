#!/bin/bash
DATE=`date +"%d%m%Y"`
mkdir -p $DATE
mysqldump -u root -p  TEST_DB > $DATE/backup.sql


