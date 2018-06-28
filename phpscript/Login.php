<?php

require_once 'db_conn.php';

$userid = $_REQUEST["userid"];
$passwd = $_REQUEST["passwd"];

$conn = mysql_conn();

$result=mysqli_query($conn,
"SELECT * FROM user_info where user_id='$userid' and password=sha('$passwd')");
$row = mysqli_fetch_row($result);
if(!$row){
echo "{LoginSuccess:false}";
mysqli_free_result($result);
mysqli_close($conn);

exit;
}

$result=mysqli_query($conn,
"SELECT * FROM character_info where user_id='$userid'");
$row = mysqli_fetch_row($result);
if(!$row){
echo "{LoginSuccess:true,
CharacterSuccess:false}";
mysqli_free_result($result);
mysqli_close($conn);

exit;
}


echo "{LoginSuccess:true,
CharacterSuccess:true}";

mysqli_free_result($result);
mysqli_close($conn);

?>