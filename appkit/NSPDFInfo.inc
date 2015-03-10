{ Parsed from AppKit.framework (MacOSX10.10) NSPDFInfo.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSPDFInfoPtr = ^NSPDFInfo;
{$endif}

{$ifdef CLASSES}

type
  NSPDFInfo = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  private
    _URL: NSURL;
    _tagNames: NSArray;
    _orientation: NSPaperOrientation;
    _paperSize: NSSize;
    _attributes: NSMutableDictionary;
    _fileExtensionHidden: boolean;
  public
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setFileExtensionHidden(newValue: boolean); message 'setFileExtensionHidden:';
    function isFileExtensionHidden: boolean; message 'isFileExtensionHidden';
    procedure setTagNames(newValue: NSArray); message 'setTagNames:';
    function tagNames: NSArray; message 'tagNames';
    procedure setOrientation(newValue: NSPaperOrientation); message 'setOrientation:';
    function orientation: NSPaperOrientation; message 'orientation';
    procedure setPaperSize(newValue: NSSize); message 'setPaperSize:';
    function paperSize: NSSize; message 'paperSize';
    function attributes: NSMutableDictionary; message 'attributes';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

