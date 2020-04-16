import asyncio
import time

async def sayhello(say):
    time.sleep(0.2)
    print(say)
    time.sleep(0.7)

asyncio.run(sayhello('hello'))

async def main():

    print('Hello .')
    await asyncio.sleep(1)
    print('...World')

asyncio.run(main())

