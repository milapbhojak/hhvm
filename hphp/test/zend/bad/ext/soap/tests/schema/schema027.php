<?php
include "test_schema.inc";
$schema = <<<EOF
	<complexType name="testType">
		<complexContent>
			<restriction base="SOAP-ENC:Array">
  	    <attribute ref="SOAP-ENC:arrayType" wsdl:arrayType="int[,]"/>
    	</restriction>
    </complexContent>
	</complexType>
EOF;
test_schema($schema,'type="tns:testType"',array(array(123),array(123.5)));
echo "ok";
?>