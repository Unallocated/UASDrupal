<?php

if(in_array('authenticated user', $user->roles)) {
  include_once("front-page-authenticated.tpl.php");
} else {
  include_once("front-page-anonymous.tpl.php");
}