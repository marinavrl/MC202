from pandas import read_csv

def read_tsv(path: str, columns: list):
    """[reads a tsv or csv file depending on the delimiter]

    Arguments:
    path {str} -- [File path]
    columns {list} -- [Columns you want to read]

    Returns:
    [numpy serie] -- [A series containing the columns]
    """
    tsv_read = read_csv(path, delimiter="/")
    return tsv_read.loc[:, columns]

data = read_tsv("dv_driving_dynamics.tsv", ["steering_angle_actual"])
for angle in data["steering_angle_actual"]:
       print(angle)
