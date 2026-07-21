user = {
    'username':'Ritesh',
    'level':'Intermediate',
    'is_active':True,
    'badges':["starter","Explorer","Intermediate"],
    'skills':{
        'programming':['Python','C'],
        'Tools':['Git','Docker'],
        'ai/ml':['RAG','NLP','LangChain']
    },
    'rank':"1/1000",

}

print(user)

print(f"Username: {user['username']}")
print(f"Congratulations! You are ranked {user.get('rank')}")
print(f"Your top skills: {user.get('skills').get('ai/ml')}")
