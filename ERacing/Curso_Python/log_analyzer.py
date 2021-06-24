#Ler, analisar e ver como os parâmetros evoluem ao longo do tempo (fazer gráfico: valor X tempo)

# Ler um dos arquivos
from pandas import read_csv

import numpy as np # referência a numpy

import matplotlib.pyplot as plt # apelido para encurtar o nome na chamada

log = read_csv("logs/dv_driving_dynamics.tsv", delimiter ="/")

# print(log)

def analyze_metric(metric_name, color):
    global log

    fig, ax = plt.subplots(figsize = (10, 7))

    # Load timestamps and metric value
    timestamps = log["timestamp"]
    metric_value = log[metric_name]

    # Convert to numpy array
    timestamps = np.asarray(timestamps)
    metric_value = np.asarray(metric_value)

    # Evaluate some stats
    metric_min = np.min(metric_value) # Calcula o valor mínimo de metric_value
    metric_max = np.max(metric_value)
    metric_mean = np.mean(metric_value)
    metric_stdev = np.std(metric_value)

    # Plot graphs
    ax.plot(timestamps, metric_value, color=color, linestyle= "solid", linewidth= 3, marker= "o") # (x,y, linestyle= "dotted"
    plt.xlabel("Time [s]")
    plt.ylabel(metric_name)

    # Marcar max, média e o desvio padrao, linhas horizontais
    xdata = list(range(16))
    ydata = [_*2 for _ in xdata]

    plt.hlines(y=metric_max, xmin=0, xmax=16, color='b')
    plt.hlines(y=metric_mean, xmin=0, xmax=16, color='g')
    plt.hlines(y=metric_stdev, xmin=0, xmax=16, color='#000000')

    plt.grid()
    plt.show()

    # Pegando todos os valores calculados acima e organizando num dicinário
    return {
        "min": metric_min,
        "max": metric_max,
        "mean": metric_mean,
        "stdev": metric_stdev
    }

# print(analyze_metric("speed_actual")) mesma coisa abaixo:

speed_stats = analyze_metric("speed_actual", '#db5925')
steering_angle_stats = analyze_metric("steering_angle_actual", '#147306')


print(speed_stats)
print(steering_angle_stats)
