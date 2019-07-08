#!/usr/bin/env python3

import os, sys, subprocess

inf = sys.argv[1]
ouf = sys.argv[2]
with open(ouf, "w") as o:
    with open(inf) as f:
        env = os.environ
        env["PS1"] = "$\n"
        env["LC_ALL"] = "C"
        sh = subprocess.Popen(["sh", "-i"], stdin=subprocess.PIPE,
                stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                env=env)
        while True:
            sh.stdout.flush()
            dat = sh.stdout.readline()
            if dat == b"$\n":
                # input cmd
                l = f.readline();
                if l == "":
                    sh.stdin.write(b"exit\n")
                    sh.stdin.flush()
                    break;
                o.write("shell$ @@" + l[:-1] + "@@\n")
                sh.stdin.write(l.encode())
                sh.stdin.flush()
                # skip the cmd line
                sh.stdout.flush()
                sh.stdout.readline()
            else:
                o.write(dat.decode())
