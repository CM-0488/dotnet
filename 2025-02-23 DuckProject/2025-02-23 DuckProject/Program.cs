using _2025_02_23_DuckProject;

Duck mountainDuck = new MountainDuck();
Duck lakeDuck = new LakeDuck();
Duck forestDuck = new ForestDuck();

mountainDuck.Fly();
lakeDuck.Fly();
forestDuck.Fly();

Hatchery.Hatch(oneDuck: forestDuck, twoDuck: forestDuck);
Hatchery.Hatch(oneDuck: mountainDuck, twoDuck: mountainDuck);
Hatchery.Hatch(oneDuck: lakeDuck, twoDuck: lakeDuck);
Hatchery.Hatch(oneDuck: forestDuck, twoDuck: lakeDuck);

