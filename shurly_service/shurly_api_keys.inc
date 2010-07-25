<?php

define('API_VERSION', 'A');

/**
 * Generate a new api key for this user and put it into the database
 * @return the new API key or FALSE on database insert error
 */
function shurly_generate_new_api_key($uid) {
  // be sure that the new key is unique
  do {
    $key = md5(uniqid(rand(), TRUE)) . '_' . API_VERSION;
  } while (shurly_get_uid($key));
  db_query('DELETE FROM {shurly_keys} WHERE uid = %d', $uid);
  $result = db_query("INSERT INTO {shurly_keys} (uid, apikey) VALUES (%d,'%s')", $uid, $key);
  return $result ? $key : FALSE;
}

function shurly_get_uid($key) {
  return db_result(db_query("SELECT uid FROM {shurly_keys} WHERE apikey = '%s'", $key));
}

function shurly_get_api_key($uid) {
  return db_result(db_query("SELECT apikey FROM {shurly_keys} WHERE uid = %d", $uid));
}

