{ Parsed from AppKit.framework (MacOSX10.10) NSPDFImageRep.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSPDFImageRepPtr = ^NSPDFImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSPDFImageRep = objcclass external (NSImageRep)
  private
    _pdfData: NSData;
    _reserved1: cint;
    _reserved2: cint;
    _private: id;
  public
    class function imageRepWithData (pdfData: NSData): instancetype; message 'imageRepWithData:';
    function initWithData (pdfData: NSData): instancetype; message 'initWithData:';
    function PDFRepresentation: NSData; message 'PDFRepresentation';
    function bounds: NSRect; message 'bounds';
    procedure setCurrentPage(newValue: NSInteger); message 'setCurrentPage:';
    function currentPage: NSInteger; message 'currentPage';
    function pageCount: NSInteger; message 'pageCount';
  end;
{$endif}

