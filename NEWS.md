# 1.3.0 (2021-12-17)
- Patch bug in findNhoodGroupMarkers that resulted in misordering of DGE results
- Vignette typographical mistakes fixed
- Introduce graph-only nhood definition and spatial FDR (negates need to compute pair-wise distances over cells in each neighbourhood). Consequently the workflow speed-up is ~x25

# 1.1.0 (2021-10-12)
- Fix bug in testNhoods to use user-specific reduced dimensions
- Vignettes now include set rownames() to avoid confusion
- Numerous doc-string typo fixes

# 0.99.1 (2021-03-13)
+ Fix model normalisation bug - now using TMM normalisation by default. Log(M_s) offset can be used by passing `norm.method="logMS"` to `testNhoods`.

# 0.99.0 (2021-03-04)
+ Submitted to Bioconductor

