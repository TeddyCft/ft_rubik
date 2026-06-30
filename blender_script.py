import bpy
import math

SPACING = 2.2

TOLERANCE = 0

dic_faces[]

def get_face_cubies(axis, value):
    """
    Retourne la liste des objets cubies dont la coordonnée 'axis'
    (donnée en monde, donc location.x/y/z) est proche de 'value'.
    """
    result = []
    for obj in bpy.data.objects:
        if not obj.name.startswith("C_"):
            continue
        coord = getattr(obj.location, axis)
        if abs(coord - value) < TOLERANCE:
            result.append(obj)
    return result

# Test rapide : on récupère la face F (x = 2.2) et on affiche les noms
face_f = get_face_cubies('x', SPACING)
print(f"Cubies trouvés sur la face F : {[obj.name for obj in face_f]}")
