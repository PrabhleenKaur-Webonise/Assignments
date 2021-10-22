#!/bin/bash
DATE=`date + "%d%m%Y"`
pg_dump -h 127.0.0.1 -d dvdrental -U prabhleen > dvdrental.sql
