# Logchecker

A lightweight C++ command-line tool to parse and analyze log files for common statuses like `ERROR`, `WARNING`, and `OK`. Useful for basic QA workflows, system diagnostics, and learning log analysis.

---

## 🧠 Features

- Reads and parses a `.txt` log file
- Detects and counts:
  - ✅ OK messages
  - ⚠️ WARNING messages
  - ❌ ERROR messages
- Prints a summary of all detected log levels
- Handles edge cases like empty files or unknown patterns

---

## 📁 Sample Log Format

Example `logs.txt` file:
