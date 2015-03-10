{ Parsed from QuartzFilters.framework (MacOSX10.10) QuartzFilter.h }
{ Created on Sun Mar 8 1:48:24 2015 }


{$ifdef TYPES}
type
  QuartzFilterPtr = ^QuartzFilter;
{$endif}

{$ifndef QUARTZFILTER_H_}
{$ifdef CLASSES}

type
  QuartzFilter = objcclass external (NSObject)
  private
    _privateData: id;
  public
    class function quartzFilterWithURL (aURL: NSURL): QuartzFilter; message 'quartzFilterWithURL:';
    class function quartzFilterWithProperties (properties: NSDictionary): QuartzFilter; message 'quartzFilterWithProperties:';
    class function quartzFilterWithOutputIntents (outputIntents: NSArray): QuartzFilter; message 'quartzFilterWithOutputIntents:';
    function properties: NSDictionary; message 'properties';
    function url: NSURL; message 'url';
    function localizedName: NSString; message 'localizedName';
    function applyToContext (aContext: CGContextRef): boolean; message 'applyToContext:';
    procedure removeFromContext (aContext: CGContextRef); message 'removeFromContext:';
  end;
{$endif}

{$endif}
