#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

int main()

 {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    map<string, string> attribute_map;
    vector<string> tag_stack;
    string line;

    
    getline(cin, line);

    
    for (int i = 0; i < n; ++i) 
    {
        getline(cin, line);
        if (line.empty()) continue;

        stringstream ss(line);
        string token;
        ss >> token;

        if (token[1] == '/') 
        {
            
            if (!tag_stack.empty()) 
            {
                tag_stack.pop_back();
            }
        } else
        
         {
            
            string tag_name = token.substr(1);
            
            if (tag_name.back() == '>')
            
             {
                tag_name.pop_back();
            }

            
            string full_path = "";
            for (const auto& t : tag_stack)
            
             {
                full_path += t + ".";
            }
            full_path += tag_name;

            tag_stack.push_back(tag_name);

            
            string attr_name, equal_sign, attr_val;
            while (ss >> attr_name >> equal_sign >> attr_val) 
            {
                
                if (attr_val.back() == '>') 
                
                {
                    attr_val.pop_back();
                }
                
                if (attr_val.size() >= 2 && attr_val.front() == '"' && attr_val.back() == '"') 
                
                {
                    attr_val = attr_val.substr(1, attr_val.size() - 2);
                }

                
                string query_key = full_path + "~" + attr_name;
                attribute_map[query_key] = attr_val;
            }
        }
    }

   
    for (int i = 0; i < q; ++i)
     {
        getline(cin, line);
        if (attribute_map.find(line) != attribute_map.end())
         {
            cout << attribute_map[line] << "\n";
        } else 
        
        {
            cout << "Not Found!\n";
        }
    }

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna