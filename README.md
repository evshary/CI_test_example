# CI_test_example

[![Build Status](https://api.travis-ci.com/evshary/CI_test_example.svg?branch=main)](https://travis-ci.com/evshary/CI_test_example)
[![codecov](https://codecov.io/gh/evshary/CI_test_example/branch/main/graph/badge.svg)](https://codecov.io/gh/evshary/CI_test_example)

This repo show the simple example of how to use [app.travis-ci.com](https://app.travis-ci.com/) and [codecov.io](https://codecov.io/)

# travis

* [travis: Building a C project](https://docs.travis-ci.com/user/languages/c/)

You need to give GitHub privilege to travis.
Then add `.travis.yml` to your repo.
You'll be able to run CI for every commit.

# codecov

* [codecov: Supported Languages](https://docs.codecov.io/docs/supported-languages)

According to your language, run the test on CI server.
Then add the following into `.travis.yml`

```yml
after_success:
  - bash <(curl -s https://codecov.io/bash)
```

# GitHub Action

* [GitHub Action Documentation](https://docs.github.com/en/actions)

Add your GitHub action script to `.github/workflows/main.yml`

* If you want to use password in GitHub, GitHub Secrets is a good choice.
  - https://docs.github.com/en/actions/reference/encrypted-secrets
