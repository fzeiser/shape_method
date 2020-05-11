import numpy as np
from pathlib import Path
from typing import Union, Tuple, Optional
from ompy import Vector, Matrix
import matplotlib.pyplot as plt


def load_from_counting(fnld: Union[str, Path] = "rhopaw.cnt",
                       fgsf: Union[str, Path] = "strength.nrm",
                       fcalib: Union[str, Path] = "fg.rsg",
                       basefolder: Optional[Tuple[str, Path]] = None
                       ) -> Tuple[Vector, Vector]:
    """Loads nld and gsf from counting files

    Args:
        fnld, (optional): Path to nld file
        fgsf, (optional): Path to gsf file
        fcalib (optional): Path to matrix containing the calibration
        basefolder (optional): If provided this is prepended to all paths

    Returns:
        Tuple[Vector, Vector]: nld and gsf
    """
    if basefolder is not None:
        basefolder = Path(basefolder)
        fnld = basefolder / fnld
        fgsf = basefolder / fgsf
        fcalib = basefolder / fcalib

    calib_matrix = Matrix(path=fcalib)
    calib = calib_matrix.calibration()

    assert_err_meassage = "Loaded matrix does not seem to come from rhosigchi"
    assert calib["a0x"] == calib["a0y"], assert_err_meassage
    assert calib["a1x"] == calib["a1y"], assert_err_meassage

    nld_cnt = np.loadtxt(fnld)
    N = len(nld_cnt)
    E = calib["a0x"] + calib["a1x"] * np.arange(N/2)
    nld = Vector(E=E, values=nld_cnt[:int(N/2)], std=nld_cnt[int(N/2):])
    nld.to_MeV()
    nld.values[nld.values == 0] = np.nan
    nld.cut_nan()

    gsf_cnt = np.loadtxt(fgsf)
    N = len(gsf_cnt)
    E = calib["a0x"] + calib["a1x"] * np.arange(N/2)
    gsf = Vector(E=E, values=gsf_cnt[:int(N/2)], std=gsf_cnt[int(N/2):])
    gsf.to_MeV()
    gsf.values[gsf.values == 0] = np.nan
    gsf.cut_nan()

    return nld, gsf


def replace_errbar(collection, lower, upper):
    """ replace errorbar in matplotlib """
    bars = collection.get_segments()
    for i, bar in enumerate(bars):
        bar[0][1] = lower[i]
        bar[1][1] = upper[i]
    collection.set_segments(bars)
