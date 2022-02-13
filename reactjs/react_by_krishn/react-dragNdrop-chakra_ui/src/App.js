import React,{useState} from "react";
import { Container,Stack,List,ListItem,Flex,Heading } from "@chakra-ui/react";
import { Player } from "./components/Player";
import { useDrop } from "react-dnd";

const App = ()=>{

  const [players, setPlayers] = useState([
    {name:  "Player 1"},
    {name:  "Player 2"},
    {name:  "Player 3"},
    {name:  "Player 4"},
    {name:  "Player 5"}
  ]);

  const [team, setTeam] = useState([]);


  const [{isOver},addToTeamRef] = useDrop({
    accept:"player",
    collect: (monitor)=> ({isOver: !!monitor.isOver()}),
  });

  const [{isOver: isPlayerOver},removeFromTeamRef] = useDrop({
    accept:"team",
    collect: (monitor)=> ({isOver: !!monitor.isOver()}),
  });

  const movePlayerToTeam = (item)=>{
    console.log(item);
  }
  const removePlayerFromTeam = (item)=>{
    console.log(item);
  }


  return (
    <Container maxW="800px">
      <Flex justify="space-between" height="90vh" align="center">
        <Stack width="300px">
          <Heading fontSize="3xl" color="yellow.800" textAlign="center">Players</Heading>
          <List 
            p="4" 
            minH="70vh" 
            boxShadow="xl" 
            borderRadius="md" 
            ref={removeFromTeamRef}
          >
            {players.map((item,pos)=>( 
              <Player 
                key={pos} 
                item={item} 
                type="player" 
                index={pos} 
                onDropPlayer={movePlayerToTeam}
              />
            ))}
          </List>
        </Stack>
        <Stack width="300px">
          <Heading 
            fontSize="3xl" 
            color="teal.800" 
            textAlign="center"
          >
            Team</Heading>
          <List 
            p="4" 
            minH="70vh" 
            boxShadow="xl" 
            borderRadius="md" 
            ref={addToTeamRef}
          >
            {/* <Player/> */}
          </List>
        </Stack>
      </Flex>
    </Container>
  )
}

export default App