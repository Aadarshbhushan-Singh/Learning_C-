#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int MAX_NUM_STOPWORDS = 100;

struct Stop_word
{
  string word;  // stop word
  int count;    // removal count
};


int stops[100];
string ReadLineFromStory(string story_filename )
{
  string x = "";
  string b;
  ifstream fin;
  fin.open(story_filename);
  while(getline(fin, b))
  {
    x += b;

  }
  return x;
}

void ReadStopWordFromFile(string stop_word_filename, Stop_word words[], int &num_words)
{
  ifstream fin;
  fin.open(stop_word_filename);
  string a;
  int i = 0;
  if (fin.fail())
  {
    cout << "Failed to open "<< stop_word_filename << endl;
    exit(1);
  }
  words[num_words].count = 0;
  while (fin >> words[num_words].word)
  {

    ++num_words;
  }


  fin.close();
}

void WriteStopWordCountToFile(string wordcount_filename, Stop_word words[], int num_words)
{
  ofstream fout;
  fout.open(wordcount_filename);
  for (int i = 0; i < 1; i++)
  {
    fout << words[i].word << " "<< stops[i] + 1 << endl;
  }
  for (int i = 1; i < num_words; i++)
  {
    fout << words[i].word << " "<< stops[i] << endl;
  }

  fout.close();
}

int RemoveWordFromLine(string &line, string word)
{
  int length = line.length();
    int counter = 0;
    int wl = word.length();
    for(int i=0; i < length; i++)
    {
        int x = 0;
        if(line[i] == word[0] && (i==0 || (i != 0 && line[i-1]==' ')))
        {
            for(int j = 1 ; j < wl; j++)
                if (line[i+j] != word[j])
                {
                    x = 1;
                    break;
                }
            if(x == 0 && (i + wl == length || (i + wl != length && line[i+wl] == ' ')))
            {
                for(int k = i + wl; k < length; k++)
                    line[k -wl] =line[k];
                length -= wl;

                counter++;
            }
        }

  }
  line[length] = 0;
  char newl[1000] = {0};
  for(int i = 0; i < length; i++)
    newl[i] = line[i];
  line.assign(newl);
  return counter;
}


int RemoveAllStopwordsFromLine(string &line, Stop_word words[], int num_words)
{
  int counter[100];
  int final = 0;
    for(int i = 1; i <= num_words; i++)
  {
    counter[i] = RemoveWordFromLine(line, words[i].word);
    final += counter[i];
    stops[i] = counter[i];

  }
    return final;

}


int main()
{

  Stop_word stopwords[MAX_NUM_STOPWORDS];     // an array of struct Stop_word
  int num_words = 0, total = 0;
  // read in two filenames from user input
  string a, b, c;
  cin >> a >> b;

  // read stop words from stopword file and
  // store them in an array of struct Stop_word
  ReadStopWordFromFile(a, stopwords, num_words);

  // open text file
  c = ReadLineFromStory(b);


  // open cleaned text file
  ofstream fout;
  fout.open("story_cleaned.txt");


  // read in each line from text file, remove stop words,
  // and write to output cleaned text file

  total = RemoveAllStopwordsFromLine(c, stopwords, num_words) + 1 ;

  fout << c;

  // close text file and cleaned text file

  fout.close();

  // write removal count of stop words to files

  WriteStopWordCountToFile("stop_words_count.txt", stopwords, num_words);

  // output to screen total number of words removed
  cout << "Number of stop words removed = " << total << endl;

  return 0;
}