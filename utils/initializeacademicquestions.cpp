// Temporary place to put initializeQuestions() CUZ otherwise main would get tooooooooo overcrowded and hard to develop
#include "structs.hpp"
#include <iostream>

using namespace std;

Question* initializeAcademicQuestions(GameState gameState, int category) {
    
    // string subjects[3] = {"Chemistry", "Physics", "Mathematics"}; -- From Faith's Code
    switch (category) {
        case 1: // CHEMISTRY - Preparation of Hydrocarbons
            switch (gameState.week) { 
                case 0: // Week 1: Alkanes - Cracking and Reforming
                {
                    Question Q1 = {
                        "What is the main purpose of catalytic cracking in petroleum refining?",
                        {"Increase octane rating", "Break large hydrocarbons into smaller ones", "Remove sulfur impurities", "Produce hydrogen gas"},
                        2
                    };

                    Question Q2 = {
                        "Which catalyst is commonly used in catalytic cracking?",
                        {"Iron", "Zeolite", "Platinum", "Nickel"},
                        2
                    };

                    Question Q3 = {
                        "What type of reaction is thermal cracking?",
                        {"Substitution", "Addition", "Pyrolysis", "Esterification"},
                        3
                    };

                    Question Q4 = {
                        "Catalytic reforming converts straight-chain alkanes into:",
                        {"Branched alkanes", "Aromatic hydrocarbons", "Alkenes", "Cycloalkanes"},
                        2
                    };

                    Question Q5 = {
                        "What is the main product of steam cracking?",
                        {"Diesel", "Lubricating oil", "Alkenes (ethene, propene)", "Bitumen"},
                        3
                    };

                    Question Q6 = {
                        "Which condition is NOT typical for thermal cracking?",
                        {"High temperature (400-900°C)", "High pressure", "Catalyst required", "Absence of air"},
                        3
                    };

                    Question Q7 = {
                        "What does reforming primarily improve in gasoline?",
                        {"Octane number", "Volatility", "Density", "Viscosity"},
                        1
                    };

                    Question Q8 = {
                        "Hydrocracking uses hydrogen gas to produce:",
                        {"More alkenes", "Saturated hydrocarbons", "Aromatics", "Polymers"},
                        2
                    };

                    Question Q9 = {
                        "Which hydrocarbon is most likely to undergo cracking first?",
                        {"Methane", "Propane", "Decane (C10)", "Ethene"},
                        3
                    };

                    Question Q10 = {
                        "What is a major advantage of fluid catalytic cracking?",
                        {"Lower energy requirement", "Catalyst can be regenerated", "No by-products formed", "Works at room temperature"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 1: // Week 2: Alkenes - Dehydration and Dehydrohalogenation
                {
                    Question Q1 = {
                        "What is the product when ethanol undergoes dehydration?",
                        {"Ethane", "Ethene", "Ethanoic acid", "Ethoxyethane"},
                        2
                    };

                    Question Q2 = {
                        "Which catalyst is used for dehydration of alcohols?",
                        {"Concentrated H2SO4", "NaOH", "Fe", "Ni"},
                        1
                    };

                    Question Q3 = {
                        "What is the temperature range for dehydrating primary alcohols?",
                        {"100-140°C", "170-180°C", "50-60°C", "300-400°C"},
                        2
                    };

                    Question Q4 = {
                        "Dehydrohalogenation involves removal of:",
                        {"Hydrogen and halogen", "Two hydrogens", "Halogen only", "Hydroxyl group"},
                        1
                    };

                    Question Q5 = {
                        "Which reagent is used for dehydrohalogenation of alkyl halides?",
                        {"Alcoholic KOH", "Aqueous KOH", "Dilute H2SO4", "Br2 water"},
                        1
                    };

                    Question Q6 = {
                        "According to Saytzeff's rule, the major product is:",
                        {"Less substituted alkene", "More substituted alkene", "Cis-alkene", "Trans-alkene"},
                        2
                    };

                    Question Q7 = {
                        "What is the major product when 2-bromobutane reacts with alcoholic KOH?",
                        {"1-butene", "2-butene", "Butane", "Butanol"},
                        2
                    };

                    Question Q8 = {
                        "Which alcohol dehydrates most readily?",
                        {"Methanol", "Primary alcohol", "Secondary alcohol", "Tertiary alcohol"},
                        4
                    };

                    Question Q9 = {
                        "What type of elimination mechanism is E1?",
                        {"Bimolecular", "Unimolecular", "Concerted", "Radical"},
                        2
                    };

                    Question Q10 = {
                        "Vicinal dihalides can be converted to alkynes using:",
                        {"NaNH2", "H2/Ni", "H2O/H+", "Br2/CCl4"},
                        1
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 2: // Week 3: Alkynes - Preparation Methods
                {
                    Question Q1 = {
                        "Calcium carbide reacts with water to produce:",
                        {"Ethene", "Ethyne (acetylene)", "Methane", "Ethanol"},
                        2
                    };

                    Question Q2 = {
                        "What is the formula of calcium carbide?",
                        {"CaC", "CaC2", "Ca2C", "CaCO3"},
                        2
                    };

                    Question Q3 = {
                        "Dihalides used to prepare alkynes must be:",
                        {"Geminal or vicinal", "Only geminal", "Only vicinal", "Any dihalide"},
                        1
                    };

                    Question Q4 = {
                        "What reagent converts geminal dihalide to alkyne?",
                        {"Alcoholic KOH", "Aqueous NaOH", "Na metal", "H2/Pt"},
                        1
                    };

                    Question Q5 = {
                        "How many moles of NaNH2 are needed to convert 1,2-dibromoethane to ethyne?",
                        {"1", "2", "3", "4"},
                        2
                    };

                    Question Q6 = {
                        "Kolbe's electrolysis of sodium maleate produces:",
                        {"Ethyne", "Ethene", "Ethane", "Acetylene dicarboxylic acid"},
                        1
                    };

                    Question Q7 = {
                        "Which alkyne is produced from calcium carbide industrially?",
                        {"Propyne", "Ethyne", "But-1-yne", "Pentyne"},
                        2
                    };

                    Question Q8 = {
                        "What is the bond angle in ethyne?",
                        {"109.5°", "120°", "180°", "90°"},
                        3
                    };

                    Question Q9 = {
                        "Tetrabromoethane treated with zinc gives:",
                        {"Ethyne", "Ethene", "Ethane", "Bromoethene"},
                        1
                    };

                    Question Q10 = {
                        "Which is NOT a method to prepare alkynes?",
                        {"Dehydrohalogenation", "Dehydration of diols", "From calcium carbide", "Hydrogenation of alkenes"},
                        4
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 3: // Week 4: Aromatic Hydrocarbons - Benzene Preparation
                {
                    Question Q1 = {
                        "Benzene can be prepared by heating sodium benzoate with:",
                        {"NaOH", "Soda lime (NaOH + CaO)", "CaCO3", "HCl"},
                        2
                    };

                    Question Q2 = {
                        "Decarboxylation of aromatic acids produces:",
                        {"Phenol", "Benzene", "Toluene", "Benzoic acid"},
                        2
                    };

                    Question Q3 = {
                        "What is the main source of benzene in industry?",
                        {"Coal tar", "Petroleum (catalytic reforming)", "Natural gas", "Vegetable oil"},
                        2
                    };

                    Question Q4 = {
                        "Trimerization of ethyne produces:",
                        {"Benzene", "Toluene", "Naphthalene", "Cyclohexane"},
                        1
                    };

                    Question Q5 = {
                        "Which catalyst is used for ethyne trimerization?",
                        {"Fe", "Cu tube at 500°C", "Ni", "Pt"},
                        2
                    };

                    Question Q6 = {
                        "Benzene from coal tar is separated by:",
                        {"Filtration", "Fractional distillation", "Crystallization", "Sublimation"},
                        2
                    };

                    Question Q7 = {
                        "What product forms when phenol is distilled with zinc dust?",
                        {"Cyclohexanol", "Benzene", "Toluene", "Cyclohexane"},
                        2
                    };

                    Question Q8 = {
                        "Diels-Alder reaction can prepare:",
                        {"Benzene derivatives", "Cyclohexene derivatives", "Alkynes", "Alkanes"},
                        1
                    };

                    Question Q9 = {
                        "Which compound undergoes decarboxylation most easily?",
                        {"Aliphatic acid", "Beta-keto acid", "Aromatic acid", "Alpha-hydroxy acid"},
                        2
                    };

                    Question Q10 = {
                        "What is the temperature for soda lime decarboxylation?",
                        {"100°C", "200°C", "300°C", "Above 400°C"},
                        3
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 4: // Week 5: Haloalkanes - Preparation Methods
                {
                    Question Q1 = {
                        "Alkanes react with Cl2 in presence of UV light via:",
                        {"Electrophilic substitution", "Free radical substitution", "Nucleophilic substitution", "Addition"},
                        2
                    };

                    Question Q2 = {
                        "What is the by-product when alcohol reacts with PCl5?",
                        {"HCl", "POCl3 + HCl", "H3PO4", "Cl2"},
                        2
                    };

                    Question Q3 = {
                        "Which reagent converts alcohol to alkyl chloride best for tertiary alcohols?",
                        {"SOCl2", "PCl3", "HCl/ZnCl2 (Lucas reagent)", "PCl5"},
                        3
                    };

                    Question Q4 = {
                        "Addition of HX to alkene follows:",
                        {"Markovnikov's rule", "Anti-Markovnikov", "Zaitsev's rule", "Hofmann's rule"},
                        1
                    };

                    Question Q5 = {
                        "What is the product of propene + HBr (peroxide)?",
                        {"2-bromopropane", "1-bromopropane", "Propane", "Propanol"},
                        2
                    };

                    Question Q6 = {
                        "Finkelstein reaction converts alkyl chloride to alkyl iodide using:",
                        {"NaCl", "NaBr", "NaI in acetone", "NaF"},
                        3
                    };

                    Question Q7 = {
                        "Which halogenation of alkane is most reactive?",
                        {"Fluorination", "Chlorination", "Bromination", "Iodination"},
                        1
                    };

                    Question Q8 = {
                        "Darzens procedure prepares alkyl halides from:",
                        {"Alkenes", "Alcohols", "Ethers", "Aldehydes"},
                        2
                    };

                    Question Q9 = {
                        "What catalyst is used in Swarts reaction?",
                        {"HgF2 or SbF3", "NaOH", "H2SO4", "AlCl3"},
                        1
                    };

                    Question Q10 = {
                        "Hunsdiecker reaction converts silver salt of carboxylic acid to:",
                        {"Alkane", "Alkene", "Alkyl halide", "Alcohol"},
                        3
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 5: // Week 6: Alcohols - Preparation Methods
                {
                    Question Q1 = {
                        "Acid-catalyzed hydration of ethene produces:",
                        {"Ethanol", "Ethanal", "Ethanoic acid", "Ethoxyethane"},
                        1
                    };

                    Question Q2 = {
                        "Which catalyst is used for hydration of alkenes?",
                        {"H2SO4 or H3PO4", "NaOH", "Fe", "Ni"},
                        1
                    };

                    Question Q3 = {
                        "Oxymercuration-demercuration of alkene gives:",
                        {"Markovnikov alcohol without rearrangement", "Anti-Markovnikov alcohol", "Alkane", "Alkene"},
                        1
                    };

                    Question Q4 = {
                        "Hydroboration-oxidation gives:",
                        {"Markovnikov alcohol", "Anti-Markovnikov alcohol", "Alkane", "Ketone"},
                        2
                    };

                    Question Q5 = {
                        "Reduction of aldehyde gives:",
                        {"Primary alcohol", "Secondary alcohol", "Tertiary alcohol", "Carboxylic acid"},
                        1
                    };

                    Question Q6 = {
                        "LiAlH4 reduces carboxylic acids to:",
                        {"Aldehydes", "Primary alcohols", "Ketones", "Esters"},
                        2
                    };

                    Question Q7 = {
                        "Fermentation of glucose produces ethanol and:",
                        {"CO2", "H2O", "O2", "CH4"},
                        1
                    };

                    Question Q8 = {
                        "Grignard reagent + formaldehyde gives:",
                        {"Primary alcohol", "Secondary alcohol", "Tertiary alcohol", "Ketone"},
                        1
                    };

                    Question Q9 = {
                        "Which reducing agent is milder: NaBH4 or LiAlH4?",
                        {"NaBH4", "LiAlH4", "Both equal", "Neither"},
                        1
                    };

                    Question Q10 = {
                        "Bouveault-Blanc reduction uses:",
                        {"Na/liquid NH3", "Na/ethanol", "H2/Pt", "Zn/HCl"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 6: // Week 7: Mixed Revisions and Industrial Methods
                {
                    Question Q1 = {
                        "Wurtz reaction prepares alkanes from:",
                        {"Alkyl halides + Na", "Alkenes + H2", "Alcohols + H2SO4", "Carboxylic acids + NaOH"},
                        1
                    };

                    Question Q2 = {
                        "Friedel-Crafts alkylation uses:",
                        {"Alkyl halide + AlCl3", "Alkene + H2SO4", "Alcohol + PCl5", "Alkyne + NaNH2"},
                        1
                    };

                    Question Q3 = {
                        "Which process increases octane number of gasoline?",
                        {"Cracking", "Reforming", "Polymerization", "Alkylation"},
                        2
                    };

                    Question Q4 = {
                        "Methane can be prepared by:",
                        {"Soda lime decarboxylation", "Kolbe's electrolysis", "Wurtz reaction", "All of the above"},
                        4
                    };

                    Question Q5 = {
                        "Corey-House synthesis prepares:",
                        {"Alkanes", "Alkenes", "Alkynes", "Arenes"},
                        1
                    };

                    Question Q6 = {
                        "Which is NOT a method to prepare methane?",
                        {"Decarboxylation of CH3COONa", "Reduction of CO2", "Hydrolysis of Al4C3", "Dehydration of methanol"},
                        4
                    };

                    Question Q7 = {
                        "Gattermann-Koch reaction prepares:",
                        {"Benzaldehyde", "Toluene", "Phenol", "Benzoic acid"},
                        1
                    };

                    Question Q8 = {
                        "Chloroform reacts with Ag powder to give:",
                        {"C2H6", "C2H4", "C2H2", "C2Cl6"},
                        3
                    };

                    Question Q9 = {
                        "Which hydrocarbon is used in oxy-acetylene torch?",
                        {"Methane", "Ethyne", "Ethene", "Propane"},
                        2
                    };

                    Question Q10 = {
                        "Pyrolysis of sodium succinate gives:",
                        {"Ethane", "Ethene", "Ethyne", "Cyclobutane"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
            }
            break;

        case 2: // PHYSICS - Electromagnetism & Electrostatics
            switch (gameState.week) {
                case 0: // Week 1: Electrostatics - Coulomb's Law & Electric Field
                {
                    Question Q1 = {
                        "Coulomb's law states that force between charges is proportional to:",
                        {"r", "1/r", "1/r^2", "r^2"},
                        3
                    };

                    Question Q2 = {
                        "Two charges +q and -q separated by distance d form a:",
                        {"Monopole", "Dipole", "Quadrupole", "Octupole"},
                        2
                    };

                    Question Q3 = {
                        "Electric field inside a charged conducting sphere is:",
                        {"Maximum", "Zero", "Constant", "Infinite"},
                        2
                    };

                    Question Q4 = {
                        "SI unit of electric flux is:",
                        {"N/C", "V/m", "N m^2/C", "C/m^2"},
                        3
                    };

                    Question Q5 = {
                        "Gauss's law relates electric flux to:",
                        {"Electric potential", "Enclosed charge", "Current", "Resistance"},
                        2
                    };

                    Question Q6 = {
                        "Electric field lines point from:",
                        {"Negative to positive", "Positive to negative", "High potential to low", "Both directions"},
                        2
                    };

                    Question Q7 = {
                        "Permittivity of free space ε0 equals:",
                        {"8.85 × 10^-12 F/m", "9 × 10^9 N m^2/C^2", "4π × 10^-7 H/m", "6.67 × 10^-11 N m^2/kg^2"},
                        1
                    };

                    Question Q8 = {
                        "Force between two charges in medium is reduced by factor of:",
                        {"Dielectric constant K", "K^2", "1/K", "sqrt(K)"},
                        3
                    };

                    Question Q9 = {
                        "Electric potential due to point charge varies as:",
                        {"1/r", "1/r^2", "r", "r^2"},
                        1
                    };

                    Question Q10 = {
                        "Equipotential surfaces for point charge are:",
                        {"Planes", "Spheres", "Cylinders", "Paraboloids"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 1: // Week 2: Capacitors & Dielectrics
                {
                    Question Q1 = {
                        "Capacitance C = Q/V has SI unit:",
                        {"Ohm", "Farad", "Henry", "Tesla"},
                        2
                    };

                    Question Q2 = {
                        "Energy stored in capacitor equals:",
                        {"QV", "QV/2", "Q^2V", "QV^2"},
                        2
                    };

                    Question Q3 = {
                        "Parallel plate capacitor with dielectric: capacitance becomes:",
                        {"C0/K", "C0", "KC0", "K^2C0"},
                        3
                    };

                    Question Q4 = {
                        "Capacitors in series have equivalent capacitance:",
                        {"Sum of all", "Product of all", "Less than smallest", "Greater than largest"},
                        3
                    };

                    Question Q5 = {
                        "Capacitors in parallel have equivalent capacitance:",
                        {"Sum of all", "Reciprocal sum", "Average", "Product"},
                        1
                    };

                    Question Q6 = {
                        "Electric field in dielectric compared to vacuum:",
                        {"Increases", "Decreases", "Same", "Zero"},
                        2
                    };

                    Question Q7 = {
                        "What is the dielectric constant of vacuum?",
                        {"0", "1", "Infinity", "Undefined"},
                        2
                    };

                    Question Q8 = {
                        "Energy density in electric field is proportional to:",
                        {"E", "E^2", "1/E", "sqrt(E)"},
                        2
                    };

                    Question Q9 = {
                        "Time constant τ of RC circuit equals:",
                        {"R/C", "C/R", "RC", "R+C"},
                        3
                    };

                    Question Q10 = {
                        "During capacitor charging, current:",
                        {"Increases exponentially", "Decreases exponentially", "Constant", "Zero instantly"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 2: // Week 3: Electric Current & DC Circuits
                {
                    Question Q1 = {
                        "Ohm's law states V = IR applies to:",
                        {"All conductors", "Ohmic conductors only", "Semiconductors", "Superconductors"},
                        2
                    };

                    Question Q2 = {
                        "Resistivity ρ has units of:",
                        {"Ohm", "Ohm m", "Ohm/m", "m/Ohm"},
                        2
                    };

                    Question Q3 = {
                        "Temperature coefficient of resistance for metals is:",
                        {"Negative", "Positive", "Zero", "Infinite"},
                        2
                    };

                    Question Q4 = {
                        "Kirchhoff's current law is based on:",
                        {"Conservation of energy", "Conservation of charge", "Ohm's law", "Coulomb's law"},
                        2
                    };

                    Question Q5 = {
                        "Kirchhoff's voltage law is based on:",
                        {"Conservation of energy", "Conservation of charge", "Newton's law", "Faraday's law"},
                        1
                    };

                    Question Q6 = {
                        "Wheatstone bridge is balanced when:",
                        {"R1/R2 = R3/R4", "R1+R2 = R3+R4", "R1R2 = R3R4", "R1-R2 = R3-R4"},
                        1
                    };

                    Question Q7 = {
                        "Potentiometer measures:",
                        {"Current", "EMF accurately", "Resistance", "Capacitance"},
                        2
                    };

                    Question Q8 = {
                        "Meter bridge works on principle of:",
                        {"Wheatstone bridge", "Ohm's law", "Kirchhoff's laws", "Joule's law"},
                        1
                    };

                    Question Q9 = {
                        "Internal resistance of cell: terminal voltage < EMF when:",
                        {"Circuit open", "Current flows", "Charging", "Never"},
                        2
                    };

                    Question Q10 = {
                        "Power dissipated in resistor equals:",
                        {"VI", "I^2R", "V^2/R", "All of these"},
                        4
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 3: // Week 4: Magnetic Effects of Current
                {
                    Question Q1 = {
                        "Biot-Savart law gives magnetic field due to:",
                        {"Point charge", "Current element", "Magnet", "Changing electric field"},
                        2
                    };

                    Question Q2 = {
                        "Magnetic field at center of circular loop: B =",
                        {"μ0I/2R", "μ0I/2πR", "μ0I/4πR", "μ0I/R"},
                        1
                    };

                    Question Q3 = {
                        "Ampere's circuital law: ∮B·dl =",
                        {"μ0I_enclosed", "μ0I_total", "0", "Q_enclosed/ε0"},
                        1
                    };

                    Question Q4 = {
                        "Magnetic field inside long solenoid is:",
                        {"Zero", "Uniform and axial", "Radial", "Circular"},
                        2
                    };

                    Question Q5 = {
                        "Force on current-carrying wire: F =",
                        {"ILB", "ILB sinθ", "ILB cosθ", "IL/B"},
                        2
                    };

                    Question Q6 = {
                        "Force between parallel currents: same direction currents:",
                        {"Repel", "Attract", "No force", "Rotate"},
                        2
                    };

                    Question Q7 = {
                        "Torque on current loop in magnetic field: τ =",
                        {"NIAB", "NIAB sinθ", "NIAB cosθ", "NIAB/θ"},
                        2
                    };

                    Question Q8 = {
                        "Moving coil galvanometer works on:",
                        {"Heating effect", "Magnetic torque", "Electromagnetic induction", "Chemical effect"},
                        2
                    };

                    Question Q9 = {
                        "Magnetic moment of current loop: M =",
                        {"IA", "NI/A", "NIA", "IA/N"},
                        3
                    };

                    Question Q10 = {
                        "Cyclotron accelerates:",
                        {"Neutrons", "Charged particles", "Photons", "All particles"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 4: // Week 5: Magnetism & Magnetic Materials
                {
                    Question Q1 = {
                        "SI unit of magnetic field B is:",
                        {"Tesla", "Gauss", "Weber", "Henry"},
                        1
                    };

                    Question Q2 = {
                        "Earth's magnetic field direction is:",
                        {"Geographic N to S", "Geographic S to N", "Horizontal everywhere", "Vertical everywhere"},
                        2
                    };

                    Question Q3 = {
                        "Angle of dip is 0° at:",
                        {"Poles", "Equator", "45° latitude", "Everywhere"},
                        2
                    };

                    Question Q4 = {
                        "Relative permeability of diamagnetic materials:",
                        {">1", "=1", "<1", ">>1"},
                        3
                    };

                    Question Q5 = {
                        "Curie temperature is for:",
                        {"Diamagnetism", "Paramagnetism", "Ferromagnetism", "All types"},
                        3
                    };

                    Question Q6 = {
                        "Magnetic susceptibility χ =",
                        {"M/H", "M×H", "H/M", "M+H"},
                        1
                    };

                    Question Q7 = {
                        "Which is ferromagnetic at room temperature?",
                        {"Aluminum", "Copper", "Iron", "Bismuth"},
                        3
                    };

                    Question Q8 = {
                        "Hysteresis loss is maximum for:",
                        {"Soft iron", "Steel", "Paramagnets", "Diamagnets"},
                        2
                    };

                    Question Q9 = {
                        "Magnetic field intensity H has units of:",
                        {"Tesla", "A/m", "Wb/m^2", "N/A·m"},
                        2
                    };

                    Question Q10 = {
                        "Retentivity refers to:",
                        {"Ease of magnetization", "Residual magnetization", "Loss of magnetism", "Temperature dependence"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 5: // Week 6: Electromagnetic Induction
                {
                    Question Q1 = {
                        "Faraday's law: induced EMF equals:",
                        {"Rate of change of flux", "Flux itself", "Current", "Resistance"},
                        1
                    };

                    Question Q2 = {
                        "Lenz's law is consequence of:",
                        {"Conservation of energy", "Conservation of charge", "Newton's law", "Coulomb's law"},
                        1
                    };

                    Question Q3 = {
                        "Self-inductance L has units of:",
                        {"Farad", "Henry", "Tesla", "Weber"},
                        2
                    };

                    Question Q4 = {
                        "Energy stored in inductor: U =",
                        {"LI", "LI^2/2", "L^2I", "LI^2"},
                        2
                    };

                    Question Q5 = {
                        "Mutual inductance depends on:",
                        {"Current only", "Geometry and medium", "Voltage only", "Resistance only"},
                        2
                    };

                    Question Q6 = {
                        "Eddy currents are reduced by using:",
                        {"Thick metal sheets", "Laminated cores", "Copper only", "Higher frequency"},
                        2
                    };

                    Question Q7 = {
                        "Transformer works on principle of:",
                        {"Self-induction", "Mutual induction", "Electrostatic induction", "Electromagnetic waves"},
                        2
                    };

                    Question Q8 = {
                        "Step-up transformer increases:",
                        {"Current", "Voltage", "Power", "Frequency"},
                        2
                    };

                    Question Q9 = {
                        "In ideal transformer: Vp/Vs =",
                        {"Np×Ns", "Ns/Np", "Np/Ns", "1/(NpNs)"},
                        3
                    };

                    Question Q10 = {
                        "Growth of current in LR circuit follows:",
                        {"Linear", "Exponential", "Oscillatory", "Instantaneous"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 6: // Week 7: AC Circuits & Electromagnetic Waves
                {
                    Question Q1 = {
                        "RMS value of AC: Vrms =",
                        {"V0/2", "V0/sqrt(2)", "V0×sqrt(2)", "2V0"},
                        2
                    };

                    Question Q2 = {
                        "In pure inductor, current _____ voltage by 90°",
                        {"Leads", "Lags", "In phase with", "Opposite to"},
                        2
                    };

                    Question Q3 = {
                        "In pure capacitor, current _____ voltage by 90°",
                        {"Leads", "Lags", "In phase with", "Opposite to"},
                        1
                    };

                    Question Q4 = {
                        "Impedance Z of RLC circuit:",
                        {"R + XL + XC", "sqrt(R^2 + (XL-XC)^2)", "sqrt(R^2 + XL^2 + XC^2)", "R(XL-XC)"},
                        2
                    };

                    Question Q5 = {
                        "Resonant frequency: f0 =",
                        {"1/sqrt(LC)", "sqrt(LC)", "1/(2πsqrt(LC))", "2πsqrt(LC)"},
                        3
                    };

                    Question Q6 = {
                        "Power factor of pure resistor is:",
                        {"0", "0.5", "1", "Infinity"},
                        3
                    };

                    Question Q7 = {
                        "Q-factor measures:",
                        {"Power", "Voltage gain", "Sharpness of resonance", "Current"},
                        3
                    };

                    Question Q8 = {
                        "Wattless current occurs in:",
                        {"Resistor only", "Inductor or capacitor", "All components", "None"},
                        2
                    };

                    Question Q9 = {
                        "Choke coil works on principle of:",
                        {"Resistance", "Self-inductance", "Capacitance", "Mutual inductance"},
                        2
                    };

                    Question Q10 = {
                        "Speed of electromagnetic waves in vacuum:",
                        {"3 × 10^8 m/s", "3 × 10^6 m/s", "3 × 10^10 m/s", "Variable"},
                        1
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
            }
            break;

        case 3: // MATHEMATICS - Terminal-Friendly Topics
            switch (gameState.week) {
                case 0: // Week 1: Number Theory & Divisibility
                {
                    Question Q1 = {
                        "What is the HCF of 144 and 180?",
                        {"12", "18", "36", "72"},
                        3
                    };

                    Question Q2 = {
                        "Find LCM of 15, 25, and 30",
                        {"75", "150", "300", "450"},
                        2
                    };

                    Question Q3 = {
                        "If a ≡ b (mod m), then m divides:",
                        {"a+b", "a-b", "ab", "a/b"},
                        2
                    };

                    Question Q4 = {
                        "Last digit of 7^2024 is:",
                        {"1", "3", "7", "9"},
                        1
                    };

                    Question Q5 = {
                        "How many factors does 72 have?",
                        {"8", "10", "12", "16"},
                        3
                    };

                    Question Q6 = {
                        "Which is NOT a prime number?",
                        {"89", "97", "91", "101"},
                        3
                    };

                    Question Q7 = {
                        "Sum of digits of a number is divisible by 9, then number is divisible by:",
                        {"3 only", "9 only", "Both 3 and 9", "Neither"},
                        3
                    };

                    Question Q8 = {
                        "What is 17^(-1) mod 26? (multiplicative inverse)",
                        {"3", "23", "9", "15"},
                        2
                    };

                    Question Q9 = {
                        "Euler's totient φ(10) equals:",
                        {"4", "5", "6", "10"},
                        1
                    };

                    Question Q10 = {
                        "GCD(a,b) × LCM(a,b) =",
                        {"a+b", "a-b", "ab", "max(a,b)"},
                        3
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 1: // Week 2: Sequences & Series
                {
                    Question Q1 = {
                        "Sum of first n natural numbers:",
                        {"n(n+1)/2", "n^2", "n(n-1)/2", "n(n+1)"},
                        1
                    };

                    Question Q2 = {
                        "Sum of first n odd numbers:",
                        {"n^2", "n(n+1)", "2n^2", "n(n+1)/2"},
                        1
                    };

                    Question Q3 = {
                        "In GP, 5th term is 16 and 2nd term is 2. Common ratio?",
                        {"2", "4", "8", "16"},
                        1
                    };

                    Question Q4 = {
                        "Sum to infinity of 1 + 1/2 + 1/4 + ...",
                        {"1", "2", "3/2", "Infinity"},
                        2
                    };

                    Question Q5 = {
                        "Arithmetic mean of 4 and 16 is:",
                        {"8", "10", "12", "20"},
                        2
                    };

                    Question Q6 = {
                        "Geometric mean of 4 and 16 is:",
                        {"8", "10", "12", "20"},
                        1
                    };

                    Question Q7 = {
                        "Sum of squares of first n natural numbers:",
                        {"n(n+1)(2n+1)/6", "n^2(n+1)^2/4", "n(n+1)/2", "n^3"},
                        1
                    };

                    Question Q8 = {
                        "nth term of AP: 3, 7, 11, 15... is:",
                        {"4n-1", "4n+1", "3n+4", "7n-4"},
                        1
                    };

                    Question Q9 = {
                        "Insert 3 AMs between 2 and 10:",
                        {"4, 6, 8", "3, 5, 7", "5, 6, 7", "4, 5, 6"},
                        1
                    };

                    Question Q10 = {
                        "If Sn = n^2 + 2n, find the 10th term:",
                        {"21", "22", "120", "119"},
                        1
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 2: // Week 3: Combinatorics & Counting
                {
                    Question Q1 = {
                        "How many ways to arrange 6 people in a row?",
                        {"36", "120", "720", "5040"},
                        3
                    };

                    Question Q2 = {
                        "C(8,3) equals:",
                        {"24", "56", "120", "336"},
                        2
                    };

                    Question Q3 = {
                        "How many 4-digit numbers with digits 1-5, no repetition?",
                        {"20", "60", "120", "625"},
                        3
                    };

                    Question Q4 = {
                        "Ways to choose 2 captains from 11 players:",
                        {"22", "55", "110", "121"},
                        2
                    };

                    Question Q5 = {
                        "P(5,2) equals:",
                        {"10", "20", "25", "120"},
                        2
                    };

                    Question Q6 = {
                        "How many diagonals in octagon?",
                        {"8", "16", "20", "24"},
                        3
                    };

                    Question Q7 = {
                        "Coefficient of x^3 in (1+x)^5 is:",
                        {"5", "10", "20", "60"},
                        2
                    };

                    Question Q8 = {
                        "Ways to arrange letters of MATH:",
                        {"4", "12", "24", "256"},
                        3
                    };

                    Question Q9 = {
                        "Circular permutation of 5 people:",
                        {"24", "120", "60", "12"},
                        1
                    };

                    Question Q10 = {
                        "Sum of all binomial coefficients in (1+x)^n:",
                        {"n", "2^n", "n!", "2^(n-1)"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 3: // Week 4: Probability
                {
                    Question Q1 = {
                        "Probability of rolling sum 7 with two dice:",
                        {"1/6", "1/12", "1/9", "7/36"},
                        1
                    };

                    Question Q2 = {
                        "If P(A) = 0.4 and P(B) = 0.5, max P(A∩B) is:",
                        {"0.2", "0.4", "0.5", "0.9"},
                        2
                    };

                    Question Q3 = {
                        "A card drawn from 52-card deck: P(face card) =",
                        {"3/13", "4/13", "1/4", "1/3"},
                        1
                    };

                    Question Q4 = {
                        "Two coins tossed: P(at least one head) =",
                        {"1/4", "1/2", "3/4", "1"},
                        3
                    };

                    Question Q5 = {
                        "If A and B independent, P(A∩B) =",
                        {"P(A)+P(B)", "P(A)×P(B)", "P(A)-P(B)", "P(A)/P(B)"},
                        2
                    };

                    Question Q6 = {
                        "P(A|B) formula:",
                        {"P(A∩B)/P(B)", "P(A∩B)/P(A)", "P(A)/P(B)", "P(B)/P(A)"},
                        1
                    };

                    Question Q7 = {
                        "Expected value of die roll:",
                        {"3", "3.5", "4", "6"},
                        2
                    };

                    Question Q8 = {
                        "P(not A) =",
                        {"1-P(A)", "P(A)-1", "1/P(A)", "P(A)"},
                        1
                    };

                    Question Q9 = {
                        "Bag has 3 red, 5 blue. P(red then blue without replacement):",
                        {"15/56", "15/64", "3/8", "5/14"},
                        1
                    };

                    Question Q10 = {
                        "Birthday problem: P(2 people same birthday in group of 23) ≈",
                        {"0.23", "0.5", "0.75", "0.9"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 4: // Week 5: Logic & Set Theory
                {
                    Question Q1 = {
                        "Negation of 'All cats are black':",
                        {"No cats are black", "Some cats are not black", "All cats are white", "Some cats are black"},
                        2
                    };

                    Question Q2 = {
                        "A ∪ (B ∩ C) equals:",
                        {"(A∪B)∩(A∪C)", "(A∩B)∪(A∩C)", "A∩B∩C", "A∪B∪C"},
                        1
                    };

                    Question Q3 = {
                        "If p→q is false, then:",
                        {"p true, q true", "p true, q false", "p false, q true", "p false, q false"},
                        2
                    };

                    Question Q4 = {
                        "Contrapositive of p→q is:",
                        {"q→p", "~p→~q", "~q→~p", "p↔q"},
                        3
                    };

                    Question Q5 = {
                        "How many subsets of {1,2,3}?",
                        {"3", "6", "8", "9"},
                        3
                    };

                    Question Q6 = {
                        "De Morgan's: ~(A∩B) =",
                        {"~A∩~B", "~A∪~B", "~A∩B", "A∪~B"},
                        2
                    };

                    Question Q7 = {
                        "A Δ B (symmetric difference) equals:",
                        {"(A-B)∪(B-A)", "A∩B", "A∪B", "(A∪B)-(A∩B)"},
                        1
                    };

                    Question Q8 = {
                        "Tautology is statement that is:",
                        {"Always false", "Always true", "Sometimes true", "Meaningless"},
                        2
                    };

                    Question Q9 = {
                        "p∨~p is:",
                        {"Contradiction", "Tautology", "Contingency", "Fallacy"},
                        2
                    };

                    Question Q10 = {
                        "If |A|=5, |B|=3, |A∩B|=1, then |A∪B|=",
                        {"7", "8", "9", "15"},
                        1
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 5: // Week 6: Matrices & Determinants (Text-Friendly)
                {
                    Question Q1 = {
                        "If A is 2x3 and B is 3x4, AB is:",
                        {"2x3", "3x4", "2x4", "Not defined"},
                        3
                    };

                    Question Q2 = {
                        "Determinant of [[1,2],[3,4]] is:",
                        {"-2", "2", "10", "-10"},
                        1
                    };

                    Question Q3 = {
                        "If A^2 = I, then A is:",
                        {"Zero matrix", "Identity matrix", "Involutory", "Singular"},
                        3
                    };

                    Question Q4 = {
                        "Trace of [[2,5],[1,3]] equals:",
                        {"5", "6", "1", "11"},
                        1
                    };

                    Question Q5 = {
                        "If det(A) = 5, then det(2A) for 2x2 matrix:",
                        {"10", "20", "25", "40"},
                        2
                    };

                    Question Q6 = {
                        "A matrix with all diagonal entries 1, rest 0 is:",
                        {"Null matrix", "Scalar matrix", "Identity matrix", "Diagonal matrix"},
                        3
                    };

                    Question Q7 = {
                        "If AB = 0, then:",
                        {"A=0 or B=0", "A=0 and B=0", "Either may be non-zero", "det(A)=0"},
                        3
                    };

                    Question Q8 = {
                        "Inverse of [[2,0],[0,3]] is:",
                        {"[[1/2,0],[0,1/3]]", "[[3,0],[0,2]]", "[[-2,0],[0,-3]]", "No inverse"},
                        1
                    };

                    Question Q9 = {
                        "Rank of zero matrix is:",
                        {"0", "1", "Undefined", "Infinite"},
                        1
                    };

                    Question Q10 = {
                        "If A is symmetric, A^T equals:",
                        {"-A", "A", "A^(-1)", "I"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 6: // Week 7: Complex Numbers (Text-Friendly)
                {
                    Question Q1 = {
                        "i^2024 equals:",
                        {"1", "-1", "i", "-i"},
                        1
                    };

                    Question Q2 = {
                        "Modulus of 3+4i is:",
                        {"3", "4", "5", "7"},
                        3
                    };

                    Question Q3 = {
                        "Conjugate of 2-5i is:",
                        {"2+5i", "-2+5i", "-2-5i", "2-5i"},
                        1
                    };

                    Question Q4 = {
                        "If z = 1+i, then z^2 =",
                        {"2i", "2", "1+2i", "0"},
                        1
                    };

                    Question Q5 = {
                        "Argument of -1+i is:",
                        {"π/4", "3π/4", "-π/4", "-3π/4"},
                        2
                    };

                    Question Q6 = {
                        "Multiplicative inverse of i is:",
                        {"1", "-1", "i", "-i"},
                        4
                    };

                    Question Q7 = {
                        "Real part of (3+2i)(1-i) is:",
                        {"5", "1", "3", "-1"},
                        1
                    };

                    Question Q8 = {
                        "|z1 × z2| equals:",
                        {"|z1|+|z2|", "|z1|×|z2|", "|z1|-|z2|", "|z1|/|z2|"},
                        2
                    };

                    Question Q9 = {
                        "Cube roots of unity sum to:",
                        {"0", "1", "-1", "3"},
                        1
                    };

                    Question Q10 = {
                        "If |z-1| = |z+1|, then z lies on:",
                        {"Real axis", "Imaginary axis", "Circle", "Parabola"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
            }
            break;

        case 4: // JATI DIRI - Personal Development & Self-Awareness
            switch (gameState.week) {
                case 1: // Week 2: Self-Esteem & Confidence Building
                {
                    Question Q1 = {
                        "Which is a sign of healthy self-esteem?",
                        {"Needing constant approval from others", "Accepting compliments gracefully", "Comparing yourself negatively to others", "Fearing feedback"},
                        2
                    };

                    Question Q2 = {
                        "Self-confidence is best built through:",
                        {"Avoiding all challenges", "Setting and achieving small goals", "Waiting for others to motivate you", "Focusing only on weaknesses"},
                        2
                    };

                    Question Q3 = {
                        "Imposter syndrome refers to:",
                        {"A medical condition", "Feeling like a fraud despite evidence of competence", "Lack of intelligence", "Inability to learn"},
                        2
                    };

                    Question Q4 = {
                        "To overcome self-doubt, you should:",
                        {"Ignore all criticism", "Reflect on past successes and realistic self-assessment", "Never try new things", "Compare yourself to others constantly"},
                        2
                    };

                    Question Q5 = {
                        "A person with low self-esteem might:",
                        {"Accept unhealthy treatment from others", "Set healthy boundaries", "Recognize their worth", "Celebrate their achievements"},
                        1
                    };

                    Question Q6 = {
                        "Affirmations work best when they are:",
                        {"Negative and realistic", "Positive and believable to you", "About others", "Impossible to achieve"},
                        2
                    };

                    Question Q7 = {
                        "Comparing yourself to others' highlight reel on social media leads to:",
                        {"Increased motivation", "Unrealistic expectations and low self-worth", "Better perspective", "Healthier self-image"},
                        2
                    };

                    Question Q8 = {
                        "True confidence means:",
                        {"Never feeling afraid", "Acting despite fear while acknowledging limitations", "Being better than everyone", "Needing no support"},
                        2
                    };

                    Question Q9 = {
                        "The 'footprint' model of confidence suggests confidence is built by:",
                        {"Avoiding mistakes", "Making footprints through experiences, even mistakes", "Staying in comfort zone", "Waiting for perfect conditions"},
                        2
                    };

                    Question Q10 = {
                        "To maintain healthy self-esteem, you should:",
                        {"Ignore your weaknesses", "Accept both strengths and weaknesses realistically", "Focus only on weaknesses", "Never admit mistakes"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 2: // Week 3: Goal Setting & Motivation
                {
                    Question Q1 = {
                        "SMART goals are:",
                        {"Simple, Meaningful, Actionable, Realistic, Timely", "Specific, Measurable, Achievable, Relevant, Time-bound", "Straightforward, Mandatory, Assigned, Reasonable, Tracked", "Small, Manageable, Aligned, Resourced, Tested"},
                        2
                    };

                    Question Q2 = {
                        "Intrinsic motivation comes from:",
                        {"External rewards like money", "Internal satisfaction and personal values", "Pressure from others", "Fear of failure"},
                        2
                    };

                    Question Q3 = {
                        "When you fail to meet a goal, the best response is to:",
                        {"Give up completely", "Analyze what went wrong and adjust", "Blame external factors", "Set the same goal higher"},
                        2
                    };

                    Question Q4 = {
                        "Short-term goals are important because they:",
                        {"Replace long-term goals", "Provide immediate feedback and momentum", "Are easier to ignore", "Require less effort"},
                        2
                    };

                    Question Q5 = {
                        "Which is NOT a characteristic of effective goals?",
                        {"Clearly defined", "Has a deadline", "Impossible to achieve", "Aligns with your values"},
                        3
                    };

                    Question Q6 = {
                        "Motivation that comes from external factors is called:",
                        {"Intrinsic motivation", "Extrinsic motivation", "Self-motivation", "Natural motivation"},
                        2
                    };

                    Question Q7 = {
                        "When setting goals, visualizing success should involve:",
                        {"Ignoring potential obstacles", "Detailed mental rehearsal including overcoming challenges", "Only thinking about rewards", "Daydreaming without planning"},
                        2
                    };

                    Question Q8 = {
                        "The 'why' behind your goal provides:",
                        {"Excuses for failure", "Sustained motivation during difficult times", "Reasons to quit early", "Permission to procrastinate"},
                        2
                    };

                    Question Q9 = {
                        "Breaking a big goal into smaller steps helps by:",
                        {"Making it more overwhelming", "Creating achievable milestones and reducing overwhelm", "Removing the need for effort", "Eliminating feedback"},
                        2
                    };

                    Question Q10 = {
                        "Accountability to others can help achieve goals by:",
                        {"Creating unnecessary pressure", "Providing external support and commitment", "Reducing personal responsibility", "Making goals less important"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 3: // Week 4: Emotional Intelligence
                {
                    Question Q1 = {
                        "Emotional intelligence primarily involves:",
                        {"Ignoring emotions", "Understanding and managing your own and others' emotions", "Suppressing all feelings", "Only focusing on logic"},
                        2
                    };

                    Question Q2 = {
                        "When you feel strong emotions, the first step should be to:",
                        {"Act immediately", "Pause and identify what you're feeling", "Share on social media", "Bottle it up"},
                        2
                    };

                    Question Q3 = {
                        "Empathy is the ability to:",
                        {"Agree with everyone", "Understand and share others' feelings", "Never be influenced by others", "Avoid emotional situations"},
                        2
                    };

                    Question Q4 = {
                        "Self-awareness helps you by:",
                        {"Making you perfect", "Recognizing your emotional patterns and triggers", "Eliminating all problems", "Reading others' minds"},
                        2
                    };

                    Question Q5 = {
                        "A person with high emotional intelligence would:",
                        {"Never get upset", "Listen to understand rather than respond", "Manipulate others", "Ignore conflict"},
                        2
                    };

                    Question Q6 = {
                        "Regulating emotions effectively means:",
                        {"Never feeling strong emotions", "Expressing emotions appropriately", "Suppressing all feelings", "Letting emotions control actions"},
                        2
                    };

                    Question Q7 = {
                        "Non-verbal communication accounts for what percentage of communication?",
                        {"About 10%", "Over 50%", "Only 5%", "Exactly 25%"},
                        2
                    };

                    Question Q8 = {
                        "When someone is upset, the best response is often to:",
                        {"Tell them to calm down", "Validate their feelings first", "Immediately offer solutions", "Change the subject"},
                        2
                    };

                    Question Q9 = {
                        "Emotional resilience is the ability to:",
                        {"Avoid all stress", "Bounce back from adversity while learning", "Never feel pain", "Isolate yourself from others"},
                        2
                    };

                    Question Q10 = {
                        "Mindfulness helps emotional intelligence by:",
                        {"Distracting from emotions", "Increasing present-moment awareness", "Eliminating all thoughts", "Making you less aware"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 4: // Week 5: Stress Management & Well-being
                {
                    Question Q1 = {
                        "Chronic stress can lead to:",
                        {"Better performance", "Physical and mental health issues", "Improved relationships", "Increased creativity"},
                        2
                    };

                    Question Q2 = {
                        "The fight-or-flight response is:",
                        {"Always helpful", "An ancient survival mechanism sometimes triggered inappropriately", "A modern response", "Something to always follow"},
                        2
                    };

                    Question Q3 = {
                        "A healthy way to cope with stress includes:",
                        {"Overeating", "Exercise and talking to someone", "Drinking heavily", "Procrastinating"},
                        2
                    };

                    Question Q4 = {
                        "Time management helps reduce stress by:",
                        {"Adding more tasks", "Providing control over responsibilities", "Creating pressure", "Eliminating all deadlines"},
                        2
                    };

                    Question Q5 = {
                        "Burnout is characterized by:",
                        {"High motivation", "Exhaustion, cynicism, and reduced effectiveness", "Increased productivity", "Feeling energized"},
                        2
                    };

                    Question Q6 = {
                        "Setting boundaries with others reduces stress by:",
                        {"Creating conflict", "Protecting your time and energy", "Making you unpopular", "Eliminating all relationships"},
                        2
                    };

                    Question Q7 = {
                        "Physical exercise helps with stress by:",
                        {"Increasing cortisol levels", "Releasing endorphins and reducing stress hormones", "Making you more tired", "Wasting time"},
                        2
                    };

                    Question Q8 = {
                        "Poor sleep quality due to stress can cause:",
                        {"Better decision making", "Impaired concentration and mood problems", "Enhanced memory", "More energy"},
                        2
                    };

                    Question Q9 = {
                        "A stress journal helps by:",
                        {"Making stress worse", "Identifying patterns and triggers", "Wasting time", "Creating more anxiety"},
                        2
                    };

                    Question Q10 = {
                        "Work-life balance is important because:",
                        {"Work is unimportant", "It prevents burnout and maintains overall well-being", "Life should always come second", "Balance is impossible to achieve"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 5: // Week 6: Relationships & Communication
                {
                    Question Q1 = {
                        "Active listening means:",
                        {"Thinking about your response while others speak", "Fully concentrating on understanding before replying", "Interrupting with solutions", "Multitasking during conversation"},
                        2
                    };

                    Question Q2 = {
                        "The best way to resolve conflict is through:",
                        {"Avoidance", "Open communication and compromise", "Winning at all costs", "Giving up your needs"},
                        2
                    };

                    Question Q3 = {
                        "Saying 'I feel...' instead of 'You always...' helps communication by:",
                        {"Making the other person defensive", "Taking responsibility for your emotions", "Accusing others", "Ending conversations"},
                        2
                    };

                    Question Q4 = {
                        "Healthy relationships are characterized by:",
                        {"Control and dependency", "Mutual respect and boundaries", "One person giving more", "Silence and avoidance"},
                        2
                    };

                    Question Q5 = {
                        "When receiving feedback, you should:",
                        {"Get defensive immediately", "Listen, reflect, and ask clarifying questions", "Reject all criticism", "Ignore the feedback"},
                        2
                    };

                    Question Q6 = {
                        "Nonviolent communication focuses on:",
                        {"Winning the argument", "Expressing needs without blaming", "Manipulating others", "Avoiding all confrontation"},
                        2
                    };

                    Question Q7 = {
                        "Trust in relationships is built through:",
                        {"Broken promises", "Consistency between words and actions over time", "Telling people what they want to hear", "Keeping secrets"},
                        2
                    };

                    Question Q8 = {
                        "Setting boundaries means:",
                        {"Pushing everyone away", "Communicating your limits clearly", "Being selfish", "Never helping others"},
                        2
                    };

                    Question Q9 = {
                        "A sign of a toxic relationship is:",
                        {"Occasional disagreements", "Constant criticism and control", "Respecting personal space", "Open communication"},
                        2
                    };

                    Question Q10 = {
                        "The 'love language' concept suggests people prefer to:",
                        {"Receive love in different ways", "All be loved the same way", "Never discuss feelings", "Only receive gifts"},
                        1
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
                case 6: // Week 7: Growth Mindset & Resilience
                {
                    Question Q1 = {
                        "A fixed mindset believes that:",
                        {"Abilities can be developed", "Intelligence and talents are static", "Effort always leads to success", "Challenges are opportunities"},
                        2
                    };

                    Question Q2 = {
                        "A growth mindset leads to:",
                        {"Fear of failure", "Embracing challenges and learning from criticism", "Avoiding effort", "Giving up easily"},
                        2
                    };

                    Question Q3 = {
                        "Resilience is the ability to:",
                        {"Never experience difficulty", "Recover from setbacks and adapt positively", "Avoid all stress", "Be unaffected by challenges"},
                        2
                    };

                    Question Q4 = {
                        "When facing failure, those with growth mindset:",
                        {"Make excuses", "See it as a learning opportunity", "Give up permanently", "Blame others"},
                        2
                    };

                    Question Q5 = {
                        "A resilient person would:",
                        {"Wait for problems to solve themselves", "Develop coping strategies and seek support when needed", "Never ask for help", "Avoid all difficult situations"},
                        2
                    };

                    Question Q6 = {
                        "Post-traumatic growth refers to:",
                        {"Guaranteed trauma", "Positive psychological changes after adversity", "Only physical recovery", "Avoiding all risks"},
                        2
                    };

                    Question Q7 = {
                        "Optimism as a skill can be developed by:",
                        {"Ignoring problems", "Challenging negative thoughts and focusing on solutions", "Being unrealistic", "Never planning"},
                        2
                    };

                    Question Q8 = {
                        "Self-compassion involves:",
                        {"Being harsh with yourself", "Treating yourself with the same kindness as a friend", "Never making mistakes", "Comparing yourself to others"},
                        2
                    };

                    Question Q9 = {
                        "Adaptability helps resilience by:",
                        {"Rigid adherence to plans", "Adjusting to new circumstances flexibly", "Refusing to change", "Avoiding new experiences"},
                        2
                    };

                    Question Q10 = {
                        "The statement 'I can't do this' reflects a:",
                        {"Growth mindset", "Fixed mindset", "Resilient attitude", "Learned optimism"},
                        2
                    };
                    Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                    return questions;
                    break;
                }
            }
            break;
    }
    Question *questions = new Question[10];
    return questions;
}
