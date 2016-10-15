<?php

use PHPUnit\Framework\TestCase;
use ogpe\DOMnode;
use ogpe\DOMDocument;

class ExtensionTest extends TestCase
{
	public function testExtensionLoaded()
	{
		$this->assertTrue(extension_loaded('ogpe-dom'));
	}

	public function testDOMNodeClassExist()
	{	
		$this->assertTrue(class_exists('DOMNode'));
		$this->assertEquals('ogpe\DOMNode', get_class(new DOMNode));
	}

	public function testDOMDocumentClassExist()
	{	
		$this->assertTrue(class_exists('DOMDocument'));
		$this->assertEquals('ogpe\DOMDocument', get_class(new DOMDocument));
	}
}