int CvUnit::GetLanciaMeleeModifier(const CvUnit* pOpponent) const
{
    if (!IsLanciaHybrid() || pOpponent == NULL)
        return 0;

    // Only apply if the opponent is a mounted unit (like a Knight)
    if (!pOpponent->IsMounted())
        return 0;

    // Check for our custom dummy promotion
    if (!isHasPromotion((PromotionTypes)GC.getInfoTypeForString("PROMOTION_LANCIA_ANTI_MOUNTED", true)))
        return 0;

    // Returns exactly +33% combat strength, matching the vanilla Lancer's Formation I bonus
    return 33; 
}
