document.addEventListener("DOMContentLoaded", () => {
  const questions = [
    {
      question: "When was Protest The Hero formed?",
      answers: [
        { text: "1999", correct: true },
        { text: "2001", correct: false },
        { text: "1995", correct: false },
        { text: "2003", correct: false },
      ],
    },
    {
      question: "What is the name of their debut album?",
      answers: [
        { text: "Fortress", correct: false },
        { text: "Palimpsest", correct: false },
        { text: "Scurrilous", correct: false },
        { text: "Kezia", correct: true },
      ],
    },
    // Additional questions can be added here
  ];

  let currentQuestionIndex = 0;
  const questionContainer = document.getElementById("question-container");
  const nextButton = document.getElementById("next-btn");

  function setNextQuestion() {
    resetState();
    showQuestion(questions[currentQuestionIndex]);
  }

  function showQuestion(question) {
    const questionElement = document.createElement("div");
    questionElement.innerText = question.question;
    questionContainer.appendChild(questionElement);

    question.answers.forEach((answer) => {
      const button = document.createElement("button");
      button.innerText = answer.text;
      button.classList.add("btn");
      if (answer.correct) {
        button.dataset.correct = answer.correct;
      }
      button.addEventListener("click", selectAnswer);
      questionContainer.appendChild(button);
    });
  }

  function resetState() {
    nextButton.style.display = "none";
    while (questionContainer.firstChild) {
      questionContainer.removeChild(questionContainer.firstChild);
    }
  }

  function selectAnswer(e) {
    const selectedButton = e.target;
    const correct = selectedButton.dataset.correct === "true";
    if (questions.length > currentQuestionIndex + 1) {
      nextButton.style.display = "block";
    } else {
      nextButton.innerText = "Restart";
      nextButton.onclick = () => location.reload(); // Restart the quiz
    }
  }

  setNextQuestion();
});
