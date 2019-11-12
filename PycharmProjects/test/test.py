from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/')
def hello_world():
    return render_template('index.html')

@app.route('/process', methods=['POST', 'GET'])
def process():
    if request.method == 'POST':
        data = request.get_data()
        return render_template('process.html', data=data)
    else:
        return 'Only access through POST request'

if __name__ == '__main__':
    app.run()