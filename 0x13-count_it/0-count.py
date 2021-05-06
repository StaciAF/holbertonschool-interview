#!/usr/bin/python3
"""
this module adds a function
"""
import json
import requests


def count_words(subreddit, word_list, after=""):
    """ this is my doc string, lookee """
    reddit = 'https://www.reddit.com/r/{}/hot.json?after={}'.format(subreddit)
    red_json = red_req.json()
    key = 'data'
    if key in red_json:
        data = red_json.get(key)
        chil = data.get('children')
        for info in chil:
            my_title = info.get('data').get('title').lower()
            for word in word_list:
                word = word.lower()
                if word in my_title:
                    count += 1
                    word_dict[word] = count
                    print("{}: {}".format(word, count))
                pagination = red_json.get('data').get('after')
                if pagination:
                    count_words(subreddit, word_list, pagination)
