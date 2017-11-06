<?php  
	if(count($argv) < 2)
	{
		echo "Missing Arguments";
	} else {
		foreach (range(0, $argv[1]) as $number) {
		    echo "Testing ".$number." times ...\n";
		}
	}
?>