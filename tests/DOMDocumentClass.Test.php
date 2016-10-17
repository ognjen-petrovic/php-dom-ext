<?php

use PHPUnit\Framework\TestCase;
use ogpe\DOMnode;
use ogpe\DOMDocument;

class DOMDocumentClassTest extends TestCase
{
	public function testSubClass()
	{
		$this->assertTrue(is_subclass_of(new DOMDocument, DOMNODE_CLASS));
	}

	public function testFileLoading()
	{
		
		$d = new DOMDocument();

		$this->assertTrue($d->load(TEST_ASSET_FOLDER . 'tree.xml'));
		$this->assertFalse($d->load(TEST_ASSET_FOLDER . 'non_exitsing.xml'));
	}
		
	public function testGetElementById()
	{
		
		$d = new DOMDocument();
		$d->load(TEST_ASSET_FOLDER . 'index.html');
		
		$this->assertEquals(DOMNODE_CLASS, get_class($d->getElementById('paragraph')));
		$this->assertTrue(is_null($d->getElementById('non_exitsing')));
	}

}