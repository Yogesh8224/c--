import java.util.*;

public class Graph{
    static class Edge{
        int src ;
        int dest ;
        public Edge(int s,int d){
            this.src = s;
            this.dest = d;
        }
    }

    public static void createGraph(){
        for (int i = 0 ; i < graph.length() ; i++){
            graph[i] = new ArrayList<Edge>();
        }
    }

    public static void main(String[] args) {
        int V = 4;
        ArrayList<Edge> graph[] = new ArrayList[V];
        
    }
}