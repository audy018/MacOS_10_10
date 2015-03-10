{ Parsed from GameKit.framework (MacOSX10.10) GKSavedGameListener.h }
{ Created on Sun Mar 8 1:46:49 2015 }


{$ifdef TYPES}
type
  GKSavedGameListenerProtocolPtr = ^GKSavedGameListenerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKSavedGameListenerProtocol = objcprotocol external name 'GKSavedGameListener' (NSObjectProtocol)
  optional
    procedure player_didModifySavedGame (player: GKPlayer; savedGame: GKSavedGame); message 'player:didModifySavedGame:';
    procedure player_hasConflictingSavedGames (player: GKPlayer; savedGames: NSArray); message 'player:hasConflictingSavedGames:';
  end;
{$endif}

