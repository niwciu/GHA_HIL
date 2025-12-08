# 🚀 Quick Guide: Minimal Setup for HIL Tests

This guide walks you through the simplest possible setup for creating and running HIL tests. It assumes your server is already configured according to the installation manual and has all required tools installed.

👉 [Server setup manual](https://niwciu.github.io/GHA_HIL/hil_server_installation_manual/)

---

## 📁 1. Prepare Your Workspace

Open the directory where you plan to run the framework and store your HIL tests.

Inside this directory:

* Create a folder called **`hil_tests`**
* Create a file named **`peripherals_config.yaml`**

---

## ⚙️ 2. Configure Peripherals

In the **`peripherals_config.yaml`** file, define and parameterize all peripherals you want to use in your tests.

Use the documentation for reference (hardware configuration section).

---

## 🧪 3. Create a Test Group

Still in the same directory, create a new test group using the command:

```
hiltests --create-test-group <group_name>
```

This will generate a test file inside the **`hil_tests`** folder.

---

## ✍️ 4. Write Your Tests

Open the generated file in **`hil_tests`** and write your tests following the examples and structure described in the documentation.

---

## ▶️ 5. Run Your Tests

Run your tests using:

```
hiltest
```

---

## 📚 6. Additional Options

All advanced options are documented and can also be viewed via:

```
hiltest -h
```

---

🎉 That's it! You now have the simplest working setup for creating and running HIL tests.
