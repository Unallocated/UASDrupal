// $Id: README.txt,v 1.2 2008/01/24 01:57:10 cwgordon7 Exp $

Flexifilter is a flexible module for use in creating custom filters. It is highly extendable.

Security concerns
-----------------
Things that are filtered are subject to xss attacks. It's a fact. The way to be secure against
this sort of attack is to use the HTML filter to strip offending HTML tags. The flexifilter
module does NOT, by itself, filter out offending HTML tags, etc. Remember to always restrict
access to filters without the HTML filter or filters with the PHP filter to trusted users.
Allowing untrusted users to post full html or even php code on your site is a MAJOR security
concern. Flexifilter, by itself does NOT strip out offending HTML code or offending PHP code.
You must use it in conjunction with the HTML filter for untrusted users, and leave the php
filter completely out of input formats for untrusted users. This is a MUST if you don't want
to see your site hacked. Thank you.

API
---
For api information, see API.txt.

Install
-------
For install information, see INSTALL.txt.

Changes
-------
For changelog information, see CHANGELOG.txt.

Maintainers
-----------
For maintainer information, see MAINTAINERS.txt.