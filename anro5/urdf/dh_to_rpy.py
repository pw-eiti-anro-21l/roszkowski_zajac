import json
import math
import transformations
import numpy

def get_dh():
    file = open('Macierz_MD-G.json', 'r')
    dh = json.loads(file.read())
    return dh
    

def write_yaml(xyz, rpy, row, a, file, d):
    file.write(row + ":\n")
    if(row == "row1"):
        file.write("  joint_xyz: "+str(xyz[0])+" "+str(xyz[1])+" "+str(xyz[2]+1)+"\n")
    else:
        file.write("  joint_xyz: "+str(xyz[0])+" "+str(xyz[1])+" "+str(xyz[2])+"\n")
        
    file.write("  joint_rpy: "+str(rpy[0])+' '+str(rpy[1])+' '+str(rpy[2])+'\n')
    file.write("  link_xyz: "+str(0)+' '+str(0)+' '+str(float(d)*(-0.5))+'\n')
    file.write("  link_rpy: "+str(0)+' '+str(0)+' '+str(0)+'\n')
    file.write("  link_len: "+str(d)+'\n')

def get_xyz_rpy():

    dh = get_dh()
    
    yaml_file = open('urdf_wyniki.yaml', 'w')

    for row in dh.keys():
        a, d, alpha, theta = dh[row]
        
        a_translation = transformations.translation_matrix((float(a),0,0))
        d_translation = transformations.translation_matrix((0,0,float(d)))
        alpha_rotation = transformations.rotation_matrix(float(alpha),(1, 0, 0))
        theta_rotation = transformations.rotation_matrix(float(theta),(0, 0, 1))
        
        trans_matrix = a_translation @ alpha_rotation  @ theta_rotation @ d_translation
        rpy = transformations.euler_from_matrix(trans_matrix)
        xyz = transformations.translation_from_matrix(trans_matrix)
        # zapis danych
        write_yaml(xyz, rpy, row, a, yaml_file, d)

if __name__ == '__main__':
    get_xyz_rpy()
