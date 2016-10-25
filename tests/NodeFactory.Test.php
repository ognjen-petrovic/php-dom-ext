<?php

use PHPUnit\Framework\TestCase;
use ogpe\DOMnode;
use ogpe\DOMDocument;
use ogpe\DOMHtmlElement;

class NodeFactoryTest extends TestCase
{
	public function testFactory()
	{
		$d = new DOMDocument();
		$d->load(TEST_ASSET_FOLDER . 'index.html');
		
		$this->assertEquals(DOMNODE_CLASS, get_class($d->getElementById('paragraph')));
		$this->assertEquals(HTMLFORMELEMENT_CLASS, get_class($d->getElementById('form_id')));
	}

}