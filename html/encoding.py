import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import OrdinalEncoder
from sklearn.preprocessing import OneHotEncoder

df = pd.read_csv(
    'csv_files\\titanic.csv',
    usecols=['Sex', 'Pclass', 'Survived']
)

X = df[['Sex', 'Pclass']]
y = df['Survived']

X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

oe = OrdinalEncoder(categories=[['male', 'female']])

X_train['Sex'] = oe.fit_transform(X_train[['Sex']])
X_test['Sex'] = oe.transform(X_test[['Sex']])

print(X_train.head())