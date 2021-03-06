## About this file

This is the README file for PIPOL, the Yappi on Perl Interface Protocol Official Library.
It is currently the only documentation available for PIPOL, the first implementation
of the Yappi Protocol that exists up to date.

## Functional Systems

The bulk of the implementation of the Protocol is found in the Node.pm module. It contains
 the logic that implements the internals of the Yappi protocol. We have divided this logic, to make it easier to follow and to better understand the complex interdependencies between the different functional units:


### Señor Logic

The Señor side of the implementation covers the functionality required 
for the consumption of data and the minimum rules to be fair with the
rest of the world (signaling of new updates):

 S1 Connection to super servers (->N1)
 S2 Iniciate Subscriptions (->C3)
 S3 Process incoming data traffic:
    * Receive updates (<-C5)
    * Signals the new updates to the Criado (->C4)
 S4 Launch Searches (->N2)
 S5 Receive Search results (<-N4)

### Criado Logic

The Criado side of the implementation provides the logic to attend
the minimum services that a participant in the Yappi network should give:

 C1 Reply to pings from other peers (<-C2)
 C2 Maintains a clean list of connected peers
 C3 Accepts data connections (<-S2)
 C4 Validate and forward updates (<-S3)
 C5 Provides data updates to peers (->S3)

### SuperNode Logic

The supernode logic attends the needs of the Señor others than those linked to data updates. Please note that this logic is only required when a node becomes a supernode:

 N1 Accepts Señor connections (<-S1)
 N2 Receive Searches (<-S4)
 N3 Forwards Searches to other SuperNodes (->N2)
 N4 Return search results to peers (->S5)
 N5 Maintains a database of connected Nodes and Content


### Contact

For support and help on the yappi protocol you should subscribe
to the yappi development group http://groups-beta.google.com/group/yappi_team

Enrique Melero
Yappi Team Leader
