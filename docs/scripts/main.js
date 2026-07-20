const projects = [
  { name: "Debit Card UI", category: "html-css", description: "A styled front-and-back payment card interface with card details and brand imagery.", tech: ["HTML", "CSS"], path: "./projects/html-css/debit-card/" },
  { name: "Gallery Practice Website", category: "html-css", description: "A content-rich responsive practice site with hero, services, gallery, blog, and contact sections.", tech: ["HTML", "CSS"], path: "./projects/html-css/gallery-practice/" },
  { name: "Portfolio Landing Page", category: "html-css", description: "A personal introduction and portfolio landing layout with social and navigation elements.", tech: ["HTML", "CSS"], path: "./projects/html-css/portfolio-landing-page/" },
  { name: "Social Login Page", category: "html-css", description: "An animated login form featuring social sign-in buttons and responsive styling.", tech: ["HTML", "CSS"], path: "./projects/html-css/social-login-page/" },
  { name: "Contact & Access Portal", category: "html-css", description: "A responsive split-panel interface combining a contact form with a login experience.", tech: ["HTML", "CSS"], path: "./projects/html-css/contact-access-portal/" },
  { name: "Amazon Clone", category: "html-css", description: "An e-commerce storefront study with navigation, search, product cards, and responsive sections.", tech: ["HTML", "CSS"], path: "./projects/html-css/amazon-clone/" },
  { name: "Travel Landing Page", category: "html-css", description: "A scenic Quest-themed travel page presenting destinations, local cuisine, and guided experiences.", tech: ["HTML", "CSS"], path: "./projects/html-css/travel-landing-page/" },
  { name: "Calculator", category: "javascript", description: "A browser calculator with keyboard support, operators, clear controls, and calculation history styling.", tech: ["HTML", "CSS", "JavaScript"], path: "./projects/javascript/calculator/" },
  { name: "To-do List", category: "javascript", description: "A compact task-list app for adding, completing, and removing everyday tasks.", tech: ["HTML", "CSS", "JavaScript"], path: "./projects/javascript/todo-list/" },
  { name: "Note App", category: "javascript", description: "A note-taking interface that creates editable notes and persists them in local storage.", tech: ["HTML", "CSS", "JavaScript"], path: "./projects/javascript/note-app/" },
  { name: "Healing Points Clicker", category: "javascript", description: "An interactive press-and-hold counter with animated particles and a themed healing score.", tech: ["HTML", "CSS", "JavaScript"], path: "./projects/javascript/healing-points-clicker/" },
  { name: "Search Filter App", category: "javascript", description: "A live filtering exercise that narrows a visible list as the user types a query.", tech: ["HTML", "CSS", "JavaScript"], path: "./projects/javascript/search-filter-app/" },
  { name: "Tic-Tac-Toe Basic", category: "games", description: "A self-contained two-player grid game with winner detection and a restart control.", tech: ["HTML", "CSS", "JavaScript"], path: "./projects/games/tic-tac-toe-basic/", action: "Play Game" },
  { name: "Rock Paper Scissors", category: "games", description: "A polished player-versus-computer game with choices, round results, and a running scoreboard.", tech: ["HTML", "CSS", "JavaScript"], path: "./projects/games/rock-paper-scissors/", action: "Play Game" },
  { name: "Tic-Tac-Toe Modern", category: "games", description: "A second preserved tic-tac-toe implementation with turn handling, game states, and reset behavior.", tech: ["HTML", "CSS", "JavaScript"], path: "./projects/games/tic-tac-toe-modern/", action: "Play Game" },
  { name: "Tailwind Service Page", category: "tailwind", description: "A responsive landing page experiment built with Tailwind CSS utility classes and service cards.", tech: ["HTML", "Tailwind CSS"], path: "./projects/tailwind/tailwind-service-page/" },
  { name: "Modern UI", category: "large-projects", description: "A product-style landing page focused on performance, responsive design, and modern interface patterns.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/modern-ui.html" },
  { name: "Travel Quest", category: "large-projects", description: "A nature-focused travel experience presenting scenic beauty, cuisine, and guided adventures.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/travel-quest.html" },
  { name: "Landing Page Platform", category: "large-projects", description: "A general-purpose landing page with responsive navigation, features, about, and contact content.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/landing-page-platform.html" },
  { name: "Business Landing Page", category: "large-projects", description: "A business-oriented landing layout with features, pricing choices, and call-to-action sections.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/business-landing-page.html" },
  { name: "Portfolio Showcase", category: "large-projects", description: "A personal portfolio concept featuring an introduction, services, selected work, and contact details.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/portfolio.html" },
  { name: "Modern Blog", category: "large-projects", description: "A contemporary blog homepage with featured posts, topic cards, and editorial-style content.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/modern-blog.html" },
  { name: "Media Experience", category: "large-projects", description: "A dark product showcase for audio hardware with feature highlights and technical specifications.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/media-experience.html" },
  { name: "Portfolio Services", category: "large-projects", description: "A service portfolio with tiered packages, visual work samples, and responsive presentation.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/portfolio-services.html" },
  { name: "Image Login", category: "large-projects", description: "A split visual login layout combining a full-height image treatment with account fields.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/image-login.html" },
  { name: "User Login", category: "large-projects", description: "A colorful user authentication card with responsive form controls and mobile-oriented artwork.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/user-login.html" },
  { name: "Simple Login", category: "large-projects", description: "A minimal login screen focused on typography, form fields, and a straightforward account flow.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/simple-login.html" },
  { name: "Website Design Services", category: "large-projects", description: "A service website for web development, UI/UX design, and mobile application offerings.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/website-design.html" },
  { name: "Travel Discovery", category: "large-projects", description: "A destination-discovery page with a full hero, popular places, trip planning, and contact sections.", tech: ["HTML", "CSS"], path: "./projects/large-projects/project-showcase/travel-discovery.html" }
];

const categoryNames = {
  "html-css": "HTML & CSS",
  javascript: "JavaScript",
  games: "Game",
  tailwind: "Tailwind CSS",
  "large-projects": "Large Project"
};

const grid = document.querySelector("#project-grid");
const count = document.querySelector("#project-count");
const filterButtons = [...document.querySelectorAll(".filter-button")];

function createProjectCard(project, index) {
  const article = document.createElement("article");
  article.className = "project-card";

  const top = document.createElement("div");
  top.className = "card-top";
  const category = document.createElement("span");
  category.className = "category-label";
  category.textContent = categoryNames[project.category];
  const number = document.createElement("span");
  number.className = "project-number";
  number.textContent = String(index + 1).padStart(2, "0");
  top.append(category, number);

  const heading = document.createElement("h3");
  heading.textContent = project.name;
  const description = document.createElement("p");
  description.textContent = project.description;
  const technologies = document.createElement("ul");
  technologies.className = "tech-list";
  technologies.setAttribute("aria-label", "Technologies used");
  project.tech.forEach((technology) => {
    const item = document.createElement("li");
    item.textContent = technology;
    technologies.append(item);
  });

  const link = document.createElement("a");
  link.className = "card-link";
  link.href = project.path;
  link.textContent = project.action || "Open Project";
  link.setAttribute("aria-label", `${link.textContent}: ${project.name}`);

  article.append(top, heading, description, technologies, link);
  return article;
}

function renderProjects(filter = "all") {
  const visible = filter === "all" ? projects : projects.filter((project) => project.category === filter);
  grid.replaceChildren(...visible.map(createProjectCard));
  count.textContent = `${visible.length} ${visible.length === 1 ? "project" : "projects"}`;
}

filterButtons.forEach((button) => {
  button.addEventListener("click", () => {
    filterButtons.forEach((item) => {
      const active = item === button;
      item.classList.toggle("is-active", active);
      item.setAttribute("aria-pressed", String(active));
    });
    renderProjects(button.dataset.filter);
  });
});

document.querySelector("#year").textContent = new Date().getFullYear();
renderProjects();
