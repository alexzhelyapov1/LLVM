## Compile and run:

#### 1. Config cmake:
```bash
./setup.sh --cmake
cd build
```

#### 2. Collect statistics (result in [stat.csv](./artefacts/stat.csv)).
```bash
ninja stat_pass_run
```

#### 3. Draw graph for statistics:
```bash
ninja draw_graphs
```

Result graphs:
- [all pairs](./artefacts/statistics_all.png)
- [excluded pairs like br->None](./artefacts/statistics_no_nan.png)
- [excluded pairs like br->None and smth->phi](./artefacts/statistics_no_nan_no_phi.png)


### Note:
```
truncate -s 5M runtime_stat.csv
```
