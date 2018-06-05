<?php

$userid = $_REQUEST["userid"];
$passwd = $_REQUEST["passwd"];

$conn=mysqli_connect('localhost', 'pda', 'pda', 'StoneAge');
if(!$conn){
die('Connect Failed:'.mysql_error().'<br />');
}

$result=mysqli_query($conn,
"SELECT * FROM user_info where user_id='$userid' and password='$passwd'");
$row = mysqli_fetch_row($result);
if(!$row){
echo "{LoginSuccess:false}";
mysqli_free_result($result);
mysqli_close($conn);

exit;
}


echo "{LoginSuccess:true}";

mysqli_free_result($result);
mysqli_close($conn);

?>