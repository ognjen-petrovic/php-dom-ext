<?php

use PHPUnit\Framework\TestCase;
use ogpe\DOMnode;
use ogpe\DOMDocument;
use ogpe\HTMLFormElement;

class ExtensionTest extends TestCase
{
	public function testExtensionLoaded()
	{
		$this->assertTrue(extension_loaded('ogpe-dom'));
	}

	public function testDOMNodeClassExist()
	{	
		$this->assertTrue(class_exists('ogpe\DOMNode'));
		$this->assertEquals('ogpe\DOMNode', get_class(new DOMNode));
	}

	public function testDOMDocumentClassExist()
	{	
		$this->assertTrue(class_exists(DOMDOCUMENT_CLASS));
		$this->assertEquals(DOMDOCUMENT_CLASS, get_class(new DOMDocument));
	}

	public function testHTMLFormElementClassExist()
	{	
		//echo PHP_EOL, get_class(new HTMLFormElement), PHP_EOL;
		//exit;
		$this->assertTrue(class_exists(HTMLFORMELEMENT_CLASS));
		$this->assertEquals(HTMLFORMELEMENT_CLASS, get_class(new HTMLFormElement));
	}

}