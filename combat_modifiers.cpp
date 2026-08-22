// If the Lancia is defending against a ranged attack...
if (!bAttacking && bRangedCombat && IsLanciaHybrid())
{
    iModifier += GetLanciaRangedVulnerability();
}
