# Variance & Standard Deviation Calculator

This project implements a statistical analysis tool in C to calculate dispersion metrics for a random dataset.

## ⚙️ Formulas

1.  **Mean ($\mu$):** $\frac{\sum x}{N}$
2.  **Variance ($\sigma^2$):** $\frac{\sum (x - \mu)^2}{N}$
3.  **Standard Deviation ($\sigma$):** $\sqrt{\text{Variance}}$

## 💻 Usage

The function `Istatistik_Hesapla(array, n, mode)` operates based on the `mode`:
* **Mode `1`:** Returns **Variance**.
* **Mode `0`:** Returns **Standard Deviation**.

## 🚀 Example Output

Based on Question 7:
**N=5**, **Array:** `{10, 20, 30, 40, 50}`
* **Mean:** 30
* **Squared Diff Sum:** $400 + 100 + 0 + 100 + 400 = 1000$
* **Variance:** $1000 / 5 = 200.0$
* **Std Dev:** $\sqrt{200} \approx 14.14$

```text
--- Istatistik Hesaplama Programi (N=5) ---
Dizi: { 10, 20, 30, 40, 50, }

Hesaplanan Varyans (Param=1)       : 200.0000
Hesaplanan Standart Sapma (Param=0): 14.1421
