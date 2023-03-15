FROM python:3

WORKDIR /usr/src/app

COPY requiments.txt ./

RUN pip install --no-cache-dir -r requiments.txt

EXPOSE  80

COPY . .

CMD [ "python", "./app.py"]
