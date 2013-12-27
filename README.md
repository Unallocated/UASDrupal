UASDrupal
=========

The website project for Unallocated Space, built in drupal. The targets 
of this web project are to facilitate community collaboration, showcase 
projects, allow members to find each other based on skillsets and expertise, 
and provide an avenue for publication of news and events for Unallocated Space.

Requirements
------------
Drupal 7.x (currently included)  
MySQL 5.1 or higher  
PhP 5.3 or higher  

#### Recommended ####
RAM 512MB  
Drush 4.6 or higher  

Installation
------------
Install drupal as you would normally, either with drush or using the instructions
found here: http://drupal.org/documentation/install

During installation, be sure to select the "Unallocated" profile, instead of the "Standard" installation.

###Generating Content###
Many of the features do not display without content. This system can automatically generate
sample content appropriate for the site and for development:

####Using Drush####
1. Generate content for the site (~100 nodes)
```
drush generate-content 100 4 --types=announcement,article,page,download,project,video
```
1. Enable the Nodequeue Generate module
```
drush en nodequeue-generate
```
1. Populate a nodequeue with content. This will populate the frontpage slideshow.
```
drush nodequeue-generate-all
```

####Without Drush####
After completed installation of the Unallocated Site on local environment

1. Log into web site with credentials set during installation.
1. Navigate to Configuration -> Development -> Generate Content (/admin/config/development/generate/content)
1. Change the "How many nodes would you like to generate?" value to 100
1. Hit the generate button.
1. Navigate to the modules page (/admin/modules). Enable the Nodequeue Generate module.
1. Navigate to Structure -> Nodequeues -> Generate queue assignments (/admin/structure/nodequeue/generate_nodequeue)
1. Select the "Frontpage Slideshow". Hit the "Generate" button.

Current Project Status
----------------------
The project is actively working towards a 1.0 launch release.

This code is expected to be buggy, functionality is missing, processes, apis, and
development priorities will shift with no announcement in this current stage.

No upgrade path will be provided for users who build sites using this code base. This
code base is currently not intended for public release. It is intended only to be
available to those who would like to contribute.

Roadmap
-------

The current roadmap is subject to change as we get a better handle on
the requirements

~~1. Documentation sprint to wireframe site, generate requirements and build ticketing.
1. Convert current implementation into a drupal install profile and features. This will 
facilitate git-based development, greatly improve deployment workflows, and make 
contribution by other members much easier.~~
1. Events integration. Integrate calendar events with Google and Meetup.com 
to make maintenance of events across multiple systems manageable. Provide events
natively to other systems with RSS.
1. User profiles. Allow users to log in and find each other based on their specialties.
1. Services API. Allow the various servers, gadgets and bots to communicate with 
the website over RESTful API to update statuses, or manage site resources.
1. Projects. Allow users to collaborate on projects, combine resources, and assign tasks.

Contributing
------------
Anyone is encouraged to contribute to the project by 
[forking](https://help.github.com/articles/fork-a-repo) and submitting a pull 
request. (If you are new to GitHub, you might start with a 
[basic tutorial](https://help.github.com/articles/set-up-git).

By contributing to this project, you grant a world-wide, royalty-free, perpetual, 
irrevocable, non-exclusive, transferable license to all users under the terms of 
the Gnu General Public License v2 or later.

All comments, messages, pull requests, and other submissions received through this Github
page are subject to moderation by Unallocated Space, a representative thereof, or 
Github, per the terms of the Github user agreement.

Support
-------
No support is offered or implied with this code base, however, it is ENCOURAGED
to engage in discussion or create tickets within the [github issue queue
associated with this project](https://github.com/Unallocated/UASDrupal/issues). 
Please tag discussions with the 'discussion' and other tickets appropriately.

It is also highly encouraged to undertake solutions for tickets that have already 
been created.

Branches and tags
-----------------

**Current Release Tag:** *No release*  
**Current Maintenance Branch:** *7.x-1.x-dev*  

### Maintenance Branches ###
Maintenance branches are branches maintained within the repository for developers
to branch from. This is a standardized set provided by this repository. Syntax 
begins with the drupal branch (7.x), followed by the major version of this 
application (1.x) and any branch types (dev, integration, build).

*Example: 7.x-1.x-dev*

### Topic Branches ###
Topic branches are user generated branches created by contributers within their 
forked repositories to address a specific issue. Topic branches are submitted as
pull requests to maintenance branches. Branch names should start with the ticket
number (22), followed by a short, hyphenated description of the issue (assign-banner)

*Example: 22-assign-banner*

Every topic branch **MUST** be associated with a ticket, and submitted with a
pull request via github. No exceptions will be made.

All commit messages must reference the ticket to which they refer in square brackets,
a pound sign, and provide a concise overview of the changes made. This will link
the commit message to the appropriate issue. No exceptions will be made.

*Example: [#2] Updated README.md file to include information about commit messages*

### Release Tags ###
A release tag is what we would generally consider a 'feature complete' snapshot
of the code. Tags will be considered stable relative to their suffix (dev, alpha, beta
RC and no suffix). Tags will be cut for both major and minor releases of the site.
A major release will constitute a milestone marker, or what would be considered
"feature complete" for the roadmap. Minor versions would constitute any changes to
the API, minor feature additions, code maintenance, or hot fixes. A release tag
will contain the drupal version (7.x), the major and minor versions (1.10) and
any development suffic (dev, alpha, beta, RC)

*Example: 7.x-1.10-alpha15*

License
-------
The project utilizes code licensed under the terms of the GNU General Public License
and therefore is licensed under GPL v2 or later.

This program is free software: you can redistribute it and/or modify it under the 
terms of the GNU General Public License as published by the Free Software Foundation, 
either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY 
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this 
program. If not, see http://www.gnu.org/licenses/.

