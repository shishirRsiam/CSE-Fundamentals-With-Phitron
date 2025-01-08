void path_print(pair<int,int>src,pair<int,int>dst)
{
    pair<int,int>selected_node = dst;
    while(true)
    {
        int x = selected_node.first;
        int y = selected_node.second;
        int x1 = parent[x][y].first;
        int y1 = parent[x][y].second;
        if(x>x1 && y==y1)
        {
            direction.push_back('D');
        }
        else if(x<x1 && y==y1)
        {
            direction.push_back('U');
        }
        else if(y>y1 && x==x1)
        {
            direction.push_back('R');
        }
        else if(y<y1 && x==x1)
        {
            direction.push_back('L');
        }
        if(selected_node == src)
        {
            break;
        }
 
        selected_node = parent[x][y];
    }
    reverse(direction.begin(),direction.end());
 
    cout<<direction<<"\n";
}