# Instructions usage analysis.

## Compile and run:

### 1. Config cmake:
```bash
./setup.sh --cmake
cd build
```

### 2. Collect statistics:
```bash
ninja static_stat_pass
ninja app_with_static_stat_pass


ninja runtime_stat_pass
ninja graph_app_with_runtime_stat
./bin/graph_app_with_runtime_stat
```

You can find:
- static statistics in [static_stat](./artefacts/static_stat.csv).
- runtime statistics in [runtime_stat](./artefacts/runtime_stat.csv)



### 3. Draw graph for statistics:
```bash
ninja draw_graphs
```

Result graphs:
- ['static': all pairs](./artefacts/statistics_all.png)
- ['static': excluded pairs like br->None](./artefacts/statistics_no_nan.png)


- ['runtime': all pairs](./artefacts/runtime_all.png)
- ['runtime': excluded pairs like br->None](./artefacts/runtime_no_nan.png)



#### 4. Other targets:
- `app_with_runtime_stat_pass_ir`: generates IR of `empty.c` after `generate_app_pass`. You can find it in [app_with_runtime_stat_pass_ir](./artefacts/app_with_runtime_stat_pass_ir.ll).


### Note:
Truncate runtime_stat.csv:
```bash
truncate -s 5M runtime_stat.csv
```
