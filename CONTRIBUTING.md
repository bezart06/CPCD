# Contributing to CPCD

First off, thank you for considering contributing to CPCD! We welcome any help to make this project better, whether it's reporting a bug, proposing new features, improving documentation, or writing code.

## How Can I Contribute?

There are many ways to contribute to CPCD:

### Reporting Bugs
If you encounter a bug while using CPCD, please help us by reporting it. To do so:
1.  **Check if the bug has already been reported:** Open the [GitHub Issues](https://github.com/bezart06/CPCD/issues) for project.
2.  **If it's a new bug:** Create a new issue. Please include:
    * A clear and descriptive title.
    * Steps to reproduce the bug.
    * What you expected to happen.
    * What actually happened (include error messages or screenshots if possible).
    * Your operating system and version.
    * The version of CPCD you are using.

### Suggesting Enhancements or New Features
We are open to new ideas! If you have a suggestion for an enhancement or a new feature:
1.  **Check if the feature has already been suggested:** Open the [GitHub Issues](https://github.com/bezart06/CPCD/issues) and see if there's an existing discussion.
2.  **If it's a new suggestion:** Create a new issue. Please include:
    * A clear and descriptive title.
    * A detailed description of the proposed enhancement or feature.
    * Why you think this would be a valuable addition to CPCD (e.g., what problem it solves).
    * Any potential drawbacks or considerations.

### Working on Existing Issues
You can browse the [open issues](https://github.com/Bezart06/CPCD/issues) to find tasks that need attention. Look for issues tagged with `help wanted` or `good first issue` if you are new to the project.
If you decide to work on an issue:
1.  Comment on the issue to let others know you're working on it. This helps prevent duplicated effort.
2.  If you need clarification or help, don't hesitate to ask in the issue comments.

### Submitting Pull Requests (Code Contributions)
If you'd like to contribute code:
1.  **Fork the repository:** Create your own copy of the CPCD repository on GitHub.
2.  **Clone your fork:** `git clone https://github.com/YOUR_USERNAME/CPCD.git`
3.  **Create a new branch:** Work on a new branch for your changes. Name it descriptively (e.g., `fix/keyboard-input-issue` or `feature/custom-exit-shortcut`).
    ```bash
    git checkout -b name-of-your-branch
    ```
4.  **Make your changes:** Write your code and add relevant tests if applicable.
    * Ensure your code follows the existing coding style (see "Coding Style" section below).
    * Build and test your changes locally. (Refer to `README.md` for build instructions).
5.  **Commit your changes:** Write clear and concise commit messages.
    ```bash
    git add .
    git commit -m "Brief description of your changes"
    ```
6.  **Push to your fork:**
    ```bash
    git push origin name-of-your-branch
    ```
7.  **Open a Pull Request (PR):** Go to the original CPCD repository on GitHub and open a Pull Request from your forked branch to the `main` branch of the CPCD repository.
    * Provide a clear title and description for your PR, explaining the changes you've made and referencing any related issues.
    * Be prepared to discuss your changes and make adjustments if requested by the maintainers.

## Development Setup
Please refer to the `README.md` file for instructions on how to set up your development environment and build the project.
Key tools:
* **C++ Compiler** (supporting **C++20** standard)
* **CMake** (version **3.20** or higher)
* **Visual Studio 2022** (Recommended for Windows)

## Coding Style
While we are still formalizing specific coding style guidelines, please try to adhere to the following general principles:
* **Consistency:** Follow the style of the existing codebase.
* **Readability:** Write clear, understandable, and well-commented code where necessary.
* **C++ Standards:** The project uses **C++20**. Please leverage modern C++ features where appropriate.
* **Naming Conventions:** Use descriptive names for variables, functions, and classes. (e.g., `camelCase` for functions/variables, `PascalCase` for classes).

*(We may adopt a tool like ClangFormat in the future. Suggestions are welcome!)*

## Code of Conduct
Please note that this project is released with a Contributor Code of Conduct. By participating in this project, you agree to abide by its terms. Please read the `CODE_OF_CONDUCT.md` file.

## Questions?
If you have any questions about contributing, feel free to open an issue or reach out to the project maintainers.

Thank you for your interest in contributing to CPCD!
