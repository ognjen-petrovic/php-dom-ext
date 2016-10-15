<?php

use PHPUnit\Framework\TestCase;
use ogpe\DOMnode;
use ogpe\DOMDocument;

class DOMDocumentClassTest extends TestCase
{
	public function testSubClass()
	{
		$this->assertTrue(is_subclass_of(new DOMDocument, 'ogpe\DOMnode'));
	}
}