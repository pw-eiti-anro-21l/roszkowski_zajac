import json
import math
import PyKDL
import mathutils
import numpy


def write_yaml(xyz, rpy, mark, a, file, d):
    file.write(mark + ":\n")
    if(mark == "row1"):
        file.write("  j_xyz: "+str(xyz[0])+" "+str(xyz[1])+" "+str(xyz[2]+1)+"\n")
    else:
        file.write("  j_xyz: "+str(xyz[0])+" "+str(xyz[1])+" "+str(xyz[2])+"\n")
    file.write("  j_rpy: "+str(rpy[0])+' '+str(rpy[1])+' '+str(rpy[2])+'\n')
    file.write("  l_xyz: "+str(0)+' '+str(0)+' '+str(float(d)*(-0.5))+'\n')
    file.write("  l_rpy: "+str(0)+' '+str(0)+' '+str(0)+'\n')
    file.write("  l_len: "+str(d)+'\n')

def get_xyz_rpy():
    with open("dh_params.json", "r") as file:
        dh_params = json.load(file)
    rpy_xyz={}
    inter = 1
    iterator = 1

    xyz_array = []
    rpy_array = []
    params_array = []

    for i in dh_params:
        dh_row = json.loads(json.dumps(i))
        a_translation = transformations.translation_matrix((dh_row["a"],0,0))
        d_translation = transformations.translation_matrix((0,0,dh_row["d"]))
        alpha_rotation = transformations.rotation_matrix(dh_row["alpha"],(1, 0, 0))
        theta_rotation = transformations.rotation_matrix(dh_row["theta"],(0, 0, 1))
        trans_matrix = a_translation @ alpha_rotation @ d_translation @ theta_rotation
        rpy = transformations.euler_from_matrix(trans_matrix)
        xyz = transformations.translation_from_matrix(trans_matrix)
        # zapis danych
        write_yaml(xyz, rpy, mark, a, file, d)

if __name__ == '__main__':
    DH_to_yaml()