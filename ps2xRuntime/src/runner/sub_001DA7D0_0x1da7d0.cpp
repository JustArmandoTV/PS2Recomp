#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA7D0
// Address: 0x1da7d0 - 0x1dc2b0
void sub_001DA7D0_0x1da7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA7D0_0x1da7d0");
#endif

    switch (ctx->pc) {
        case 0x1da7d0u: goto label_1da7d0;
        case 0x1da7d4u: goto label_1da7d4;
        case 0x1da7d8u: goto label_1da7d8;
        case 0x1da7dcu: goto label_1da7dc;
        case 0x1da7e0u: goto label_1da7e0;
        case 0x1da7e4u: goto label_1da7e4;
        case 0x1da7e8u: goto label_1da7e8;
        case 0x1da7ecu: goto label_1da7ec;
        case 0x1da7f0u: goto label_1da7f0;
        case 0x1da7f4u: goto label_1da7f4;
        case 0x1da7f8u: goto label_1da7f8;
        case 0x1da7fcu: goto label_1da7fc;
        case 0x1da800u: goto label_1da800;
        case 0x1da804u: goto label_1da804;
        case 0x1da808u: goto label_1da808;
        case 0x1da80cu: goto label_1da80c;
        case 0x1da810u: goto label_1da810;
        case 0x1da814u: goto label_1da814;
        case 0x1da818u: goto label_1da818;
        case 0x1da81cu: goto label_1da81c;
        case 0x1da820u: goto label_1da820;
        case 0x1da824u: goto label_1da824;
        case 0x1da828u: goto label_1da828;
        case 0x1da82cu: goto label_1da82c;
        case 0x1da830u: goto label_1da830;
        case 0x1da834u: goto label_1da834;
        case 0x1da838u: goto label_1da838;
        case 0x1da83cu: goto label_1da83c;
        case 0x1da840u: goto label_1da840;
        case 0x1da844u: goto label_1da844;
        case 0x1da848u: goto label_1da848;
        case 0x1da84cu: goto label_1da84c;
        case 0x1da850u: goto label_1da850;
        case 0x1da854u: goto label_1da854;
        case 0x1da858u: goto label_1da858;
        case 0x1da85cu: goto label_1da85c;
        case 0x1da860u: goto label_1da860;
        case 0x1da864u: goto label_1da864;
        case 0x1da868u: goto label_1da868;
        case 0x1da86cu: goto label_1da86c;
        case 0x1da870u: goto label_1da870;
        case 0x1da874u: goto label_1da874;
        case 0x1da878u: goto label_1da878;
        case 0x1da87cu: goto label_1da87c;
        case 0x1da880u: goto label_1da880;
        case 0x1da884u: goto label_1da884;
        case 0x1da888u: goto label_1da888;
        case 0x1da88cu: goto label_1da88c;
        case 0x1da890u: goto label_1da890;
        case 0x1da894u: goto label_1da894;
        case 0x1da898u: goto label_1da898;
        case 0x1da89cu: goto label_1da89c;
        case 0x1da8a0u: goto label_1da8a0;
        case 0x1da8a4u: goto label_1da8a4;
        case 0x1da8a8u: goto label_1da8a8;
        case 0x1da8acu: goto label_1da8ac;
        case 0x1da8b0u: goto label_1da8b0;
        case 0x1da8b4u: goto label_1da8b4;
        case 0x1da8b8u: goto label_1da8b8;
        case 0x1da8bcu: goto label_1da8bc;
        case 0x1da8c0u: goto label_1da8c0;
        case 0x1da8c4u: goto label_1da8c4;
        case 0x1da8c8u: goto label_1da8c8;
        case 0x1da8ccu: goto label_1da8cc;
        case 0x1da8d0u: goto label_1da8d0;
        case 0x1da8d4u: goto label_1da8d4;
        case 0x1da8d8u: goto label_1da8d8;
        case 0x1da8dcu: goto label_1da8dc;
        case 0x1da8e0u: goto label_1da8e0;
        case 0x1da8e4u: goto label_1da8e4;
        case 0x1da8e8u: goto label_1da8e8;
        case 0x1da8ecu: goto label_1da8ec;
        case 0x1da8f0u: goto label_1da8f0;
        case 0x1da8f4u: goto label_1da8f4;
        case 0x1da8f8u: goto label_1da8f8;
        case 0x1da8fcu: goto label_1da8fc;
        case 0x1da900u: goto label_1da900;
        case 0x1da904u: goto label_1da904;
        case 0x1da908u: goto label_1da908;
        case 0x1da90cu: goto label_1da90c;
        case 0x1da910u: goto label_1da910;
        case 0x1da914u: goto label_1da914;
        case 0x1da918u: goto label_1da918;
        case 0x1da91cu: goto label_1da91c;
        case 0x1da920u: goto label_1da920;
        case 0x1da924u: goto label_1da924;
        case 0x1da928u: goto label_1da928;
        case 0x1da92cu: goto label_1da92c;
        case 0x1da930u: goto label_1da930;
        case 0x1da934u: goto label_1da934;
        case 0x1da938u: goto label_1da938;
        case 0x1da93cu: goto label_1da93c;
        case 0x1da940u: goto label_1da940;
        case 0x1da944u: goto label_1da944;
        case 0x1da948u: goto label_1da948;
        case 0x1da94cu: goto label_1da94c;
        case 0x1da950u: goto label_1da950;
        case 0x1da954u: goto label_1da954;
        case 0x1da958u: goto label_1da958;
        case 0x1da95cu: goto label_1da95c;
        case 0x1da960u: goto label_1da960;
        case 0x1da964u: goto label_1da964;
        case 0x1da968u: goto label_1da968;
        case 0x1da96cu: goto label_1da96c;
        case 0x1da970u: goto label_1da970;
        case 0x1da974u: goto label_1da974;
        case 0x1da978u: goto label_1da978;
        case 0x1da97cu: goto label_1da97c;
        case 0x1da980u: goto label_1da980;
        case 0x1da984u: goto label_1da984;
        case 0x1da988u: goto label_1da988;
        case 0x1da98cu: goto label_1da98c;
        case 0x1da990u: goto label_1da990;
        case 0x1da994u: goto label_1da994;
        case 0x1da998u: goto label_1da998;
        case 0x1da99cu: goto label_1da99c;
        case 0x1da9a0u: goto label_1da9a0;
        case 0x1da9a4u: goto label_1da9a4;
        case 0x1da9a8u: goto label_1da9a8;
        case 0x1da9acu: goto label_1da9ac;
        case 0x1da9b0u: goto label_1da9b0;
        case 0x1da9b4u: goto label_1da9b4;
        case 0x1da9b8u: goto label_1da9b8;
        case 0x1da9bcu: goto label_1da9bc;
        case 0x1da9c0u: goto label_1da9c0;
        case 0x1da9c4u: goto label_1da9c4;
        case 0x1da9c8u: goto label_1da9c8;
        case 0x1da9ccu: goto label_1da9cc;
        case 0x1da9d0u: goto label_1da9d0;
        case 0x1da9d4u: goto label_1da9d4;
        case 0x1da9d8u: goto label_1da9d8;
        case 0x1da9dcu: goto label_1da9dc;
        case 0x1da9e0u: goto label_1da9e0;
        case 0x1da9e4u: goto label_1da9e4;
        case 0x1da9e8u: goto label_1da9e8;
        case 0x1da9ecu: goto label_1da9ec;
        case 0x1da9f0u: goto label_1da9f0;
        case 0x1da9f4u: goto label_1da9f4;
        case 0x1da9f8u: goto label_1da9f8;
        case 0x1da9fcu: goto label_1da9fc;
        case 0x1daa00u: goto label_1daa00;
        case 0x1daa04u: goto label_1daa04;
        case 0x1daa08u: goto label_1daa08;
        case 0x1daa0cu: goto label_1daa0c;
        case 0x1daa10u: goto label_1daa10;
        case 0x1daa14u: goto label_1daa14;
        case 0x1daa18u: goto label_1daa18;
        case 0x1daa1cu: goto label_1daa1c;
        case 0x1daa20u: goto label_1daa20;
        case 0x1daa24u: goto label_1daa24;
        case 0x1daa28u: goto label_1daa28;
        case 0x1daa2cu: goto label_1daa2c;
        case 0x1daa30u: goto label_1daa30;
        case 0x1daa34u: goto label_1daa34;
        case 0x1daa38u: goto label_1daa38;
        case 0x1daa3cu: goto label_1daa3c;
        case 0x1daa40u: goto label_1daa40;
        case 0x1daa44u: goto label_1daa44;
        case 0x1daa48u: goto label_1daa48;
        case 0x1daa4cu: goto label_1daa4c;
        case 0x1daa50u: goto label_1daa50;
        case 0x1daa54u: goto label_1daa54;
        case 0x1daa58u: goto label_1daa58;
        case 0x1daa5cu: goto label_1daa5c;
        case 0x1daa60u: goto label_1daa60;
        case 0x1daa64u: goto label_1daa64;
        case 0x1daa68u: goto label_1daa68;
        case 0x1daa6cu: goto label_1daa6c;
        case 0x1daa70u: goto label_1daa70;
        case 0x1daa74u: goto label_1daa74;
        case 0x1daa78u: goto label_1daa78;
        case 0x1daa7cu: goto label_1daa7c;
        case 0x1daa80u: goto label_1daa80;
        case 0x1daa84u: goto label_1daa84;
        case 0x1daa88u: goto label_1daa88;
        case 0x1daa8cu: goto label_1daa8c;
        case 0x1daa90u: goto label_1daa90;
        case 0x1daa94u: goto label_1daa94;
        case 0x1daa98u: goto label_1daa98;
        case 0x1daa9cu: goto label_1daa9c;
        case 0x1daaa0u: goto label_1daaa0;
        case 0x1daaa4u: goto label_1daaa4;
        case 0x1daaa8u: goto label_1daaa8;
        case 0x1daaacu: goto label_1daaac;
        case 0x1daab0u: goto label_1daab0;
        case 0x1daab4u: goto label_1daab4;
        case 0x1daab8u: goto label_1daab8;
        case 0x1daabcu: goto label_1daabc;
        case 0x1daac0u: goto label_1daac0;
        case 0x1daac4u: goto label_1daac4;
        case 0x1daac8u: goto label_1daac8;
        case 0x1daaccu: goto label_1daacc;
        case 0x1daad0u: goto label_1daad0;
        case 0x1daad4u: goto label_1daad4;
        case 0x1daad8u: goto label_1daad8;
        case 0x1daadcu: goto label_1daadc;
        case 0x1daae0u: goto label_1daae0;
        case 0x1daae4u: goto label_1daae4;
        case 0x1daae8u: goto label_1daae8;
        case 0x1daaecu: goto label_1daaec;
        case 0x1daaf0u: goto label_1daaf0;
        case 0x1daaf4u: goto label_1daaf4;
        case 0x1daaf8u: goto label_1daaf8;
        case 0x1daafcu: goto label_1daafc;
        case 0x1dab00u: goto label_1dab00;
        case 0x1dab04u: goto label_1dab04;
        case 0x1dab08u: goto label_1dab08;
        case 0x1dab0cu: goto label_1dab0c;
        case 0x1dab10u: goto label_1dab10;
        case 0x1dab14u: goto label_1dab14;
        case 0x1dab18u: goto label_1dab18;
        case 0x1dab1cu: goto label_1dab1c;
        case 0x1dab20u: goto label_1dab20;
        case 0x1dab24u: goto label_1dab24;
        case 0x1dab28u: goto label_1dab28;
        case 0x1dab2cu: goto label_1dab2c;
        case 0x1dab30u: goto label_1dab30;
        case 0x1dab34u: goto label_1dab34;
        case 0x1dab38u: goto label_1dab38;
        case 0x1dab3cu: goto label_1dab3c;
        case 0x1dab40u: goto label_1dab40;
        case 0x1dab44u: goto label_1dab44;
        case 0x1dab48u: goto label_1dab48;
        case 0x1dab4cu: goto label_1dab4c;
        case 0x1dab50u: goto label_1dab50;
        case 0x1dab54u: goto label_1dab54;
        case 0x1dab58u: goto label_1dab58;
        case 0x1dab5cu: goto label_1dab5c;
        case 0x1dab60u: goto label_1dab60;
        case 0x1dab64u: goto label_1dab64;
        case 0x1dab68u: goto label_1dab68;
        case 0x1dab6cu: goto label_1dab6c;
        case 0x1dab70u: goto label_1dab70;
        case 0x1dab74u: goto label_1dab74;
        case 0x1dab78u: goto label_1dab78;
        case 0x1dab7cu: goto label_1dab7c;
        case 0x1dab80u: goto label_1dab80;
        case 0x1dab84u: goto label_1dab84;
        case 0x1dab88u: goto label_1dab88;
        case 0x1dab8cu: goto label_1dab8c;
        case 0x1dab90u: goto label_1dab90;
        case 0x1dab94u: goto label_1dab94;
        case 0x1dab98u: goto label_1dab98;
        case 0x1dab9cu: goto label_1dab9c;
        case 0x1daba0u: goto label_1daba0;
        case 0x1daba4u: goto label_1daba4;
        case 0x1daba8u: goto label_1daba8;
        case 0x1dabacu: goto label_1dabac;
        case 0x1dabb0u: goto label_1dabb0;
        case 0x1dabb4u: goto label_1dabb4;
        case 0x1dabb8u: goto label_1dabb8;
        case 0x1dabbcu: goto label_1dabbc;
        case 0x1dabc0u: goto label_1dabc0;
        case 0x1dabc4u: goto label_1dabc4;
        case 0x1dabc8u: goto label_1dabc8;
        case 0x1dabccu: goto label_1dabcc;
        case 0x1dabd0u: goto label_1dabd0;
        case 0x1dabd4u: goto label_1dabd4;
        case 0x1dabd8u: goto label_1dabd8;
        case 0x1dabdcu: goto label_1dabdc;
        case 0x1dabe0u: goto label_1dabe0;
        case 0x1dabe4u: goto label_1dabe4;
        case 0x1dabe8u: goto label_1dabe8;
        case 0x1dabecu: goto label_1dabec;
        case 0x1dabf0u: goto label_1dabf0;
        case 0x1dabf4u: goto label_1dabf4;
        case 0x1dabf8u: goto label_1dabf8;
        case 0x1dabfcu: goto label_1dabfc;
        case 0x1dac00u: goto label_1dac00;
        case 0x1dac04u: goto label_1dac04;
        case 0x1dac08u: goto label_1dac08;
        case 0x1dac0cu: goto label_1dac0c;
        case 0x1dac10u: goto label_1dac10;
        case 0x1dac14u: goto label_1dac14;
        case 0x1dac18u: goto label_1dac18;
        case 0x1dac1cu: goto label_1dac1c;
        case 0x1dac20u: goto label_1dac20;
        case 0x1dac24u: goto label_1dac24;
        case 0x1dac28u: goto label_1dac28;
        case 0x1dac2cu: goto label_1dac2c;
        case 0x1dac30u: goto label_1dac30;
        case 0x1dac34u: goto label_1dac34;
        case 0x1dac38u: goto label_1dac38;
        case 0x1dac3cu: goto label_1dac3c;
        case 0x1dac40u: goto label_1dac40;
        case 0x1dac44u: goto label_1dac44;
        case 0x1dac48u: goto label_1dac48;
        case 0x1dac4cu: goto label_1dac4c;
        case 0x1dac50u: goto label_1dac50;
        case 0x1dac54u: goto label_1dac54;
        case 0x1dac58u: goto label_1dac58;
        case 0x1dac5cu: goto label_1dac5c;
        case 0x1dac60u: goto label_1dac60;
        case 0x1dac64u: goto label_1dac64;
        case 0x1dac68u: goto label_1dac68;
        case 0x1dac6cu: goto label_1dac6c;
        case 0x1dac70u: goto label_1dac70;
        case 0x1dac74u: goto label_1dac74;
        case 0x1dac78u: goto label_1dac78;
        case 0x1dac7cu: goto label_1dac7c;
        case 0x1dac80u: goto label_1dac80;
        case 0x1dac84u: goto label_1dac84;
        case 0x1dac88u: goto label_1dac88;
        case 0x1dac8cu: goto label_1dac8c;
        case 0x1dac90u: goto label_1dac90;
        case 0x1dac94u: goto label_1dac94;
        case 0x1dac98u: goto label_1dac98;
        case 0x1dac9cu: goto label_1dac9c;
        case 0x1daca0u: goto label_1daca0;
        case 0x1daca4u: goto label_1daca4;
        case 0x1daca8u: goto label_1daca8;
        case 0x1dacacu: goto label_1dacac;
        case 0x1dacb0u: goto label_1dacb0;
        case 0x1dacb4u: goto label_1dacb4;
        case 0x1dacb8u: goto label_1dacb8;
        case 0x1dacbcu: goto label_1dacbc;
        case 0x1dacc0u: goto label_1dacc0;
        case 0x1dacc4u: goto label_1dacc4;
        case 0x1dacc8u: goto label_1dacc8;
        case 0x1dacccu: goto label_1daccc;
        case 0x1dacd0u: goto label_1dacd0;
        case 0x1dacd4u: goto label_1dacd4;
        case 0x1dacd8u: goto label_1dacd8;
        case 0x1dacdcu: goto label_1dacdc;
        case 0x1dace0u: goto label_1dace0;
        case 0x1dace4u: goto label_1dace4;
        case 0x1dace8u: goto label_1dace8;
        case 0x1dacecu: goto label_1dacec;
        case 0x1dacf0u: goto label_1dacf0;
        case 0x1dacf4u: goto label_1dacf4;
        case 0x1dacf8u: goto label_1dacf8;
        case 0x1dacfcu: goto label_1dacfc;
        case 0x1dad00u: goto label_1dad00;
        case 0x1dad04u: goto label_1dad04;
        case 0x1dad08u: goto label_1dad08;
        case 0x1dad0cu: goto label_1dad0c;
        case 0x1dad10u: goto label_1dad10;
        case 0x1dad14u: goto label_1dad14;
        case 0x1dad18u: goto label_1dad18;
        case 0x1dad1cu: goto label_1dad1c;
        case 0x1dad20u: goto label_1dad20;
        case 0x1dad24u: goto label_1dad24;
        case 0x1dad28u: goto label_1dad28;
        case 0x1dad2cu: goto label_1dad2c;
        case 0x1dad30u: goto label_1dad30;
        case 0x1dad34u: goto label_1dad34;
        case 0x1dad38u: goto label_1dad38;
        case 0x1dad3cu: goto label_1dad3c;
        case 0x1dad40u: goto label_1dad40;
        case 0x1dad44u: goto label_1dad44;
        case 0x1dad48u: goto label_1dad48;
        case 0x1dad4cu: goto label_1dad4c;
        case 0x1dad50u: goto label_1dad50;
        case 0x1dad54u: goto label_1dad54;
        case 0x1dad58u: goto label_1dad58;
        case 0x1dad5cu: goto label_1dad5c;
        case 0x1dad60u: goto label_1dad60;
        case 0x1dad64u: goto label_1dad64;
        case 0x1dad68u: goto label_1dad68;
        case 0x1dad6cu: goto label_1dad6c;
        case 0x1dad70u: goto label_1dad70;
        case 0x1dad74u: goto label_1dad74;
        case 0x1dad78u: goto label_1dad78;
        case 0x1dad7cu: goto label_1dad7c;
        case 0x1dad80u: goto label_1dad80;
        case 0x1dad84u: goto label_1dad84;
        case 0x1dad88u: goto label_1dad88;
        case 0x1dad8cu: goto label_1dad8c;
        case 0x1dad90u: goto label_1dad90;
        case 0x1dad94u: goto label_1dad94;
        case 0x1dad98u: goto label_1dad98;
        case 0x1dad9cu: goto label_1dad9c;
        case 0x1dada0u: goto label_1dada0;
        case 0x1dada4u: goto label_1dada4;
        case 0x1dada8u: goto label_1dada8;
        case 0x1dadacu: goto label_1dadac;
        case 0x1dadb0u: goto label_1dadb0;
        case 0x1dadb4u: goto label_1dadb4;
        case 0x1dadb8u: goto label_1dadb8;
        case 0x1dadbcu: goto label_1dadbc;
        case 0x1dadc0u: goto label_1dadc0;
        case 0x1dadc4u: goto label_1dadc4;
        case 0x1dadc8u: goto label_1dadc8;
        case 0x1dadccu: goto label_1dadcc;
        case 0x1dadd0u: goto label_1dadd0;
        case 0x1dadd4u: goto label_1dadd4;
        case 0x1dadd8u: goto label_1dadd8;
        case 0x1daddcu: goto label_1daddc;
        case 0x1dade0u: goto label_1dade0;
        case 0x1dade4u: goto label_1dade4;
        case 0x1dade8u: goto label_1dade8;
        case 0x1dadecu: goto label_1dadec;
        case 0x1dadf0u: goto label_1dadf0;
        case 0x1dadf4u: goto label_1dadf4;
        case 0x1dadf8u: goto label_1dadf8;
        case 0x1dadfcu: goto label_1dadfc;
        case 0x1dae00u: goto label_1dae00;
        case 0x1dae04u: goto label_1dae04;
        case 0x1dae08u: goto label_1dae08;
        case 0x1dae0cu: goto label_1dae0c;
        case 0x1dae10u: goto label_1dae10;
        case 0x1dae14u: goto label_1dae14;
        case 0x1dae18u: goto label_1dae18;
        case 0x1dae1cu: goto label_1dae1c;
        case 0x1dae20u: goto label_1dae20;
        case 0x1dae24u: goto label_1dae24;
        case 0x1dae28u: goto label_1dae28;
        case 0x1dae2cu: goto label_1dae2c;
        case 0x1dae30u: goto label_1dae30;
        case 0x1dae34u: goto label_1dae34;
        case 0x1dae38u: goto label_1dae38;
        case 0x1dae3cu: goto label_1dae3c;
        case 0x1dae40u: goto label_1dae40;
        case 0x1dae44u: goto label_1dae44;
        case 0x1dae48u: goto label_1dae48;
        case 0x1dae4cu: goto label_1dae4c;
        case 0x1dae50u: goto label_1dae50;
        case 0x1dae54u: goto label_1dae54;
        case 0x1dae58u: goto label_1dae58;
        case 0x1dae5cu: goto label_1dae5c;
        case 0x1dae60u: goto label_1dae60;
        case 0x1dae64u: goto label_1dae64;
        case 0x1dae68u: goto label_1dae68;
        case 0x1dae6cu: goto label_1dae6c;
        case 0x1dae70u: goto label_1dae70;
        case 0x1dae74u: goto label_1dae74;
        case 0x1dae78u: goto label_1dae78;
        case 0x1dae7cu: goto label_1dae7c;
        case 0x1dae80u: goto label_1dae80;
        case 0x1dae84u: goto label_1dae84;
        case 0x1dae88u: goto label_1dae88;
        case 0x1dae8cu: goto label_1dae8c;
        case 0x1dae90u: goto label_1dae90;
        case 0x1dae94u: goto label_1dae94;
        case 0x1dae98u: goto label_1dae98;
        case 0x1dae9cu: goto label_1dae9c;
        case 0x1daea0u: goto label_1daea0;
        case 0x1daea4u: goto label_1daea4;
        case 0x1daea8u: goto label_1daea8;
        case 0x1daeacu: goto label_1daeac;
        case 0x1daeb0u: goto label_1daeb0;
        case 0x1daeb4u: goto label_1daeb4;
        case 0x1daeb8u: goto label_1daeb8;
        case 0x1daebcu: goto label_1daebc;
        case 0x1daec0u: goto label_1daec0;
        case 0x1daec4u: goto label_1daec4;
        case 0x1daec8u: goto label_1daec8;
        case 0x1daeccu: goto label_1daecc;
        case 0x1daed0u: goto label_1daed0;
        case 0x1daed4u: goto label_1daed4;
        case 0x1daed8u: goto label_1daed8;
        case 0x1daedcu: goto label_1daedc;
        case 0x1daee0u: goto label_1daee0;
        case 0x1daee4u: goto label_1daee4;
        case 0x1daee8u: goto label_1daee8;
        case 0x1daeecu: goto label_1daeec;
        case 0x1daef0u: goto label_1daef0;
        case 0x1daef4u: goto label_1daef4;
        case 0x1daef8u: goto label_1daef8;
        case 0x1daefcu: goto label_1daefc;
        case 0x1daf00u: goto label_1daf00;
        case 0x1daf04u: goto label_1daf04;
        case 0x1daf08u: goto label_1daf08;
        case 0x1daf0cu: goto label_1daf0c;
        case 0x1daf10u: goto label_1daf10;
        case 0x1daf14u: goto label_1daf14;
        case 0x1daf18u: goto label_1daf18;
        case 0x1daf1cu: goto label_1daf1c;
        case 0x1daf20u: goto label_1daf20;
        case 0x1daf24u: goto label_1daf24;
        case 0x1daf28u: goto label_1daf28;
        case 0x1daf2cu: goto label_1daf2c;
        case 0x1daf30u: goto label_1daf30;
        case 0x1daf34u: goto label_1daf34;
        case 0x1daf38u: goto label_1daf38;
        case 0x1daf3cu: goto label_1daf3c;
        case 0x1daf40u: goto label_1daf40;
        case 0x1daf44u: goto label_1daf44;
        case 0x1daf48u: goto label_1daf48;
        case 0x1daf4cu: goto label_1daf4c;
        case 0x1daf50u: goto label_1daf50;
        case 0x1daf54u: goto label_1daf54;
        case 0x1daf58u: goto label_1daf58;
        case 0x1daf5cu: goto label_1daf5c;
        case 0x1daf60u: goto label_1daf60;
        case 0x1daf64u: goto label_1daf64;
        case 0x1daf68u: goto label_1daf68;
        case 0x1daf6cu: goto label_1daf6c;
        case 0x1daf70u: goto label_1daf70;
        case 0x1daf74u: goto label_1daf74;
        case 0x1daf78u: goto label_1daf78;
        case 0x1daf7cu: goto label_1daf7c;
        case 0x1daf80u: goto label_1daf80;
        case 0x1daf84u: goto label_1daf84;
        case 0x1daf88u: goto label_1daf88;
        case 0x1daf8cu: goto label_1daf8c;
        case 0x1daf90u: goto label_1daf90;
        case 0x1daf94u: goto label_1daf94;
        case 0x1daf98u: goto label_1daf98;
        case 0x1daf9cu: goto label_1daf9c;
        case 0x1dafa0u: goto label_1dafa0;
        case 0x1dafa4u: goto label_1dafa4;
        case 0x1dafa8u: goto label_1dafa8;
        case 0x1dafacu: goto label_1dafac;
        case 0x1dafb0u: goto label_1dafb0;
        case 0x1dafb4u: goto label_1dafb4;
        case 0x1dafb8u: goto label_1dafb8;
        case 0x1dafbcu: goto label_1dafbc;
        case 0x1dafc0u: goto label_1dafc0;
        case 0x1dafc4u: goto label_1dafc4;
        case 0x1dafc8u: goto label_1dafc8;
        case 0x1dafccu: goto label_1dafcc;
        case 0x1dafd0u: goto label_1dafd0;
        case 0x1dafd4u: goto label_1dafd4;
        case 0x1dafd8u: goto label_1dafd8;
        case 0x1dafdcu: goto label_1dafdc;
        case 0x1dafe0u: goto label_1dafe0;
        case 0x1dafe4u: goto label_1dafe4;
        case 0x1dafe8u: goto label_1dafe8;
        case 0x1dafecu: goto label_1dafec;
        case 0x1daff0u: goto label_1daff0;
        case 0x1daff4u: goto label_1daff4;
        case 0x1daff8u: goto label_1daff8;
        case 0x1daffcu: goto label_1daffc;
        case 0x1db000u: goto label_1db000;
        case 0x1db004u: goto label_1db004;
        case 0x1db008u: goto label_1db008;
        case 0x1db00cu: goto label_1db00c;
        case 0x1db010u: goto label_1db010;
        case 0x1db014u: goto label_1db014;
        case 0x1db018u: goto label_1db018;
        case 0x1db01cu: goto label_1db01c;
        case 0x1db020u: goto label_1db020;
        case 0x1db024u: goto label_1db024;
        case 0x1db028u: goto label_1db028;
        case 0x1db02cu: goto label_1db02c;
        case 0x1db030u: goto label_1db030;
        case 0x1db034u: goto label_1db034;
        case 0x1db038u: goto label_1db038;
        case 0x1db03cu: goto label_1db03c;
        case 0x1db040u: goto label_1db040;
        case 0x1db044u: goto label_1db044;
        case 0x1db048u: goto label_1db048;
        case 0x1db04cu: goto label_1db04c;
        case 0x1db050u: goto label_1db050;
        case 0x1db054u: goto label_1db054;
        case 0x1db058u: goto label_1db058;
        case 0x1db05cu: goto label_1db05c;
        case 0x1db060u: goto label_1db060;
        case 0x1db064u: goto label_1db064;
        case 0x1db068u: goto label_1db068;
        case 0x1db06cu: goto label_1db06c;
        case 0x1db070u: goto label_1db070;
        case 0x1db074u: goto label_1db074;
        case 0x1db078u: goto label_1db078;
        case 0x1db07cu: goto label_1db07c;
        case 0x1db080u: goto label_1db080;
        case 0x1db084u: goto label_1db084;
        case 0x1db088u: goto label_1db088;
        case 0x1db08cu: goto label_1db08c;
        case 0x1db090u: goto label_1db090;
        case 0x1db094u: goto label_1db094;
        case 0x1db098u: goto label_1db098;
        case 0x1db09cu: goto label_1db09c;
        case 0x1db0a0u: goto label_1db0a0;
        case 0x1db0a4u: goto label_1db0a4;
        case 0x1db0a8u: goto label_1db0a8;
        case 0x1db0acu: goto label_1db0ac;
        case 0x1db0b0u: goto label_1db0b0;
        case 0x1db0b4u: goto label_1db0b4;
        case 0x1db0b8u: goto label_1db0b8;
        case 0x1db0bcu: goto label_1db0bc;
        case 0x1db0c0u: goto label_1db0c0;
        case 0x1db0c4u: goto label_1db0c4;
        case 0x1db0c8u: goto label_1db0c8;
        case 0x1db0ccu: goto label_1db0cc;
        case 0x1db0d0u: goto label_1db0d0;
        case 0x1db0d4u: goto label_1db0d4;
        case 0x1db0d8u: goto label_1db0d8;
        case 0x1db0dcu: goto label_1db0dc;
        case 0x1db0e0u: goto label_1db0e0;
        case 0x1db0e4u: goto label_1db0e4;
        case 0x1db0e8u: goto label_1db0e8;
        case 0x1db0ecu: goto label_1db0ec;
        case 0x1db0f0u: goto label_1db0f0;
        case 0x1db0f4u: goto label_1db0f4;
        case 0x1db0f8u: goto label_1db0f8;
        case 0x1db0fcu: goto label_1db0fc;
        case 0x1db100u: goto label_1db100;
        case 0x1db104u: goto label_1db104;
        case 0x1db108u: goto label_1db108;
        case 0x1db10cu: goto label_1db10c;
        case 0x1db110u: goto label_1db110;
        case 0x1db114u: goto label_1db114;
        case 0x1db118u: goto label_1db118;
        case 0x1db11cu: goto label_1db11c;
        case 0x1db120u: goto label_1db120;
        case 0x1db124u: goto label_1db124;
        case 0x1db128u: goto label_1db128;
        case 0x1db12cu: goto label_1db12c;
        case 0x1db130u: goto label_1db130;
        case 0x1db134u: goto label_1db134;
        case 0x1db138u: goto label_1db138;
        case 0x1db13cu: goto label_1db13c;
        case 0x1db140u: goto label_1db140;
        case 0x1db144u: goto label_1db144;
        case 0x1db148u: goto label_1db148;
        case 0x1db14cu: goto label_1db14c;
        case 0x1db150u: goto label_1db150;
        case 0x1db154u: goto label_1db154;
        case 0x1db158u: goto label_1db158;
        case 0x1db15cu: goto label_1db15c;
        case 0x1db160u: goto label_1db160;
        case 0x1db164u: goto label_1db164;
        case 0x1db168u: goto label_1db168;
        case 0x1db16cu: goto label_1db16c;
        case 0x1db170u: goto label_1db170;
        case 0x1db174u: goto label_1db174;
        case 0x1db178u: goto label_1db178;
        case 0x1db17cu: goto label_1db17c;
        case 0x1db180u: goto label_1db180;
        case 0x1db184u: goto label_1db184;
        case 0x1db188u: goto label_1db188;
        case 0x1db18cu: goto label_1db18c;
        case 0x1db190u: goto label_1db190;
        case 0x1db194u: goto label_1db194;
        case 0x1db198u: goto label_1db198;
        case 0x1db19cu: goto label_1db19c;
        case 0x1db1a0u: goto label_1db1a0;
        case 0x1db1a4u: goto label_1db1a4;
        case 0x1db1a8u: goto label_1db1a8;
        case 0x1db1acu: goto label_1db1ac;
        case 0x1db1b0u: goto label_1db1b0;
        case 0x1db1b4u: goto label_1db1b4;
        case 0x1db1b8u: goto label_1db1b8;
        case 0x1db1bcu: goto label_1db1bc;
        case 0x1db1c0u: goto label_1db1c0;
        case 0x1db1c4u: goto label_1db1c4;
        case 0x1db1c8u: goto label_1db1c8;
        case 0x1db1ccu: goto label_1db1cc;
        case 0x1db1d0u: goto label_1db1d0;
        case 0x1db1d4u: goto label_1db1d4;
        case 0x1db1d8u: goto label_1db1d8;
        case 0x1db1dcu: goto label_1db1dc;
        case 0x1db1e0u: goto label_1db1e0;
        case 0x1db1e4u: goto label_1db1e4;
        case 0x1db1e8u: goto label_1db1e8;
        case 0x1db1ecu: goto label_1db1ec;
        case 0x1db1f0u: goto label_1db1f0;
        case 0x1db1f4u: goto label_1db1f4;
        case 0x1db1f8u: goto label_1db1f8;
        case 0x1db1fcu: goto label_1db1fc;
        case 0x1db200u: goto label_1db200;
        case 0x1db204u: goto label_1db204;
        case 0x1db208u: goto label_1db208;
        case 0x1db20cu: goto label_1db20c;
        case 0x1db210u: goto label_1db210;
        case 0x1db214u: goto label_1db214;
        case 0x1db218u: goto label_1db218;
        case 0x1db21cu: goto label_1db21c;
        case 0x1db220u: goto label_1db220;
        case 0x1db224u: goto label_1db224;
        case 0x1db228u: goto label_1db228;
        case 0x1db22cu: goto label_1db22c;
        case 0x1db230u: goto label_1db230;
        case 0x1db234u: goto label_1db234;
        case 0x1db238u: goto label_1db238;
        case 0x1db23cu: goto label_1db23c;
        case 0x1db240u: goto label_1db240;
        case 0x1db244u: goto label_1db244;
        case 0x1db248u: goto label_1db248;
        case 0x1db24cu: goto label_1db24c;
        case 0x1db250u: goto label_1db250;
        case 0x1db254u: goto label_1db254;
        case 0x1db258u: goto label_1db258;
        case 0x1db25cu: goto label_1db25c;
        case 0x1db260u: goto label_1db260;
        case 0x1db264u: goto label_1db264;
        case 0x1db268u: goto label_1db268;
        case 0x1db26cu: goto label_1db26c;
        case 0x1db270u: goto label_1db270;
        case 0x1db274u: goto label_1db274;
        case 0x1db278u: goto label_1db278;
        case 0x1db27cu: goto label_1db27c;
        case 0x1db280u: goto label_1db280;
        case 0x1db284u: goto label_1db284;
        case 0x1db288u: goto label_1db288;
        case 0x1db28cu: goto label_1db28c;
        case 0x1db290u: goto label_1db290;
        case 0x1db294u: goto label_1db294;
        case 0x1db298u: goto label_1db298;
        case 0x1db29cu: goto label_1db29c;
        case 0x1db2a0u: goto label_1db2a0;
        case 0x1db2a4u: goto label_1db2a4;
        case 0x1db2a8u: goto label_1db2a8;
        case 0x1db2acu: goto label_1db2ac;
        case 0x1db2b0u: goto label_1db2b0;
        case 0x1db2b4u: goto label_1db2b4;
        case 0x1db2b8u: goto label_1db2b8;
        case 0x1db2bcu: goto label_1db2bc;
        case 0x1db2c0u: goto label_1db2c0;
        case 0x1db2c4u: goto label_1db2c4;
        case 0x1db2c8u: goto label_1db2c8;
        case 0x1db2ccu: goto label_1db2cc;
        case 0x1db2d0u: goto label_1db2d0;
        case 0x1db2d4u: goto label_1db2d4;
        case 0x1db2d8u: goto label_1db2d8;
        case 0x1db2dcu: goto label_1db2dc;
        case 0x1db2e0u: goto label_1db2e0;
        case 0x1db2e4u: goto label_1db2e4;
        case 0x1db2e8u: goto label_1db2e8;
        case 0x1db2ecu: goto label_1db2ec;
        case 0x1db2f0u: goto label_1db2f0;
        case 0x1db2f4u: goto label_1db2f4;
        case 0x1db2f8u: goto label_1db2f8;
        case 0x1db2fcu: goto label_1db2fc;
        case 0x1db300u: goto label_1db300;
        case 0x1db304u: goto label_1db304;
        case 0x1db308u: goto label_1db308;
        case 0x1db30cu: goto label_1db30c;
        case 0x1db310u: goto label_1db310;
        case 0x1db314u: goto label_1db314;
        case 0x1db318u: goto label_1db318;
        case 0x1db31cu: goto label_1db31c;
        case 0x1db320u: goto label_1db320;
        case 0x1db324u: goto label_1db324;
        case 0x1db328u: goto label_1db328;
        case 0x1db32cu: goto label_1db32c;
        case 0x1db330u: goto label_1db330;
        case 0x1db334u: goto label_1db334;
        case 0x1db338u: goto label_1db338;
        case 0x1db33cu: goto label_1db33c;
        case 0x1db340u: goto label_1db340;
        case 0x1db344u: goto label_1db344;
        case 0x1db348u: goto label_1db348;
        case 0x1db34cu: goto label_1db34c;
        case 0x1db350u: goto label_1db350;
        case 0x1db354u: goto label_1db354;
        case 0x1db358u: goto label_1db358;
        case 0x1db35cu: goto label_1db35c;
        case 0x1db360u: goto label_1db360;
        case 0x1db364u: goto label_1db364;
        case 0x1db368u: goto label_1db368;
        case 0x1db36cu: goto label_1db36c;
        case 0x1db370u: goto label_1db370;
        case 0x1db374u: goto label_1db374;
        case 0x1db378u: goto label_1db378;
        case 0x1db37cu: goto label_1db37c;
        case 0x1db380u: goto label_1db380;
        case 0x1db384u: goto label_1db384;
        case 0x1db388u: goto label_1db388;
        case 0x1db38cu: goto label_1db38c;
        case 0x1db390u: goto label_1db390;
        case 0x1db394u: goto label_1db394;
        case 0x1db398u: goto label_1db398;
        case 0x1db39cu: goto label_1db39c;
        case 0x1db3a0u: goto label_1db3a0;
        case 0x1db3a4u: goto label_1db3a4;
        case 0x1db3a8u: goto label_1db3a8;
        case 0x1db3acu: goto label_1db3ac;
        case 0x1db3b0u: goto label_1db3b0;
        case 0x1db3b4u: goto label_1db3b4;
        case 0x1db3b8u: goto label_1db3b8;
        case 0x1db3bcu: goto label_1db3bc;
        case 0x1db3c0u: goto label_1db3c0;
        case 0x1db3c4u: goto label_1db3c4;
        case 0x1db3c8u: goto label_1db3c8;
        case 0x1db3ccu: goto label_1db3cc;
        case 0x1db3d0u: goto label_1db3d0;
        case 0x1db3d4u: goto label_1db3d4;
        case 0x1db3d8u: goto label_1db3d8;
        case 0x1db3dcu: goto label_1db3dc;
        case 0x1db3e0u: goto label_1db3e0;
        case 0x1db3e4u: goto label_1db3e4;
        case 0x1db3e8u: goto label_1db3e8;
        case 0x1db3ecu: goto label_1db3ec;
        case 0x1db3f0u: goto label_1db3f0;
        case 0x1db3f4u: goto label_1db3f4;
        case 0x1db3f8u: goto label_1db3f8;
        case 0x1db3fcu: goto label_1db3fc;
        case 0x1db400u: goto label_1db400;
        case 0x1db404u: goto label_1db404;
        case 0x1db408u: goto label_1db408;
        case 0x1db40cu: goto label_1db40c;
        case 0x1db410u: goto label_1db410;
        case 0x1db414u: goto label_1db414;
        case 0x1db418u: goto label_1db418;
        case 0x1db41cu: goto label_1db41c;
        case 0x1db420u: goto label_1db420;
        case 0x1db424u: goto label_1db424;
        case 0x1db428u: goto label_1db428;
        case 0x1db42cu: goto label_1db42c;
        case 0x1db430u: goto label_1db430;
        case 0x1db434u: goto label_1db434;
        case 0x1db438u: goto label_1db438;
        case 0x1db43cu: goto label_1db43c;
        case 0x1db440u: goto label_1db440;
        case 0x1db444u: goto label_1db444;
        case 0x1db448u: goto label_1db448;
        case 0x1db44cu: goto label_1db44c;
        case 0x1db450u: goto label_1db450;
        case 0x1db454u: goto label_1db454;
        case 0x1db458u: goto label_1db458;
        case 0x1db45cu: goto label_1db45c;
        case 0x1db460u: goto label_1db460;
        case 0x1db464u: goto label_1db464;
        case 0x1db468u: goto label_1db468;
        case 0x1db46cu: goto label_1db46c;
        case 0x1db470u: goto label_1db470;
        case 0x1db474u: goto label_1db474;
        case 0x1db478u: goto label_1db478;
        case 0x1db47cu: goto label_1db47c;
        case 0x1db480u: goto label_1db480;
        case 0x1db484u: goto label_1db484;
        case 0x1db488u: goto label_1db488;
        case 0x1db48cu: goto label_1db48c;
        case 0x1db490u: goto label_1db490;
        case 0x1db494u: goto label_1db494;
        case 0x1db498u: goto label_1db498;
        case 0x1db49cu: goto label_1db49c;
        case 0x1db4a0u: goto label_1db4a0;
        case 0x1db4a4u: goto label_1db4a4;
        case 0x1db4a8u: goto label_1db4a8;
        case 0x1db4acu: goto label_1db4ac;
        case 0x1db4b0u: goto label_1db4b0;
        case 0x1db4b4u: goto label_1db4b4;
        case 0x1db4b8u: goto label_1db4b8;
        case 0x1db4bcu: goto label_1db4bc;
        case 0x1db4c0u: goto label_1db4c0;
        case 0x1db4c4u: goto label_1db4c4;
        case 0x1db4c8u: goto label_1db4c8;
        case 0x1db4ccu: goto label_1db4cc;
        case 0x1db4d0u: goto label_1db4d0;
        case 0x1db4d4u: goto label_1db4d4;
        case 0x1db4d8u: goto label_1db4d8;
        case 0x1db4dcu: goto label_1db4dc;
        case 0x1db4e0u: goto label_1db4e0;
        case 0x1db4e4u: goto label_1db4e4;
        case 0x1db4e8u: goto label_1db4e8;
        case 0x1db4ecu: goto label_1db4ec;
        case 0x1db4f0u: goto label_1db4f0;
        case 0x1db4f4u: goto label_1db4f4;
        case 0x1db4f8u: goto label_1db4f8;
        case 0x1db4fcu: goto label_1db4fc;
        case 0x1db500u: goto label_1db500;
        case 0x1db504u: goto label_1db504;
        case 0x1db508u: goto label_1db508;
        case 0x1db50cu: goto label_1db50c;
        case 0x1db510u: goto label_1db510;
        case 0x1db514u: goto label_1db514;
        case 0x1db518u: goto label_1db518;
        case 0x1db51cu: goto label_1db51c;
        case 0x1db520u: goto label_1db520;
        case 0x1db524u: goto label_1db524;
        case 0x1db528u: goto label_1db528;
        case 0x1db52cu: goto label_1db52c;
        case 0x1db530u: goto label_1db530;
        case 0x1db534u: goto label_1db534;
        case 0x1db538u: goto label_1db538;
        case 0x1db53cu: goto label_1db53c;
        case 0x1db540u: goto label_1db540;
        case 0x1db544u: goto label_1db544;
        case 0x1db548u: goto label_1db548;
        case 0x1db54cu: goto label_1db54c;
        case 0x1db550u: goto label_1db550;
        case 0x1db554u: goto label_1db554;
        case 0x1db558u: goto label_1db558;
        case 0x1db55cu: goto label_1db55c;
        case 0x1db560u: goto label_1db560;
        case 0x1db564u: goto label_1db564;
        case 0x1db568u: goto label_1db568;
        case 0x1db56cu: goto label_1db56c;
        case 0x1db570u: goto label_1db570;
        case 0x1db574u: goto label_1db574;
        case 0x1db578u: goto label_1db578;
        case 0x1db57cu: goto label_1db57c;
        case 0x1db580u: goto label_1db580;
        case 0x1db584u: goto label_1db584;
        case 0x1db588u: goto label_1db588;
        case 0x1db58cu: goto label_1db58c;
        case 0x1db590u: goto label_1db590;
        case 0x1db594u: goto label_1db594;
        case 0x1db598u: goto label_1db598;
        case 0x1db59cu: goto label_1db59c;
        case 0x1db5a0u: goto label_1db5a0;
        case 0x1db5a4u: goto label_1db5a4;
        case 0x1db5a8u: goto label_1db5a8;
        case 0x1db5acu: goto label_1db5ac;
        case 0x1db5b0u: goto label_1db5b0;
        case 0x1db5b4u: goto label_1db5b4;
        case 0x1db5b8u: goto label_1db5b8;
        case 0x1db5bcu: goto label_1db5bc;
        case 0x1db5c0u: goto label_1db5c0;
        case 0x1db5c4u: goto label_1db5c4;
        case 0x1db5c8u: goto label_1db5c8;
        case 0x1db5ccu: goto label_1db5cc;
        case 0x1db5d0u: goto label_1db5d0;
        case 0x1db5d4u: goto label_1db5d4;
        case 0x1db5d8u: goto label_1db5d8;
        case 0x1db5dcu: goto label_1db5dc;
        case 0x1db5e0u: goto label_1db5e0;
        case 0x1db5e4u: goto label_1db5e4;
        case 0x1db5e8u: goto label_1db5e8;
        case 0x1db5ecu: goto label_1db5ec;
        case 0x1db5f0u: goto label_1db5f0;
        case 0x1db5f4u: goto label_1db5f4;
        case 0x1db5f8u: goto label_1db5f8;
        case 0x1db5fcu: goto label_1db5fc;
        case 0x1db600u: goto label_1db600;
        case 0x1db604u: goto label_1db604;
        case 0x1db608u: goto label_1db608;
        case 0x1db60cu: goto label_1db60c;
        case 0x1db610u: goto label_1db610;
        case 0x1db614u: goto label_1db614;
        case 0x1db618u: goto label_1db618;
        case 0x1db61cu: goto label_1db61c;
        case 0x1db620u: goto label_1db620;
        case 0x1db624u: goto label_1db624;
        case 0x1db628u: goto label_1db628;
        case 0x1db62cu: goto label_1db62c;
        case 0x1db630u: goto label_1db630;
        case 0x1db634u: goto label_1db634;
        case 0x1db638u: goto label_1db638;
        case 0x1db63cu: goto label_1db63c;
        case 0x1db640u: goto label_1db640;
        case 0x1db644u: goto label_1db644;
        case 0x1db648u: goto label_1db648;
        case 0x1db64cu: goto label_1db64c;
        case 0x1db650u: goto label_1db650;
        case 0x1db654u: goto label_1db654;
        case 0x1db658u: goto label_1db658;
        case 0x1db65cu: goto label_1db65c;
        case 0x1db660u: goto label_1db660;
        case 0x1db664u: goto label_1db664;
        case 0x1db668u: goto label_1db668;
        case 0x1db66cu: goto label_1db66c;
        case 0x1db670u: goto label_1db670;
        case 0x1db674u: goto label_1db674;
        case 0x1db678u: goto label_1db678;
        case 0x1db67cu: goto label_1db67c;
        case 0x1db680u: goto label_1db680;
        case 0x1db684u: goto label_1db684;
        case 0x1db688u: goto label_1db688;
        case 0x1db68cu: goto label_1db68c;
        case 0x1db690u: goto label_1db690;
        case 0x1db694u: goto label_1db694;
        case 0x1db698u: goto label_1db698;
        case 0x1db69cu: goto label_1db69c;
        case 0x1db6a0u: goto label_1db6a0;
        case 0x1db6a4u: goto label_1db6a4;
        case 0x1db6a8u: goto label_1db6a8;
        case 0x1db6acu: goto label_1db6ac;
        case 0x1db6b0u: goto label_1db6b0;
        case 0x1db6b4u: goto label_1db6b4;
        case 0x1db6b8u: goto label_1db6b8;
        case 0x1db6bcu: goto label_1db6bc;
        case 0x1db6c0u: goto label_1db6c0;
        case 0x1db6c4u: goto label_1db6c4;
        case 0x1db6c8u: goto label_1db6c8;
        case 0x1db6ccu: goto label_1db6cc;
        case 0x1db6d0u: goto label_1db6d0;
        case 0x1db6d4u: goto label_1db6d4;
        case 0x1db6d8u: goto label_1db6d8;
        case 0x1db6dcu: goto label_1db6dc;
        case 0x1db6e0u: goto label_1db6e0;
        case 0x1db6e4u: goto label_1db6e4;
        case 0x1db6e8u: goto label_1db6e8;
        case 0x1db6ecu: goto label_1db6ec;
        case 0x1db6f0u: goto label_1db6f0;
        case 0x1db6f4u: goto label_1db6f4;
        case 0x1db6f8u: goto label_1db6f8;
        case 0x1db6fcu: goto label_1db6fc;
        case 0x1db700u: goto label_1db700;
        case 0x1db704u: goto label_1db704;
        case 0x1db708u: goto label_1db708;
        case 0x1db70cu: goto label_1db70c;
        case 0x1db710u: goto label_1db710;
        case 0x1db714u: goto label_1db714;
        case 0x1db718u: goto label_1db718;
        case 0x1db71cu: goto label_1db71c;
        case 0x1db720u: goto label_1db720;
        case 0x1db724u: goto label_1db724;
        case 0x1db728u: goto label_1db728;
        case 0x1db72cu: goto label_1db72c;
        case 0x1db730u: goto label_1db730;
        case 0x1db734u: goto label_1db734;
        case 0x1db738u: goto label_1db738;
        case 0x1db73cu: goto label_1db73c;
        case 0x1db740u: goto label_1db740;
        case 0x1db744u: goto label_1db744;
        case 0x1db748u: goto label_1db748;
        case 0x1db74cu: goto label_1db74c;
        case 0x1db750u: goto label_1db750;
        case 0x1db754u: goto label_1db754;
        case 0x1db758u: goto label_1db758;
        case 0x1db75cu: goto label_1db75c;
        case 0x1db760u: goto label_1db760;
        case 0x1db764u: goto label_1db764;
        case 0x1db768u: goto label_1db768;
        case 0x1db76cu: goto label_1db76c;
        case 0x1db770u: goto label_1db770;
        case 0x1db774u: goto label_1db774;
        case 0x1db778u: goto label_1db778;
        case 0x1db77cu: goto label_1db77c;
        case 0x1db780u: goto label_1db780;
        case 0x1db784u: goto label_1db784;
        case 0x1db788u: goto label_1db788;
        case 0x1db78cu: goto label_1db78c;
        case 0x1db790u: goto label_1db790;
        case 0x1db794u: goto label_1db794;
        case 0x1db798u: goto label_1db798;
        case 0x1db79cu: goto label_1db79c;
        case 0x1db7a0u: goto label_1db7a0;
        case 0x1db7a4u: goto label_1db7a4;
        case 0x1db7a8u: goto label_1db7a8;
        case 0x1db7acu: goto label_1db7ac;
        case 0x1db7b0u: goto label_1db7b0;
        case 0x1db7b4u: goto label_1db7b4;
        case 0x1db7b8u: goto label_1db7b8;
        case 0x1db7bcu: goto label_1db7bc;
        case 0x1db7c0u: goto label_1db7c0;
        case 0x1db7c4u: goto label_1db7c4;
        case 0x1db7c8u: goto label_1db7c8;
        case 0x1db7ccu: goto label_1db7cc;
        case 0x1db7d0u: goto label_1db7d0;
        case 0x1db7d4u: goto label_1db7d4;
        case 0x1db7d8u: goto label_1db7d8;
        case 0x1db7dcu: goto label_1db7dc;
        case 0x1db7e0u: goto label_1db7e0;
        case 0x1db7e4u: goto label_1db7e4;
        case 0x1db7e8u: goto label_1db7e8;
        case 0x1db7ecu: goto label_1db7ec;
        case 0x1db7f0u: goto label_1db7f0;
        case 0x1db7f4u: goto label_1db7f4;
        case 0x1db7f8u: goto label_1db7f8;
        case 0x1db7fcu: goto label_1db7fc;
        case 0x1db800u: goto label_1db800;
        case 0x1db804u: goto label_1db804;
        case 0x1db808u: goto label_1db808;
        case 0x1db80cu: goto label_1db80c;
        case 0x1db810u: goto label_1db810;
        case 0x1db814u: goto label_1db814;
        case 0x1db818u: goto label_1db818;
        case 0x1db81cu: goto label_1db81c;
        case 0x1db820u: goto label_1db820;
        case 0x1db824u: goto label_1db824;
        case 0x1db828u: goto label_1db828;
        case 0x1db82cu: goto label_1db82c;
        case 0x1db830u: goto label_1db830;
        case 0x1db834u: goto label_1db834;
        case 0x1db838u: goto label_1db838;
        case 0x1db83cu: goto label_1db83c;
        case 0x1db840u: goto label_1db840;
        case 0x1db844u: goto label_1db844;
        case 0x1db848u: goto label_1db848;
        case 0x1db84cu: goto label_1db84c;
        case 0x1db850u: goto label_1db850;
        case 0x1db854u: goto label_1db854;
        case 0x1db858u: goto label_1db858;
        case 0x1db85cu: goto label_1db85c;
        case 0x1db860u: goto label_1db860;
        case 0x1db864u: goto label_1db864;
        case 0x1db868u: goto label_1db868;
        case 0x1db86cu: goto label_1db86c;
        case 0x1db870u: goto label_1db870;
        case 0x1db874u: goto label_1db874;
        case 0x1db878u: goto label_1db878;
        case 0x1db87cu: goto label_1db87c;
        case 0x1db880u: goto label_1db880;
        case 0x1db884u: goto label_1db884;
        case 0x1db888u: goto label_1db888;
        case 0x1db88cu: goto label_1db88c;
        case 0x1db890u: goto label_1db890;
        case 0x1db894u: goto label_1db894;
        case 0x1db898u: goto label_1db898;
        case 0x1db89cu: goto label_1db89c;
        case 0x1db8a0u: goto label_1db8a0;
        case 0x1db8a4u: goto label_1db8a4;
        case 0x1db8a8u: goto label_1db8a8;
        case 0x1db8acu: goto label_1db8ac;
        case 0x1db8b0u: goto label_1db8b0;
        case 0x1db8b4u: goto label_1db8b4;
        case 0x1db8b8u: goto label_1db8b8;
        case 0x1db8bcu: goto label_1db8bc;
        case 0x1db8c0u: goto label_1db8c0;
        case 0x1db8c4u: goto label_1db8c4;
        case 0x1db8c8u: goto label_1db8c8;
        case 0x1db8ccu: goto label_1db8cc;
        case 0x1db8d0u: goto label_1db8d0;
        case 0x1db8d4u: goto label_1db8d4;
        case 0x1db8d8u: goto label_1db8d8;
        case 0x1db8dcu: goto label_1db8dc;
        case 0x1db8e0u: goto label_1db8e0;
        case 0x1db8e4u: goto label_1db8e4;
        case 0x1db8e8u: goto label_1db8e8;
        case 0x1db8ecu: goto label_1db8ec;
        case 0x1db8f0u: goto label_1db8f0;
        case 0x1db8f4u: goto label_1db8f4;
        case 0x1db8f8u: goto label_1db8f8;
        case 0x1db8fcu: goto label_1db8fc;
        case 0x1db900u: goto label_1db900;
        case 0x1db904u: goto label_1db904;
        case 0x1db908u: goto label_1db908;
        case 0x1db90cu: goto label_1db90c;
        case 0x1db910u: goto label_1db910;
        case 0x1db914u: goto label_1db914;
        case 0x1db918u: goto label_1db918;
        case 0x1db91cu: goto label_1db91c;
        case 0x1db920u: goto label_1db920;
        case 0x1db924u: goto label_1db924;
        case 0x1db928u: goto label_1db928;
        case 0x1db92cu: goto label_1db92c;
        case 0x1db930u: goto label_1db930;
        case 0x1db934u: goto label_1db934;
        case 0x1db938u: goto label_1db938;
        case 0x1db93cu: goto label_1db93c;
        case 0x1db940u: goto label_1db940;
        case 0x1db944u: goto label_1db944;
        case 0x1db948u: goto label_1db948;
        case 0x1db94cu: goto label_1db94c;
        case 0x1db950u: goto label_1db950;
        case 0x1db954u: goto label_1db954;
        case 0x1db958u: goto label_1db958;
        case 0x1db95cu: goto label_1db95c;
        case 0x1db960u: goto label_1db960;
        case 0x1db964u: goto label_1db964;
        case 0x1db968u: goto label_1db968;
        case 0x1db96cu: goto label_1db96c;
        case 0x1db970u: goto label_1db970;
        case 0x1db974u: goto label_1db974;
        case 0x1db978u: goto label_1db978;
        case 0x1db97cu: goto label_1db97c;
        case 0x1db980u: goto label_1db980;
        case 0x1db984u: goto label_1db984;
        case 0x1db988u: goto label_1db988;
        case 0x1db98cu: goto label_1db98c;
        case 0x1db990u: goto label_1db990;
        case 0x1db994u: goto label_1db994;
        case 0x1db998u: goto label_1db998;
        case 0x1db99cu: goto label_1db99c;
        case 0x1db9a0u: goto label_1db9a0;
        case 0x1db9a4u: goto label_1db9a4;
        case 0x1db9a8u: goto label_1db9a8;
        case 0x1db9acu: goto label_1db9ac;
        case 0x1db9b0u: goto label_1db9b0;
        case 0x1db9b4u: goto label_1db9b4;
        case 0x1db9b8u: goto label_1db9b8;
        case 0x1db9bcu: goto label_1db9bc;
        case 0x1db9c0u: goto label_1db9c0;
        case 0x1db9c4u: goto label_1db9c4;
        case 0x1db9c8u: goto label_1db9c8;
        case 0x1db9ccu: goto label_1db9cc;
        case 0x1db9d0u: goto label_1db9d0;
        case 0x1db9d4u: goto label_1db9d4;
        case 0x1db9d8u: goto label_1db9d8;
        case 0x1db9dcu: goto label_1db9dc;
        case 0x1db9e0u: goto label_1db9e0;
        case 0x1db9e4u: goto label_1db9e4;
        case 0x1db9e8u: goto label_1db9e8;
        case 0x1db9ecu: goto label_1db9ec;
        case 0x1db9f0u: goto label_1db9f0;
        case 0x1db9f4u: goto label_1db9f4;
        case 0x1db9f8u: goto label_1db9f8;
        case 0x1db9fcu: goto label_1db9fc;
        case 0x1dba00u: goto label_1dba00;
        case 0x1dba04u: goto label_1dba04;
        case 0x1dba08u: goto label_1dba08;
        case 0x1dba0cu: goto label_1dba0c;
        case 0x1dba10u: goto label_1dba10;
        case 0x1dba14u: goto label_1dba14;
        case 0x1dba18u: goto label_1dba18;
        case 0x1dba1cu: goto label_1dba1c;
        case 0x1dba20u: goto label_1dba20;
        case 0x1dba24u: goto label_1dba24;
        case 0x1dba28u: goto label_1dba28;
        case 0x1dba2cu: goto label_1dba2c;
        case 0x1dba30u: goto label_1dba30;
        case 0x1dba34u: goto label_1dba34;
        case 0x1dba38u: goto label_1dba38;
        case 0x1dba3cu: goto label_1dba3c;
        case 0x1dba40u: goto label_1dba40;
        case 0x1dba44u: goto label_1dba44;
        case 0x1dba48u: goto label_1dba48;
        case 0x1dba4cu: goto label_1dba4c;
        case 0x1dba50u: goto label_1dba50;
        case 0x1dba54u: goto label_1dba54;
        case 0x1dba58u: goto label_1dba58;
        case 0x1dba5cu: goto label_1dba5c;
        case 0x1dba60u: goto label_1dba60;
        case 0x1dba64u: goto label_1dba64;
        case 0x1dba68u: goto label_1dba68;
        case 0x1dba6cu: goto label_1dba6c;
        case 0x1dba70u: goto label_1dba70;
        case 0x1dba74u: goto label_1dba74;
        case 0x1dba78u: goto label_1dba78;
        case 0x1dba7cu: goto label_1dba7c;
        case 0x1dba80u: goto label_1dba80;
        case 0x1dba84u: goto label_1dba84;
        case 0x1dba88u: goto label_1dba88;
        case 0x1dba8cu: goto label_1dba8c;
        case 0x1dba90u: goto label_1dba90;
        case 0x1dba94u: goto label_1dba94;
        case 0x1dba98u: goto label_1dba98;
        case 0x1dba9cu: goto label_1dba9c;
        case 0x1dbaa0u: goto label_1dbaa0;
        case 0x1dbaa4u: goto label_1dbaa4;
        case 0x1dbaa8u: goto label_1dbaa8;
        case 0x1dbaacu: goto label_1dbaac;
        case 0x1dbab0u: goto label_1dbab0;
        case 0x1dbab4u: goto label_1dbab4;
        case 0x1dbab8u: goto label_1dbab8;
        case 0x1dbabcu: goto label_1dbabc;
        case 0x1dbac0u: goto label_1dbac0;
        case 0x1dbac4u: goto label_1dbac4;
        case 0x1dbac8u: goto label_1dbac8;
        case 0x1dbaccu: goto label_1dbacc;
        case 0x1dbad0u: goto label_1dbad0;
        case 0x1dbad4u: goto label_1dbad4;
        case 0x1dbad8u: goto label_1dbad8;
        case 0x1dbadcu: goto label_1dbadc;
        case 0x1dbae0u: goto label_1dbae0;
        case 0x1dbae4u: goto label_1dbae4;
        case 0x1dbae8u: goto label_1dbae8;
        case 0x1dbaecu: goto label_1dbaec;
        case 0x1dbaf0u: goto label_1dbaf0;
        case 0x1dbaf4u: goto label_1dbaf4;
        case 0x1dbaf8u: goto label_1dbaf8;
        case 0x1dbafcu: goto label_1dbafc;
        case 0x1dbb00u: goto label_1dbb00;
        case 0x1dbb04u: goto label_1dbb04;
        case 0x1dbb08u: goto label_1dbb08;
        case 0x1dbb0cu: goto label_1dbb0c;
        case 0x1dbb10u: goto label_1dbb10;
        case 0x1dbb14u: goto label_1dbb14;
        case 0x1dbb18u: goto label_1dbb18;
        case 0x1dbb1cu: goto label_1dbb1c;
        case 0x1dbb20u: goto label_1dbb20;
        case 0x1dbb24u: goto label_1dbb24;
        case 0x1dbb28u: goto label_1dbb28;
        case 0x1dbb2cu: goto label_1dbb2c;
        case 0x1dbb30u: goto label_1dbb30;
        case 0x1dbb34u: goto label_1dbb34;
        case 0x1dbb38u: goto label_1dbb38;
        case 0x1dbb3cu: goto label_1dbb3c;
        case 0x1dbb40u: goto label_1dbb40;
        case 0x1dbb44u: goto label_1dbb44;
        case 0x1dbb48u: goto label_1dbb48;
        case 0x1dbb4cu: goto label_1dbb4c;
        case 0x1dbb50u: goto label_1dbb50;
        case 0x1dbb54u: goto label_1dbb54;
        case 0x1dbb58u: goto label_1dbb58;
        case 0x1dbb5cu: goto label_1dbb5c;
        case 0x1dbb60u: goto label_1dbb60;
        case 0x1dbb64u: goto label_1dbb64;
        case 0x1dbb68u: goto label_1dbb68;
        case 0x1dbb6cu: goto label_1dbb6c;
        case 0x1dbb70u: goto label_1dbb70;
        case 0x1dbb74u: goto label_1dbb74;
        case 0x1dbb78u: goto label_1dbb78;
        case 0x1dbb7cu: goto label_1dbb7c;
        case 0x1dbb80u: goto label_1dbb80;
        case 0x1dbb84u: goto label_1dbb84;
        case 0x1dbb88u: goto label_1dbb88;
        case 0x1dbb8cu: goto label_1dbb8c;
        case 0x1dbb90u: goto label_1dbb90;
        case 0x1dbb94u: goto label_1dbb94;
        case 0x1dbb98u: goto label_1dbb98;
        case 0x1dbb9cu: goto label_1dbb9c;
        case 0x1dbba0u: goto label_1dbba0;
        case 0x1dbba4u: goto label_1dbba4;
        case 0x1dbba8u: goto label_1dbba8;
        case 0x1dbbacu: goto label_1dbbac;
        case 0x1dbbb0u: goto label_1dbbb0;
        case 0x1dbbb4u: goto label_1dbbb4;
        case 0x1dbbb8u: goto label_1dbbb8;
        case 0x1dbbbcu: goto label_1dbbbc;
        case 0x1dbbc0u: goto label_1dbbc0;
        case 0x1dbbc4u: goto label_1dbbc4;
        case 0x1dbbc8u: goto label_1dbbc8;
        case 0x1dbbccu: goto label_1dbbcc;
        case 0x1dbbd0u: goto label_1dbbd0;
        case 0x1dbbd4u: goto label_1dbbd4;
        case 0x1dbbd8u: goto label_1dbbd8;
        case 0x1dbbdcu: goto label_1dbbdc;
        case 0x1dbbe0u: goto label_1dbbe0;
        case 0x1dbbe4u: goto label_1dbbe4;
        case 0x1dbbe8u: goto label_1dbbe8;
        case 0x1dbbecu: goto label_1dbbec;
        case 0x1dbbf0u: goto label_1dbbf0;
        case 0x1dbbf4u: goto label_1dbbf4;
        case 0x1dbbf8u: goto label_1dbbf8;
        case 0x1dbbfcu: goto label_1dbbfc;
        case 0x1dbc00u: goto label_1dbc00;
        case 0x1dbc04u: goto label_1dbc04;
        case 0x1dbc08u: goto label_1dbc08;
        case 0x1dbc0cu: goto label_1dbc0c;
        case 0x1dbc10u: goto label_1dbc10;
        case 0x1dbc14u: goto label_1dbc14;
        case 0x1dbc18u: goto label_1dbc18;
        case 0x1dbc1cu: goto label_1dbc1c;
        case 0x1dbc20u: goto label_1dbc20;
        case 0x1dbc24u: goto label_1dbc24;
        case 0x1dbc28u: goto label_1dbc28;
        case 0x1dbc2cu: goto label_1dbc2c;
        case 0x1dbc30u: goto label_1dbc30;
        case 0x1dbc34u: goto label_1dbc34;
        case 0x1dbc38u: goto label_1dbc38;
        case 0x1dbc3cu: goto label_1dbc3c;
        case 0x1dbc40u: goto label_1dbc40;
        case 0x1dbc44u: goto label_1dbc44;
        case 0x1dbc48u: goto label_1dbc48;
        case 0x1dbc4cu: goto label_1dbc4c;
        case 0x1dbc50u: goto label_1dbc50;
        case 0x1dbc54u: goto label_1dbc54;
        case 0x1dbc58u: goto label_1dbc58;
        case 0x1dbc5cu: goto label_1dbc5c;
        case 0x1dbc60u: goto label_1dbc60;
        case 0x1dbc64u: goto label_1dbc64;
        case 0x1dbc68u: goto label_1dbc68;
        case 0x1dbc6cu: goto label_1dbc6c;
        case 0x1dbc70u: goto label_1dbc70;
        case 0x1dbc74u: goto label_1dbc74;
        case 0x1dbc78u: goto label_1dbc78;
        case 0x1dbc7cu: goto label_1dbc7c;
        case 0x1dbc80u: goto label_1dbc80;
        case 0x1dbc84u: goto label_1dbc84;
        case 0x1dbc88u: goto label_1dbc88;
        case 0x1dbc8cu: goto label_1dbc8c;
        case 0x1dbc90u: goto label_1dbc90;
        case 0x1dbc94u: goto label_1dbc94;
        case 0x1dbc98u: goto label_1dbc98;
        case 0x1dbc9cu: goto label_1dbc9c;
        case 0x1dbca0u: goto label_1dbca0;
        case 0x1dbca4u: goto label_1dbca4;
        case 0x1dbca8u: goto label_1dbca8;
        case 0x1dbcacu: goto label_1dbcac;
        case 0x1dbcb0u: goto label_1dbcb0;
        case 0x1dbcb4u: goto label_1dbcb4;
        case 0x1dbcb8u: goto label_1dbcb8;
        case 0x1dbcbcu: goto label_1dbcbc;
        case 0x1dbcc0u: goto label_1dbcc0;
        case 0x1dbcc4u: goto label_1dbcc4;
        case 0x1dbcc8u: goto label_1dbcc8;
        case 0x1dbcccu: goto label_1dbccc;
        case 0x1dbcd0u: goto label_1dbcd0;
        case 0x1dbcd4u: goto label_1dbcd4;
        case 0x1dbcd8u: goto label_1dbcd8;
        case 0x1dbcdcu: goto label_1dbcdc;
        case 0x1dbce0u: goto label_1dbce0;
        case 0x1dbce4u: goto label_1dbce4;
        case 0x1dbce8u: goto label_1dbce8;
        case 0x1dbcecu: goto label_1dbcec;
        case 0x1dbcf0u: goto label_1dbcf0;
        case 0x1dbcf4u: goto label_1dbcf4;
        case 0x1dbcf8u: goto label_1dbcf8;
        case 0x1dbcfcu: goto label_1dbcfc;
        case 0x1dbd00u: goto label_1dbd00;
        case 0x1dbd04u: goto label_1dbd04;
        case 0x1dbd08u: goto label_1dbd08;
        case 0x1dbd0cu: goto label_1dbd0c;
        case 0x1dbd10u: goto label_1dbd10;
        case 0x1dbd14u: goto label_1dbd14;
        case 0x1dbd18u: goto label_1dbd18;
        case 0x1dbd1cu: goto label_1dbd1c;
        case 0x1dbd20u: goto label_1dbd20;
        case 0x1dbd24u: goto label_1dbd24;
        case 0x1dbd28u: goto label_1dbd28;
        case 0x1dbd2cu: goto label_1dbd2c;
        case 0x1dbd30u: goto label_1dbd30;
        case 0x1dbd34u: goto label_1dbd34;
        case 0x1dbd38u: goto label_1dbd38;
        case 0x1dbd3cu: goto label_1dbd3c;
        case 0x1dbd40u: goto label_1dbd40;
        case 0x1dbd44u: goto label_1dbd44;
        case 0x1dbd48u: goto label_1dbd48;
        case 0x1dbd4cu: goto label_1dbd4c;
        case 0x1dbd50u: goto label_1dbd50;
        case 0x1dbd54u: goto label_1dbd54;
        case 0x1dbd58u: goto label_1dbd58;
        case 0x1dbd5cu: goto label_1dbd5c;
        case 0x1dbd60u: goto label_1dbd60;
        case 0x1dbd64u: goto label_1dbd64;
        case 0x1dbd68u: goto label_1dbd68;
        case 0x1dbd6cu: goto label_1dbd6c;
        case 0x1dbd70u: goto label_1dbd70;
        case 0x1dbd74u: goto label_1dbd74;
        case 0x1dbd78u: goto label_1dbd78;
        case 0x1dbd7cu: goto label_1dbd7c;
        case 0x1dbd80u: goto label_1dbd80;
        case 0x1dbd84u: goto label_1dbd84;
        case 0x1dbd88u: goto label_1dbd88;
        case 0x1dbd8cu: goto label_1dbd8c;
        case 0x1dbd90u: goto label_1dbd90;
        case 0x1dbd94u: goto label_1dbd94;
        case 0x1dbd98u: goto label_1dbd98;
        case 0x1dbd9cu: goto label_1dbd9c;
        case 0x1dbda0u: goto label_1dbda0;
        case 0x1dbda4u: goto label_1dbda4;
        case 0x1dbda8u: goto label_1dbda8;
        case 0x1dbdacu: goto label_1dbdac;
        case 0x1dbdb0u: goto label_1dbdb0;
        case 0x1dbdb4u: goto label_1dbdb4;
        case 0x1dbdb8u: goto label_1dbdb8;
        case 0x1dbdbcu: goto label_1dbdbc;
        case 0x1dbdc0u: goto label_1dbdc0;
        case 0x1dbdc4u: goto label_1dbdc4;
        case 0x1dbdc8u: goto label_1dbdc8;
        case 0x1dbdccu: goto label_1dbdcc;
        case 0x1dbdd0u: goto label_1dbdd0;
        case 0x1dbdd4u: goto label_1dbdd4;
        case 0x1dbdd8u: goto label_1dbdd8;
        case 0x1dbddcu: goto label_1dbddc;
        case 0x1dbde0u: goto label_1dbde0;
        case 0x1dbde4u: goto label_1dbde4;
        case 0x1dbde8u: goto label_1dbde8;
        case 0x1dbdecu: goto label_1dbdec;
        case 0x1dbdf0u: goto label_1dbdf0;
        case 0x1dbdf4u: goto label_1dbdf4;
        case 0x1dbdf8u: goto label_1dbdf8;
        case 0x1dbdfcu: goto label_1dbdfc;
        case 0x1dbe00u: goto label_1dbe00;
        case 0x1dbe04u: goto label_1dbe04;
        case 0x1dbe08u: goto label_1dbe08;
        case 0x1dbe0cu: goto label_1dbe0c;
        case 0x1dbe10u: goto label_1dbe10;
        case 0x1dbe14u: goto label_1dbe14;
        case 0x1dbe18u: goto label_1dbe18;
        case 0x1dbe1cu: goto label_1dbe1c;
        case 0x1dbe20u: goto label_1dbe20;
        case 0x1dbe24u: goto label_1dbe24;
        case 0x1dbe28u: goto label_1dbe28;
        case 0x1dbe2cu: goto label_1dbe2c;
        case 0x1dbe30u: goto label_1dbe30;
        case 0x1dbe34u: goto label_1dbe34;
        case 0x1dbe38u: goto label_1dbe38;
        case 0x1dbe3cu: goto label_1dbe3c;
        case 0x1dbe40u: goto label_1dbe40;
        case 0x1dbe44u: goto label_1dbe44;
        case 0x1dbe48u: goto label_1dbe48;
        case 0x1dbe4cu: goto label_1dbe4c;
        case 0x1dbe50u: goto label_1dbe50;
        case 0x1dbe54u: goto label_1dbe54;
        case 0x1dbe58u: goto label_1dbe58;
        case 0x1dbe5cu: goto label_1dbe5c;
        case 0x1dbe60u: goto label_1dbe60;
        case 0x1dbe64u: goto label_1dbe64;
        case 0x1dbe68u: goto label_1dbe68;
        case 0x1dbe6cu: goto label_1dbe6c;
        case 0x1dbe70u: goto label_1dbe70;
        case 0x1dbe74u: goto label_1dbe74;
        case 0x1dbe78u: goto label_1dbe78;
        case 0x1dbe7cu: goto label_1dbe7c;
        case 0x1dbe80u: goto label_1dbe80;
        case 0x1dbe84u: goto label_1dbe84;
        case 0x1dbe88u: goto label_1dbe88;
        case 0x1dbe8cu: goto label_1dbe8c;
        case 0x1dbe90u: goto label_1dbe90;
        case 0x1dbe94u: goto label_1dbe94;
        case 0x1dbe98u: goto label_1dbe98;
        case 0x1dbe9cu: goto label_1dbe9c;
        case 0x1dbea0u: goto label_1dbea0;
        case 0x1dbea4u: goto label_1dbea4;
        case 0x1dbea8u: goto label_1dbea8;
        case 0x1dbeacu: goto label_1dbeac;
        case 0x1dbeb0u: goto label_1dbeb0;
        case 0x1dbeb4u: goto label_1dbeb4;
        case 0x1dbeb8u: goto label_1dbeb8;
        case 0x1dbebcu: goto label_1dbebc;
        case 0x1dbec0u: goto label_1dbec0;
        case 0x1dbec4u: goto label_1dbec4;
        case 0x1dbec8u: goto label_1dbec8;
        case 0x1dbeccu: goto label_1dbecc;
        case 0x1dbed0u: goto label_1dbed0;
        case 0x1dbed4u: goto label_1dbed4;
        case 0x1dbed8u: goto label_1dbed8;
        case 0x1dbedcu: goto label_1dbedc;
        case 0x1dbee0u: goto label_1dbee0;
        case 0x1dbee4u: goto label_1dbee4;
        case 0x1dbee8u: goto label_1dbee8;
        case 0x1dbeecu: goto label_1dbeec;
        case 0x1dbef0u: goto label_1dbef0;
        case 0x1dbef4u: goto label_1dbef4;
        case 0x1dbef8u: goto label_1dbef8;
        case 0x1dbefcu: goto label_1dbefc;
        case 0x1dbf00u: goto label_1dbf00;
        case 0x1dbf04u: goto label_1dbf04;
        case 0x1dbf08u: goto label_1dbf08;
        case 0x1dbf0cu: goto label_1dbf0c;
        case 0x1dbf10u: goto label_1dbf10;
        case 0x1dbf14u: goto label_1dbf14;
        case 0x1dbf18u: goto label_1dbf18;
        case 0x1dbf1cu: goto label_1dbf1c;
        case 0x1dbf20u: goto label_1dbf20;
        case 0x1dbf24u: goto label_1dbf24;
        case 0x1dbf28u: goto label_1dbf28;
        case 0x1dbf2cu: goto label_1dbf2c;
        case 0x1dbf30u: goto label_1dbf30;
        case 0x1dbf34u: goto label_1dbf34;
        case 0x1dbf38u: goto label_1dbf38;
        case 0x1dbf3cu: goto label_1dbf3c;
        case 0x1dbf40u: goto label_1dbf40;
        case 0x1dbf44u: goto label_1dbf44;
        case 0x1dbf48u: goto label_1dbf48;
        case 0x1dbf4cu: goto label_1dbf4c;
        case 0x1dbf50u: goto label_1dbf50;
        case 0x1dbf54u: goto label_1dbf54;
        case 0x1dbf58u: goto label_1dbf58;
        case 0x1dbf5cu: goto label_1dbf5c;
        case 0x1dbf60u: goto label_1dbf60;
        case 0x1dbf64u: goto label_1dbf64;
        case 0x1dbf68u: goto label_1dbf68;
        case 0x1dbf6cu: goto label_1dbf6c;
        case 0x1dbf70u: goto label_1dbf70;
        case 0x1dbf74u: goto label_1dbf74;
        case 0x1dbf78u: goto label_1dbf78;
        case 0x1dbf7cu: goto label_1dbf7c;
        case 0x1dbf80u: goto label_1dbf80;
        case 0x1dbf84u: goto label_1dbf84;
        case 0x1dbf88u: goto label_1dbf88;
        case 0x1dbf8cu: goto label_1dbf8c;
        case 0x1dbf90u: goto label_1dbf90;
        case 0x1dbf94u: goto label_1dbf94;
        case 0x1dbf98u: goto label_1dbf98;
        case 0x1dbf9cu: goto label_1dbf9c;
        case 0x1dbfa0u: goto label_1dbfa0;
        case 0x1dbfa4u: goto label_1dbfa4;
        case 0x1dbfa8u: goto label_1dbfa8;
        case 0x1dbfacu: goto label_1dbfac;
        case 0x1dbfb0u: goto label_1dbfb0;
        case 0x1dbfb4u: goto label_1dbfb4;
        case 0x1dbfb8u: goto label_1dbfb8;
        case 0x1dbfbcu: goto label_1dbfbc;
        case 0x1dbfc0u: goto label_1dbfc0;
        case 0x1dbfc4u: goto label_1dbfc4;
        case 0x1dbfc8u: goto label_1dbfc8;
        case 0x1dbfccu: goto label_1dbfcc;
        case 0x1dbfd0u: goto label_1dbfd0;
        case 0x1dbfd4u: goto label_1dbfd4;
        case 0x1dbfd8u: goto label_1dbfd8;
        case 0x1dbfdcu: goto label_1dbfdc;
        case 0x1dbfe0u: goto label_1dbfe0;
        case 0x1dbfe4u: goto label_1dbfe4;
        case 0x1dbfe8u: goto label_1dbfe8;
        case 0x1dbfecu: goto label_1dbfec;
        case 0x1dbff0u: goto label_1dbff0;
        case 0x1dbff4u: goto label_1dbff4;
        case 0x1dbff8u: goto label_1dbff8;
        case 0x1dbffcu: goto label_1dbffc;
        case 0x1dc000u: goto label_1dc000;
        case 0x1dc004u: goto label_1dc004;
        case 0x1dc008u: goto label_1dc008;
        case 0x1dc00cu: goto label_1dc00c;
        case 0x1dc010u: goto label_1dc010;
        case 0x1dc014u: goto label_1dc014;
        case 0x1dc018u: goto label_1dc018;
        case 0x1dc01cu: goto label_1dc01c;
        case 0x1dc020u: goto label_1dc020;
        case 0x1dc024u: goto label_1dc024;
        case 0x1dc028u: goto label_1dc028;
        case 0x1dc02cu: goto label_1dc02c;
        case 0x1dc030u: goto label_1dc030;
        case 0x1dc034u: goto label_1dc034;
        case 0x1dc038u: goto label_1dc038;
        case 0x1dc03cu: goto label_1dc03c;
        case 0x1dc040u: goto label_1dc040;
        case 0x1dc044u: goto label_1dc044;
        case 0x1dc048u: goto label_1dc048;
        case 0x1dc04cu: goto label_1dc04c;
        case 0x1dc050u: goto label_1dc050;
        case 0x1dc054u: goto label_1dc054;
        case 0x1dc058u: goto label_1dc058;
        case 0x1dc05cu: goto label_1dc05c;
        case 0x1dc060u: goto label_1dc060;
        case 0x1dc064u: goto label_1dc064;
        case 0x1dc068u: goto label_1dc068;
        case 0x1dc06cu: goto label_1dc06c;
        case 0x1dc070u: goto label_1dc070;
        case 0x1dc074u: goto label_1dc074;
        case 0x1dc078u: goto label_1dc078;
        case 0x1dc07cu: goto label_1dc07c;
        case 0x1dc080u: goto label_1dc080;
        case 0x1dc084u: goto label_1dc084;
        case 0x1dc088u: goto label_1dc088;
        case 0x1dc08cu: goto label_1dc08c;
        case 0x1dc090u: goto label_1dc090;
        case 0x1dc094u: goto label_1dc094;
        case 0x1dc098u: goto label_1dc098;
        case 0x1dc09cu: goto label_1dc09c;
        case 0x1dc0a0u: goto label_1dc0a0;
        case 0x1dc0a4u: goto label_1dc0a4;
        case 0x1dc0a8u: goto label_1dc0a8;
        case 0x1dc0acu: goto label_1dc0ac;
        case 0x1dc0b0u: goto label_1dc0b0;
        case 0x1dc0b4u: goto label_1dc0b4;
        case 0x1dc0b8u: goto label_1dc0b8;
        case 0x1dc0bcu: goto label_1dc0bc;
        case 0x1dc0c0u: goto label_1dc0c0;
        case 0x1dc0c4u: goto label_1dc0c4;
        case 0x1dc0c8u: goto label_1dc0c8;
        case 0x1dc0ccu: goto label_1dc0cc;
        case 0x1dc0d0u: goto label_1dc0d0;
        case 0x1dc0d4u: goto label_1dc0d4;
        case 0x1dc0d8u: goto label_1dc0d8;
        case 0x1dc0dcu: goto label_1dc0dc;
        case 0x1dc0e0u: goto label_1dc0e0;
        case 0x1dc0e4u: goto label_1dc0e4;
        case 0x1dc0e8u: goto label_1dc0e8;
        case 0x1dc0ecu: goto label_1dc0ec;
        case 0x1dc0f0u: goto label_1dc0f0;
        case 0x1dc0f4u: goto label_1dc0f4;
        case 0x1dc0f8u: goto label_1dc0f8;
        case 0x1dc0fcu: goto label_1dc0fc;
        case 0x1dc100u: goto label_1dc100;
        case 0x1dc104u: goto label_1dc104;
        case 0x1dc108u: goto label_1dc108;
        case 0x1dc10cu: goto label_1dc10c;
        case 0x1dc110u: goto label_1dc110;
        case 0x1dc114u: goto label_1dc114;
        case 0x1dc118u: goto label_1dc118;
        case 0x1dc11cu: goto label_1dc11c;
        case 0x1dc120u: goto label_1dc120;
        case 0x1dc124u: goto label_1dc124;
        case 0x1dc128u: goto label_1dc128;
        case 0x1dc12cu: goto label_1dc12c;
        case 0x1dc130u: goto label_1dc130;
        case 0x1dc134u: goto label_1dc134;
        case 0x1dc138u: goto label_1dc138;
        case 0x1dc13cu: goto label_1dc13c;
        case 0x1dc140u: goto label_1dc140;
        case 0x1dc144u: goto label_1dc144;
        case 0x1dc148u: goto label_1dc148;
        case 0x1dc14cu: goto label_1dc14c;
        case 0x1dc150u: goto label_1dc150;
        case 0x1dc154u: goto label_1dc154;
        case 0x1dc158u: goto label_1dc158;
        case 0x1dc15cu: goto label_1dc15c;
        case 0x1dc160u: goto label_1dc160;
        case 0x1dc164u: goto label_1dc164;
        case 0x1dc168u: goto label_1dc168;
        case 0x1dc16cu: goto label_1dc16c;
        case 0x1dc170u: goto label_1dc170;
        case 0x1dc174u: goto label_1dc174;
        case 0x1dc178u: goto label_1dc178;
        case 0x1dc17cu: goto label_1dc17c;
        case 0x1dc180u: goto label_1dc180;
        case 0x1dc184u: goto label_1dc184;
        case 0x1dc188u: goto label_1dc188;
        case 0x1dc18cu: goto label_1dc18c;
        case 0x1dc190u: goto label_1dc190;
        case 0x1dc194u: goto label_1dc194;
        case 0x1dc198u: goto label_1dc198;
        case 0x1dc19cu: goto label_1dc19c;
        case 0x1dc1a0u: goto label_1dc1a0;
        case 0x1dc1a4u: goto label_1dc1a4;
        case 0x1dc1a8u: goto label_1dc1a8;
        case 0x1dc1acu: goto label_1dc1ac;
        case 0x1dc1b0u: goto label_1dc1b0;
        case 0x1dc1b4u: goto label_1dc1b4;
        case 0x1dc1b8u: goto label_1dc1b8;
        case 0x1dc1bcu: goto label_1dc1bc;
        case 0x1dc1c0u: goto label_1dc1c0;
        case 0x1dc1c4u: goto label_1dc1c4;
        case 0x1dc1c8u: goto label_1dc1c8;
        case 0x1dc1ccu: goto label_1dc1cc;
        case 0x1dc1d0u: goto label_1dc1d0;
        case 0x1dc1d4u: goto label_1dc1d4;
        case 0x1dc1d8u: goto label_1dc1d8;
        case 0x1dc1dcu: goto label_1dc1dc;
        case 0x1dc1e0u: goto label_1dc1e0;
        case 0x1dc1e4u: goto label_1dc1e4;
        case 0x1dc1e8u: goto label_1dc1e8;
        case 0x1dc1ecu: goto label_1dc1ec;
        case 0x1dc1f0u: goto label_1dc1f0;
        case 0x1dc1f4u: goto label_1dc1f4;
        case 0x1dc1f8u: goto label_1dc1f8;
        case 0x1dc1fcu: goto label_1dc1fc;
        case 0x1dc200u: goto label_1dc200;
        case 0x1dc204u: goto label_1dc204;
        case 0x1dc208u: goto label_1dc208;
        case 0x1dc20cu: goto label_1dc20c;
        case 0x1dc210u: goto label_1dc210;
        case 0x1dc214u: goto label_1dc214;
        case 0x1dc218u: goto label_1dc218;
        case 0x1dc21cu: goto label_1dc21c;
        case 0x1dc220u: goto label_1dc220;
        case 0x1dc224u: goto label_1dc224;
        case 0x1dc228u: goto label_1dc228;
        case 0x1dc22cu: goto label_1dc22c;
        case 0x1dc230u: goto label_1dc230;
        case 0x1dc234u: goto label_1dc234;
        case 0x1dc238u: goto label_1dc238;
        case 0x1dc23cu: goto label_1dc23c;
        case 0x1dc240u: goto label_1dc240;
        case 0x1dc244u: goto label_1dc244;
        case 0x1dc248u: goto label_1dc248;
        case 0x1dc24cu: goto label_1dc24c;
        case 0x1dc250u: goto label_1dc250;
        case 0x1dc254u: goto label_1dc254;
        case 0x1dc258u: goto label_1dc258;
        case 0x1dc25cu: goto label_1dc25c;
        case 0x1dc260u: goto label_1dc260;
        case 0x1dc264u: goto label_1dc264;
        case 0x1dc268u: goto label_1dc268;
        case 0x1dc26cu: goto label_1dc26c;
        case 0x1dc270u: goto label_1dc270;
        case 0x1dc274u: goto label_1dc274;
        case 0x1dc278u: goto label_1dc278;
        case 0x1dc27cu: goto label_1dc27c;
        case 0x1dc280u: goto label_1dc280;
        case 0x1dc284u: goto label_1dc284;
        case 0x1dc288u: goto label_1dc288;
        case 0x1dc28cu: goto label_1dc28c;
        case 0x1dc290u: goto label_1dc290;
        case 0x1dc294u: goto label_1dc294;
        case 0x1dc298u: goto label_1dc298;
        case 0x1dc29cu: goto label_1dc29c;
        case 0x1dc2a0u: goto label_1dc2a0;
        case 0x1dc2a4u: goto label_1dc2a4;
        case 0x1dc2a8u: goto label_1dc2a8;
        case 0x1dc2acu: goto label_1dc2ac;
        default: break;
    }

    ctx->pc = 0x1da7d0u;

label_1da7d0:
    // 0x1da7d0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1da7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1da7d4:
    // 0x1da7d4: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x1da7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
label_1da7d8:
    // 0x1da7d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1da7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1da7dc:
    // 0x1da7dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1da7e0:
    // 0x1da7e0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1da7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1da7e4:
    // 0x1da7e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1da7e8:
    // 0x1da7e8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1da7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1da7ec:
    // 0x1da7ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1da7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1da7f0:
    // 0x1da7f0: 0x28620061  slti        $v0, $v1, 0x61
    ctx->pc = 0x1da7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)97) ? 1 : 0);
label_1da7f4:
    // 0x1da7f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1da7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1da7f8:
    // 0x1da7f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1da7fc:
    // 0x1da7fc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1da7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1da800:
    // 0x1da800: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1da804:
    // 0x1da804: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1da804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1da808:
    // 0x1da808: 0x3e00008  jr          $ra
label_1da80c:
    if (ctx->pc == 0x1DA80Cu) {
        ctx->pc = 0x1DA80Cu;
            // 0x1da80c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1DA810u;
        goto label_1da810;
    }
    ctx->pc = 0x1DA808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA808u;
            // 0x1da80c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA810u;
label_1da810:
    // 0x1da810: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1da810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1da814:
    // 0x1da814: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1da814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1da818:
    // 0x1da818: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1da818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1da81c:
    // 0x1da81c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1da81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1da820:
    // 0x1da820: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1da820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1da824:
    // 0x1da824: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1da824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1da828:
    // 0x1da828: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1da82c:
    // 0x1da82c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1da82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da830:
    // 0x1da830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1da830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1da834:
    // 0x1da834: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1da834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1da838:
    // 0x1da838: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1da838u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1da83c:
    // 0x1da83c: 0x5083003e  beql        $a0, $v1, . + 4 + (0x3E << 2)
label_1da840:
    if (ctx->pc == 0x1DA840u) {
        ctx->pc = 0x1DA840u;
            // 0x1da840: 0xa24011a0  sb          $zero, 0x11A0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4512), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1DA844u;
        goto label_1da844;
    }
    ctx->pc = 0x1DA83Cu;
    {
        const bool branch_taken_0x1da83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da83c) {
            ctx->pc = 0x1DA840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA83Cu;
            // 0x1da840: 0xa24011a0  sb          $zero, 0x11A0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4512), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA938u;
            goto label_1da938;
        }
    }
    ctx->pc = 0x1DA844u;
label_1da844:
    // 0x1da844: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1da844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da848:
    // 0x1da848: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1da84c:
    if (ctx->pc == 0x1DA84Cu) {
        ctx->pc = 0x1DA850u;
        goto label_1da850;
    }
    ctx->pc = 0x1DA848u;
    {
        const bool branch_taken_0x1da848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da848) {
            ctx->pc = 0x1DA858u;
            goto label_1da858;
        }
    }
    ctx->pc = 0x1DA850u;
label_1da850:
    // 0x1da850: 0x1000068c  b           . + 4 + (0x68C << 2)
label_1da854:
    if (ctx->pc == 0x1DA854u) {
        ctx->pc = 0x1DA854u;
            // 0x1da854: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x1DA858u;
        goto label_1da858;
    }
    ctx->pc = 0x1DA850u;
    {
        const bool branch_taken_0x1da850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA850u;
            // 0x1da854: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da850) {
            ctx->pc = 0x1DC284u;
            goto label_1dc284;
        }
    }
    ctx->pc = 0x1DA858u;
label_1da858:
    // 0x1da858: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1da858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1da85c:
    // 0x1da85c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x1da85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_1da860:
    // 0x1da860: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x1da860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_1da864:
    // 0x1da864: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1da864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1da868:
    // 0x1da868: 0x14600685  bnez        $v1, . + 4 + (0x685 << 2)
label_1da86c:
    if (ctx->pc == 0x1DA86Cu) {
        ctx->pc = 0x1DA870u;
        goto label_1da870;
    }
    ctx->pc = 0x1DA868u;
    {
        const bool branch_taken_0x1da868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da868) {
            ctx->pc = 0x1DC280u;
            goto label_1dc280;
        }
    }
    ctx->pc = 0x1DA870u;
label_1da870:
    // 0x1da870: 0x8e421198  lw          $v0, 0x1198($s2)
    ctx->pc = 0x1da870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4504)));
label_1da874:
    // 0x1da874: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1da878:
    if (ctx->pc == 0x1DA878u) {
        ctx->pc = 0x1DA878u;
            // 0x1da878: 0x8e441140  lw          $a0, 0x1140($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4416)));
        ctx->pc = 0x1DA87Cu;
        goto label_1da87c;
    }
    ctx->pc = 0x1DA874u;
    {
        const bool branch_taken_0x1da874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da874) {
            ctx->pc = 0x1DA878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA874u;
            // 0x1da878: 0x8e441140  lw          $a0, 0x1140($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA888u;
            goto label_1da888;
        }
    }
    ctx->pc = 0x1DA87Cu;
label_1da87c:
    // 0x1da87c: 0xc074a24  jal         func_1D2890
label_1da880:
    if (ctx->pc == 0x1DA880u) {
        ctx->pc = 0x1DA880u;
            // 0x1da880: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1DA884u;
        goto label_1da884;
    }
    ctx->pc = 0x1DA87Cu;
    SET_GPR_U32(ctx, 31, 0x1DA884u);
    ctx->pc = 0x1DA880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA87Cu;
            // 0x1da880: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2890u;
    if (runtime->hasFunction(0x1D2890u)) {
        auto targetFn = runtime->lookupFunction(0x1D2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA884u; }
        if (ctx->pc != 0x1DA884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2890_0x1d2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA884u; }
        if (ctx->pc != 0x1DA884u) { return; }
    }
    ctx->pc = 0x1DA884u;
label_1da884:
    // 0x1da884: 0x8e441140  lw          $a0, 0x1140($s2)
    ctx->pc = 0x1da884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4416)));
label_1da888:
    // 0x1da888: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_1da88c:
    if (ctx->pc == 0x1DA88Cu) {
        ctx->pc = 0x1DA88Cu;
            // 0x1da88c: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x1DA890u;
        goto label_1da890;
    }
    ctx->pc = 0x1DA888u;
    {
        const bool branch_taken_0x1da888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da888) {
            ctx->pc = 0x1DA88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA888u;
            // 0x1da88c: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA8C0u;
            goto label_1da8c0;
        }
    }
    ctx->pc = 0x1DA890u;
label_1da890:
    // 0x1da890: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1da894:
    // 0x1da894: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1da894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1da898:
    // 0x1da898: 0x320f809  jalr        $t9
label_1da89c:
    if (ctx->pc == 0x1DA89Cu) {
        ctx->pc = 0x1DA89Cu;
            // 0x1da89c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DA8A0u;
        goto label_1da8a0;
    }
    ctx->pc = 0x1DA898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA8A0u);
        ctx->pc = 0x1DA89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA898u;
            // 0x1da89c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA8A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8A0u; }
            if (ctx->pc != 0x1DA8A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA8A0u;
label_1da8a0:
    // 0x1da8a0: 0x8e441140  lw          $a0, 0x1140($s2)
    ctx->pc = 0x1da8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4416)));
label_1da8a4:
    // 0x1da8a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1da8a8:
    if (ctx->pc == 0x1DA8A8u) {
        ctx->pc = 0x1DA8ACu;
        goto label_1da8ac;
    }
    ctx->pc = 0x1DA8A4u;
    {
        const bool branch_taken_0x1da8a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8a4) {
            ctx->pc = 0x1DA8BCu;
            goto label_1da8bc;
        }
    }
    ctx->pc = 0x1DA8ACu;
label_1da8ac:
    // 0x1da8ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1da8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1da8b0:
    // 0x1da8b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1da8b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1da8b4:
    // 0x1da8b4: 0x320f809  jalr        $t9
label_1da8b8:
    if (ctx->pc == 0x1DA8B8u) {
        ctx->pc = 0x1DA8B8u;
            // 0x1da8b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DA8BCu;
        goto label_1da8bc;
    }
    ctx->pc = 0x1DA8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA8BCu);
        ctx->pc = 0x1DA8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8B4u;
            // 0x1da8b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA8BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8BCu; }
            if (ctx->pc != 0x1DA8BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1DA8BCu;
label_1da8bc:
    // 0x1da8bc: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x1da8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_1da8c0:
    // 0x1da8c0: 0xc040180  jal         func_100600
label_1da8c4:
    if (ctx->pc == 0x1DA8C4u) {
        ctx->pc = 0x1DA8C8u;
        goto label_1da8c8;
    }
    ctx->pc = 0x1DA8C0u;
    SET_GPR_U32(ctx, 31, 0x1DA8C8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8C8u; }
        if (ctx->pc != 0x1DA8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8C8u; }
        if (ctx->pc != 0x1DA8C8u) { return; }
    }
    ctx->pc = 0x1DA8C8u;
label_1da8c8:
    // 0x1da8c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1da8cc:
    if (ctx->pc == 0x1DA8CCu) {
        ctx->pc = 0x1DA8D0u;
        goto label_1da8d0;
    }
    ctx->pc = 0x1DA8C8u;
    {
        const bool branch_taken_0x1da8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8c8) {
            ctx->pc = 0x1DA8E8u;
            goto label_1da8e8;
        }
    }
    ctx->pc = 0x1DA8D0u;
label_1da8d0:
    // 0x1da8d0: 0x8e470d98  lw          $a3, 0xD98($s2)
    ctx->pc = 0x1da8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_1da8d4:
    // 0x1da8d4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1da8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1da8d8:
    // 0x1da8d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da8dc:
    // 0x1da8dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da8e0:
    // 0x1da8e0: 0xc0c3f60  jal         func_30FD80
label_1da8e4:
    if (ctx->pc == 0x1DA8E4u) {
        ctx->pc = 0x1DA8E4u;
            // 0x1da8e4: 0x24c6c660  addiu       $a2, $a2, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952544));
        ctx->pc = 0x1DA8E8u;
        goto label_1da8e8;
    }
    ctx->pc = 0x1DA8E0u;
    SET_GPR_U32(ctx, 31, 0x1DA8E8u);
    ctx->pc = 0x1DA8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8E0u;
            // 0x1da8e4: 0x24c6c660  addiu       $a2, $a2, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8E8u; }
        if (ctx->pc != 0x1DA8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8E8u; }
        if (ctx->pc != 0x1DA8E8u) { return; }
    }
    ctx->pc = 0x1DA8E8u;
label_1da8e8:
    // 0x1da8e8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1da8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1da8ec:
    // 0x1da8ec: 0xae421140  sw          $v0, 0x1140($s2)
    ctx->pc = 0x1da8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4416), GPR_U32(ctx, 2));
label_1da8f0:
    // 0x1da8f0: 0x2463c6a0  addiu       $v1, $v1, -0x3960
    ctx->pc = 0x1da8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952608));
label_1da8f4:
    // 0x1da8f4: 0x24040e50  addiu       $a0, $zero, 0xE50
    ctx->pc = 0x1da8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3664));
label_1da8f8:
    // 0x1da8f8: 0xc040180  jal         func_100600
label_1da8fc:
    if (ctx->pc == 0x1DA8FCu) {
        ctx->pc = 0x1DA8FCu;
            // 0x1da8fc: 0xac4300d0  sw          $v1, 0xD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x1DA900u;
        goto label_1da900;
    }
    ctx->pc = 0x1DA8F8u;
    SET_GPR_U32(ctx, 31, 0x1DA900u);
    ctx->pc = 0x1DA8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8F8u;
            // 0x1da8fc: 0xac4300d0  sw          $v1, 0xD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA900u; }
        if (ctx->pc != 0x1DA900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA900u; }
        if (ctx->pc != 0x1DA900u) { return; }
    }
    ctx->pc = 0x1DA900u;
label_1da900:
    // 0x1da900: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1da904:
    if (ctx->pc == 0x1DA904u) {
        ctx->pc = 0x1DA904u;
            // 0x1da904: 0xae421144  sw          $v0, 0x1144($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4420), GPR_U32(ctx, 2));
        ctx->pc = 0x1DA908u;
        goto label_1da908;
    }
    ctx->pc = 0x1DA900u;
    {
        const bool branch_taken_0x1da900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da900) {
            ctx->pc = 0x1DA904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA900u;
            // 0x1da904: 0xae421144  sw          $v0, 0x1144($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA920u;
            goto label_1da920;
        }
    }
    ctx->pc = 0x1DA908u;
label_1da908:
    // 0x1da908: 0x824511aa  lb          $a1, 0x11AA($s2)
    ctx->pc = 0x1da908u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_1da90c:
    // 0x1da90c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da910:
    // 0x1da910: 0x8e460d98  lw          $a2, 0xD98($s2)
    ctx->pc = 0x1da910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_1da914:
    // 0x1da914: 0xc0fd5b4  jal         func_3F56D0
label_1da918:
    if (ctx->pc == 0x1DA918u) {
        ctx->pc = 0x1DA918u;
            // 0x1da918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA91Cu;
        goto label_1da91c;
    }
    ctx->pc = 0x1DA914u;
    SET_GPR_U32(ctx, 31, 0x1DA91Cu);
    ctx->pc = 0x1DA918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA914u;
            // 0x1da918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F56D0u;
    if (runtime->hasFunction(0x3F56D0u)) {
        auto targetFn = runtime->lookupFunction(0x3F56D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA91Cu; }
        if (ctx->pc != 0x1DA91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F56D0_0x3f56d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA91Cu; }
        if (ctx->pc != 0x1DA91Cu) { return; }
    }
    ctx->pc = 0x1DA91Cu;
label_1da91c:
    // 0x1da91c: 0xae421144  sw          $v0, 0x1144($s2)
    ctx->pc = 0x1da91cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4420), GPR_U32(ctx, 2));
label_1da920:
    // 0x1da920: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1da920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1da924:
    // 0x1da924: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1da924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1da928:
    // 0x1da928: 0x320f809  jalr        $t9
label_1da92c:
    if (ctx->pc == 0x1DA92Cu) {
        ctx->pc = 0x1DA92Cu;
            // 0x1da92c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DA930u;
        goto label_1da930;
    }
    ctx->pc = 0x1DA928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA930u);
        ctx->pc = 0x1DA92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA928u;
            // 0x1da92c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA930u; }
            if (ctx->pc != 0x1DA930u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA930u;
label_1da930:
    // 0x1da930: 0x10000653  b           . + 4 + (0x653 << 2)
label_1da934:
    if (ctx->pc == 0x1DA934u) {
        ctx->pc = 0x1DA938u;
        goto label_1da938;
    }
    ctx->pc = 0x1DA930u;
    {
        const bool branch_taken_0x1da930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da930) {
            ctx->pc = 0x1DC280u;
            goto label_1dc280;
        }
    }
    ctx->pc = 0x1DA938u;
label_1da938:
    // 0x1da938: 0x26451160  addiu       $a1, $s2, 0x1160
    ctx->pc = 0x1da938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4448));
label_1da93c:
    // 0x1da93c: 0xa240119f  sb          $zero, 0x119F($s2)
    ctx->pc = 0x1da93cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4511), (uint8_t)GPR_U32(ctx, 0));
label_1da940:
    // 0x1da940: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1da940u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1da944:
    // 0x1da944: 0x8e420e38  lw          $v0, 0xE38($s2)
    ctx->pc = 0x1da944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_1da948:
    // 0x1da948: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1da94c:
    if (ctx->pc == 0x1DA94Cu) {
        ctx->pc = 0x1DA94Cu;
            // 0x1da94c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA950u;
        goto label_1da950;
    }
    ctx->pc = 0x1DA948u;
    {
        const bool branch_taken_0x1da948 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DA94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA948u;
            // 0x1da94c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da948) {
            ctx->pc = 0x1DA960u;
            goto label_1da960;
        }
    }
    ctx->pc = 0x1DA950u;
label_1da950:
    // 0x1da950: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1da950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1da954:
    // 0x1da954: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1da958:
    if (ctx->pc == 0x1DA958u) {
        ctx->pc = 0x1DA95Cu;
        goto label_1da95c;
    }
    ctx->pc = 0x1DA954u;
    {
        const bool branch_taken_0x1da954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da954) {
            ctx->pc = 0x1DA960u;
            goto label_1da960;
        }
    }
    ctx->pc = 0x1DA95Cu;
label_1da95c:
    // 0x1da95c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1da95cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da960:
    // 0x1da960: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1da964:
    if (ctx->pc == 0x1DA964u) {
        ctx->pc = 0x1DA968u;
        goto label_1da968;
    }
    ctx->pc = 0x1DA960u;
    {
        const bool branch_taken_0x1da960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da960) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA968u;
label_1da968:
    // 0x1da968: 0x824211aa  lb          $v0, 0x11AA($s2)
    ctx->pc = 0x1da968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_1da96c:
    // 0x1da96c: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1da96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1da970:
    // 0x1da970: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1da970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1da974:
    // 0x1da974: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1da978:
    if (ctx->pc == 0x1DA978u) {
        ctx->pc = 0x1DA97Cu;
        goto label_1da97c;
    }
    ctx->pc = 0x1DA974u;
    {
        const bool branch_taken_0x1da974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da974) {
            ctx->pc = 0x1DA994u;
            goto label_1da994;
        }
    }
    ctx->pc = 0x1DA97Cu;
label_1da97c:
    // 0x1da97c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1da97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1da980:
    // 0x1da980: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1da980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1da984:
    // 0x1da984: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1da984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1da988:
    // 0x1da988: 0x401027  not         $v0, $v0
    ctx->pc = 0x1da988u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1da98c:
    // 0x1da98c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1da98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1da990:
    // 0x1da990: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1da990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1da994:
    // 0x1da994: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1da998:
    if (ctx->pc == 0x1DA998u) {
        ctx->pc = 0x1DA99Cu;
        goto label_1da99c;
    }
    ctx->pc = 0x1DA994u;
    {
        const bool branch_taken_0x1da994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da994) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA99Cu;
label_1da99c:
    // 0x1da99c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1da99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da9a0:
    // 0x1da9a0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1da9a4:
    if (ctx->pc == 0x1DA9A4u) {
        ctx->pc = 0x1DA9A4u;
            // 0x1da9a4: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x1DA9A8u;
        goto label_1da9a8;
    }
    ctx->pc = 0x1DA9A0u;
    {
        const bool branch_taken_0x1da9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da9a0) {
            ctx->pc = 0x1DA9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9A0u;
            // 0x1da9a4: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA9B8u;
            goto label_1da9b8;
        }
    }
    ctx->pc = 0x1DA9A8u;
label_1da9a8:
    // 0x1da9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da9ac:
    // 0x1da9ac: 0xa24211a0  sb          $v0, 0x11A0($s2)
    ctx->pc = 0x1da9acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4512), (uint8_t)GPR_U32(ctx, 2));
label_1da9b0:
    // 0x1da9b0: 0xa242119f  sb          $v0, 0x119F($s2)
    ctx->pc = 0x1da9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4511), (uint8_t)GPR_U32(ctx, 2));
label_1da9b4:
    // 0x1da9b4: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x1da9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_1da9b8:
    // 0x1da9b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1da9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1da9bc:
    // 0x1da9bc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_1da9c0:
    if (ctx->pc == 0x1DA9C0u) {
        ctx->pc = 0x1DA9C0u;
            // 0x1da9c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DA9C4u;
        goto label_1da9c4;
    }
    ctx->pc = 0x1DA9BCu;
    {
        const bool branch_taken_0x1da9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1da9bc) {
            ctx->pc = 0x1DA9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9BCu;
            // 0x1da9c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA9D4u;
            goto label_1da9d4;
        }
    }
    ctx->pc = 0x1DA9C4u;
label_1da9c4:
    // 0x1da9c4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1da9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1da9c8:
    // 0x1da9c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1da9cc:
    if (ctx->pc == 0x1DA9CCu) {
        ctx->pc = 0x1DA9D0u;
        goto label_1da9d0;
    }
    ctx->pc = 0x1DA9C8u;
    {
        const bool branch_taken_0x1da9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da9c8) {
            ctx->pc = 0x1DA9D8u;
            goto label_1da9d8;
        }
    }
    ctx->pc = 0x1DA9D0u;
label_1da9d0:
    // 0x1da9d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da9d4:
    // 0x1da9d4: 0xa24211a0  sb          $v0, 0x11A0($s2)
    ctx->pc = 0x1da9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4512), (uint8_t)GPR_U32(ctx, 2));
label_1da9d8:
    // 0x1da9d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1da9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1da9dc:
    // 0x1da9dc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1da9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1da9e0:
    // 0x1da9e0: 0x8044007a  lb          $a0, 0x7A($v0)
    ctx->pc = 0x1da9e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_1da9e4:
    // 0x1da9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da9e8:
    // 0x1da9e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1da9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1da9ec:
    // 0x1da9ec: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1da9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1da9f0:
    // 0x1da9f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1da9f4:
    if (ctx->pc == 0x1DA9F4u) {
        ctx->pc = 0x1DA9F8u;
        goto label_1da9f8;
    }
    ctx->pc = 0x1DA9F0u;
    {
        const bool branch_taken_0x1da9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da9f0) {
            ctx->pc = 0x1DAA00u;
            goto label_1daa00;
        }
    }
    ctx->pc = 0x1DA9F8u;
label_1da9f8:
    // 0x1da9f8: 0xa242119f  sb          $v0, 0x119F($s2)
    ctx->pc = 0x1da9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4511), (uint8_t)GPR_U32(ctx, 2));
label_1da9fc:
    // 0x1da9fc: 0x0  nop
    ctx->pc = 0x1da9fcu;
    // NOP
label_1daa00:
    // 0x1daa00: 0xc6411178  lwc1        $f1, 0x1178($s2)
    ctx->pc = 0x1daa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1daa04:
    // 0x1daa04: 0xc6401174  lwc1        $f0, 0x1174($s2)
    ctx->pc = 0x1daa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1daa08:
    // 0x1daa08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1daa08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1daa0c:
    // 0x1daa0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1daa10:
    if (ctx->pc == 0x1DAA10u) {
        ctx->pc = 0x1DAA14u;
        goto label_1daa14;
    }
    ctx->pc = 0x1DAA0Cu;
    {
        const bool branch_taken_0x1daa0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1daa0c) {
            ctx->pc = 0x1DAA18u;
            goto label_1daa18;
        }
    }
    ctx->pc = 0x1DAA14u;
label_1daa14:
    // 0x1daa14: 0xa24211a0  sb          $v0, 0x11A0($s2)
    ctx->pc = 0x1daa14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4512), (uint8_t)GPR_U32(ctx, 2));
label_1daa18:
    // 0x1daa18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1daa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1daa1c:
    // 0x1daa1c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_1daa20:
    if (ctx->pc == 0x1DAA20u) {
        ctx->pc = 0x1DAA20u;
            // 0x1daa20: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x1DAA24u;
        goto label_1daa24;
    }
    ctx->pc = 0x1DAA1Cu;
    {
        const bool branch_taken_0x1daa1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA1Cu;
            // 0x1daa20: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa1c) {
            ctx->pc = 0x1DA9E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da9e8;
        }
    }
    ctx->pc = 0x1DAA24u;
label_1daa24:
    // 0x1daa24: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x1daa24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
label_1daa28:
    // 0x1daa28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1daa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1daa2c:
    // 0x1daa2c: 0x3464bc20  ori         $a0, $v1, 0xBC20
    ctx->pc = 0x1daa2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
label_1daa30:
    // 0x1daa30: 0xae441178  sw          $a0, 0x1178($s2)
    ctx->pc = 0x1daa30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4472), GPR_U32(ctx, 4));
label_1daa34:
    // 0x1daa34: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1daa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1daa38:
    // 0x1daa38: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1daa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1daa3c:
    // 0x1daa3c: 0x2463c6f0  addiu       $v1, $v1, -0x3910
    ctx->pc = 0x1daa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952688));
label_1daa40:
    // 0x1daa40: 0xc64002c4  lwc1        $f0, 0x2C4($s2)
    ctx->pc = 0x1daa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1daa44:
    // 0x1daa44: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x1daa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_1daa48:
    // 0x1daa48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1daa48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1daa4c:
    // 0x1daa4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1daa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1daa50:
    // 0x1daa50: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1daa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1daa54:
    // 0x1daa54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1daa54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1daa58:
    // 0x1daa58: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_1daa5c:
    if (ctx->pc == 0x1DAA5Cu) {
        ctx->pc = 0x1DAA5Cu;
            // 0x1daa5c: 0x8e500d60  lw          $s0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x1DAA60u;
        goto label_1daa60;
    }
    ctx->pc = 0x1DAA58u;
    {
        const bool branch_taken_0x1daa58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1daa58) {
            ctx->pc = 0x1DAA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA58u;
            // 0x1daa5c: 0x8e500d60  lw          $s0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAA8Cu;
            goto label_1daa8c;
        }
    }
    ctx->pc = 0x1DAA60u;
label_1daa60:
    // 0x1daa60: 0x8e420db0  lw          $v0, 0xDB0($s2)
    ctx->pc = 0x1daa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_1daa64:
    // 0x1daa64: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1daa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1daa68:
    // 0x1daa68: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
label_1daa6c:
    if (ctx->pc == 0x1DAA6Cu) {
        ctx->pc = 0x1DAA70u;
        goto label_1daa70;
    }
    ctx->pc = 0x1DAA68u;
    {
        const bool branch_taken_0x1daa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1daa68) {
            ctx->pc = 0x1DAA88u;
            goto label_1daa88;
        }
    }
    ctx->pc = 0x1DAA70u;
label_1daa70:
    // 0x1daa70: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1daa70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1daa74:
    // 0x1daa74: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x1daa74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_1daa78:
    // 0x1daa78: 0x320f809  jalr        $t9
label_1daa7c:
    if (ctx->pc == 0x1DAA7Cu) {
        ctx->pc = 0x1DAA7Cu;
            // 0x1daa7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA80u;
        goto label_1daa80;
    }
    ctx->pc = 0x1DAA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DAA80u);
        ctx->pc = 0x1DAA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA78u;
            // 0x1daa7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DAA80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA80u; }
            if (ctx->pc != 0x1DAA80u) { return; }
        }
        }
    }
    ctx->pc = 0x1DAA80u;
label_1daa80:
    // 0x1daa80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1daa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1daa84:
    // 0x1daa84: 0xa24211c0  sb          $v0, 0x11C0($s2)
    ctx->pc = 0x1daa84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4544), (uint8_t)GPR_U32(ctx, 2));
label_1daa88:
    // 0x1daa88: 0x8e500d60  lw          $s0, 0xD60($s2)
    ctx->pc = 0x1daa88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_1daa8c:
    // 0x1daa8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1daa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1daa90:
    // 0x1daa90: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1daa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1daa94:
    // 0x1daa94: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x1daa94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1daa98:
    // 0x1daa98: 0xa2020014  sb          $v0, 0x14($s0)
    ctx->pc = 0x1daa98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
label_1daa9c:
    // 0x1daa9c: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x1daa9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1daaa0:
    // 0x1daaa0: 0xa2020015  sb          $v0, 0x15($s0)
    ctx->pc = 0x1daaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 2));
label_1daaa4:
    // 0x1daaa4: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1daaa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_1daaa8:
    // 0x1daaa8: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_1daaac:
    if (ctx->pc == 0x1DAAACu) {
        ctx->pc = 0x1DAAACu;
            // 0x1daaac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1DAAB0u;
        goto label_1daab0;
    }
    ctx->pc = 0x1DAAA8u;
    {
        const bool branch_taken_0x1daaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daaa8) {
            ctx->pc = 0x1DAAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAA8u;
            // 0x1daaac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB20u;
            goto label_1dab20;
        }
    }
    ctx->pc = 0x1DAAB0u;
label_1daab0:
    // 0x1daab0: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x1daab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1daab4:
    // 0x1daab4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1daab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1daab8:
    // 0x1daab8: 0x320f809  jalr        $t9
label_1daabc:
    if (ctx->pc == 0x1DAABCu) {
        ctx->pc = 0x1DAABCu;
            // 0x1daabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAC0u;
        goto label_1daac0;
    }
    ctx->pc = 0x1DAAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DAAC0u);
        ctx->pc = 0x1DAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAB8u;
            // 0x1daabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DAAC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DAAC0u; }
            if (ctx->pc != 0x1DAAC0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DAAC0u;
label_1daac0:
    // 0x1daac0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1daac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1daac4:
    // 0x1daac4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1daac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1daac8:
    // 0x1daac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1daac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1daacc:
    // 0x1daacc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1daaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1daad0:
    // 0x1daad0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1daad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1daad4:
    // 0x1daad4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1daad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1daad8:
    // 0x1daad8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1daad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1daadc:
    // 0x1daadc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1daadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1daae0:
    // 0x1daae0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1daae4:
    if (ctx->pc == 0x1DAAE4u) {
        ctx->pc = 0x1DAAE4u;
            // 0x1daae4: 0x8e430d74  lw          $v1, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x1DAAE8u;
        goto label_1daae8;
    }
    ctx->pc = 0x1DAAE0u;
    {
        const bool branch_taken_0x1daae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daae0) {
            ctx->pc = 0x1DAAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAE0u;
            // 0x1daae4: 0x8e430d74  lw          $v1, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB2Cu;
            goto label_1dab2c;
        }
    }
    ctx->pc = 0x1DAAE8u;
label_1daae8:
    // 0x1daae8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1daae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1daaec:
    // 0x1daaec: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x1daaecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1daaf0:
    // 0x1daaf0: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x1daaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_1daaf4:
    // 0x1daaf4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1daaf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1daaf8:
    // 0x1daaf8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1daaf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1daafc:
    // 0x1daafc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1daafcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_1dab00:
    // 0x1dab00: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1dab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dab04:
    // 0x1dab04: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x1dab04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1dab08:
    // 0x1dab08: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1dab08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_1dab0c:
    // 0x1dab0c: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x1dab0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_1dab10:
    // 0x1dab10: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1dab10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dab14:
    // 0x1dab14: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x1dab14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dab18:
    // 0x1dab18: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dab1c:
    if (ctx->pc == 0x1DAB1Cu) {
        ctx->pc = 0x1DAB1Cu;
            // 0x1dab1c: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1DAB20u;
        goto label_1dab20;
    }
    ctx->pc = 0x1DAB18u;
    {
        const bool branch_taken_0x1dab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB18u;
            // 0x1dab1c: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab18) {
            ctx->pc = 0x1DAB28u;
            goto label_1dab28;
        }
    }
    ctx->pc = 0x1DAB20u;
label_1dab20:
    // 0x1dab20: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1dab20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_1dab24:
    // 0x1dab24: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x1dab24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_1dab28:
    // 0x1dab28: 0x8e430d74  lw          $v1, 0xD74($s2)
    ctx->pc = 0x1dab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_1dab2c:
    // 0x1dab2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dab30:
    // 0x1dab30: 0x8c6302cc  lw          $v1, 0x2CC($v1)
    ctx->pc = 0x1dab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
label_1dab34:
    // 0x1dab34: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_1dab38:
    if (ctx->pc == 0x1DAB38u) {
        ctx->pc = 0x1DAB38u;
            // 0x1dab38: 0x26441150  addiu       $a0, $s2, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
        ctx->pc = 0x1DAB3Cu;
        goto label_1dab3c;
    }
    ctx->pc = 0x1DAB34u;
    {
        const bool branch_taken_0x1dab34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dab34) {
            ctx->pc = 0x1DAB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB34u;
            // 0x1dab38: 0x26441150  addiu       $a0, $s2, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB48u;
            goto label_1dab48;
        }
    }
    ctx->pc = 0x1DAB3Cu;
label_1dab3c:
    // 0x1dab3c: 0xc0eebf0  jal         func_3BAFC0
label_1dab40:
    if (ctx->pc == 0x1DAB40u) {
        ctx->pc = 0x1DAB40u;
            // 0x1dab40: 0x26440a50  addiu       $a0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->pc = 0x1DAB44u;
        goto label_1dab44;
    }
    ctx->pc = 0x1DAB3Cu;
    SET_GPR_U32(ctx, 31, 0x1DAB44u);
    ctx->pc = 0x1DAB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB3Cu;
            // 0x1dab40: 0x26440a50  addiu       $a0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BAFC0u;
    if (runtime->hasFunction(0x3BAFC0u)) {
        auto targetFn = runtime->lookupFunction(0x3BAFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB44u; }
        if (ctx->pc != 0x1DAB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BAFC0_0x3bafc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB44u; }
        if (ctx->pc != 0x1DAB44u) { return; }
    }
    ctx->pc = 0x1DAB44u;
label_1dab44:
    // 0x1dab44: 0x26441150  addiu       $a0, $s2, 0x1150
    ctx->pc = 0x1dab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
label_1dab48:
    // 0x1dab48: 0xc12ca24  jal         func_4B2890
label_1dab4c:
    if (ctx->pc == 0x1DAB4Cu) {
        ctx->pc = 0x1DAB50u;
        goto label_1dab50;
    }
    ctx->pc = 0x1DAB48u;
    SET_GPR_U32(ctx, 31, 0x1DAB50u);
    ctx->pc = 0x4B2890u;
    if (runtime->hasFunction(0x4B2890u)) {
        auto targetFn = runtime->lookupFunction(0x4B2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB50u; }
        if (ctx->pc != 0x1DAB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2890_0x4b2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB50u; }
        if (ctx->pc != 0x1DAB50u) { return; }
    }
    ctx->pc = 0x1DAB50u;
label_1dab50:
    // 0x1dab50: 0xc6421188  lwc1        $f2, 0x1188($s2)
    ctx->pc = 0x1dab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dab54:
    // 0x1dab54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dab54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dab58:
    // 0x1dab58: 0x0  nop
    ctx->pc = 0x1dab58u;
    // NOP
label_1dab5c:
    // 0x1dab5c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1dab5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dab60:
    // 0x1dab60: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_1dab64:
    if (ctx->pc == 0x1DAB64u) {
        ctx->pc = 0x1DAB64u;
            // 0x1dab64: 0x8e440da0  lw          $a0, 0xDA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
        ctx->pc = 0x1DAB68u;
        goto label_1dab68;
    }
    ctx->pc = 0x1DAB60u;
    {
        const bool branch_taken_0x1dab60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dab60) {
            ctx->pc = 0x1DAB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB60u;
            // 0x1dab64: 0x8e440da0  lw          $a0, 0xDA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB94u;
            goto label_1dab94;
        }
    }
    ctx->pc = 0x1DAB68u;
label_1dab68:
    // 0x1dab68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1dab6c:
    // 0x1dab6c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1dab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1dab70:
    // 0x1dab70: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1dab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dab74:
    // 0x1dab74: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dab74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dab78:
    // 0x1dab78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dab78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dab7c:
    // 0x1dab7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1dab80:
    if (ctx->pc == 0x1DAB80u) {
        ctx->pc = 0x1DAB80u;
            // 0x1dab80: 0xe6401188  swc1        $f0, 0x1188($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4488), bits); }
        ctx->pc = 0x1DAB84u;
        goto label_1dab84;
    }
    ctx->pc = 0x1DAB7Cu;
    {
        const bool branch_taken_0x1dab7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB7Cu;
            // 0x1dab80: 0xe6401188  swc1        $f0, 0x1188($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4488), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab7c) {
            ctx->pc = 0x1DAB90u;
            goto label_1dab90;
        }
    }
    ctx->pc = 0x1DAB84u;
label_1dab84:
    // 0x1dab84: 0x8e451184  lw          $a1, 0x1184($s2)
    ctx->pc = 0x1dab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4484)));
label_1dab88:
    // 0x1dab88: 0xc07649c  jal         func_1D9270
label_1dab8c:
    if (ctx->pc == 0x1DAB8Cu) {
        ctx->pc = 0x1DAB8Cu;
            // 0x1dab8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB90u;
        goto label_1dab90;
    }
    ctx->pc = 0x1DAB88u;
    SET_GPR_U32(ctx, 31, 0x1DAB90u);
    ctx->pc = 0x1DAB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB88u;
            // 0x1dab8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB90u; }
        if (ctx->pc != 0x1DAB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB90u; }
        if (ctx->pc != 0x1DAB90u) { return; }
    }
    ctx->pc = 0x1DAB90u;
label_1dab90:
    // 0x1dab90: 0x8e440da0  lw          $a0, 0xDA0($s2)
    ctx->pc = 0x1dab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1dab94:
    // 0x1dab94: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1dab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1dab98:
    // 0x1dab98: 0x2402fbff  addiu       $v0, $zero, -0x401
    ctx->pc = 0x1dab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_1dab9c:
    // 0x1dab9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1dab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1daba0:
    // 0x1daba0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1daba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1daba4:
    // 0x1daba4: 0xae430da0  sw          $v1, 0xDA0($s2)
    ctx->pc = 0x1daba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3488), GPR_U32(ctx, 3));
label_1daba8:
    // 0x1daba8: 0xae420da0  sw          $v0, 0xDA0($s2)
    ctx->pc = 0x1daba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3488), GPR_U32(ctx, 2));
label_1dabac:
    // 0x1dabac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dabacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dabb0:
    // 0x1dabb0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1dabb4:
    if (ctx->pc == 0x1DABB4u) {
        ctx->pc = 0x1DABB4u;
            // 0x1dabb4: 0x8e430d60  lw          $v1, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x1DABB8u;
        goto label_1dabb8;
    }
    ctx->pc = 0x1DABB0u;
    {
        const bool branch_taken_0x1dabb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dabb0) {
            ctx->pc = 0x1DABB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABB0u;
            // 0x1dabb4: 0x8e430d60  lw          $v1, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DABCCu;
            goto label_1dabcc;
        }
    }
    ctx->pc = 0x1DABB8u;
label_1dabb8:
    // 0x1dabb8: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x1dabb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1dabbc:
    // 0x1dabbc: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_1dabc0:
    // 0x1dabc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dabc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dabc4:
    // 0x1dabc4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1dabc8:
    if (ctx->pc == 0x1DABC8u) {
        ctx->pc = 0x1DABC8u;
            // 0x1dabc8: 0xae420da0  sw          $v0, 0xDA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3488), GPR_U32(ctx, 2));
        ctx->pc = 0x1DABCCu;
        goto label_1dabcc;
    }
    ctx->pc = 0x1DABC4u;
    {
        const bool branch_taken_0x1dabc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABC4u;
            // 0x1dabc8: 0xae420da0  sw          $v0, 0xDA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabc4) {
            ctx->pc = 0x1DABECu;
            goto label_1dabec;
        }
    }
    ctx->pc = 0x1DABCCu;
label_1dabcc:
    // 0x1dabcc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1dabccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_1dabd0:
    // 0x1dabd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dabd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dabd4:
    // 0x1dabd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dabd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dabd8:
    // 0x1dabd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1dabdc:
    if (ctx->pc == 0x1DABDCu) {
        ctx->pc = 0x1DABDCu;
            // 0x1dabdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DABE0u;
        goto label_1dabe0;
    }
    ctx->pc = 0x1DABD8u;
    {
        const bool branch_taken_0x1dabd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dabd8) {
            ctx->pc = 0x1DABDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABD8u;
            // 0x1dabdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DABF0u;
            goto label_1dabf0;
        }
    }
    ctx->pc = 0x1DABE0u;
label_1dabe0:
    // 0x1dabe0: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1dabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1dabe4:
    // 0x1dabe4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1dabe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_1dabe8:
    // 0x1dabe8: 0xae420da0  sw          $v0, 0xDA0($s2)
    ctx->pc = 0x1dabe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3488), GPR_U32(ctx, 2));
label_1dabec:
    // 0x1dabec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dabecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dabf0:
    // 0x1dabf0: 0xc0c0ce4  jal         func_303390
label_1dabf4:
    if (ctx->pc == 0x1DABF4u) {
        ctx->pc = 0x1DABF8u;
        goto label_1dabf8;
    }
    ctx->pc = 0x1DABF0u;
    SET_GPR_U32(ctx, 31, 0x1DABF8u);
    ctx->pc = 0x303390u;
    if (runtime->hasFunction(0x303390u)) {
        auto targetFn = runtime->lookupFunction(0x303390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DABF8u; }
        if (ctx->pc != 0x1DABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303390_0x303390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DABF8u; }
        if (ctx->pc != 0x1DABF8u) { return; }
    }
    ctx->pc = 0x1DABF8u;
label_1dabf8:
    // 0x1dabf8: 0xc0c1618  jal         func_305860
label_1dabfc:
    if (ctx->pc == 0x1DABFCu) {
        ctx->pc = 0x1DABFCu;
            // 0x1dabfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC00u;
        goto label_1dac00;
    }
    ctx->pc = 0x1DABF8u;
    SET_GPR_U32(ctx, 31, 0x1DAC00u);
    ctx->pc = 0x1DABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABF8u;
            // 0x1dabfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305860u;
    if (runtime->hasFunction(0x305860u)) {
        auto targetFn = runtime->lookupFunction(0x305860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC00u; }
        if (ctx->pc != 0x1DAC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305860_0x305860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC00u; }
        if (ctx->pc != 0x1DAC00u) { return; }
    }
    ctx->pc = 0x1DAC00u;
label_1dac00:
    // 0x1dac00: 0xc0bdca8  jal         func_2F72A0
label_1dac04:
    if (ctx->pc == 0x1DAC04u) {
        ctx->pc = 0x1DAC04u;
            // 0x1dac04: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x1DAC08u;
        goto label_1dac08;
    }
    ctx->pc = 0x1DAC00u;
    SET_GPR_U32(ctx, 31, 0x1DAC08u);
    ctx->pc = 0x1DAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC00u;
            // 0x1dac04: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F72A0u;
    if (runtime->hasFunction(0x2F72A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F72A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC08u; }
        if (ctx->pc != 0x1DAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F72A0_0x2f72a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC08u; }
        if (ctx->pc != 0x1DAC08u) { return; }
    }
    ctx->pc = 0x1DAC08u;
label_1dac08:
    // 0x1dac08: 0xc0ab63c  jal         func_2AD8F0
label_1dac0c:
    if (ctx->pc == 0x1DAC0Cu) {
        ctx->pc = 0x1DAC0Cu;
            // 0x1dac0c: 0x26440580  addiu       $a0, $s2, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
        ctx->pc = 0x1DAC10u;
        goto label_1dac10;
    }
    ctx->pc = 0x1DAC08u;
    SET_GPR_U32(ctx, 31, 0x1DAC10u);
    ctx->pc = 0x1DAC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC08u;
            // 0x1dac0c: 0x26440580  addiu       $a0, $s2, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8F0u;
    if (runtime->hasFunction(0x2AD8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC10u; }
        if (ctx->pc != 0x1DAC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD8F0_0x2ad8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC10u; }
        if (ctx->pc != 0x1DAC10u) { return; }
    }
    ctx->pc = 0x1DAC10u;
label_1dac10:
    // 0x1dac10: 0xc0783c0  jal         func_1E0F00
label_1dac14:
    if (ctx->pc == 0x1DAC14u) {
        ctx->pc = 0x1DAC14u;
            // 0x1dac14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC18u;
        goto label_1dac18;
    }
    ctx->pc = 0x1DAC10u;
    SET_GPR_U32(ctx, 31, 0x1DAC18u);
    ctx->pc = 0x1DAC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC10u;
            // 0x1dac14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0F00u;
    if (runtime->hasFunction(0x1E0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1E0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC18u; }
        if (ctx->pc != 0x1DAC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0F00_0x1e0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC18u; }
        if (ctx->pc != 0x1DAC18u) { return; }
    }
    ctx->pc = 0x1DAC18u;
label_1dac18:
    // 0x1dac18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dac1c:
    // 0x1dac1c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1dac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1dac20:
    // 0x1dac20: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x1dac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_1dac24:
    // 0x1dac24: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1dac24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1dac28:
    // 0x1dac28: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1dac2c:
    if (ctx->pc == 0x1DAC2Cu) {
        ctx->pc = 0x1DAC2Cu;
            // 0x1dac2c: 0x8e460da4  lw          $a2, 0xDA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3492)));
        ctx->pc = 0x1DAC30u;
        goto label_1dac30;
    }
    ctx->pc = 0x1DAC28u;
    {
        const bool branch_taken_0x1dac28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dac28) {
            ctx->pc = 0x1DAC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC28u;
            // 0x1dac2c: 0x8e460da4  lw          $a2, 0xDA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAC70u;
            goto label_1dac70;
        }
    }
    ctx->pc = 0x1DAC30u;
label_1dac30:
    // 0x1dac30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dac34:
    // 0x1dac34: 0xc0781d4  jal         func_1E0750
label_1dac38:
    if (ctx->pc == 0x1DAC38u) {
        ctx->pc = 0x1DAC38u;
            // 0x1dac38: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->pc = 0x1DAC3Cu;
        goto label_1dac3c;
    }
    ctx->pc = 0x1DAC34u;
    SET_GPR_U32(ctx, 31, 0x1DAC3Cu);
    ctx->pc = 0x1DAC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC34u;
            // 0x1dac38: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0750u;
    if (runtime->hasFunction(0x1E0750u)) {
        auto targetFn = runtime->lookupFunction(0x1E0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC3Cu; }
        if (ctx->pc != 0x1DAC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0750_0x1e0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC3Cu; }
        if (ctx->pc != 0x1DAC3Cu) { return; }
    }
    ctx->pc = 0x1DAC3Cu;
label_1dac3c:
    // 0x1dac3c: 0x264403d0  addiu       $a0, $s2, 0x3D0
    ctx->pc = 0x1dac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
label_1dac40:
    // 0x1dac40: 0xc04cc44  jal         func_133110
label_1dac44:
    if (ctx->pc == 0x1DAC44u) {
        ctx->pc = 0x1DAC44u;
            // 0x1dac44: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->pc = 0x1DAC48u;
        goto label_1dac48;
    }
    ctx->pc = 0x1DAC40u;
    SET_GPR_U32(ctx, 31, 0x1DAC48u);
    ctx->pc = 0x1DAC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC40u;
            // 0x1dac44: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC48u; }
        if (ctx->pc != 0x1DAC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC48u; }
        if (ctx->pc != 0x1DAC48u) { return; }
    }
    ctx->pc = 0x1DAC48u;
label_1dac48:
    // 0x1dac48: 0xc0b6830  jal         func_2DA0C0
label_1dac4c:
    if (ctx->pc == 0x1DAC4Cu) {
        ctx->pc = 0x1DAC4Cu;
            // 0x1dac4c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x1DAC50u;
        goto label_1dac50;
    }
    ctx->pc = 0x1DAC48u;
    SET_GPR_U32(ctx, 31, 0x1DAC50u);
    ctx->pc = 0x1DAC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC48u;
            // 0x1dac4c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA0C0u;
    if (runtime->hasFunction(0x2DA0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DA0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC50u; }
        if (ctx->pc != 0x1DAC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DA0C0_0x2da0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC50u; }
        if (ctx->pc != 0x1DAC50u) { return; }
    }
    ctx->pc = 0x1DAC50u;
label_1dac50:
    // 0x1dac50: 0xc0fe304  jal         func_3F8C10
label_1dac54:
    if (ctx->pc == 0x1DAC54u) {
        ctx->pc = 0x1DAC54u;
            // 0x1dac54: 0x26440bc0  addiu       $a0, $s2, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3008));
        ctx->pc = 0x1DAC58u;
        goto label_1dac58;
    }
    ctx->pc = 0x1DAC50u;
    SET_GPR_U32(ctx, 31, 0x1DAC58u);
    ctx->pc = 0x1DAC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC50u;
            // 0x1dac54: 0x26440bc0  addiu       $a0, $s2, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8C10u;
    if (runtime->hasFunction(0x3F8C10u)) {
        auto targetFn = runtime->lookupFunction(0x3F8C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC58u; }
        if (ctx->pc != 0x1DAC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F8C10_0x3f8c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC58u; }
        if (ctx->pc != 0x1DAC58u) { return; }
    }
    ctx->pc = 0x1DAC58u;
label_1dac58:
    // 0x1dac58: 0xc0fe290  jal         func_3F8A40
label_1dac5c:
    if (ctx->pc == 0x1DAC5Cu) {
        ctx->pc = 0x1DAC5Cu;
            // 0x1dac5c: 0x26440bc0  addiu       $a0, $s2, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3008));
        ctx->pc = 0x1DAC60u;
        goto label_1dac60;
    }
    ctx->pc = 0x1DAC58u;
    SET_GPR_U32(ctx, 31, 0x1DAC60u);
    ctx->pc = 0x1DAC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC58u;
            // 0x1dac5c: 0x26440bc0  addiu       $a0, $s2, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8A40u;
    if (runtime->hasFunction(0x3F8A40u)) {
        auto targetFn = runtime->lookupFunction(0x3F8A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC60u; }
        if (ctx->pc != 0x1DAC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F8A40_0x3f8a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC60u; }
        if (ctx->pc != 0x1DAC60u) { return; }
    }
    ctx->pc = 0x1DAC60u;
label_1dac60:
    // 0x1dac60: 0x26440c90  addiu       $a0, $s2, 0xC90
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3216));
label_1dac64:
    // 0x1dac64: 0xc130ac4  jal         func_4C2B10
label_1dac68:
    if (ctx->pc == 0x1DAC68u) {
        ctx->pc = 0x1DAC68u;
            // 0x1dac68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC6Cu;
        goto label_1dac6c;
    }
    ctx->pc = 0x1DAC64u;
    SET_GPR_U32(ctx, 31, 0x1DAC6Cu);
    ctx->pc = 0x1DAC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC64u;
            // 0x1dac68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C2B10u;
    if (runtime->hasFunction(0x4C2B10u)) {
        auto targetFn = runtime->lookupFunction(0x4C2B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC6Cu; }
        if (ctx->pc != 0x1DAC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C2B10_0x4c2b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC6Cu; }
        if (ctx->pc != 0x1DAC6Cu) { return; }
    }
    ctx->pc = 0x1DAC6Cu;
label_1dac6c:
    // 0x1dac6c: 0x8e460da4  lw          $a2, 0xDA4($s2)
    ctx->pc = 0x1dac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3492)));
label_1dac70:
    // 0x1dac70: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1dac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1dac74:
    // 0x1dac74: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x1dac74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1dac78:
    // 0x1dac78: 0x3445bf7f  ori         $a1, $v0, 0xBF7F
    ctx->pc = 0x1dac78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49023);
label_1dac7c:
    // 0x1dac7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dac7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dac80:
    // 0x1dac80: 0xc31026  xor         $v0, $a2, $v1
    ctx->pc = 0x1dac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_1dac84:
    // 0x1dac84: 0x668025  or          $s0, $v1, $a2
    ctx->pc = 0x1dac84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1dac88:
    // 0x1dac88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dac88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dac8c:
    // 0x1dac8c: 0xae420da8  sw          $v0, 0xDA8($s2)
    ctx->pc = 0x1dac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3496), GPR_U32(ctx, 2));
label_1dac90:
    // 0x1dac90: 0x8e430da4  lw          $v1, 0xDA4($s2)
    ctx->pc = 0x1dac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3492)));
label_1dac94:
    // 0x1dac94: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1dac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1dac98:
    // 0x1dac98: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1dac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_1dac9c:
    // 0x1dac9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1daca0:
    // 0x1daca0: 0xae420dac  sw          $v0, 0xDAC($s2)
    ctx->pc = 0x1daca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3500), GPR_U32(ctx, 2));
label_1daca4:
    // 0x1daca4: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1daca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1daca8:
    // 0x1daca8: 0xc077fc0  jal         func_1DFF00
label_1dacac:
    if (ctx->pc == 0x1DACACu) {
        ctx->pc = 0x1DACACu;
            // 0x1dacac: 0xae420da4  sw          $v0, 0xDA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3492), GPR_U32(ctx, 2));
        ctx->pc = 0x1DACB0u;
        goto label_1dacb0;
    }
    ctx->pc = 0x1DACA8u;
    SET_GPR_U32(ctx, 31, 0x1DACB0u);
    ctx->pc = 0x1DACACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACA8u;
            // 0x1dacac: 0xae420da4  sw          $v0, 0xDA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF00u;
    if (runtime->hasFunction(0x1DFF00u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACB0u; }
        if (ctx->pc != 0x1DACB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF00_0x1dff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACB0u; }
        if (ctx->pc != 0x1DACB0u) { return; }
    }
    ctx->pc = 0x1DACB0u;
label_1dacb0:
    // 0x1dacb0: 0x32020200  andi        $v0, $s0, 0x200
    ctx->pc = 0x1dacb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
label_1dacb4:
    // 0x1dacb4: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_1dacb8:
    if (ctx->pc == 0x1DACB8u) {
        ctx->pc = 0x1DACB8u;
            // 0x1dacb8: 0x8e430da0  lw          $v1, 0xDA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
        ctx->pc = 0x1DACBCu;
        goto label_1dacbc;
    }
    ctx->pc = 0x1DACB4u;
    {
        const bool branch_taken_0x1dacb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dacb4) {
            ctx->pc = 0x1DACB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACB4u;
            // 0x1dacb8: 0x8e430da0  lw          $v1, 0xDA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DADA8u;
            goto label_1dada8;
        }
    }
    ctx->pc = 0x1DACBCu;
label_1dacbc:
    // 0x1dacbc: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1dacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1dacc0:
    // 0x1dacc0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1dacc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1dacc4:
    // 0x1dacc4: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_1dacc8:
    if (ctx->pc == 0x1DACC8u) {
        ctx->pc = 0x1DACC8u;
            // 0x1dacc8: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->pc = 0x1DACCCu;
        goto label_1daccc;
    }
    ctx->pc = 0x1DACC4u;
    {
        const bool branch_taken_0x1dacc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dacc4) {
            ctx->pc = 0x1DACC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACC4u;
            // 0x1dacc8: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAD84u;
            goto label_1dad84;
        }
    }
    ctx->pc = 0x1DACCCu;
label_1daccc:
    // 0x1daccc: 0x8e420da8  lw          $v0, 0xDA8($s2)
    ctx->pc = 0x1dacccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3496)));
label_1dacd0:
    // 0x1dacd0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1dacd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1dacd4:
    // 0x1dacd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dacd8:
    if (ctx->pc == 0x1DACD8u) {
        ctx->pc = 0x1DACDCu;
        goto label_1dacdc;
    }
    ctx->pc = 0x1DACD4u;
    {
        const bool branch_taken_0x1dacd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dacd4) {
            ctx->pc = 0x1DACF0u;
            goto label_1dacf0;
        }
    }
    ctx->pc = 0x1DACDCu;
label_1dacdc:
    // 0x1dacdc: 0xc0775d8  jal         func_1DD760
label_1dace0:
    if (ctx->pc == 0x1DACE0u) {
        ctx->pc = 0x1DACE0u;
            // 0x1dace0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DACE4u;
        goto label_1dace4;
    }
    ctx->pc = 0x1DACDCu;
    SET_GPR_U32(ctx, 31, 0x1DACE4u);
    ctx->pc = 0x1DACE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACDCu;
            // 0x1dace0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACE4u; }
        if (ctx->pc != 0x1DACE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACE4u; }
        if (ctx->pc != 0x1DACE4u) { return; }
    }
    ctx->pc = 0x1DACE4u;
label_1dace4:
    // 0x1dace4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dace8:
    // 0x1dace8: 0xc0775bc  jal         func_1DD6F0
label_1dacec:
    if (ctx->pc == 0x1DACECu) {
        ctx->pc = 0x1DACECu;
            // 0x1dacec: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->pc = 0x1DACF0u;
        goto label_1dacf0;
    }
    ctx->pc = 0x1DACE8u;
    SET_GPR_U32(ctx, 31, 0x1DACF0u);
    ctx->pc = 0x1DACECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACE8u;
            // 0x1dacec: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6F0u;
    if (runtime->hasFunction(0x1DD6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACF0u; }
        if (ctx->pc != 0x1DACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6F0_0x1dd6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACF0u; }
        if (ctx->pc != 0x1DACF0u) { return; }
    }
    ctx->pc = 0x1DACF0u;
label_1dacf0:
    // 0x1dacf0: 0xc0775b8  jal         func_1DD6E0
label_1dacf4:
    if (ctx->pc == 0x1DACF4u) {
        ctx->pc = 0x1DACF8u;
        goto label_1dacf8;
    }
    ctx->pc = 0x1DACF0u;
    SET_GPR_U32(ctx, 31, 0x1DACF8u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACF8u; }
        if (ctx->pc != 0x1DACF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACF8u; }
        if (ctx->pc != 0x1DACF8u) { return; }
    }
    ctx->pc = 0x1DACF8u;
label_1dacf8:
    // 0x1dacf8: 0xc0775b4  jal         func_1DD6D0
label_1dacfc:
    if (ctx->pc == 0x1DACFCu) {
        ctx->pc = 0x1DACFCu;
            // 0x1dacfc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DAD00u;
        goto label_1dad00;
    }
    ctx->pc = 0x1DACF8u;
    SET_GPR_U32(ctx, 31, 0x1DAD00u);
    ctx->pc = 0x1DACFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACF8u;
            // 0x1dacfc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD00u; }
        if (ctx->pc != 0x1DAD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD00u; }
        if (ctx->pc != 0x1DAD00u) { return; }
    }
    ctx->pc = 0x1DAD00u;
label_1dad00:
    // 0x1dad00: 0xc6420e48  lwc1        $f2, 0xE48($s2)
    ctx->pc = 0x1dad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dad04:
    // 0x1dad04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dad04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dad08:
    // 0x1dad08: 0x0  nop
    ctx->pc = 0x1dad08u;
    // NOP
label_1dad0c:
    // 0x1dad0c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dad0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dad10:
    // 0x1dad10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dad10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dad14:
    // 0x1dad14: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_1dad18:
    if (ctx->pc == 0x1DAD18u) {
        ctx->pc = 0x1DAD18u;
            // 0x1dad18: 0xe6400e48  swc1        $f0, 0xE48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3656), bits); }
        ctx->pc = 0x1DAD1Cu;
        goto label_1dad1c;
    }
    ctx->pc = 0x1DAD14u;
    {
        const bool branch_taken_0x1dad14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD14u;
            // 0x1dad18: 0xe6400e48  swc1        $f0, 0xE48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad14) {
            ctx->pc = 0x1DADA4u;
            goto label_1dada4;
        }
    }
    ctx->pc = 0x1DAD1Cu;
label_1dad1c:
    // 0x1dad1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dad20:
    // 0x1dad20: 0xc077fb0  jal         func_1DFEC0
label_1dad24:
    if (ctx->pc == 0x1DAD24u) {
        ctx->pc = 0x1DAD24u;
            // 0x1dad24: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x1DAD28u;
        goto label_1dad28;
    }
    ctx->pc = 0x1DAD20u;
    SET_GPR_U32(ctx, 31, 0x1DAD28u);
    ctx->pc = 0x1DAD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD20u;
            // 0x1dad24: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD28u; }
        if (ctx->pc != 0x1DAD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD28u; }
        if (ctx->pc != 0x1DAD28u) { return; }
    }
    ctx->pc = 0x1DAD28u;
label_1dad28:
    // 0x1dad28: 0xc0775b0  jal         func_1DD6C0
label_1dad2c:
    if (ctx->pc == 0x1DAD2Cu) {
        ctx->pc = 0x1DAD30u;
        goto label_1dad30;
    }
    ctx->pc = 0x1DAD28u;
    SET_GPR_U32(ctx, 31, 0x1DAD30u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD30u; }
        if (ctx->pc != 0x1DAD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD30u; }
        if (ctx->pc != 0x1DAD30u) { return; }
    }
    ctx->pc = 0x1DAD30u;
label_1dad30:
    // 0x1dad30: 0xc0775ac  jal         func_1DD6B0
label_1dad34:
    if (ctx->pc == 0x1DAD34u) {
        ctx->pc = 0x1DAD34u;
            // 0x1dad34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD38u;
        goto label_1dad38;
    }
    ctx->pc = 0x1DAD30u;
    SET_GPR_U32(ctx, 31, 0x1DAD38u);
    ctx->pc = 0x1DAD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD30u;
            // 0x1dad34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD38u; }
        if (ctx->pc != 0x1DAD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD38u; }
        if (ctx->pc != 0x1DAD38u) { return; }
    }
    ctx->pc = 0x1DAD38u;
label_1dad38:
    // 0x1dad38: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1dad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1dad3c:
    // 0x1dad3c: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_1dad40:
    if (ctx->pc == 0x1DAD40u) {
        ctx->pc = 0x1DAD40u;
            // 0x1dad40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD44u;
        goto label_1dad44;
    }
    ctx->pc = 0x1DAD3Cu;
    {
        const bool branch_taken_0x1dad3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dad3c) {
            ctx->pc = 0x1DAD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD3Cu;
            // 0x1dad40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAD74u;
            goto label_1dad74;
        }
    }
    ctx->pc = 0x1DAD44u;
label_1dad44:
    // 0x1dad44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dad48:
    // 0x1dad48: 0xc0775a8  jal         func_1DD6A0
label_1dad4c:
    if (ctx->pc == 0x1DAD4Cu) {
        ctx->pc = 0x1DAD4Cu;
            // 0x1dad4c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1DAD50u;
        goto label_1dad50;
    }
    ctx->pc = 0x1DAD48u;
    SET_GPR_U32(ctx, 31, 0x1DAD50u);
    ctx->pc = 0x1DAD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD48u;
            // 0x1dad4c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6A0u;
    if (runtime->hasFunction(0x1DD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD50u; }
        if (ctx->pc != 0x1DAD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6A0_0x1dd6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD50u; }
        if (ctx->pc != 0x1DAD50u) { return; }
    }
    ctx->pc = 0x1DAD50u;
label_1dad50:
    // 0x1dad50: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1dad50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dad54:
    // 0x1dad54: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1dad54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1dad58:
    // 0x1dad58: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1dad5c:
    if (ctx->pc == 0x1DAD5Cu) {
        ctx->pc = 0x1DAD60u;
        goto label_1dad60;
    }
    ctx->pc = 0x1DAD58u;
    {
        const bool branch_taken_0x1dad58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dad58) {
            ctx->pc = 0x1DADA4u;
            goto label_1dada4;
        }
    }
    ctx->pc = 0x1DAD60u;
label_1dad60:
    // 0x1dad60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dad60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dad64:
    // 0x1dad64: 0xc077fb0  jal         func_1DFEC0
label_1dad68:
    if (ctx->pc == 0x1DAD68u) {
        ctx->pc = 0x1DAD68u;
            // 0x1dad68: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1DAD6Cu;
        goto label_1dad6c;
    }
    ctx->pc = 0x1DAD64u;
    SET_GPR_U32(ctx, 31, 0x1DAD6Cu);
    ctx->pc = 0x1DAD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD64u;
            // 0x1dad68: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD6Cu; }
        if (ctx->pc != 0x1DAD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD6Cu; }
        if (ctx->pc != 0x1DAD6Cu) { return; }
    }
    ctx->pc = 0x1DAD6Cu;
label_1dad6c:
    // 0x1dad6c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1dad70:
    if (ctx->pc == 0x1DAD70u) {
        ctx->pc = 0x1DAD74u;
        goto label_1dad74;
    }
    ctx->pc = 0x1DAD6Cu;
    {
        const bool branch_taken_0x1dad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dad6c) {
            ctx->pc = 0x1DADA4u;
            goto label_1dada4;
        }
    }
    ctx->pc = 0x1DAD74u;
label_1dad74:
    // 0x1dad74: 0xc077fb0  jal         func_1DFEC0
label_1dad78:
    if (ctx->pc == 0x1DAD78u) {
        ctx->pc = 0x1DAD78u;
            // 0x1dad78: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1DAD7Cu;
        goto label_1dad7c;
    }
    ctx->pc = 0x1DAD74u;
    SET_GPR_U32(ctx, 31, 0x1DAD7Cu);
    ctx->pc = 0x1DAD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD74u;
            // 0x1dad78: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD7Cu; }
        if (ctx->pc != 0x1DAD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD7Cu; }
        if (ctx->pc != 0x1DAD7Cu) { return; }
    }
    ctx->pc = 0x1DAD7Cu;
label_1dad7c:
    // 0x1dad7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1dad80:
    if (ctx->pc == 0x1DAD80u) {
        ctx->pc = 0x1DAD84u;
        goto label_1dad84;
    }
    ctx->pc = 0x1DAD7Cu;
    {
        const bool branch_taken_0x1dad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dad7c) {
            ctx->pc = 0x1DADA4u;
            goto label_1dada4;
        }
    }
    ctx->pc = 0x1DAD84u;
label_1dad84:
    // 0x1dad84: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1dad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1dad88:
    // 0x1dad88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dad8c:
    if (ctx->pc == 0x1DAD8Cu) {
        ctx->pc = 0x1DAD90u;
        goto label_1dad90;
    }
    ctx->pc = 0x1DAD88u;
    {
        const bool branch_taken_0x1dad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dad88) {
            ctx->pc = 0x1DADA4u;
            goto label_1dada4;
        }
    }
    ctx->pc = 0x1DAD90u;
label_1dad90:
    // 0x1dad90: 0xc0775d8  jal         func_1DD760
label_1dad94:
    if (ctx->pc == 0x1DAD94u) {
        ctx->pc = 0x1DAD94u;
            // 0x1dad94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD98u;
        goto label_1dad98;
    }
    ctx->pc = 0x1DAD90u;
    SET_GPR_U32(ctx, 31, 0x1DAD98u);
    ctx->pc = 0x1DAD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD90u;
            // 0x1dad94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD98u; }
        if (ctx->pc != 0x1DAD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD98u; }
        if (ctx->pc != 0x1DAD98u) { return; }
    }
    ctx->pc = 0x1DAD98u;
label_1dad98:
    // 0x1dad98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dad9c:
    // 0x1dad9c: 0xc077590  jal         func_1DD640
label_1dada0:
    if (ctx->pc == 0x1DADA0u) {
        ctx->pc = 0x1DADA0u;
            // 0x1dada0: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->pc = 0x1DADA4u;
        goto label_1dada4;
    }
    ctx->pc = 0x1DAD9Cu;
    SET_GPR_U32(ctx, 31, 0x1DADA4u);
    ctx->pc = 0x1DADA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD9Cu;
            // 0x1dada0: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD640u;
    if (runtime->hasFunction(0x1DD640u)) {
        auto targetFn = runtime->lookupFunction(0x1DD640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADA4u; }
        if (ctx->pc != 0x1DADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD640_0x1dd640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADA4u; }
        if (ctx->pc != 0x1DADA4u) { return; }
    }
    ctx->pc = 0x1DADA4u;
label_1dada4:
    // 0x1dada4: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x1dada4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1dada8:
    // 0x1dada8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x1dada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_1dadac:
    // 0x1dadac: 0x58400025  blezl       $v0, . + 4 + (0x25 << 2)
label_1dadb0:
    if (ctx->pc == 0x1DADB0u) {
        ctx->pc = 0x1DADB0u;
            // 0x1dadb0: 0x32020100  andi        $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x1DADB4u;
        goto label_1dadb4;
    }
    ctx->pc = 0x1DADACu;
    {
        const bool branch_taken_0x1dadac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dadac) {
            ctx->pc = 0x1DADB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADACu;
            // 0x1dadb0: 0x32020100  andi        $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAE44u;
            goto label_1dae44;
        }
    }
    ctx->pc = 0x1DADB4u;
label_1dadb4:
    // 0x1dadb4: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1dadb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1dadb8:
    // 0x1dadb8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_1dadbc:
    if (ctx->pc == 0x1DADBCu) {
        ctx->pc = 0x1DADC0u;
        goto label_1dadc0;
    }
    ctx->pc = 0x1DADB8u;
    {
        const bool branch_taken_0x1dadb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dadb8) {
            ctx->pc = 0x1DAE40u;
            goto label_1dae40;
        }
    }
    ctx->pc = 0x1DADC0u;
label_1dadc0:
    // 0x1dadc0: 0xc0775b8  jal         func_1DD6E0
label_1dadc4:
    if (ctx->pc == 0x1DADC4u) {
        ctx->pc = 0x1DADC8u;
        goto label_1dadc8;
    }
    ctx->pc = 0x1DADC0u;
    SET_GPR_U32(ctx, 31, 0x1DADC8u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADC8u; }
        if (ctx->pc != 0x1DADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADC8u; }
        if (ctx->pc != 0x1DADC8u) { return; }
    }
    ctx->pc = 0x1DADC8u;
label_1dadc8:
    // 0x1dadc8: 0xc0775b4  jal         func_1DD6D0
label_1dadcc:
    if (ctx->pc == 0x1DADCCu) {
        ctx->pc = 0x1DADCCu;
            // 0x1dadcc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DADD0u;
        goto label_1dadd0;
    }
    ctx->pc = 0x1DADC8u;
    SET_GPR_U32(ctx, 31, 0x1DADD0u);
    ctx->pc = 0x1DADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADC8u;
            // 0x1dadcc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADD0u; }
        if (ctx->pc != 0x1DADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADD0u; }
        if (ctx->pc != 0x1DADD0u) { return; }
    }
    ctx->pc = 0x1DADD0u;
label_1dadd0:
    // 0x1dadd0: 0xc6420e48  lwc1        $f2, 0xE48($s2)
    ctx->pc = 0x1dadd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dadd4:
    // 0x1dadd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dadd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dadd8:
    // 0x1dadd8: 0x0  nop
    ctx->pc = 0x1dadd8u;
    // NOP
label_1daddc:
    // 0x1daddc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1daddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dade0:
    // 0x1dade0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dade0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dade4:
    // 0x1dade4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1dade8:
    if (ctx->pc == 0x1DADE8u) {
        ctx->pc = 0x1DADE8u;
            // 0x1dade8: 0xe6400e48  swc1        $f0, 0xE48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3656), bits); }
        ctx->pc = 0x1DADECu;
        goto label_1dadec;
    }
    ctx->pc = 0x1DADE4u;
    {
        const bool branch_taken_0x1dade4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DADE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADE4u;
            // 0x1dade8: 0xe6400e48  swc1        $f0, 0xE48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dade4) {
            ctx->pc = 0x1DAE40u;
            goto label_1dae40;
        }
    }
    ctx->pc = 0x1DADECu;
label_1dadec:
    // 0x1dadec: 0xc0775b0  jal         func_1DD6C0
label_1dadf0:
    if (ctx->pc == 0x1DADF0u) {
        ctx->pc = 0x1DADF4u;
        goto label_1dadf4;
    }
    ctx->pc = 0x1DADECu;
    SET_GPR_U32(ctx, 31, 0x1DADF4u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADF4u; }
        if (ctx->pc != 0x1DADF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADF4u; }
        if (ctx->pc != 0x1DADF4u) { return; }
    }
    ctx->pc = 0x1DADF4u;
label_1dadf4:
    // 0x1dadf4: 0xc0775ac  jal         func_1DD6B0
label_1dadf8:
    if (ctx->pc == 0x1DADF8u) {
        ctx->pc = 0x1DADF8u;
            // 0x1dadf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DADFCu;
        goto label_1dadfc;
    }
    ctx->pc = 0x1DADF4u;
    SET_GPR_U32(ctx, 31, 0x1DADFCu);
    ctx->pc = 0x1DADF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADF4u;
            // 0x1dadf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADFCu; }
        if (ctx->pc != 0x1DADFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADFCu; }
        if (ctx->pc != 0x1DADFCu) { return; }
    }
    ctx->pc = 0x1DADFCu;
label_1dadfc:
    // 0x1dadfc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1dadfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1dae00:
    // 0x1dae00: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_1dae04:
    if (ctx->pc == 0x1DAE04u) {
        ctx->pc = 0x1DAE04u;
            // 0x1dae04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE08u;
        goto label_1dae08;
    }
    ctx->pc = 0x1DAE00u;
    {
        const bool branch_taken_0x1dae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dae00) {
            ctx->pc = 0x1DAE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE00u;
            // 0x1dae04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAE38u;
            goto label_1dae38;
        }
    }
    ctx->pc = 0x1DAE08u;
label_1dae08:
    // 0x1dae08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dae08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dae0c:
    // 0x1dae0c: 0xc0775a8  jal         func_1DD6A0
label_1dae10:
    if (ctx->pc == 0x1DAE10u) {
        ctx->pc = 0x1DAE10u;
            // 0x1dae10: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1DAE14u;
        goto label_1dae14;
    }
    ctx->pc = 0x1DAE0Cu;
    SET_GPR_U32(ctx, 31, 0x1DAE14u);
    ctx->pc = 0x1DAE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE0Cu;
            // 0x1dae10: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6A0u;
    if (runtime->hasFunction(0x1DD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE14u; }
        if (ctx->pc != 0x1DAE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6A0_0x1dd6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE14u; }
        if (ctx->pc != 0x1DAE14u) { return; }
    }
    ctx->pc = 0x1DAE14u;
label_1dae14:
    // 0x1dae14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1dae14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dae18:
    // 0x1dae18: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1dae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1dae1c:
    // 0x1dae1c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1dae20:
    if (ctx->pc == 0x1DAE20u) {
        ctx->pc = 0x1DAE24u;
        goto label_1dae24;
    }
    ctx->pc = 0x1DAE1Cu;
    {
        const bool branch_taken_0x1dae1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dae1c) {
            ctx->pc = 0x1DAE40u;
            goto label_1dae40;
        }
    }
    ctx->pc = 0x1DAE24u;
label_1dae24:
    // 0x1dae24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dae28:
    // 0x1dae28: 0xc077fb0  jal         func_1DFEC0
label_1dae2c:
    if (ctx->pc == 0x1DAE2Cu) {
        ctx->pc = 0x1DAE2Cu;
            // 0x1dae2c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1DAE30u;
        goto label_1dae30;
    }
    ctx->pc = 0x1DAE28u;
    SET_GPR_U32(ctx, 31, 0x1DAE30u);
    ctx->pc = 0x1DAE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE28u;
            // 0x1dae2c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE30u; }
        if (ctx->pc != 0x1DAE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE30u; }
        if (ctx->pc != 0x1DAE30u) { return; }
    }
    ctx->pc = 0x1DAE30u;
label_1dae30:
    // 0x1dae30: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dae34:
    if (ctx->pc == 0x1DAE34u) {
        ctx->pc = 0x1DAE38u;
        goto label_1dae38;
    }
    ctx->pc = 0x1DAE30u;
    {
        const bool branch_taken_0x1dae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dae30) {
            ctx->pc = 0x1DAE40u;
            goto label_1dae40;
        }
    }
    ctx->pc = 0x1DAE38u;
label_1dae38:
    // 0x1dae38: 0xc077fb0  jal         func_1DFEC0
label_1dae3c:
    if (ctx->pc == 0x1DAE3Cu) {
        ctx->pc = 0x1DAE3Cu;
            // 0x1dae3c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1DAE40u;
        goto label_1dae40;
    }
    ctx->pc = 0x1DAE38u;
    SET_GPR_U32(ctx, 31, 0x1DAE40u);
    ctx->pc = 0x1DAE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE38u;
            // 0x1dae3c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE40u; }
        if (ctx->pc != 0x1DAE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE40u; }
        if (ctx->pc != 0x1DAE40u) { return; }
    }
    ctx->pc = 0x1DAE40u;
label_1dae40:
    // 0x1dae40: 0x32020100  andi        $v0, $s0, 0x100
    ctx->pc = 0x1dae40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
label_1dae44:
    // 0x1dae44: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1dae48:
    if (ctx->pc == 0x1DAE48u) {
        ctx->pc = 0x1DAE48u;
            // 0x1dae48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE4Cu;
        goto label_1dae4c;
    }
    ctx->pc = 0x1DAE44u;
    {
        const bool branch_taken_0x1dae44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dae44) {
            ctx->pc = 0x1DAE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE44u;
            // 0x1dae48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAE98u;
            goto label_1dae98;
        }
    }
    ctx->pc = 0x1DAE4Cu;
label_1dae4c:
    // 0x1dae4c: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1dae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1dae50:
    // 0x1dae50: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1dae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1dae54:
    // 0x1dae54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1dae58:
    if (ctx->pc == 0x1DAE58u) {
        ctx->pc = 0x1DAE5Cu;
        goto label_1dae5c;
    }
    ctx->pc = 0x1DAE54u;
    {
        const bool branch_taken_0x1dae54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dae54) {
            ctx->pc = 0x1DAE94u;
            goto label_1dae94;
        }
    }
    ctx->pc = 0x1DAE5Cu;
label_1dae5c:
    // 0x1dae5c: 0xc0775b8  jal         func_1DD6E0
label_1dae60:
    if (ctx->pc == 0x1DAE60u) {
        ctx->pc = 0x1DAE64u;
        goto label_1dae64;
    }
    ctx->pc = 0x1DAE5Cu;
    SET_GPR_U32(ctx, 31, 0x1DAE64u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE64u; }
        if (ctx->pc != 0x1DAE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE64u; }
        if (ctx->pc != 0x1DAE64u) { return; }
    }
    ctx->pc = 0x1DAE64u;
label_1dae64:
    // 0x1dae64: 0xc0775b4  jal         func_1DD6D0
label_1dae68:
    if (ctx->pc == 0x1DAE68u) {
        ctx->pc = 0x1DAE68u;
            // 0x1dae68: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DAE6Cu;
        goto label_1dae6c;
    }
    ctx->pc = 0x1DAE64u;
    SET_GPR_U32(ctx, 31, 0x1DAE6Cu);
    ctx->pc = 0x1DAE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE64u;
            // 0x1dae68: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE6Cu; }
        if (ctx->pc != 0x1DAE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE6Cu; }
        if (ctx->pc != 0x1DAE6Cu) { return; }
    }
    ctx->pc = 0x1DAE6Cu;
label_1dae6c:
    // 0x1dae6c: 0xc6420e4c  lwc1        $f2, 0xE4C($s2)
    ctx->pc = 0x1dae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dae70:
    // 0x1dae70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dae70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dae74:
    // 0x1dae74: 0x0  nop
    ctx->pc = 0x1dae74u;
    // NOP
label_1dae78:
    // 0x1dae78: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dae78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dae7c:
    // 0x1dae7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dae7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dae80:
    // 0x1dae80: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1dae84:
    if (ctx->pc == 0x1DAE84u) {
        ctx->pc = 0x1DAE84u;
            // 0x1dae84: 0xe6400e4c  swc1        $f0, 0xE4C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3660), bits); }
        ctx->pc = 0x1DAE88u;
        goto label_1dae88;
    }
    ctx->pc = 0x1DAE80u;
    {
        const bool branch_taken_0x1dae80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE80u;
            // 0x1dae84: 0xe6400e4c  swc1        $f0, 0xE4C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3660), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae80) {
            ctx->pc = 0x1DAE94u;
            goto label_1dae94;
        }
    }
    ctx->pc = 0x1DAE88u;
label_1dae88:
    // 0x1dae88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dae88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dae8c:
    // 0x1dae8c: 0xc077fb0  jal         func_1DFEC0
label_1dae90:
    if (ctx->pc == 0x1DAE90u) {
        ctx->pc = 0x1DAE90u;
            // 0x1dae90: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x1DAE94u;
        goto label_1dae94;
    }
    ctx->pc = 0x1DAE8Cu;
    SET_GPR_U32(ctx, 31, 0x1DAE94u);
    ctx->pc = 0x1DAE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE8Cu;
            // 0x1dae90: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE94u; }
        if (ctx->pc != 0x1DAE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE94u; }
        if (ctx->pc != 0x1DAE94u) { return; }
    }
    ctx->pc = 0x1DAE94u;
label_1dae94:
    // 0x1dae94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dae98:
    // 0x1dae98: 0xc07758c  jal         func_1DD630
label_1dae9c:
    if (ctx->pc == 0x1DAE9Cu) {
        ctx->pc = 0x1DAEA0u;
        goto label_1daea0;
    }
    ctx->pc = 0x1DAE98u;
    SET_GPR_U32(ctx, 31, 0x1DAEA0u);
    ctx->pc = 0x1DD630u;
    if (runtime->hasFunction(0x1DD630u)) {
        auto targetFn = runtime->lookupFunction(0x1DD630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEA0u; }
        if (ctx->pc != 0x1DAEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD630_0x1dd630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEA0u; }
        if (ctx->pc != 0x1DAEA0u) { return; }
    }
    ctx->pc = 0x1DAEA0u;
label_1daea0:
    // 0x1daea0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1daea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1daea4:
    // 0x1daea4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1daea8:
    if (ctx->pc == 0x1DAEA8u) {
        ctx->pc = 0x1DAEA8u;
            // 0x1daea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEACu;
        goto label_1daeac;
    }
    ctx->pc = 0x1DAEA4u;
    {
        const bool branch_taken_0x1daea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daea4) {
            ctx->pc = 0x1DAEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEA4u;
            // 0x1daea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAECCu;
            goto label_1daecc;
        }
    }
    ctx->pc = 0x1DAEACu;
label_1daeac:
    // 0x1daeac: 0xc077588  jal         func_1DD620
label_1daeb0:
    if (ctx->pc == 0x1DAEB0u) {
        ctx->pc = 0x1DAEB0u;
            // 0x1daeb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEB4u;
        goto label_1daeb4;
    }
    ctx->pc = 0x1DAEACu;
    SET_GPR_U32(ctx, 31, 0x1DAEB4u);
    ctx->pc = 0x1DAEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEACu;
            // 0x1daeb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD620u;
    if (runtime->hasFunction(0x1DD620u)) {
        auto targetFn = runtime->lookupFunction(0x1DD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEB4u; }
        if (ctx->pc != 0x1DAEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD620_0x1dd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEB4u; }
        if (ctx->pc != 0x1DAEB4u) { return; }
    }
    ctx->pc = 0x1DAEB4u;
label_1daeb4:
    // 0x1daeb4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1daeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1daeb8:
    // 0x1daeb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1daebc:
    if (ctx->pc == 0x1DAEBCu) {
        ctx->pc = 0x1DAEC0u;
        goto label_1daec0;
    }
    ctx->pc = 0x1DAEB8u;
    {
        const bool branch_taken_0x1daeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daeb8) {
            ctx->pc = 0x1DAEC8u;
            goto label_1daec8;
        }
    }
    ctx->pc = 0x1DAEC0u;
label_1daec0:
    // 0x1daec0: 0xc0c0cdc  jal         func_303370
label_1daec4:
    if (ctx->pc == 0x1DAEC4u) {
        ctx->pc = 0x1DAEC4u;
            // 0x1daec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEC8u;
        goto label_1daec8;
    }
    ctx->pc = 0x1DAEC0u;
    SET_GPR_U32(ctx, 31, 0x1DAEC8u);
    ctx->pc = 0x1DAEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEC0u;
            // 0x1daec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (runtime->hasFunction(0x303370u)) {
        auto targetFn = runtime->lookupFunction(0x303370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEC8u; }
        if (ctx->pc != 0x1DAEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303370_0x303370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEC8u; }
        if (ctx->pc != 0x1DAEC8u) { return; }
    }
    ctx->pc = 0x1DAEC8u;
label_1daec8:
    // 0x1daec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1daec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1daecc:
    // 0x1daecc: 0xc077584  jal         func_1DD610
label_1daed0:
    if (ctx->pc == 0x1DAED0u) {
        ctx->pc = 0x1DAED4u;
        goto label_1daed4;
    }
    ctx->pc = 0x1DAECCu;
    SET_GPR_U32(ctx, 31, 0x1DAED4u);
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAED4u; }
        if (ctx->pc != 0x1DAED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAED4u; }
        if (ctx->pc != 0x1DAED4u) { return; }
    }
    ctx->pc = 0x1DAED4u;
label_1daed4:
    // 0x1daed4: 0xc077580  jal         func_1DD600
label_1daed8:
    if (ctx->pc == 0x1DAED8u) {
        ctx->pc = 0x1DAED8u;
            // 0x1daed8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEDCu;
        goto label_1daedc;
    }
    ctx->pc = 0x1DAED4u;
    SET_GPR_U32(ctx, 31, 0x1DAEDCu);
    ctx->pc = 0x1DAED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAED4u;
            // 0x1daed8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD600u;
    if (runtime->hasFunction(0x1DD600u)) {
        auto targetFn = runtime->lookupFunction(0x1DD600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEDCu; }
        if (ctx->pc != 0x1DAEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD600_0x1dd600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEDCu; }
        if (ctx->pc != 0x1DAEDCu) { return; }
    }
    ctx->pc = 0x1DAEDCu;
label_1daedc:
    // 0x1daedc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1daedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1daee0:
    // 0x1daee0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1daee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1daee4:
    // 0x1daee4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1daee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1daee8:
    // 0x1daee8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1daeec:
    if (ctx->pc == 0x1DAEECu) {
        ctx->pc = 0x1DAEF0u;
        goto label_1daef0;
    }
    ctx->pc = 0x1DAEE8u;
    {
        const bool branch_taken_0x1daee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daee8) {
            ctx->pc = 0x1DAFA8u;
            goto label_1dafa8;
        }
    }
    ctx->pc = 0x1DAEF0u;
label_1daef0:
    // 0x1daef0: 0xc0775d8  jal         func_1DD760
label_1daef4:
    if (ctx->pc == 0x1DAEF4u) {
        ctx->pc = 0x1DAEF4u;
            // 0x1daef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEF8u;
        goto label_1daef8;
    }
    ctx->pc = 0x1DAEF0u;
    SET_GPR_U32(ctx, 31, 0x1DAEF8u);
    ctx->pc = 0x1DAEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEF0u;
            // 0x1daef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEF8u; }
        if (ctx->pc != 0x1DAEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEF8u; }
        if (ctx->pc != 0x1DAEF8u) { return; }
    }
    ctx->pc = 0x1DAEF8u;
label_1daef8:
    // 0x1daef8: 0xc077578  jal         func_1DD5E0
label_1daefc:
    if (ctx->pc == 0x1DAEFCu) {
        ctx->pc = 0x1DAEFCu;
            // 0x1daefc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF00u;
        goto label_1daf00;
    }
    ctx->pc = 0x1DAEF8u;
    SET_GPR_U32(ctx, 31, 0x1DAF00u);
    ctx->pc = 0x1DAEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEF8u;
            // 0x1daefc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5E0u;
    if (runtime->hasFunction(0x1DD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF00u; }
        if (ctx->pc != 0x1DAF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5E0_0x1dd5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF00u; }
        if (ctx->pc != 0x1DAF00u) { return; }
    }
    ctx->pc = 0x1DAF00u;
label_1daf00:
    // 0x1daf00: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1daf00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1daf04:
    // 0x1daf04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1daf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1daf08:
    // 0x1daf08: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_1daf0c:
    if (ctx->pc == 0x1DAF0Cu) {
        ctx->pc = 0x1DAF10u;
        goto label_1daf10;
    }
    ctx->pc = 0x1DAF08u;
    {
        const bool branch_taken_0x1daf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1daf08) {
            ctx->pc = 0x1DAFA8u;
            goto label_1dafa8;
        }
    }
    ctx->pc = 0x1DAF10u;
label_1daf10:
    // 0x1daf10: 0xc077574  jal         func_1DD5D0
label_1daf14:
    if (ctx->pc == 0x1DAF14u) {
        ctx->pc = 0x1DAF14u;
            // 0x1daf14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF18u;
        goto label_1daf18;
    }
    ctx->pc = 0x1DAF10u;
    SET_GPR_U32(ctx, 31, 0x1DAF18u);
    ctx->pc = 0x1DAF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF10u;
            // 0x1daf14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF18u; }
        if (ctx->pc != 0x1DAF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF18u; }
        if (ctx->pc != 0x1DAF18u) { return; }
    }
    ctx->pc = 0x1DAF18u;
label_1daf18:
    // 0x1daf18: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1daf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1daf1c:
    // 0x1daf1c: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_1daf20:
    if (ctx->pc == 0x1DAF20u) {
        ctx->pc = 0x1DAF20u;
            // 0x1daf20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF24u;
        goto label_1daf24;
    }
    ctx->pc = 0x1DAF1Cu;
    {
        const bool branch_taken_0x1daf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1daf1c) {
            ctx->pc = 0x1DAF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF1Cu;
            // 0x1daf20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAF3Cu;
            goto label_1daf3c;
        }
    }
    ctx->pc = 0x1DAF24u;
label_1daf24:
    // 0x1daf24: 0xc077574  jal         func_1DD5D0
label_1daf28:
    if (ctx->pc == 0x1DAF28u) {
        ctx->pc = 0x1DAF28u;
            // 0x1daf28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF2Cu;
        goto label_1daf2c;
    }
    ctx->pc = 0x1DAF24u;
    SET_GPR_U32(ctx, 31, 0x1DAF2Cu);
    ctx->pc = 0x1DAF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF24u;
            // 0x1daf28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF2Cu; }
        if (ctx->pc != 0x1DAF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF2Cu; }
        if (ctx->pc != 0x1DAF2Cu) { return; }
    }
    ctx->pc = 0x1DAF2Cu;
label_1daf2c:
    // 0x1daf2c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1daf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1daf30:
    // 0x1daf30: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_1daf34:
    if (ctx->pc == 0x1DAF34u) {
        ctx->pc = 0x1DAF38u;
        goto label_1daf38;
    }
    ctx->pc = 0x1DAF30u;
    {
        const bool branch_taken_0x1daf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1daf30) {
            ctx->pc = 0x1DAFA8u;
            goto label_1dafa8;
        }
    }
    ctx->pc = 0x1DAF38u;
label_1daf38:
    // 0x1daf38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1daf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1daf3c:
    // 0x1daf3c: 0xc077584  jal         func_1DD610
label_1daf40:
    if (ctx->pc == 0x1DAF40u) {
        ctx->pc = 0x1DAF44u;
        goto label_1daf44;
    }
    ctx->pc = 0x1DAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF44u);
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF44u; }
        if (ctx->pc != 0x1DAF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF44u; }
        if (ctx->pc != 0x1DAF44u) { return; }
    }
    ctx->pc = 0x1DAF44u;
label_1daf44:
    // 0x1daf44: 0xc0754b4  jal         func_1D52D0
label_1daf48:
    if (ctx->pc == 0x1DAF48u) {
        ctx->pc = 0x1DAF48u;
            // 0x1daf48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF4Cu;
        goto label_1daf4c;
    }
    ctx->pc = 0x1DAF44u;
    SET_GPR_U32(ctx, 31, 0x1DAF4Cu);
    ctx->pc = 0x1DAF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF44u;
            // 0x1daf48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF4Cu; }
        if (ctx->pc != 0x1DAF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF4Cu; }
        if (ctx->pc != 0x1DAF4Cu) { return; }
    }
    ctx->pc = 0x1DAF4Cu;
label_1daf4c:
    // 0x1daf4c: 0xc4540034  lwc1        $f20, 0x34($v0)
    ctx->pc = 0x1daf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1daf50:
    // 0x1daf50: 0xc077570  jal         func_1DD5C0
label_1daf54:
    if (ctx->pc == 0x1DAF54u) {
        ctx->pc = 0x1DAF54u;
            // 0x1daf54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF58u;
        goto label_1daf58;
    }
    ctx->pc = 0x1DAF50u;
    SET_GPR_U32(ctx, 31, 0x1DAF58u);
    ctx->pc = 0x1DAF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF50u;
            // 0x1daf54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF58u; }
        if (ctx->pc != 0x1DAF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF58u; }
        if (ctx->pc != 0x1DAF58u) { return; }
    }
    ctx->pc = 0x1DAF58u;
label_1daf58:
    // 0x1daf58: 0xc07756c  jal         func_1DD5B0
label_1daf5c:
    if (ctx->pc == 0x1DAF5Cu) {
        ctx->pc = 0x1DAF5Cu;
            // 0x1daf5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF60u;
        goto label_1daf60;
    }
    ctx->pc = 0x1DAF58u;
    SET_GPR_U32(ctx, 31, 0x1DAF60u);
    ctx->pc = 0x1DAF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF58u;
            // 0x1daf5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5B0u;
    if (runtime->hasFunction(0x1DD5B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF60u; }
        if (ctx->pc != 0x1DAF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5B0_0x1dd5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF60u; }
        if (ctx->pc != 0x1DAF60u) { return; }
    }
    ctx->pc = 0x1DAF60u;
label_1daf60:
    // 0x1daf60: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1daf60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1daf64:
    // 0x1daf64: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1daf68:
    if (ctx->pc == 0x1DAF68u) {
        ctx->pc = 0x1DAF6Cu;
        goto label_1daf6c;
    }
    ctx->pc = 0x1DAF64u;
    {
        const bool branch_taken_0x1daf64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1daf64) {
            ctx->pc = 0x1DAFA8u;
            goto label_1dafa8;
        }
    }
    ctx->pc = 0x1DAF6Cu;
label_1daf6c:
    // 0x1daf6c: 0xc0c0cdc  jal         func_303370
label_1daf70:
    if (ctx->pc == 0x1DAF70u) {
        ctx->pc = 0x1DAF70u;
            // 0x1daf70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF74u;
        goto label_1daf74;
    }
    ctx->pc = 0x1DAF6Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF74u);
    ctx->pc = 0x1DAF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF6Cu;
            // 0x1daf70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (runtime->hasFunction(0x303370u)) {
        auto targetFn = runtime->lookupFunction(0x303370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF74u; }
        if (ctx->pc != 0x1DAF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303370_0x303370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF74u; }
        if (ctx->pc != 0x1DAF74u) { return; }
    }
    ctx->pc = 0x1DAF74u;
label_1daf74:
    // 0x1daf74: 0xc077570  jal         func_1DD5C0
label_1daf78:
    if (ctx->pc == 0x1DAF78u) {
        ctx->pc = 0x1DAF78u;
            // 0x1daf78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF7Cu;
        goto label_1daf7c;
    }
    ctx->pc = 0x1DAF74u;
    SET_GPR_U32(ctx, 31, 0x1DAF7Cu);
    ctx->pc = 0x1DAF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF74u;
            // 0x1daf78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF7Cu; }
        if (ctx->pc != 0x1DAF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF7Cu; }
        if (ctx->pc != 0x1DAF7Cu) { return; }
    }
    ctx->pc = 0x1DAF7Cu;
label_1daf7c:
    // 0x1daf7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1daf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1daf80:
    // 0x1daf80: 0xc077584  jal         func_1DD610
label_1daf84:
    if (ctx->pc == 0x1DAF84u) {
        ctx->pc = 0x1DAF84u;
            // 0x1daf84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF88u;
        goto label_1daf88;
    }
    ctx->pc = 0x1DAF80u;
    SET_GPR_U32(ctx, 31, 0x1DAF88u);
    ctx->pc = 0x1DAF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF80u;
            // 0x1daf84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF88u; }
        if (ctx->pc != 0x1DAF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF88u; }
        if (ctx->pc != 0x1DAF88u) { return; }
    }
    ctx->pc = 0x1DAF88u;
label_1daf88:
    // 0x1daf88: 0xc0754b4  jal         func_1D52D0
label_1daf8c:
    if (ctx->pc == 0x1DAF8Cu) {
        ctx->pc = 0x1DAF8Cu;
            // 0x1daf8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF90u;
        goto label_1daf90;
    }
    ctx->pc = 0x1DAF88u;
    SET_GPR_U32(ctx, 31, 0x1DAF90u);
    ctx->pc = 0x1DAF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF88u;
            // 0x1daf8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF90u; }
        if (ctx->pc != 0x1DAF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF90u; }
        if (ctx->pc != 0x1DAF90u) { return; }
    }
    ctx->pc = 0x1DAF90u;
label_1daf90:
    // 0x1daf90: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1daf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1daf94:
    // 0x1daf94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1daf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1daf98:
    // 0x1daf98: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1daf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1daf9c:
    // 0x1daf9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1daf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dafa0:
    // 0x1dafa0: 0xc077568  jal         func_1DD5A0
label_1dafa4:
    if (ctx->pc == 0x1DAFA4u) {
        ctx->pc = 0x1DAFA4u;
            // 0x1dafa4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1DAFA8u;
        goto label_1dafa8;
    }
    ctx->pc = 0x1DAFA0u;
    SET_GPR_U32(ctx, 31, 0x1DAFA8u);
    ctx->pc = 0x1DAFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFA0u;
            // 0x1dafa4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (runtime->hasFunction(0x1DD5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFA8u; }
        if (ctx->pc != 0x1DAFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5A0_0x1dd5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFA8u; }
        if (ctx->pc != 0x1DAFA8u) { return; }
    }
    ctx->pc = 0x1DAFA8u;
label_1dafa8:
    // 0x1dafa8: 0xc0775b8  jal         func_1DD6E0
label_1dafac:
    if (ctx->pc == 0x1DAFACu) {
        ctx->pc = 0x1DAFB0u;
        goto label_1dafb0;
    }
    ctx->pc = 0x1DAFA8u;
    SET_GPR_U32(ctx, 31, 0x1DAFB0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFB0u; }
        if (ctx->pc != 0x1DAFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFB0u; }
        if (ctx->pc != 0x1DAFB0u) { return; }
    }
    ctx->pc = 0x1DAFB0u;
label_1dafb0:
    // 0x1dafb0: 0xc0775b4  jal         func_1DD6D0
label_1dafb4:
    if (ctx->pc == 0x1DAFB4u) {
        ctx->pc = 0x1DAFB4u;
            // 0x1dafb4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DAFB8u;
        goto label_1dafb8;
    }
    ctx->pc = 0x1DAFB0u;
    SET_GPR_U32(ctx, 31, 0x1DAFB8u);
    ctx->pc = 0x1DAFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFB0u;
            // 0x1dafb4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFB8u; }
        if (ctx->pc != 0x1DAFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFB8u; }
        if (ctx->pc != 0x1DAFB8u) { return; }
    }
    ctx->pc = 0x1DAFB8u;
label_1dafb8:
    // 0x1dafb8: 0xc642118c  lwc1        $f2, 0x118C($s2)
    ctx->pc = 0x1dafb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dafbc:
    // 0x1dafbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dafbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dafc0:
    // 0x1dafc0: 0x0  nop
    ctx->pc = 0x1dafc0u;
    // NOP
label_1dafc4:
    // 0x1dafc4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dafc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dafc8:
    // 0x1dafc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dafc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dafcc:
    // 0x1dafcc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dafd0:
    if (ctx->pc == 0x1DAFD0u) {
        ctx->pc = 0x1DAFD0u;
            // 0x1dafd0: 0xe640118c  swc1        $f0, 0x118C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4492), bits); }
        ctx->pc = 0x1DAFD4u;
        goto label_1dafd4;
    }
    ctx->pc = 0x1DAFCCu;
    {
        const bool branch_taken_0x1dafcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFCCu;
            // 0x1dafd0: 0xe640118c  swc1        $f0, 0x118C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4492), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafcc) {
            ctx->pc = 0x1DAFD8u;
            goto label_1dafd8;
        }
    }
    ctx->pc = 0x1DAFD4u;
label_1dafd4:
    // 0x1dafd4: 0xe641118c  swc1        $f1, 0x118C($s2)
    ctx->pc = 0x1dafd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4492), bits); }
label_1dafd8:
    // 0x1dafd8: 0xc64111e0  lwc1        $f1, 0x11E0($s2)
    ctx->pc = 0x1dafd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dafdc:
    // 0x1dafdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dafdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dafe0:
    // 0x1dafe0: 0x0  nop
    ctx->pc = 0x1dafe0u;
    // NOP
label_1dafe4:
    // 0x1dafe4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1dafe4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dafe8:
    // 0x1dafe8: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_1dafec:
    if (ctx->pc == 0x1DAFECu) {
        ctx->pc = 0x1DAFECu;
            // 0x1dafec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFF0u;
        goto label_1daff0;
    }
    ctx->pc = 0x1DAFE8u;
    {
        const bool branch_taken_0x1dafe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dafe8) {
            ctx->pc = 0x1DAFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFE8u;
            // 0x1dafec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB024u;
            goto label_1db024;
        }
    }
    ctx->pc = 0x1DAFF0u;
label_1daff0:
    // 0x1daff0: 0xc0775b8  jal         func_1DD6E0
label_1daff4:
    if (ctx->pc == 0x1DAFF4u) {
        ctx->pc = 0x1DAFF8u;
        goto label_1daff8;
    }
    ctx->pc = 0x1DAFF0u;
    SET_GPR_U32(ctx, 31, 0x1DAFF8u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFF8u; }
        if (ctx->pc != 0x1DAFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFF8u; }
        if (ctx->pc != 0x1DAFF8u) { return; }
    }
    ctx->pc = 0x1DAFF8u;
label_1daff8:
    // 0x1daff8: 0xc0775b4  jal         func_1DD6D0
label_1daffc:
    if (ctx->pc == 0x1DAFFCu) {
        ctx->pc = 0x1DAFFCu;
            // 0x1daffc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB000u;
        goto label_1db000;
    }
    ctx->pc = 0x1DAFF8u;
    SET_GPR_U32(ctx, 31, 0x1DB000u);
    ctx->pc = 0x1DAFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFF8u;
            // 0x1daffc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB000u; }
        if (ctx->pc != 0x1DB000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB000u; }
        if (ctx->pc != 0x1DB000u) { return; }
    }
    ctx->pc = 0x1DB000u;
label_1db000:
    // 0x1db000: 0xc64211e0  lwc1        $f2, 0x11E0($s2)
    ctx->pc = 0x1db000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1db004:
    // 0x1db004: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1db004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db008:
    // 0x1db008: 0x0  nop
    ctx->pc = 0x1db008u;
    // NOP
label_1db00c:
    // 0x1db00c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1db00cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1db010:
    // 0x1db010: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1db010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db014:
    // 0x1db014: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1db018:
    if (ctx->pc == 0x1DB018u) {
        ctx->pc = 0x1DB018u;
            // 0x1db018: 0xe64011e0  swc1        $f0, 0x11E0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4576), bits); }
        ctx->pc = 0x1DB01Cu;
        goto label_1db01c;
    }
    ctx->pc = 0x1DB014u;
    {
        const bool branch_taken_0x1db014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB014u;
            // 0x1db018: 0xe64011e0  swc1        $f0, 0x11E0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db014) {
            ctx->pc = 0x1DB020u;
            goto label_1db020;
        }
    }
    ctx->pc = 0x1DB01Cu;
label_1db01c:
    // 0x1db01c: 0xe64111e0  swc1        $f1, 0x11E0($s2)
    ctx->pc = 0x1db01cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4576), bits); }
label_1db020:
    // 0x1db020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db024:
    // 0x1db024: 0xc077354  jal         func_1DCD50
label_1db028:
    if (ctx->pc == 0x1DB028u) {
        ctx->pc = 0x1DB02Cu;
        goto label_1db02c;
    }
    ctx->pc = 0x1DB024u;
    SET_GPR_U32(ctx, 31, 0x1DB02Cu);
    ctx->pc = 0x1DCD50u;
    if (runtime->hasFunction(0x1DCD50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB02Cu; }
        if (ctx->pc != 0x1DB02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCD50_0x1dcd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB02Cu; }
        if (ctx->pc != 0x1DB02Cu) { return; }
    }
    ctx->pc = 0x1DB02Cu;
label_1db02c:
    // 0x1db02c: 0xc077350  jal         func_1DCD40
label_1db030:
    if (ctx->pc == 0x1DB030u) {
        ctx->pc = 0x1DB030u;
            // 0x1db030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB034u;
        goto label_1db034;
    }
    ctx->pc = 0x1DB02Cu;
    SET_GPR_U32(ctx, 31, 0x1DB034u);
    ctx->pc = 0x1DB030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB02Cu;
            // 0x1db030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD40u;
    if (runtime->hasFunction(0x1DCD40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB034u; }
        if (ctx->pc != 0x1DB034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCD40_0x1dcd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB034u; }
        if (ctx->pc != 0x1DB034u) { return; }
    }
    ctx->pc = 0x1DB034u;
label_1db034:
    // 0x1db034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1db034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1db038:
    // 0x1db038: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1db03c:
    if (ctx->pc == 0x1DB03Cu) {
        ctx->pc = 0x1DB03Cu;
            // 0x1db03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB040u;
        goto label_1db040;
    }
    ctx->pc = 0x1DB038u;
    {
        const bool branch_taken_0x1db038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db038) {
            ctx->pc = 0x1DB03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB038u;
            // 0x1db03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB054u;
            goto label_1db054;
        }
    }
    ctx->pc = 0x1DB040u;
label_1db040:
    // 0x1db040: 0xc077570  jal         func_1DD5C0
label_1db044:
    if (ctx->pc == 0x1DB044u) {
        ctx->pc = 0x1DB044u;
            // 0x1db044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB048u;
        goto label_1db048;
    }
    ctx->pc = 0x1DB040u;
    SET_GPR_U32(ctx, 31, 0x1DB048u);
    ctx->pc = 0x1DB044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB040u;
            // 0x1db044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB048u; }
        if (ctx->pc != 0x1DB048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB048u; }
        if (ctx->pc != 0x1DB048u) { return; }
    }
    ctx->pc = 0x1DB048u;
label_1db048:
    // 0x1db048: 0xc07734c  jal         func_1DCD30
label_1db04c:
    if (ctx->pc == 0x1DB04Cu) {
        ctx->pc = 0x1DB04Cu;
            // 0x1db04c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB050u;
        goto label_1db050;
    }
    ctx->pc = 0x1DB048u;
    SET_GPR_U32(ctx, 31, 0x1DB050u);
    ctx->pc = 0x1DB04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB048u;
            // 0x1db04c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD30u;
    if (runtime->hasFunction(0x1DCD30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB050u; }
        if (ctx->pc != 0x1DB050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCD30_0x1dcd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB050u; }
        if (ctx->pc != 0x1DB050u) { return; }
    }
    ctx->pc = 0x1DB050u;
label_1db050:
    // 0x1db050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db054:
    // 0x1db054: 0xc077330  jal         func_1DCCC0
label_1db058:
    if (ctx->pc == 0x1DB058u) {
        ctx->pc = 0x1DB05Cu;
        goto label_1db05c;
    }
    ctx->pc = 0x1DB054u;
    SET_GPR_U32(ctx, 31, 0x1DB05Cu);
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB05Cu; }
        if (ctx->pc != 0x1DB05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB05Cu; }
        if (ctx->pc != 0x1DB05Cu) { return; }
    }
    ctx->pc = 0x1DB05Cu;
label_1db05c:
    // 0x1db05c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1db060:
    if (ctx->pc == 0x1DB060u) {
        ctx->pc = 0x1DB060u;
            // 0x1db060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB064u;
        goto label_1db064;
    }
    ctx->pc = 0x1DB05Cu;
    {
        const bool branch_taken_0x1db05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db05c) {
            ctx->pc = 0x1DB060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB05Cu;
            // 0x1db060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB078u;
            goto label_1db078;
        }
    }
    ctx->pc = 0x1DB064u;
label_1db064:
    // 0x1db064: 0xc07732c  jal         func_1DCCB0
label_1db068:
    if (ctx->pc == 0x1DB068u) {
        ctx->pc = 0x1DB068u;
            // 0x1db068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB06Cu;
        goto label_1db06c;
    }
    ctx->pc = 0x1DB064u;
    SET_GPR_U32(ctx, 31, 0x1DB06Cu);
    ctx->pc = 0x1DB068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB064u;
            // 0x1db068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB06Cu; }
        if (ctx->pc != 0x1DB06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB06Cu; }
        if (ctx->pc != 0x1DB06Cu) { return; }
    }
    ctx->pc = 0x1DB06Cu;
label_1db06c:
    // 0x1db06c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_1db070:
    if (ctx->pc == 0x1DB070u) {
        ctx->pc = 0x1DB070u;
            // 0x1db070: 0x32028000  andi        $v0, $s0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
        ctx->pc = 0x1DB074u;
        goto label_1db074;
    }
    ctx->pc = 0x1DB06Cu;
    {
        const bool branch_taken_0x1db06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db06c) {
            ctx->pc = 0x1DB070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB06Cu;
            // 0x1db070: 0x32028000  andi        $v0, $s0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB128u;
            goto label_1db128;
        }
    }
    ctx->pc = 0x1DB074u;
label_1db074:
    // 0x1db074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db078:
    // 0x1db078: 0xc077350  jal         func_1DCD40
label_1db07c:
    if (ctx->pc == 0x1DB07Cu) {
        ctx->pc = 0x1DB080u;
        goto label_1db080;
    }
    ctx->pc = 0x1DB078u;
    SET_GPR_U32(ctx, 31, 0x1DB080u);
    ctx->pc = 0x1DCD40u;
    if (runtime->hasFunction(0x1DCD40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB080u; }
        if (ctx->pc != 0x1DB080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCD40_0x1dcd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB080u; }
        if (ctx->pc != 0x1DB080u) { return; }
    }
    ctx->pc = 0x1DB080u;
label_1db080:
    // 0x1db080: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1db080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1db084:
    // 0x1db084: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1db088:
    if (ctx->pc == 0x1DB088u) {
        ctx->pc = 0x1DB08Cu;
        goto label_1db08c;
    }
    ctx->pc = 0x1DB084u;
    {
        const bool branch_taken_0x1db084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db084) {
            ctx->pc = 0x1DB124u;
            goto label_1db124;
        }
    }
    ctx->pc = 0x1DB08Cu;
label_1db08c:
    // 0x1db08c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db090:
    // 0x1db090: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1db090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1db094:
    // 0x1db094: 0xc077328  jal         func_1DCCA0
label_1db098:
    if (ctx->pc == 0x1DB098u) {
        ctx->pc = 0x1DB098u;
            // 0x1db098: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->pc = 0x1DB09Cu;
        goto label_1db09c;
    }
    ctx->pc = 0x1DB094u;
    SET_GPR_U32(ctx, 31, 0x1DB09Cu);
    ctx->pc = 0x1DB098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB094u;
            // 0x1db098: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCA0u;
    if (runtime->hasFunction(0x1DCCA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB09Cu; }
        if (ctx->pc != 0x1DB09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCA0_0x1dcca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB09Cu; }
        if (ctx->pc != 0x1DB09Cu) { return; }
    }
    ctx->pc = 0x1DB09Cu;
label_1db09c:
    // 0x1db09c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1db09cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db0a0:
    // 0x1db0a0: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x1db0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1db0a4:
    // 0x1db0a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1db0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1db0a8:
    // 0x1db0a8: 0xc040180  jal         func_100600
label_1db0ac:
    if (ctx->pc == 0x1DB0ACu) {
        ctx->pc = 0x1DB0ACu;
            // 0x1db0ac: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1DB0B0u;
        goto label_1db0b0;
    }
    ctx->pc = 0x1DB0A8u;
    SET_GPR_U32(ctx, 31, 0x1DB0B0u);
    ctx->pc = 0x1DB0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0A8u;
            // 0x1db0ac: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0B0u; }
        if (ctx->pc != 0x1DB0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0B0u; }
        if (ctx->pc != 0x1DB0B0u) { return; }
    }
    ctx->pc = 0x1DB0B0u;
label_1db0b0:
    // 0x1db0b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1db0b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db0b4:
    // 0x1db0b4: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
label_1db0b8:
    if (ctx->pc == 0x1DB0B8u) {
        ctx->pc = 0x1DB0B8u;
            // 0x1db0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0BCu;
        goto label_1db0bc;
    }
    ctx->pc = 0x1DB0B4u;
    {
        const bool branch_taken_0x1db0b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db0b4) {
            ctx->pc = 0x1DB0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0B4u;
            // 0x1db0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB104u;
            goto label_1db104;
        }
    }
    ctx->pc = 0x1DB0BCu;
label_1db0bc:
    // 0x1db0bc: 0xc077324  jal         func_1DCC90
label_1db0c0:
    if (ctx->pc == 0x1DB0C0u) {
        ctx->pc = 0x1DB0C0u;
            // 0x1db0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0C4u;
        goto label_1db0c4;
    }
    ctx->pc = 0x1DB0BCu;
    SET_GPR_U32(ctx, 31, 0x1DB0C4u);
    ctx->pc = 0x1DB0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0BCu;
            // 0x1db0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0C4u; }
        if (ctx->pc != 0x1DB0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0C4u; }
        if (ctx->pc != 0x1DB0C4u) { return; }
    }
    ctx->pc = 0x1DB0C4u;
label_1db0c4:
    // 0x1db0c4: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x1db0c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_1db0c8:
    // 0x1db0c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db0cc:
    // 0x1db0cc: 0xc077320  jal         func_1DCC80
label_1db0d0:
    if (ctx->pc == 0x1DB0D0u) {
        ctx->pc = 0x1DB0D0u;
            // 0x1db0d0: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->pc = 0x1DB0D4u;
        goto label_1db0d4;
    }
    ctx->pc = 0x1DB0CCu;
    SET_GPR_U32(ctx, 31, 0x1DB0D4u);
    ctx->pc = 0x1DB0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0CCu;
            // 0x1db0d0: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0D4u; }
        if (ctx->pc != 0x1DB0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0D4u; }
        if (ctx->pc != 0x1DB0D4u) { return; }
    }
    ctx->pc = 0x1DB0D4u;
label_1db0d4:
    // 0x1db0d4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1db0d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db0d8:
    // 0x1db0d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db0dc:
    // 0x1db0dc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1db0e0:
    // 0x1db0e0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1db0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1db0e4:
    // 0x1db0e4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1db0e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db0e8:
    // 0x1db0e8: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x1db0e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_1db0ec:
    // 0x1db0ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1db0f0:
    // 0x1db0f0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1db0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1db0f4:
    // 0x1db0f4: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x1db0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1db0f8:
    // 0x1db0f8: 0xc0b9404  jal         func_2E5010
label_1db0fc:
    if (ctx->pc == 0x1DB0FCu) {
        ctx->pc = 0x1DB0FCu;
            // 0x1db0fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB100u;
        goto label_1db100;
    }
    ctx->pc = 0x1DB0F8u;
    SET_GPR_U32(ctx, 31, 0x1DB100u);
    ctx->pc = 0x1DB0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0F8u;
            // 0x1db0fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB100u; }
        if (ctx->pc != 0x1DB100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB100u; }
        if (ctx->pc != 0x1DB100u) { return; }
    }
    ctx->pc = 0x1DB100u;
label_1db100:
    // 0x1db100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db104:
    // 0x1db104: 0xc07731c  jal         func_1DCC70
label_1db108:
    if (ctx->pc == 0x1DB108u) {
        ctx->pc = 0x1DB10Cu;
        goto label_1db10c;
    }
    ctx->pc = 0x1DB104u;
    SET_GPR_U32(ctx, 31, 0x1DB10Cu);
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB10Cu; }
        if (ctx->pc != 0x1DB10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB10Cu; }
        if (ctx->pc != 0x1DB10Cu) { return; }
    }
    ctx->pc = 0x1DB10Cu;
label_1db10c:
    // 0x1db10c: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x1db10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1db110:
    // 0x1db110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db114:
    // 0x1db114: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1db114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1db118:
    // 0x1db118: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1db118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1db11c:
    // 0x1db11c: 0x320f809  jalr        $t9
label_1db120:
    if (ctx->pc == 0x1DB120u) {
        ctx->pc = 0x1DB120u;
            // 0x1db120: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1DB124u;
        goto label_1db124;
    }
    ctx->pc = 0x1DB11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB124u);
        ctx->pc = 0x1DB120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB11Cu;
            // 0x1db120: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB124u; }
            if (ctx->pc != 0x1DB124u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB124u;
label_1db124:
    // 0x1db124: 0x32028000  andi        $v0, $s0, 0x8000
    ctx->pc = 0x1db124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
label_1db128:
    // 0x1db128: 0x504000b5  beql        $v0, $zero, . + 4 + (0xB5 << 2)
label_1db12c:
    if (ctx->pc == 0x1DB12Cu) {
        ctx->pc = 0x1DB12Cu;
            // 0x1db12c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1DB130u;
        goto label_1db130;
    }
    ctx->pc = 0x1DB128u;
    {
        const bool branch_taken_0x1db128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db128) {
            ctx->pc = 0x1DB12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB128u;
            // 0x1db12c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB400u;
            goto label_1db400;
        }
    }
    ctx->pc = 0x1DB130u;
label_1db130:
    // 0x1db130: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1db134:
    // 0x1db134: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1db134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1db138:
    // 0x1db138: 0x5040007f  beql        $v0, $zero, . + 4 + (0x7F << 2)
label_1db13c:
    if (ctx->pc == 0x1DB13Cu) {
        ctx->pc = 0x1DB13Cu;
            // 0x1db13c: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->pc = 0x1DB140u;
        goto label_1db140;
    }
    ctx->pc = 0x1DB138u;
    {
        const bool branch_taken_0x1db138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db138) {
            ctx->pc = 0x1DB13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB138u;
            // 0x1db13c: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB338u;
            goto label_1db338;
        }
    }
    ctx->pc = 0x1DB140u;
label_1db140:
    // 0x1db140: 0xc0775b8  jal         func_1DD6E0
label_1db144:
    if (ctx->pc == 0x1DB144u) {
        ctx->pc = 0x1DB148u;
        goto label_1db148;
    }
    ctx->pc = 0x1DB140u;
    SET_GPR_U32(ctx, 31, 0x1DB148u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB148u; }
        if (ctx->pc != 0x1DB148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB148u; }
        if (ctx->pc != 0x1DB148u) { return; }
    }
    ctx->pc = 0x1DB148u;
label_1db148:
    // 0x1db148: 0xc0775b4  jal         func_1DD6D0
label_1db14c:
    if (ctx->pc == 0x1DB14Cu) {
        ctx->pc = 0x1DB14Cu;
            // 0x1db14c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB150u;
        goto label_1db150;
    }
    ctx->pc = 0x1DB148u;
    SET_GPR_U32(ctx, 31, 0x1DB150u);
    ctx->pc = 0x1DB14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB148u;
            // 0x1db14c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB150u; }
        if (ctx->pc != 0x1DB150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB150u; }
        if (ctx->pc != 0x1DB150u) { return; }
    }
    ctx->pc = 0x1DB150u;
label_1db150:
    // 0x1db150: 0xc6410e50  lwc1        $f1, 0xE50($s2)
    ctx->pc = 0x1db150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db154:
    // 0x1db154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db158:
    // 0x1db158: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1db158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1db15c:
    // 0x1db15c: 0xc077330  jal         func_1DCCC0
label_1db160:
    if (ctx->pc == 0x1DB160u) {
        ctx->pc = 0x1DB160u;
            // 0x1db160: 0xe6400e50  swc1        $f0, 0xE50($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3664), bits); }
        ctx->pc = 0x1DB164u;
        goto label_1db164;
    }
    ctx->pc = 0x1DB15Cu;
    SET_GPR_U32(ctx, 31, 0x1DB164u);
    ctx->pc = 0x1DB160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB15Cu;
            // 0x1db160: 0xe6400e50  swc1        $f0, 0xE50($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3664), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB164u; }
        if (ctx->pc != 0x1DB164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB164u; }
        if (ctx->pc != 0x1DB164u) { return; }
    }
    ctx->pc = 0x1DB164u;
label_1db164:
    // 0x1db164: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
label_1db168:
    if (ctx->pc == 0x1DB168u) {
        ctx->pc = 0x1DB168u;
            // 0x1db168: 0xc6410e50  lwc1        $f1, 0xE50($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1DB16Cu;
        goto label_1db16c;
    }
    ctx->pc = 0x1DB164u;
    {
        const bool branch_taken_0x1db164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db164) {
            ctx->pc = 0x1DB168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB164u;
            // 0x1db168: 0xc6410e50  lwc1        $f1, 0xE50($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB310u;
            goto label_1db310;
        }
    }
    ctx->pc = 0x1DB16Cu;
label_1db16c:
    // 0x1db16c: 0x8e430e58  lw          $v1, 0xE58($s2)
    ctx->pc = 0x1db16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3672)));
label_1db170:
    // 0x1db170: 0x8e420e5c  lw          $v0, 0xE5C($s2)
    ctx->pc = 0x1db170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3676)));
label_1db174:
    // 0x1db174: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1db174u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1db178:
    // 0x1db178: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
label_1db17c:
    if (ctx->pc == 0x1DB17Cu) {
        ctx->pc = 0x1DB180u;
        goto label_1db180;
    }
    ctx->pc = 0x1DB178u;
    {
        const bool branch_taken_0x1db178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db178) {
            ctx->pc = 0x1DB30Cu;
            goto label_1db30c;
        }
    }
    ctx->pc = 0x1DB180u;
label_1db180:
    // 0x1db180: 0xc0775b8  jal         func_1DD6E0
label_1db184:
    if (ctx->pc == 0x1DB184u) {
        ctx->pc = 0x1DB188u;
        goto label_1db188;
    }
    ctx->pc = 0x1DB180u;
    SET_GPR_U32(ctx, 31, 0x1DB188u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB188u; }
        if (ctx->pc != 0x1DB188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB188u; }
        if (ctx->pc != 0x1DB188u) { return; }
    }
    ctx->pc = 0x1DB188u;
label_1db188:
    // 0x1db188: 0xc0775b4  jal         func_1DD6D0
label_1db18c:
    if (ctx->pc == 0x1DB18Cu) {
        ctx->pc = 0x1DB18Cu;
            // 0x1db18c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB190u;
        goto label_1db190;
    }
    ctx->pc = 0x1DB188u;
    SET_GPR_U32(ctx, 31, 0x1DB190u);
    ctx->pc = 0x1DB18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB188u;
            // 0x1db18c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB190u; }
        if (ctx->pc != 0x1DB190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB190u; }
        if (ctx->pc != 0x1DB190u) { return; }
    }
    ctx->pc = 0x1DB190u;
label_1db190:
    // 0x1db190: 0xc6420e54  lwc1        $f2, 0xE54($s2)
    ctx->pc = 0x1db190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1db194:
    // 0x1db194: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1db194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db198:
    // 0x1db198: 0x0  nop
    ctx->pc = 0x1db198u;
    // NOP
label_1db19c:
    // 0x1db19c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1db19cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1db1a0:
    // 0x1db1a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1db1a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db1a4:
    // 0x1db1a4: 0x45000059  bc1f        . + 4 + (0x59 << 2)
label_1db1a8:
    if (ctx->pc == 0x1DB1A8u) {
        ctx->pc = 0x1DB1A8u;
            // 0x1db1a8: 0xe6400e54  swc1        $f0, 0xE54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3668), bits); }
        ctx->pc = 0x1DB1ACu;
        goto label_1db1ac;
    }
    ctx->pc = 0x1DB1A4u;
    {
        const bool branch_taken_0x1db1a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1A4u;
            // 0x1db1a8: 0xe6400e54  swc1        $f0, 0xE54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1a4) {
            ctx->pc = 0x1DB30Cu;
            goto label_1db30c;
        }
    }
    ctx->pc = 0x1DB1ACu;
label_1db1ac:
    // 0x1db1ac: 0x8e430e58  lw          $v1, 0xE58($s2)
    ctx->pc = 0x1db1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3672)));
label_1db1b0:
    // 0x1db1b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1db1b4:
    // 0x1db1b4: 0x50620048  beql        $v1, $v0, . + 4 + (0x48 << 2)
label_1db1b8:
    if (ctx->pc == 0x1DB1B8u) {
        ctx->pc = 0x1DB1B8u;
            // 0x1db1b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1BCu;
        goto label_1db1bc;
    }
    ctx->pc = 0x1DB1B4u;
    {
        const bool branch_taken_0x1db1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db1b4) {
            ctx->pc = 0x1DB1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1B4u;
            // 0x1db1b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB2D8u;
            goto label_1db2d8;
        }
    }
    ctx->pc = 0x1DB1BCu;
label_1db1bc:
    // 0x1db1bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db1c0:
    // 0x1db1c0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1db1c4:
    if (ctx->pc == 0x1DB1C4u) {
        ctx->pc = 0x1DB1C8u;
        goto label_1db1c8;
    }
    ctx->pc = 0x1DB1C0u;
    {
        const bool branch_taken_0x1db1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db1c0) {
            ctx->pc = 0x1DB258u;
            goto label_1db258;
        }
    }
    ctx->pc = 0x1DB1C8u;
label_1db1c8:
    // 0x1db1c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1db1cc:
    if (ctx->pc == 0x1DB1CCu) {
        ctx->pc = 0x1DB1D0u;
        goto label_1db1d0;
    }
    ctx->pc = 0x1DB1C8u;
    {
        const bool branch_taken_0x1db1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1c8) {
            ctx->pc = 0x1DB1D8u;
            goto label_1db1d8;
        }
    }
    ctx->pc = 0x1DB1D0u;
label_1db1d0:
    // 0x1db1d0: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1db1d4:
    if (ctx->pc == 0x1DB1D4u) {
        ctx->pc = 0x1DB1D4u;
            // 0x1db1d4: 0x8e420e58  lw          $v0, 0xE58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3672)));
        ctx->pc = 0x1DB1D8u;
        goto label_1db1d8;
    }
    ctx->pc = 0x1DB1D0u;
    {
        const bool branch_taken_0x1db1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1D0u;
            // 0x1db1d4: 0x8e420e58  lw          $v0, 0xE58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1d0) {
            ctx->pc = 0x1DB304u;
            goto label_1db304;
        }
    }
    ctx->pc = 0x1DB1D8u;
label_1db1d8:
    // 0x1db1d8: 0xc077318  jal         func_1DCC60
label_1db1dc:
    if (ctx->pc == 0x1DB1DCu) {
        ctx->pc = 0x1DB1E0u;
        goto label_1db1e0;
    }
    ctx->pc = 0x1DB1D8u;
    SET_GPR_U32(ctx, 31, 0x1DB1E0u);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1E0u; }
        if (ctx->pc != 0x1DB1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1E0u; }
        if (ctx->pc != 0x1DB1E0u) { return; }
    }
    ctx->pc = 0x1DB1E0u;
label_1db1e0:
    // 0x1db1e0: 0xc077314  jal         func_1DCC50
label_1db1e4:
    if (ctx->pc == 0x1DB1E4u) {
        ctx->pc = 0x1DB1E4u;
            // 0x1db1e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB1E8u;
        goto label_1db1e8;
    }
    ctx->pc = 0x1DB1E0u;
    SET_GPR_U32(ctx, 31, 0x1DB1E8u);
    ctx->pc = 0x1DB1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1E0u;
            // 0x1db1e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1E8u; }
        if (ctx->pc != 0x1DB1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1E8u; }
        if (ctx->pc != 0x1DB1E8u) { return; }
    }
    ctx->pc = 0x1DB1E8u;
label_1db1e8:
    // 0x1db1e8: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1db1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1db1ec:
    // 0x1db1ec: 0x5020000d  beql        $at, $zero, . + 4 + (0xD << 2)
label_1db1f0:
    if (ctx->pc == 0x1DB1F0u) {
        ctx->pc = 0x1DB1F0u;
            // 0x1db1f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1F4u;
        goto label_1db1f4;
    }
    ctx->pc = 0x1DB1ECu;
    {
        const bool branch_taken_0x1db1ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1ec) {
            ctx->pc = 0x1DB1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1ECu;
            // 0x1db1f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB224u;
            goto label_1db224;
        }
    }
    ctx->pc = 0x1DB1F4u;
label_1db1f4:
    // 0x1db1f4: 0xc077320  jal         func_1DCC80
label_1db1f8:
    if (ctx->pc == 0x1DB1F8u) {
        ctx->pc = 0x1DB1F8u;
            // 0x1db1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1FCu;
        goto label_1db1fc;
    }
    ctx->pc = 0x1DB1F4u;
    SET_GPR_U32(ctx, 31, 0x1DB1FCu);
    ctx->pc = 0x1DB1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1F4u;
            // 0x1db1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1FCu; }
        if (ctx->pc != 0x1DB1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1FCu; }
        if (ctx->pc != 0x1DB1FCu) { return; }
    }
    ctx->pc = 0x1DB1FCu;
label_1db1fc:
    // 0x1db1fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db200:
    // 0x1db200: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1db200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1db204:
    // 0x1db204: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db208:
    // 0x1db208: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1db208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1db20c:
    // 0x1db20c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1db20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1db210:
    // 0x1db210: 0xc64c0e50  lwc1        $f12, 0xE50($s2)
    ctx->pc = 0x1db210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db214:
    // 0x1db214: 0xc07730c  jal         func_1DCC30
label_1db218:
    if (ctx->pc == 0x1DB218u) {
        ctx->pc = 0x1DB218u;
            // 0x1db218: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB21Cu;
        goto label_1db21c;
    }
    ctx->pc = 0x1DB214u;
    SET_GPR_U32(ctx, 31, 0x1DB21Cu);
    ctx->pc = 0x1DB218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB214u;
            // 0x1db218: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (runtime->hasFunction(0x1DCC30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB21Cu; }
        if (ctx->pc != 0x1DB21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC30_0x1dcc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB21Cu; }
        if (ctx->pc != 0x1DB21Cu) { return; }
    }
    ctx->pc = 0x1DB21Cu;
label_1db21c:
    // 0x1db21c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1db220:
    if (ctx->pc == 0x1DB220u) {
        ctx->pc = 0x1DB220u;
            // 0x1db220: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->pc = 0x1DB224u;
        goto label_1db224;
    }
    ctx->pc = 0x1DB21Cu;
    {
        const bool branch_taken_0x1db21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB21Cu;
            // 0x1db220: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db21c) {
            ctx->pc = 0x1DB250u;
            goto label_1db250;
        }
    }
    ctx->pc = 0x1DB224u;
label_1db224:
    // 0x1db224: 0xc077320  jal         func_1DCC80
label_1db228:
    if (ctx->pc == 0x1DB228u) {
        ctx->pc = 0x1DB22Cu;
        goto label_1db22c;
    }
    ctx->pc = 0x1DB224u;
    SET_GPR_U32(ctx, 31, 0x1DB22Cu);
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB22Cu; }
        if (ctx->pc != 0x1DB22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB22Cu; }
        if (ctx->pc != 0x1DB22Cu) { return; }
    }
    ctx->pc = 0x1DB22Cu;
label_1db22c:
    // 0x1db22c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db230:
    // 0x1db230: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1db230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1db234:
    // 0x1db234: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db238:
    // 0x1db238: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1db238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1db23c:
    // 0x1db23c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1db23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1db240:
    // 0x1db240: 0xc64c0e50  lwc1        $f12, 0xE50($s2)
    ctx->pc = 0x1db240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db244:
    // 0x1db244: 0xc07730c  jal         func_1DCC30
label_1db248:
    if (ctx->pc == 0x1DB248u) {
        ctx->pc = 0x1DB248u;
            // 0x1db248: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB24Cu;
        goto label_1db24c;
    }
    ctx->pc = 0x1DB244u;
    SET_GPR_U32(ctx, 31, 0x1DB24Cu);
    ctx->pc = 0x1DB248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB244u;
            // 0x1db248: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (runtime->hasFunction(0x1DCC30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB24Cu; }
        if (ctx->pc != 0x1DB24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC30_0x1dcc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB24Cu; }
        if (ctx->pc != 0x1DB24Cu) { return; }
    }
    ctx->pc = 0x1DB24Cu;
label_1db24c:
    // 0x1db24c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1db24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1db250:
    // 0x1db250: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1db254:
    if (ctx->pc == 0x1DB254u) {
        ctx->pc = 0x1DB254u;
            // 0x1db254: 0xae420e54  sw          $v0, 0xE54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3668), GPR_U32(ctx, 2));
        ctx->pc = 0x1DB258u;
        goto label_1db258;
    }
    ctx->pc = 0x1DB250u;
    {
        const bool branch_taken_0x1db250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB250u;
            // 0x1db254: 0xae420e54  sw          $v0, 0xE54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db250) {
            ctx->pc = 0x1DB300u;
            goto label_1db300;
        }
    }
    ctx->pc = 0x1DB258u;
label_1db258:
    // 0x1db258: 0xc077318  jal         func_1DCC60
label_1db25c:
    if (ctx->pc == 0x1DB25Cu) {
        ctx->pc = 0x1DB260u;
        goto label_1db260;
    }
    ctx->pc = 0x1DB258u;
    SET_GPR_U32(ctx, 31, 0x1DB260u);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB260u; }
        if (ctx->pc != 0x1DB260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB260u; }
        if (ctx->pc != 0x1DB260u) { return; }
    }
    ctx->pc = 0x1DB260u;
label_1db260:
    // 0x1db260: 0xc077314  jal         func_1DCC50
label_1db264:
    if (ctx->pc == 0x1DB264u) {
        ctx->pc = 0x1DB264u;
            // 0x1db264: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB268u;
        goto label_1db268;
    }
    ctx->pc = 0x1DB260u;
    SET_GPR_U32(ctx, 31, 0x1DB268u);
    ctx->pc = 0x1DB264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB260u;
            // 0x1db264: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB268u; }
        if (ctx->pc != 0x1DB268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB268u; }
        if (ctx->pc != 0x1DB268u) { return; }
    }
    ctx->pc = 0x1DB268u;
label_1db268:
    // 0x1db268: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1db268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1db26c:
    // 0x1db26c: 0x5020000d  beql        $at, $zero, . + 4 + (0xD << 2)
label_1db270:
    if (ctx->pc == 0x1DB270u) {
        ctx->pc = 0x1DB270u;
            // 0x1db270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB274u;
        goto label_1db274;
    }
    ctx->pc = 0x1DB26Cu;
    {
        const bool branch_taken_0x1db26c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db26c) {
            ctx->pc = 0x1DB270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB26Cu;
            // 0x1db270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB2A4u;
            goto label_1db2a4;
        }
    }
    ctx->pc = 0x1DB274u;
label_1db274:
    // 0x1db274: 0xc077320  jal         func_1DCC80
label_1db278:
    if (ctx->pc == 0x1DB278u) {
        ctx->pc = 0x1DB278u;
            // 0x1db278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB27Cu;
        goto label_1db27c;
    }
    ctx->pc = 0x1DB274u;
    SET_GPR_U32(ctx, 31, 0x1DB27Cu);
    ctx->pc = 0x1DB278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB274u;
            // 0x1db278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB27Cu; }
        if (ctx->pc != 0x1DB27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB27Cu; }
        if (ctx->pc != 0x1DB27Cu) { return; }
    }
    ctx->pc = 0x1DB27Cu;
label_1db27c:
    // 0x1db27c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db280:
    // 0x1db280: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1db280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1db284:
    // 0x1db284: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db288:
    // 0x1db288: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1db288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1db28c:
    // 0x1db28c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1db28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1db290:
    // 0x1db290: 0xc64c0e50  lwc1        $f12, 0xE50($s2)
    ctx->pc = 0x1db290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db294:
    // 0x1db294: 0xc07730c  jal         func_1DCC30
label_1db298:
    if (ctx->pc == 0x1DB298u) {
        ctx->pc = 0x1DB298u;
            // 0x1db298: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB29Cu;
        goto label_1db29c;
    }
    ctx->pc = 0x1DB294u;
    SET_GPR_U32(ctx, 31, 0x1DB29Cu);
    ctx->pc = 0x1DB298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB294u;
            // 0x1db298: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (runtime->hasFunction(0x1DCC30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB29Cu; }
        if (ctx->pc != 0x1DB29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC30_0x1dcc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB29Cu; }
        if (ctx->pc != 0x1DB29Cu) { return; }
    }
    ctx->pc = 0x1DB29Cu;
label_1db29c:
    // 0x1db29c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1db2a0:
    if (ctx->pc == 0x1DB2A0u) {
        ctx->pc = 0x1DB2A0u;
            // 0x1db2a0: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->pc = 0x1DB2A4u;
        goto label_1db2a4;
    }
    ctx->pc = 0x1DB29Cu;
    {
        const bool branch_taken_0x1db29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB29Cu;
            // 0x1db2a0: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db29c) {
            ctx->pc = 0x1DB2D0u;
            goto label_1db2d0;
        }
    }
    ctx->pc = 0x1DB2A4u;
label_1db2a4:
    // 0x1db2a4: 0xc077320  jal         func_1DCC80
label_1db2a8:
    if (ctx->pc == 0x1DB2A8u) {
        ctx->pc = 0x1DB2ACu;
        goto label_1db2ac;
    }
    ctx->pc = 0x1DB2A4u;
    SET_GPR_U32(ctx, 31, 0x1DB2ACu);
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2ACu; }
        if (ctx->pc != 0x1DB2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2ACu; }
        if (ctx->pc != 0x1DB2ACu) { return; }
    }
    ctx->pc = 0x1DB2ACu;
label_1db2ac:
    // 0x1db2ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db2b0:
    // 0x1db2b0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1db2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1db2b4:
    // 0x1db2b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db2b8:
    // 0x1db2b8: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1db2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1db2bc:
    // 0x1db2bc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1db2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1db2c0:
    // 0x1db2c0: 0xc64c0e50  lwc1        $f12, 0xE50($s2)
    ctx->pc = 0x1db2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db2c4:
    // 0x1db2c4: 0xc07730c  jal         func_1DCC30
label_1db2c8:
    if (ctx->pc == 0x1DB2C8u) {
        ctx->pc = 0x1DB2C8u;
            // 0x1db2c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2CCu;
        goto label_1db2cc;
    }
    ctx->pc = 0x1DB2C4u;
    SET_GPR_U32(ctx, 31, 0x1DB2CCu);
    ctx->pc = 0x1DB2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2C4u;
            // 0x1db2c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (runtime->hasFunction(0x1DCC30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2CCu; }
        if (ctx->pc != 0x1DB2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC30_0x1dcc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2CCu; }
        if (ctx->pc != 0x1DB2CCu) { return; }
    }
    ctx->pc = 0x1DB2CCu;
label_1db2cc:
    // 0x1db2cc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1db2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1db2d0:
    // 0x1db2d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1db2d4:
    if (ctx->pc == 0x1DB2D4u) {
        ctx->pc = 0x1DB2D4u;
            // 0x1db2d4: 0xae420e54  sw          $v0, 0xE54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3668), GPR_U32(ctx, 2));
        ctx->pc = 0x1DB2D8u;
        goto label_1db2d8;
    }
    ctx->pc = 0x1DB2D0u;
    {
        const bool branch_taken_0x1db2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2D0u;
            // 0x1db2d4: 0xae420e54  sw          $v0, 0xE54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2d0) {
            ctx->pc = 0x1DB300u;
            goto label_1db300;
        }
    }
    ctx->pc = 0x1DB2D8u;
label_1db2d8:
    // 0x1db2d8: 0xc077320  jal         func_1DCC80
label_1db2dc:
    if (ctx->pc == 0x1DB2DCu) {
        ctx->pc = 0x1DB2E0u;
        goto label_1db2e0;
    }
    ctx->pc = 0x1DB2D8u;
    SET_GPR_U32(ctx, 31, 0x1DB2E0u);
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2E0u; }
        if (ctx->pc != 0x1DB2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2E0u; }
        if (ctx->pc != 0x1DB2E0u) { return; }
    }
    ctx->pc = 0x1DB2E0u;
label_1db2e0:
    // 0x1db2e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db2e4:
    // 0x1db2e4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1db2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1db2e8:
    // 0x1db2e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db2ec:
    // 0x1db2ec: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1db2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1db2f0:
    // 0x1db2f0: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1db2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1db2f4:
    // 0x1db2f4: 0xc64c0e50  lwc1        $f12, 0xE50($s2)
    ctx->pc = 0x1db2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db2f8:
    // 0x1db2f8: 0xc07730c  jal         func_1DCC30
label_1db2fc:
    if (ctx->pc == 0x1DB2FCu) {
        ctx->pc = 0x1DB2FCu;
            // 0x1db2fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB300u;
        goto label_1db300;
    }
    ctx->pc = 0x1DB2F8u;
    SET_GPR_U32(ctx, 31, 0x1DB300u);
    ctx->pc = 0x1DB2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2F8u;
            // 0x1db2fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (runtime->hasFunction(0x1DCC30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB300u; }
        if (ctx->pc != 0x1DB300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC30_0x1dcc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB300u; }
        if (ctx->pc != 0x1DB300u) { return; }
    }
    ctx->pc = 0x1DB300u;
label_1db300:
    // 0x1db300: 0x8e420e58  lw          $v0, 0xE58($s2)
    ctx->pc = 0x1db300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3672)));
label_1db304:
    // 0x1db304: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db308:
    // 0x1db308: 0xae420e58  sw          $v0, 0xE58($s2)
    ctx->pc = 0x1db308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3672), GPR_U32(ctx, 2));
label_1db30c:
    // 0x1db30c: 0xc6410e50  lwc1        $f1, 0xE50($s2)
    ctx->pc = 0x1db30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db310:
    // 0x1db310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1db314:
    // 0x1db314: 0x0  nop
    ctx->pc = 0x1db314u;
    // NOP
label_1db318:
    // 0x1db318: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db31c:
    // 0x1db31c: 0x45000037  bc1f        . + 4 + (0x37 << 2)
label_1db320:
    if (ctx->pc == 0x1DB320u) {
        ctx->pc = 0x1DB324u;
        goto label_1db324;
    }
    ctx->pc = 0x1DB31Cu;
    {
        const bool branch_taken_0x1db31c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db31c) {
            ctx->pc = 0x1DB3FCu;
            goto label_1db3fc;
        }
    }
    ctx->pc = 0x1DB324u;
label_1db324:
    // 0x1db324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db328:
    // 0x1db328: 0xc077fb0  jal         func_1DFEC0
label_1db32c:
    if (ctx->pc == 0x1DB32Cu) {
        ctx->pc = 0x1DB32Cu;
            // 0x1db32c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x1DB330u;
        goto label_1db330;
    }
    ctx->pc = 0x1DB328u;
    SET_GPR_U32(ctx, 31, 0x1DB330u);
    ctx->pc = 0x1DB32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB328u;
            // 0x1db32c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB330u; }
        if (ctx->pc != 0x1DB330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB330u; }
        if (ctx->pc != 0x1DB330u) { return; }
    }
    ctx->pc = 0x1DB330u;
label_1db330:
    // 0x1db330: 0x10000032  b           . + 4 + (0x32 << 2)
label_1db334:
    if (ctx->pc == 0x1DB334u) {
        ctx->pc = 0x1DB338u;
        goto label_1db338;
    }
    ctx->pc = 0x1DB330u;
    {
        const bool branch_taken_0x1db330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db330) {
            ctx->pc = 0x1DB3FCu;
            goto label_1db3fc;
        }
    }
    ctx->pc = 0x1DB338u;
label_1db338:
    // 0x1db338: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1db338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1db33c:
    // 0x1db33c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1db340:
    if (ctx->pc == 0x1DB340u) {
        ctx->pc = 0x1DB344u;
        goto label_1db344;
    }
    ctx->pc = 0x1DB33Cu;
    {
        const bool branch_taken_0x1db33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db33c) {
            ctx->pc = 0x1DB3FCu;
            goto label_1db3fc;
        }
    }
    ctx->pc = 0x1DB344u;
label_1db344:
    // 0x1db344: 0xc077320  jal         func_1DCC80
label_1db348:
    if (ctx->pc == 0x1DB348u) {
        ctx->pc = 0x1DB348u;
            // 0x1db348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB34Cu;
        goto label_1db34c;
    }
    ctx->pc = 0x1DB344u;
    SET_GPR_U32(ctx, 31, 0x1DB34Cu);
    ctx->pc = 0x1DB348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB344u;
            // 0x1db348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB34Cu; }
        if (ctx->pc != 0x1DB34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB34Cu; }
        if (ctx->pc != 0x1DB34Cu) { return; }
    }
    ctx->pc = 0x1DB34Cu;
label_1db34c:
    // 0x1db34c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1db34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1db350:
    // 0x1db350: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db354:
    // 0x1db354: 0xc077308  jal         func_1DCC20
label_1db358:
    if (ctx->pc == 0x1DB358u) {
        ctx->pc = 0x1DB358u;
            // 0x1db358: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->pc = 0x1DB35Cu;
        goto label_1db35c;
    }
    ctx->pc = 0x1DB354u;
    SET_GPR_U32(ctx, 31, 0x1DB35Cu);
    ctx->pc = 0x1DB358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB354u;
            // 0x1db358: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC20u;
    if (runtime->hasFunction(0x1DCC20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB35Cu; }
        if (ctx->pc != 0x1DB35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC20_0x1dcc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB35Cu; }
        if (ctx->pc != 0x1DB35Cu) { return; }
    }
    ctx->pc = 0x1DB35Cu;
label_1db35c:
    // 0x1db35c: 0xc0772f4  jal         func_1DCBD0
label_1db360:
    if (ctx->pc == 0x1DB360u) {
        ctx->pc = 0x1DB360u;
            // 0x1db360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB364u;
        goto label_1db364;
    }
    ctx->pc = 0x1DB35Cu;
    SET_GPR_U32(ctx, 31, 0x1DB364u);
    ctx->pc = 0x1DB360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB35Cu;
            // 0x1db360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBD0u;
    if (runtime->hasFunction(0x1DCBD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB364u; }
        if (ctx->pc != 0x1DB364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBD0_0x1dcbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB364u; }
        if (ctx->pc != 0x1DB364u) { return; }
    }
    ctx->pc = 0x1DB364u;
label_1db364:
    // 0x1db364: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1db368:
    if (ctx->pc == 0x1DB368u) {
        ctx->pc = 0x1DB36Cu;
        goto label_1db36c;
    }
    ctx->pc = 0x1DB364u;
    {
        const bool branch_taken_0x1db364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db364) {
            ctx->pc = 0x1DB3FCu;
            goto label_1db3fc;
        }
    }
    ctx->pc = 0x1DB36Cu;
label_1db36c:
    // 0x1db36c: 0xc0772f0  jal         func_1DCBC0
label_1db370:
    if (ctx->pc == 0x1DB370u) {
        ctx->pc = 0x1DB370u;
            // 0x1db370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB374u;
        goto label_1db374;
    }
    ctx->pc = 0x1DB36Cu;
    SET_GPR_U32(ctx, 31, 0x1DB374u);
    ctx->pc = 0x1DB370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB36Cu;
            // 0x1db370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB374u; }
        if (ctx->pc != 0x1DB374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB374u; }
        if (ctx->pc != 0x1DB374u) { return; }
    }
    ctx->pc = 0x1DB374u;
label_1db374:
    // 0x1db374: 0xc0772ec  jal         func_1DCBB0
label_1db378:
    if (ctx->pc == 0x1DB378u) {
        ctx->pc = 0x1DB378u;
            // 0x1db378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB37Cu;
        goto label_1db37c;
    }
    ctx->pc = 0x1DB374u;
    SET_GPR_U32(ctx, 31, 0x1DB37Cu);
    ctx->pc = 0x1DB378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB374u;
            // 0x1db378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (runtime->hasFunction(0x1DCBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB37Cu; }
        if (ctx->pc != 0x1DB37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBB0_0x1dcbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB37Cu; }
        if (ctx->pc != 0x1DB37Cu) { return; }
    }
    ctx->pc = 0x1DB37Cu;
label_1db37c:
    // 0x1db37c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1db380:
    if (ctx->pc == 0x1DB380u) {
        ctx->pc = 0x1DB384u;
        goto label_1db384;
    }
    ctx->pc = 0x1DB37Cu;
    {
        const bool branch_taken_0x1db37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db37c) {
            ctx->pc = 0x1DB3FCu;
            goto label_1db3fc;
        }
    }
    ctx->pc = 0x1DB384u;
label_1db384:
    // 0x1db384: 0xc0772e8  jal         func_1DCBA0
label_1db388:
    if (ctx->pc == 0x1DB388u) {
        ctx->pc = 0x1DB388u;
            // 0x1db388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB38Cu;
        goto label_1db38c;
    }
    ctx->pc = 0x1DB384u;
    SET_GPR_U32(ctx, 31, 0x1DB38Cu);
    ctx->pc = 0x1DB388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB384u;
            // 0x1db388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB38Cu; }
        if (ctx->pc != 0x1DB38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB38Cu; }
        if (ctx->pc != 0x1DB38Cu) { return; }
    }
    ctx->pc = 0x1DB38Cu;
label_1db38c:
    // 0x1db38c: 0xc0772dc  jal         func_1DCB70
label_1db390:
    if (ctx->pc == 0x1DB390u) {
        ctx->pc = 0x1DB390u;
            // 0x1db390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB394u;
        goto label_1db394;
    }
    ctx->pc = 0x1DB38Cu;
    SET_GPR_U32(ctx, 31, 0x1DB394u);
    ctx->pc = 0x1DB390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB38Cu;
            // 0x1db390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB394u; }
        if (ctx->pc != 0x1DB394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB394u; }
        if (ctx->pc != 0x1DB394u) { return; }
    }
    ctx->pc = 0x1DB394u;
label_1db394:
    // 0x1db394: 0xc0772e8  jal         func_1DCBA0
label_1db398:
    if (ctx->pc == 0x1DB398u) {
        ctx->pc = 0x1DB398u;
            // 0x1db398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB39Cu;
        goto label_1db39c;
    }
    ctx->pc = 0x1DB394u;
    SET_GPR_U32(ctx, 31, 0x1DB39Cu);
    ctx->pc = 0x1DB398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB394u;
            // 0x1db398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB39Cu; }
        if (ctx->pc != 0x1DB39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB39Cu; }
        if (ctx->pc != 0x1DB39Cu) { return; }
    }
    ctx->pc = 0x1DB39Cu;
label_1db39c:
    // 0x1db39c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db3a0:
    // 0x1db3a0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1db3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1db3a4:
    // 0x1db3a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1db3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1db3a8:
    // 0x1db3a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1db3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1db3ac:
    // 0x1db3ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db3acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1db3b0:
    // 0x1db3b0: 0xc0772d4  jal         func_1DCB50
label_1db3b4:
    if (ctx->pc == 0x1DB3B4u) {
        ctx->pc = 0x1DB3B4u;
            // 0x1db3b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1DB3B8u;
        goto label_1db3b8;
    }
    ctx->pc = 0x1DB3B0u;
    SET_GPR_U32(ctx, 31, 0x1DB3B8u);
    ctx->pc = 0x1DB3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3B0u;
            // 0x1db3b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3B8u; }
        if (ctx->pc != 0x1DB3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3B8u; }
        if (ctx->pc != 0x1DB3B8u) { return; }
    }
    ctx->pc = 0x1DB3B8u;
label_1db3b8:
    // 0x1db3b8: 0xc0772e8  jal         func_1DCBA0
label_1db3bc:
    if (ctx->pc == 0x1DB3BCu) {
        ctx->pc = 0x1DB3BCu;
            // 0x1db3bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3C0u;
        goto label_1db3c0;
    }
    ctx->pc = 0x1DB3B8u;
    SET_GPR_U32(ctx, 31, 0x1DB3C0u);
    ctx->pc = 0x1DB3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3B8u;
            // 0x1db3bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3C0u; }
        if (ctx->pc != 0x1DB3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3C0u; }
        if (ctx->pc != 0x1DB3C0u) { return; }
    }
    ctx->pc = 0x1DB3C0u;
label_1db3c0:
    // 0x1db3c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db3c4:
    // 0x1db3c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db3c8:
    // 0x1db3c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1db3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1db3cc:
    // 0x1db3cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1db3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1db3d0:
    // 0x1db3d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1db3d4:
    // 0x1db3d4: 0xc0772d4  jal         func_1DCB50
label_1db3d8:
    if (ctx->pc == 0x1DB3D8u) {
        ctx->pc = 0x1DB3D8u;
            // 0x1db3d8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1DB3DCu;
        goto label_1db3dc;
    }
    ctx->pc = 0x1DB3D4u;
    SET_GPR_U32(ctx, 31, 0x1DB3DCu);
    ctx->pc = 0x1DB3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3D4u;
            // 0x1db3d8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3DCu; }
        if (ctx->pc != 0x1DB3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3DCu; }
        if (ctx->pc != 0x1DB3DCu) { return; }
    }
    ctx->pc = 0x1DB3DCu;
label_1db3dc:
    // 0x1db3dc: 0xc0772e8  jal         func_1DCBA0
label_1db3e0:
    if (ctx->pc == 0x1DB3E0u) {
        ctx->pc = 0x1DB3E0u;
            // 0x1db3e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3E4u;
        goto label_1db3e4;
    }
    ctx->pc = 0x1DB3DCu;
    SET_GPR_U32(ctx, 31, 0x1DB3E4u);
    ctx->pc = 0x1DB3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3DCu;
            // 0x1db3e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3E4u; }
        if (ctx->pc != 0x1DB3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3E4u; }
        if (ctx->pc != 0x1DB3E4u) { return; }
    }
    ctx->pc = 0x1DB3E4u;
label_1db3e4:
    // 0x1db3e4: 0x8c590058  lw          $t9, 0x58($v0)
    ctx->pc = 0x1db3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1db3e8:
    // 0x1db3e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1db3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db3ec:
    // 0x1db3ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db3f0:
    // 0x1db3f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1db3f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1db3f4:
    // 0x1db3f4: 0x320f809  jalr        $t9
label_1db3f8:
    if (ctx->pc == 0x1DB3F8u) {
        ctx->pc = 0x1DB3F8u;
            // 0x1db3f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3FCu;
        goto label_1db3fc;
    }
    ctx->pc = 0x1DB3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB3FCu);
        ctx->pc = 0x1DB3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3F4u;
            // 0x1db3f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB3FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3FCu; }
            if (ctx->pc != 0x1DB3FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1DB3FCu;
label_1db3fc:
    // 0x1db3fc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1db3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1db400:
    // 0x1db400: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x1db400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1db404:
    // 0x1db404: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_1db408:
    if (ctx->pc == 0x1DB408u) {
        ctx->pc = 0x1DB408u;
            // 0x1db408: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1DB40Cu;
        goto label_1db40c;
    }
    ctx->pc = 0x1DB404u;
    {
        const bool branch_taken_0x1db404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db404) {
            ctx->pc = 0x1DB408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB404u;
            // 0x1db408: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB49Cu;
            goto label_1db49c;
        }
    }
    ctx->pc = 0x1DB40Cu;
label_1db40c:
    // 0x1db40c: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1db40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1db410:
    // 0x1db410: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1db414:
    // 0x1db414: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1db418:
    if (ctx->pc == 0x1DB418u) {
        ctx->pc = 0x1DB418u;
            // 0x1db418: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->pc = 0x1DB41Cu;
        goto label_1db41c;
    }
    ctx->pc = 0x1DB414u;
    {
        const bool branch_taken_0x1db414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db414) {
            ctx->pc = 0x1DB418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB414u;
            // 0x1db418: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB45Cu;
            goto label_1db45c;
        }
    }
    ctx->pc = 0x1DB41Cu;
label_1db41c:
    // 0x1db41c: 0xc0775b8  jal         func_1DD6E0
label_1db420:
    if (ctx->pc == 0x1DB420u) {
        ctx->pc = 0x1DB424u;
        goto label_1db424;
    }
    ctx->pc = 0x1DB41Cu;
    SET_GPR_U32(ctx, 31, 0x1DB424u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB424u; }
        if (ctx->pc != 0x1DB424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB424u; }
        if (ctx->pc != 0x1DB424u) { return; }
    }
    ctx->pc = 0x1DB424u;
label_1db424:
    // 0x1db424: 0xc0775b4  jal         func_1DD6D0
label_1db428:
    if (ctx->pc == 0x1DB428u) {
        ctx->pc = 0x1DB428u;
            // 0x1db428: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB42Cu;
        goto label_1db42c;
    }
    ctx->pc = 0x1DB424u;
    SET_GPR_U32(ctx, 31, 0x1DB42Cu);
    ctx->pc = 0x1DB428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB424u;
            // 0x1db428: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB42Cu; }
        if (ctx->pc != 0x1DB42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB42Cu; }
        if (ctx->pc != 0x1DB42Cu) { return; }
    }
    ctx->pc = 0x1DB42Cu;
label_1db42c:
    // 0x1db42c: 0xc6420e60  lwc1        $f2, 0xE60($s2)
    ctx->pc = 0x1db42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1db430:
    // 0x1db430: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1db430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db434:
    // 0x1db434: 0x0  nop
    ctx->pc = 0x1db434u;
    // NOP
label_1db438:
    // 0x1db438: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1db438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1db43c:
    // 0x1db43c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1db43cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db440:
    // 0x1db440: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_1db444:
    if (ctx->pc == 0x1DB444u) {
        ctx->pc = 0x1DB444u;
            // 0x1db444: 0xe6400e60  swc1        $f0, 0xE60($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3680), bits); }
        ctx->pc = 0x1DB448u;
        goto label_1db448;
    }
    ctx->pc = 0x1DB440u;
    {
        const bool branch_taken_0x1db440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB440u;
            // 0x1db444: 0xe6400e60  swc1        $f0, 0xE60($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db440) {
            ctx->pc = 0x1DB498u;
            goto label_1db498;
        }
    }
    ctx->pc = 0x1DB448u;
label_1db448:
    // 0x1db448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db44c:
    // 0x1db44c: 0xc077fb0  jal         func_1DFEC0
label_1db450:
    if (ctx->pc == 0x1DB450u) {
        ctx->pc = 0x1DB450u;
            // 0x1db450: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1DB454u;
        goto label_1db454;
    }
    ctx->pc = 0x1DB44Cu;
    SET_GPR_U32(ctx, 31, 0x1DB454u);
    ctx->pc = 0x1DB450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB44Cu;
            // 0x1db450: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB454u; }
        if (ctx->pc != 0x1DB454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB454u; }
        if (ctx->pc != 0x1DB454u) { return; }
    }
    ctx->pc = 0x1DB454u;
label_1db454:
    // 0x1db454: 0x10000010  b           . + 4 + (0x10 << 2)
label_1db458:
    if (ctx->pc == 0x1DB458u) {
        ctx->pc = 0x1DB45Cu;
        goto label_1db45c;
    }
    ctx->pc = 0x1DB454u;
    {
        const bool branch_taken_0x1db454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db454) {
            ctx->pc = 0x1DB498u;
            goto label_1db498;
        }
    }
    ctx->pc = 0x1DB45Cu;
label_1db45c:
    // 0x1db45c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1db460:
    // 0x1db460: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1db464:
    if (ctx->pc == 0x1DB464u) {
        ctx->pc = 0x1DB468u;
        goto label_1db468;
    }
    ctx->pc = 0x1DB460u;
    {
        const bool branch_taken_0x1db460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db460) {
            ctx->pc = 0x1DB498u;
            goto label_1db498;
        }
    }
    ctx->pc = 0x1DB468u;
label_1db468:
    // 0x1db468: 0xc07731c  jal         func_1DCC70
label_1db46c:
    if (ctx->pc == 0x1DB46Cu) {
        ctx->pc = 0x1DB46Cu;
            // 0x1db46c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB470u;
        goto label_1db470;
    }
    ctx->pc = 0x1DB468u;
    SET_GPR_U32(ctx, 31, 0x1DB470u);
    ctx->pc = 0x1DB46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB468u;
            // 0x1db46c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB470u; }
        if (ctx->pc != 0x1DB470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB470u; }
        if (ctx->pc != 0x1DB470u) { return; }
    }
    ctx->pc = 0x1DB470u;
label_1db470:
    // 0x1db470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db474:
    // 0x1db474: 0xc0772d0  jal         func_1DCB40
label_1db478:
    if (ctx->pc == 0x1DB478u) {
        ctx->pc = 0x1DB478u;
            // 0x1db478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB47Cu;
        goto label_1db47c;
    }
    ctx->pc = 0x1DB474u;
    SET_GPR_U32(ctx, 31, 0x1DB47Cu);
    ctx->pc = 0x1DB478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB474u;
            // 0x1db478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB40u;
    if (runtime->hasFunction(0x1DCB40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB47Cu; }
        if (ctx->pc != 0x1DB47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB40_0x1dcb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB47Cu; }
        if (ctx->pc != 0x1DB47Cu) { return; }
    }
    ctx->pc = 0x1DB47Cu;
label_1db47c:
    // 0x1db47c: 0x8e441140  lw          $a0, 0x1140($s2)
    ctx->pc = 0x1db47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4416)));
label_1db480:
    // 0x1db480: 0xc0772c8  jal         func_1DCB20
label_1db484:
    if (ctx->pc == 0x1DB484u) {
        ctx->pc = 0x1DB484u;
            // 0x1db484: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x1DB488u;
        goto label_1db488;
    }
    ctx->pc = 0x1DB480u;
    SET_GPR_U32(ctx, 31, 0x1DB488u);
    ctx->pc = 0x1DB484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB480u;
            // 0x1db484: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB20u;
    if (runtime->hasFunction(0x1DCB20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB488u; }
        if (ctx->pc != 0x1DB488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB20_0x1dcb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB488u; }
        if (ctx->pc != 0x1DB488u) { return; }
    }
    ctx->pc = 0x1DB488u;
label_1db488:
    // 0x1db488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db48c:
    // 0x1db48c: 0xc07626c  jal         func_1D89B0
label_1db490:
    if (ctx->pc == 0x1DB490u) {
        ctx->pc = 0x1DB490u;
            // 0x1db490: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1DB494u;
        goto label_1db494;
    }
    ctx->pc = 0x1DB48Cu;
    SET_GPR_U32(ctx, 31, 0x1DB494u);
    ctx->pc = 0x1DB490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB48Cu;
            // 0x1db490: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB494u; }
        if (ctx->pc != 0x1DB494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB494u; }
        if (ctx->pc != 0x1DB494u) { return; }
    }
    ctx->pc = 0x1DB494u;
label_1db494:
    // 0x1db494: 0xae400e60  sw          $zero, 0xE60($s2)
    ctx->pc = 0x1db494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3680), GPR_U32(ctx, 0));
label_1db498:
    // 0x1db498: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1db498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1db49c:
    // 0x1db49c: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x1db49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1db4a0:
    // 0x1db4a0: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
label_1db4a4:
    if (ctx->pc == 0x1DB4A4u) {
        ctx->pc = 0x1DB4A4u;
            // 0x1db4a4: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->pc = 0x1DB4A8u;
        goto label_1db4a8;
    }
    ctx->pc = 0x1DB4A0u;
    {
        const bool branch_taken_0x1db4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db4a0) {
            ctx->pc = 0x1DB4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB4A0u;
            // 0x1db4a4: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB5FCu;
            goto label_1db5fc;
        }
    }
    ctx->pc = 0x1DB4A8u;
label_1db4a8:
    // 0x1db4a8: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1db4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1db4ac:
    // 0x1db4ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1db4b0:
    // 0x1db4b0: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
label_1db4b4:
    if (ctx->pc == 0x1DB4B4u) {
        ctx->pc = 0x1DB4B4u;
            // 0x1db4b4: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->pc = 0x1DB4B8u;
        goto label_1db4b8;
    }
    ctx->pc = 0x1DB4B0u;
    {
        const bool branch_taken_0x1db4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db4b0) {
            ctx->pc = 0x1DB4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB4B0u;
            // 0x1db4b4: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB5CCu;
            goto label_1db5cc;
        }
    }
    ctx->pc = 0x1DB4B8u;
label_1db4b8:
    // 0x1db4b8: 0xc0775b8  jal         func_1DD6E0
label_1db4bc:
    if (ctx->pc == 0x1DB4BCu) {
        ctx->pc = 0x1DB4C0u;
        goto label_1db4c0;
    }
    ctx->pc = 0x1DB4B8u;
    SET_GPR_U32(ctx, 31, 0x1DB4C0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4C0u; }
        if (ctx->pc != 0x1DB4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4C0u; }
        if (ctx->pc != 0x1DB4C0u) { return; }
    }
    ctx->pc = 0x1DB4C0u;
label_1db4c0:
    // 0x1db4c0: 0xc0775b4  jal         func_1DD6D0
label_1db4c4:
    if (ctx->pc == 0x1DB4C4u) {
        ctx->pc = 0x1DB4C4u;
            // 0x1db4c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB4C8u;
        goto label_1db4c8;
    }
    ctx->pc = 0x1DB4C0u;
    SET_GPR_U32(ctx, 31, 0x1DB4C8u);
    ctx->pc = 0x1DB4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB4C0u;
            // 0x1db4c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4C8u; }
        if (ctx->pc != 0x1DB4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4C8u; }
        if (ctx->pc != 0x1DB4C8u) { return; }
    }
    ctx->pc = 0x1DB4C8u;
label_1db4c8:
    // 0x1db4c8: 0xc6420e64  lwc1        $f2, 0xE64($s2)
    ctx->pc = 0x1db4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1db4cc:
    // 0x1db4cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1db4ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db4d0:
    // 0x1db4d0: 0x0  nop
    ctx->pc = 0x1db4d0u;
    // NOP
label_1db4d4:
    // 0x1db4d4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1db4d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1db4d8:
    // 0x1db4d8: 0xe6400e64  swc1        $f0, 0xE64($s2)
    ctx->pc = 0x1db4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3684), bits); }
label_1db4dc:
    // 0x1db4dc: 0xc6400e68  lwc1        $f0, 0xE68($s2)
    ctx->pc = 0x1db4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db4e0:
    // 0x1db4e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1db4e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db4e4:
    // 0x1db4e4: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
label_1db4e8:
    if (ctx->pc == 0x1DB4E8u) {
        ctx->pc = 0x1DB4E8u;
            // 0x1db4e8: 0x8e44122c  lw          $a0, 0x122C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4652)));
        ctx->pc = 0x1DB4ECu;
        goto label_1db4ec;
    }
    ctx->pc = 0x1DB4E4u;
    {
        const bool branch_taken_0x1db4e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db4e4) {
            ctx->pc = 0x1DB4E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB4E4u;
            // 0x1db4e8: 0x8e44122c  lw          $a0, 0x122C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4652)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB590u;
            goto label_1db590;
        }
    }
    ctx->pc = 0x1DB4ECu;
label_1db4ec:
    // 0x1db4ec: 0xc0775b8  jal         func_1DD6E0
label_1db4f0:
    if (ctx->pc == 0x1DB4F0u) {
        ctx->pc = 0x1DB4F4u;
        goto label_1db4f4;
    }
    ctx->pc = 0x1DB4ECu;
    SET_GPR_U32(ctx, 31, 0x1DB4F4u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4F4u; }
        if (ctx->pc != 0x1DB4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4F4u; }
        if (ctx->pc != 0x1DB4F4u) { return; }
    }
    ctx->pc = 0x1DB4F4u;
label_1db4f4:
    // 0x1db4f4: 0xc0775b4  jal         func_1DD6D0
label_1db4f8:
    if (ctx->pc == 0x1DB4F8u) {
        ctx->pc = 0x1DB4F8u;
            // 0x1db4f8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB4FCu;
        goto label_1db4fc;
    }
    ctx->pc = 0x1DB4F4u;
    SET_GPR_U32(ctx, 31, 0x1DB4FCu);
    ctx->pc = 0x1DB4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB4F4u;
            // 0x1db4f8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4FCu; }
        if (ctx->pc != 0x1DB4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB4FCu; }
        if (ctx->pc != 0x1DB4FCu) { return; }
    }
    ctx->pc = 0x1DB4FCu;
label_1db4fc:
    // 0x1db4fc: 0xc6420e68  lwc1        $f2, 0xE68($s2)
    ctx->pc = 0x1db4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1db500:
    // 0x1db500: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1db500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db504:
    // 0x1db504: 0x0  nop
    ctx->pc = 0x1db504u;
    // NOP
label_1db508:
    // 0x1db508: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1db508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1db50c:
    // 0x1db50c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1db50cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db510:
    // 0x1db510: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1db514:
    if (ctx->pc == 0x1DB514u) {
        ctx->pc = 0x1DB514u;
            // 0x1db514: 0xe6400e68  swc1        $f0, 0xE68($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3688), bits); }
        ctx->pc = 0x1DB518u;
        goto label_1db518;
    }
    ctx->pc = 0x1DB510u;
    {
        const bool branch_taken_0x1db510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB510u;
            // 0x1db514: 0xe6400e68  swc1        $f0, 0xE68($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db510) {
            ctx->pc = 0x1DB58Cu;
            goto label_1db58c;
        }
    }
    ctx->pc = 0x1DB518u;
label_1db518:
    // 0x1db518: 0x8e42122c  lw          $v0, 0x122C($s2)
    ctx->pc = 0x1db518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4652)));
label_1db51c:
    // 0x1db51c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1db520:
    if (ctx->pc == 0x1DB520u) {
        ctx->pc = 0x1DB520u;
            // 0x1db520: 0x24040208  addiu       $a0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->pc = 0x1DB524u;
        goto label_1db524;
    }
    ctx->pc = 0x1DB51Cu;
    {
        const bool branch_taken_0x1db51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db51c) {
            ctx->pc = 0x1DB520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB51Cu;
            // 0x1db520: 0x24040208  addiu       $a0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB54Cu;
            goto label_1db54c;
        }
    }
    ctx->pc = 0x1DB524u;
label_1db524:
    // 0x1db524: 0xc077320  jal         func_1DCC80
label_1db528:
    if (ctx->pc == 0x1DB528u) {
        ctx->pc = 0x1DB528u;
            // 0x1db528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB52Cu;
        goto label_1db52c;
    }
    ctx->pc = 0x1DB524u;
    SET_GPR_U32(ctx, 31, 0x1DB52Cu);
    ctx->pc = 0x1DB528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB524u;
            // 0x1db528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB52Cu; }
        if (ctx->pc != 0x1DB52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB52Cu; }
        if (ctx->pc != 0x1DB52Cu) { return; }
    }
    ctx->pc = 0x1DB52Cu;
label_1db52c:
    // 0x1db52c: 0x8e44122c  lw          $a0, 0x122C($s2)
    ctx->pc = 0x1db52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4652)));
label_1db530:
    // 0x1db530: 0xc64c0e64  lwc1        $f12, 0xE64($s2)
    ctx->pc = 0x1db530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db534:
    // 0x1db534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db538:
    // 0x1db538: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1db538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1db53c:
    // 0x1db53c: 0xc159368  jal         func_564DA0
label_1db540:
    if (ctx->pc == 0x1DB540u) {
        ctx->pc = 0x1DB540u;
            // 0x1db540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB544u;
        goto label_1db544;
    }
    ctx->pc = 0x1DB53Cu;
    SET_GPR_U32(ctx, 31, 0x1DB544u);
    ctx->pc = 0x1DB540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB53Cu;
            // 0x1db540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x564DA0u;
    if (runtime->hasFunction(0x564DA0u)) {
        auto targetFn = runtime->lookupFunction(0x564DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB544u; }
        if (ctx->pc != 0x1DB544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00564DA0_0x564da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB544u; }
        if (ctx->pc != 0x1DB544u) { return; }
    }
    ctx->pc = 0x1DB544u;
label_1db544:
    // 0x1db544: 0x10000011  b           . + 4 + (0x11 << 2)
label_1db548:
    if (ctx->pc == 0x1DB548u) {
        ctx->pc = 0x1DB548u;
            // 0x1db548: 0xae400e68  sw          $zero, 0xE68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3688), GPR_U32(ctx, 0));
        ctx->pc = 0x1DB54Cu;
        goto label_1db54c;
    }
    ctx->pc = 0x1DB544u;
    {
        const bool branch_taken_0x1db544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB544u;
            // 0x1db548: 0xae400e68  sw          $zero, 0xE68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db544) {
            ctx->pc = 0x1DB58Cu;
            goto label_1db58c;
        }
    }
    ctx->pc = 0x1DB54Cu;
label_1db54c:
    // 0x1db54c: 0xc040180  jal         func_100600
label_1db550:
    if (ctx->pc == 0x1DB550u) {
        ctx->pc = 0x1DB554u;
        goto label_1db554;
    }
    ctx->pc = 0x1DB54Cu;
    SET_GPR_U32(ctx, 31, 0x1DB554u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB554u; }
        if (ctx->pc != 0x1DB554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB554u; }
        if (ctx->pc != 0x1DB554u) { return; }
    }
    ctx->pc = 0x1DB554u;
label_1db554:
    // 0x1db554: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db558:
    // 0x1db558: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_1db55c:
    if (ctx->pc == 0x1DB55Cu) {
        ctx->pc = 0x1DB55Cu;
            // 0x1db55c: 0xae51122c  sw          $s1, 0x122C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4652), GPR_U32(ctx, 17));
        ctx->pc = 0x1DB560u;
        goto label_1db560;
    }
    ctx->pc = 0x1DB558u;
    {
        const bool branch_taken_0x1db558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db558) {
            ctx->pc = 0x1DB55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB558u;
            // 0x1db55c: 0xae51122c  sw          $s1, 0x122C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4652), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB588u;
            goto label_1db588;
        }
    }
    ctx->pc = 0x1DB560u;
label_1db560:
    // 0x1db560: 0xc077320  jal         func_1DCC80
label_1db564:
    if (ctx->pc == 0x1DB564u) {
        ctx->pc = 0x1DB564u;
            // 0x1db564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB568u;
        goto label_1db568;
    }
    ctx->pc = 0x1DB560u;
    SET_GPR_U32(ctx, 31, 0x1DB568u);
    ctx->pc = 0x1DB564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB560u;
            // 0x1db564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB568u; }
        if (ctx->pc != 0x1DB568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB568u; }
        if (ctx->pc != 0x1DB568u) { return; }
    }
    ctx->pc = 0x1DB568u;
label_1db568:
    // 0x1db568: 0xc64c0e64  lwc1        $f12, 0xE64($s2)
    ctx->pc = 0x1db568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db56c:
    // 0x1db56c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db570:
    // 0x1db570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db574:
    // 0x1db574: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1db574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1db578:
    // 0x1db578: 0xc159418  jal         func_565060
label_1db57c:
    if (ctx->pc == 0x1DB57Cu) {
        ctx->pc = 0x1DB57Cu;
            // 0x1db57c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB580u;
        goto label_1db580;
    }
    ctx->pc = 0x1DB578u;
    SET_GPR_U32(ctx, 31, 0x1DB580u);
    ctx->pc = 0x1DB57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB578u;
            // 0x1db57c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565060u;
    if (runtime->hasFunction(0x565060u)) {
        auto targetFn = runtime->lookupFunction(0x565060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB580u; }
        if (ctx->pc != 0x1DB580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565060_0x565060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB580u; }
        if (ctx->pc != 0x1DB580u) { return; }
    }
    ctx->pc = 0x1DB580u;
label_1db580:
    // 0x1db580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db584:
    // 0x1db584: 0xae51122c  sw          $s1, 0x122C($s2)
    ctx->pc = 0x1db584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4652), GPR_U32(ctx, 17));
label_1db588:
    // 0x1db588: 0xae400e68  sw          $zero, 0xE68($s2)
    ctx->pc = 0x1db588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3688), GPR_U32(ctx, 0));
label_1db58c:
    // 0x1db58c: 0x8e44122c  lw          $a0, 0x122C($s2)
    ctx->pc = 0x1db58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4652)));
label_1db590:
    // 0x1db590: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1db594:
    if (ctx->pc == 0x1DB594u) {
        ctx->pc = 0x1DB594u;
            // 0x1db594: 0xc6410e64  lwc1        $f1, 0xE64($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1DB598u;
        goto label_1db598;
    }
    ctx->pc = 0x1DB590u;
    {
        const bool branch_taken_0x1db590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db590) {
            ctx->pc = 0x1DB594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB590u;
            // 0x1db594: 0xc6410e64  lwc1        $f1, 0xE64($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB5A4u;
            goto label_1db5a4;
        }
    }
    ctx->pc = 0x1DB598u;
label_1db598:
    // 0x1db598: 0xc159294  jal         func_564A50
label_1db59c:
    if (ctx->pc == 0x1DB59Cu) {
        ctx->pc = 0x1DB5A0u;
        goto label_1db5a0;
    }
    ctx->pc = 0x1DB598u;
    SET_GPR_U32(ctx, 31, 0x1DB5A0u);
    ctx->pc = 0x564A50u;
    if (runtime->hasFunction(0x564A50u)) {
        auto targetFn = runtime->lookupFunction(0x564A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5A0u; }
        if (ctx->pc != 0x1DB5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00564A50_0x564a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5A0u; }
        if (ctx->pc != 0x1DB5A0u) { return; }
    }
    ctx->pc = 0x1DB5A0u;
label_1db5a0:
    // 0x1db5a0: 0xc6410e64  lwc1        $f1, 0xE64($s2)
    ctx->pc = 0x1db5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db5a4:
    // 0x1db5a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1db5a8:
    // 0x1db5a8: 0x0  nop
    ctx->pc = 0x1db5a8u;
    // NOP
label_1db5ac:
    // 0x1db5ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db5acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db5b0:
    // 0x1db5b0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1db5b4:
    if (ctx->pc == 0x1DB5B4u) {
        ctx->pc = 0x1DB5B8u;
        goto label_1db5b8;
    }
    ctx->pc = 0x1DB5B0u;
    {
        const bool branch_taken_0x1db5b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db5b0) {
            ctx->pc = 0x1DB5F8u;
            goto label_1db5f8;
        }
    }
    ctx->pc = 0x1DB5B8u;
label_1db5b8:
    // 0x1db5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db5bc:
    // 0x1db5bc: 0xc077fb0  jal         func_1DFEC0
label_1db5c0:
    if (ctx->pc == 0x1DB5C0u) {
        ctx->pc = 0x1DB5C0u;
            // 0x1db5c0: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1DB5C4u;
        goto label_1db5c4;
    }
    ctx->pc = 0x1DB5BCu;
    SET_GPR_U32(ctx, 31, 0x1DB5C4u);
    ctx->pc = 0x1DB5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5BCu;
            // 0x1db5c0: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5C4u; }
        if (ctx->pc != 0x1DB5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5C4u; }
        if (ctx->pc != 0x1DB5C4u) { return; }
    }
    ctx->pc = 0x1DB5C4u;
label_1db5c4:
    // 0x1db5c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1db5c8:
    if (ctx->pc == 0x1DB5C8u) {
        ctx->pc = 0x1DB5CCu;
        goto label_1db5cc;
    }
    ctx->pc = 0x1DB5C4u;
    {
        const bool branch_taken_0x1db5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5c4) {
            ctx->pc = 0x1DB5F8u;
            goto label_1db5f8;
        }
    }
    ctx->pc = 0x1DB5CCu;
label_1db5cc:
    // 0x1db5cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1db5d0:
    // 0x1db5d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1db5d4:
    if (ctx->pc == 0x1DB5D4u) {
        ctx->pc = 0x1DB5D8u;
        goto label_1db5d8;
    }
    ctx->pc = 0x1DB5D0u;
    {
        const bool branch_taken_0x1db5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5d0) {
            ctx->pc = 0x1DB5F8u;
            goto label_1db5f8;
        }
    }
    ctx->pc = 0x1DB5D8u;
label_1db5d8:
    // 0x1db5d8: 0x8e44122c  lw          $a0, 0x122C($s2)
    ctx->pc = 0x1db5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4652)));
label_1db5dc:
    // 0x1db5dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1db5e0:
    if (ctx->pc == 0x1DB5E0u) {
        ctx->pc = 0x1DB5E0u;
            // 0x1db5e0: 0xae40122c  sw          $zero, 0x122C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4652), GPR_U32(ctx, 0));
        ctx->pc = 0x1DB5E4u;
        goto label_1db5e4;
    }
    ctx->pc = 0x1DB5DCu;
    {
        const bool branch_taken_0x1db5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5dc) {
            ctx->pc = 0x1DB5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5DCu;
            // 0x1db5e0: 0xae40122c  sw          $zero, 0x122C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB5F8u;
            goto label_1db5f8;
        }
    }
    ctx->pc = 0x1DB5E4u;
label_1db5e4:
    // 0x1db5e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db5e8:
    // 0x1db5e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1db5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1db5ec:
    // 0x1db5ec: 0x320f809  jalr        $t9
label_1db5f0:
    if (ctx->pc == 0x1DB5F0u) {
        ctx->pc = 0x1DB5F0u;
            // 0x1db5f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DB5F4u;
        goto label_1db5f4;
    }
    ctx->pc = 0x1DB5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB5F4u);
        ctx->pc = 0x1DB5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5ECu;
            // 0x1db5f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB5F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5F4u; }
            if (ctx->pc != 0x1DB5F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB5F4u;
label_1db5f4:
    // 0x1db5f4: 0xae40122c  sw          $zero, 0x122C($s2)
    ctx->pc = 0x1db5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4652), GPR_U32(ctx, 0));
label_1db5f8:
    // 0x1db5f8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1db5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1db5fc:
    // 0x1db5fc: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x1db5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1db600:
    // 0x1db600: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
label_1db604:
    if (ctx->pc == 0x1DB604u) {
        ctx->pc = 0x1DB604u;
            // 0x1db604: 0x264402e0  addiu       $a0, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->pc = 0x1DB608u;
        goto label_1db608;
    }
    ctx->pc = 0x1DB600u;
    {
        const bool branch_taken_0x1db600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db600) {
            ctx->pc = 0x1DB604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB600u;
            // 0x1db604: 0x264402e0  addiu       $a0, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB780u;
            goto label_1db780;
        }
    }
    ctx->pc = 0x1DB608u;
label_1db608:
    // 0x1db608: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1db608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1db60c:
    // 0x1db60c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1db610:
    // 0x1db610: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
label_1db614:
    if (ctx->pc == 0x1DB614u) {
        ctx->pc = 0x1DB614u;
            // 0x1db614: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->pc = 0x1DB618u;
        goto label_1db618;
    }
    ctx->pc = 0x1DB610u;
    {
        const bool branch_taken_0x1db610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db610) {
            ctx->pc = 0x1DB614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB610u;
            // 0x1db614: 0x8e420dac  lw          $v0, 0xDAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB758u;
            goto label_1db758;
        }
    }
    ctx->pc = 0x1DB618u;
label_1db618:
    // 0x1db618: 0xc0775b8  jal         func_1DD6E0
label_1db61c:
    if (ctx->pc == 0x1DB61Cu) {
        ctx->pc = 0x1DB620u;
        goto label_1db620;
    }
    ctx->pc = 0x1DB618u;
    SET_GPR_U32(ctx, 31, 0x1DB620u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB620u; }
        if (ctx->pc != 0x1DB620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB620u; }
        if (ctx->pc != 0x1DB620u) { return; }
    }
    ctx->pc = 0x1DB620u;
label_1db620:
    // 0x1db620: 0xc0775b4  jal         func_1DD6D0
label_1db624:
    if (ctx->pc == 0x1DB624u) {
        ctx->pc = 0x1DB624u;
            // 0x1db624: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB628u;
        goto label_1db628;
    }
    ctx->pc = 0x1DB620u;
    SET_GPR_U32(ctx, 31, 0x1DB628u);
    ctx->pc = 0x1DB624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB620u;
            // 0x1db624: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB628u; }
        if (ctx->pc != 0x1DB628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB628u; }
        if (ctx->pc != 0x1DB628u) { return; }
    }
    ctx->pc = 0x1DB628u;
label_1db628:
    // 0x1db628: 0xc6410e6c  lwc1        $f1, 0xE6C($s2)
    ctx->pc = 0x1db628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db62c:
    // 0x1db62c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1db62cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1db630:
    // 0x1db630: 0xe6400e6c  swc1        $f0, 0xE6C($s2)
    ctx->pc = 0x1db630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3692), bits); }
label_1db634:
    // 0x1db634: 0x8e420e74  lw          $v0, 0xE74($s2)
    ctx->pc = 0x1db634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3700)));
label_1db638:
    // 0x1db638: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1db638u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1db63c:
    // 0x1db63c: 0x5020002f  beql        $at, $zero, . + 4 + (0x2F << 2)
label_1db640:
    if (ctx->pc == 0x1DB640u) {
        ctx->pc = 0x1DB640u;
            // 0x1db640: 0x8e441230  lw          $a0, 0x1230($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4656)));
        ctx->pc = 0x1DB644u;
        goto label_1db644;
    }
    ctx->pc = 0x1DB63Cu;
    {
        const bool branch_taken_0x1db63c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db63c) {
            ctx->pc = 0x1DB640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB63Cu;
            // 0x1db640: 0x8e441230  lw          $a0, 0x1230($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4656)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB6FCu;
            goto label_1db6fc;
        }
    }
    ctx->pc = 0x1DB644u;
label_1db644:
    // 0x1db644: 0xc0775b8  jal         func_1DD6E0
label_1db648:
    if (ctx->pc == 0x1DB648u) {
        ctx->pc = 0x1DB64Cu;
        goto label_1db64c;
    }
    ctx->pc = 0x1DB644u;
    SET_GPR_U32(ctx, 31, 0x1DB64Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB64Cu; }
        if (ctx->pc != 0x1DB64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB64Cu; }
        if (ctx->pc != 0x1DB64Cu) { return; }
    }
    ctx->pc = 0x1DB64Cu;
label_1db64c:
    // 0x1db64c: 0xc0775b4  jal         func_1DD6D0
label_1db650:
    if (ctx->pc == 0x1DB650u) {
        ctx->pc = 0x1DB650u;
            // 0x1db650: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DB654u;
        goto label_1db654;
    }
    ctx->pc = 0x1DB64Cu;
    SET_GPR_U32(ctx, 31, 0x1DB654u);
    ctx->pc = 0x1DB650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB64Cu;
            // 0x1db650: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB654u; }
        if (ctx->pc != 0x1DB654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB654u; }
        if (ctx->pc != 0x1DB654u) { return; }
    }
    ctx->pc = 0x1DB654u;
label_1db654:
    // 0x1db654: 0xc6420e70  lwc1        $f2, 0xE70($s2)
    ctx->pc = 0x1db654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1db658:
    // 0x1db658: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1db658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db65c:
    // 0x1db65c: 0x0  nop
    ctx->pc = 0x1db65cu;
    // NOP
label_1db660:
    // 0x1db660: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1db660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1db664:
    // 0x1db664: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1db664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db668:
    // 0x1db668: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_1db66c:
    if (ctx->pc == 0x1DB66Cu) {
        ctx->pc = 0x1DB66Cu;
            // 0x1db66c: 0xe6400e70  swc1        $f0, 0xE70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3696), bits); }
        ctx->pc = 0x1DB670u;
        goto label_1db670;
    }
    ctx->pc = 0x1DB668u;
    {
        const bool branch_taken_0x1db668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB668u;
            // 0x1db66c: 0xe6400e70  swc1        $f0, 0xE70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db668) {
            ctx->pc = 0x1DB6F8u;
            goto label_1db6f8;
        }
    }
    ctx->pc = 0x1DB670u;
label_1db670:
    // 0x1db670: 0x8e430e74  lw          $v1, 0xE74($s2)
    ctx->pc = 0x1db670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3700)));
label_1db674:
    // 0x1db674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db678:
    // 0x1db678: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
label_1db67c:
    if (ctx->pc == 0x1DB67Cu) {
        ctx->pc = 0x1DB67Cu;
            // 0x1db67c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB680u;
        goto label_1db680;
    }
    ctx->pc = 0x1DB678u;
    {
        const bool branch_taken_0x1db678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db678) {
            ctx->pc = 0x1DB67Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB678u;
            // 0x1db67c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB6C4u;
            goto label_1db6c4;
        }
    }
    ctx->pc = 0x1DB680u;
label_1db680:
    // 0x1db680: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_1db684:
    if (ctx->pc == 0x1DB684u) {
        ctx->pc = 0x1DB684u;
            // 0x1db684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB688u;
        goto label_1db688;
    }
    ctx->pc = 0x1DB680u;
    {
        const bool branch_taken_0x1db680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db680) {
            ctx->pc = 0x1DB684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB680u;
            // 0x1db684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB690u;
            goto label_1db690;
        }
    }
    ctx->pc = 0x1DB688u;
label_1db688:
    // 0x1db688: 0x10000019  b           . + 4 + (0x19 << 2)
label_1db68c:
    if (ctx->pc == 0x1DB68Cu) {
        ctx->pc = 0x1DB68Cu;
            // 0x1db68c: 0x8e420e74  lw          $v0, 0xE74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3700)));
        ctx->pc = 0x1DB690u;
        goto label_1db690;
    }
    ctx->pc = 0x1DB688u;
    {
        const bool branch_taken_0x1db688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB688u;
            // 0x1db68c: 0x8e420e74  lw          $v0, 0xE74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db688) {
            ctx->pc = 0x1DB6F0u;
            goto label_1db6f0;
        }
    }
    ctx->pc = 0x1DB690u;
label_1db690:
    // 0x1db690: 0xc077320  jal         func_1DCC80
label_1db694:
    if (ctx->pc == 0x1DB694u) {
        ctx->pc = 0x1DB698u;
        goto label_1db698;
    }
    ctx->pc = 0x1DB690u;
    SET_GPR_U32(ctx, 31, 0x1DB698u);
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB698u; }
        if (ctx->pc != 0x1DB698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB698u; }
        if (ctx->pc != 0x1DB698u) { return; }
    }
    ctx->pc = 0x1DB698u;
label_1db698:
    // 0x1db698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db69c:
    // 0x1db69c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1db69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1db6a0:
    // 0x1db6a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db6a4:
    // 0x1db6a4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1db6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1db6a8:
    // 0x1db6a8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1db6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1db6ac:
    // 0x1db6ac: 0xc64c0e6c  lwc1        $f12, 0xE6C($s2)
    ctx->pc = 0x1db6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db6b0:
    // 0x1db6b0: 0xc07730c  jal         func_1DCC30
label_1db6b4:
    if (ctx->pc == 0x1DB6B4u) {
        ctx->pc = 0x1DB6B4u;
            // 0x1db6b4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DB6B8u;
        goto label_1db6b8;
    }
    ctx->pc = 0x1DB6B0u;
    SET_GPR_U32(ctx, 31, 0x1DB6B8u);
    ctx->pc = 0x1DB6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6B0u;
            // 0x1db6b4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (runtime->hasFunction(0x1DCC30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6B8u; }
        if (ctx->pc != 0x1DB6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC30_0x1dcc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6B8u; }
        if (ctx->pc != 0x1DB6B8u) { return; }
    }
    ctx->pc = 0x1DB6B8u;
label_1db6b8:
    // 0x1db6b8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1db6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1db6bc:
    // 0x1db6bc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1db6c0:
    if (ctx->pc == 0x1DB6C0u) {
        ctx->pc = 0x1DB6C0u;
            // 0x1db6c0: 0xae420e70  sw          $v0, 0xE70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3696), GPR_U32(ctx, 2));
        ctx->pc = 0x1DB6C4u;
        goto label_1db6c4;
    }
    ctx->pc = 0x1DB6BCu;
    {
        const bool branch_taken_0x1db6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6BCu;
            // 0x1db6c0: 0xae420e70  sw          $v0, 0xE70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6bc) {
            ctx->pc = 0x1DB6ECu;
            goto label_1db6ec;
        }
    }
    ctx->pc = 0x1DB6C4u;
label_1db6c4:
    // 0x1db6c4: 0xc077320  jal         func_1DCC80
label_1db6c8:
    if (ctx->pc == 0x1DB6C8u) {
        ctx->pc = 0x1DB6CCu;
        goto label_1db6cc;
    }
    ctx->pc = 0x1DB6C4u;
    SET_GPR_U32(ctx, 31, 0x1DB6CCu);
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6CCu; }
        if (ctx->pc != 0x1DB6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6CCu; }
        if (ctx->pc != 0x1DB6CCu) { return; }
    }
    ctx->pc = 0x1DB6CCu;
label_1db6cc:
    // 0x1db6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db6d0:
    // 0x1db6d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1db6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1db6d4:
    // 0x1db6d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db6d8:
    // 0x1db6d8: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1db6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1db6dc:
    // 0x1db6dc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1db6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1db6e0:
    // 0x1db6e0: 0xc64c0e6c  lwc1        $f12, 0xE6C($s2)
    ctx->pc = 0x1db6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db6e4:
    // 0x1db6e4: 0xc07730c  jal         func_1DCC30
label_1db6e8:
    if (ctx->pc == 0x1DB6E8u) {
        ctx->pc = 0x1DB6E8u;
            // 0x1db6e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DB6ECu;
        goto label_1db6ec;
    }
    ctx->pc = 0x1DB6E4u;
    SET_GPR_U32(ctx, 31, 0x1DB6ECu);
    ctx->pc = 0x1DB6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6E4u;
            // 0x1db6e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (runtime->hasFunction(0x1DCC30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6ECu; }
        if (ctx->pc != 0x1DB6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC30_0x1dcc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6ECu; }
        if (ctx->pc != 0x1DB6ECu) { return; }
    }
    ctx->pc = 0x1DB6ECu;
label_1db6ec:
    // 0x1db6ec: 0x8e420e74  lw          $v0, 0xE74($s2)
    ctx->pc = 0x1db6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3700)));
label_1db6f0:
    // 0x1db6f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db6f4:
    // 0x1db6f4: 0xae420e74  sw          $v0, 0xE74($s2)
    ctx->pc = 0x1db6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3700), GPR_U32(ctx, 2));
label_1db6f8:
    // 0x1db6f8: 0x8e441230  lw          $a0, 0x1230($s2)
    ctx->pc = 0x1db6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4656)));
label_1db6fc:
    // 0x1db6fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1db700:
    if (ctx->pc == 0x1DB700u) {
        ctx->pc = 0x1DB700u;
            // 0x1db700: 0xc6410e6c  lwc1        $f1, 0xE6C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1DB704u;
        goto label_1db704;
    }
    ctx->pc = 0x1DB6FCu;
    {
        const bool branch_taken_0x1db6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6fc) {
            ctx->pc = 0x1DB700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6FCu;
            // 0x1db700: 0xc6410e6c  lwc1        $f1, 0xE6C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB710u;
            goto label_1db710;
        }
    }
    ctx->pc = 0x1DB704u;
label_1db704:
    // 0x1db704: 0xc15a6b8  jal         func_569AE0
label_1db708:
    if (ctx->pc == 0x1DB708u) {
        ctx->pc = 0x1DB70Cu;
        goto label_1db70c;
    }
    ctx->pc = 0x1DB704u;
    SET_GPR_U32(ctx, 31, 0x1DB70Cu);
    ctx->pc = 0x569AE0u;
    if (runtime->hasFunction(0x569AE0u)) {
        auto targetFn = runtime->lookupFunction(0x569AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB70Cu; }
        if (ctx->pc != 0x1DB70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00569AE0_0x569ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB70Cu; }
        if (ctx->pc != 0x1DB70Cu) { return; }
    }
    ctx->pc = 0x1DB70Cu;
label_1db70c:
    // 0x1db70c: 0xc6410e6c  lwc1        $f1, 0xE6C($s2)
    ctx->pc = 0x1db70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db710:
    // 0x1db710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1db714:
    // 0x1db714: 0x0  nop
    ctx->pc = 0x1db714u;
    // NOP
label_1db718:
    // 0x1db718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db71c:
    // 0x1db71c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_1db720:
    if (ctx->pc == 0x1DB720u) {
        ctx->pc = 0x1DB724u;
        goto label_1db724;
    }
    ctx->pc = 0x1DB71Cu;
    {
        const bool branch_taken_0x1db71c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db71c) {
            ctx->pc = 0x1DB77Cu;
            goto label_1db77c;
        }
    }
    ctx->pc = 0x1DB724u;
label_1db724:
    // 0x1db724: 0x8e441230  lw          $a0, 0x1230($s2)
    ctx->pc = 0x1db724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4656)));
label_1db728:
    // 0x1db728: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1db72c:
    if (ctx->pc == 0x1DB72Cu) {
        ctx->pc = 0x1DB72Cu;
            // 0x1db72c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB730u;
        goto label_1db730;
    }
    ctx->pc = 0x1DB728u;
    {
        const bool branch_taken_0x1db728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db728) {
            ctx->pc = 0x1DB72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB728u;
            // 0x1db72c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB744u;
            goto label_1db744;
        }
    }
    ctx->pc = 0x1DB730u;
label_1db730:
    // 0x1db730: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db734:
    // 0x1db734: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1db734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1db738:
    // 0x1db738: 0x320f809  jalr        $t9
label_1db73c:
    if (ctx->pc == 0x1DB73Cu) {
        ctx->pc = 0x1DB73Cu;
            // 0x1db73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DB740u;
        goto label_1db740;
    }
    ctx->pc = 0x1DB738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB740u);
        ctx->pc = 0x1DB73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB738u;
            // 0x1db73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB740u; }
            if (ctx->pc != 0x1DB740u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB740u;
label_1db740:
    // 0x1db740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db744:
    // 0x1db744: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1db744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_1db748:
    // 0x1db748: 0xc077fb0  jal         func_1DFEC0
label_1db74c:
    if (ctx->pc == 0x1DB74Cu) {
        ctx->pc = 0x1DB74Cu;
            // 0x1db74c: 0xae401230  sw          $zero, 0x1230($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4656), GPR_U32(ctx, 0));
        ctx->pc = 0x1DB750u;
        goto label_1db750;
    }
    ctx->pc = 0x1DB748u;
    SET_GPR_U32(ctx, 31, 0x1DB750u);
    ctx->pc = 0x1DB74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB748u;
            // 0x1db74c: 0xae401230  sw          $zero, 0x1230($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB750u; }
        if (ctx->pc != 0x1DB750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB750u; }
        if (ctx->pc != 0x1DB750u) { return; }
    }
    ctx->pc = 0x1DB750u;
label_1db750:
    // 0x1db750: 0x1000000a  b           . + 4 + (0xA << 2)
label_1db754:
    if (ctx->pc == 0x1DB754u) {
        ctx->pc = 0x1DB758u;
        goto label_1db758;
    }
    ctx->pc = 0x1DB750u;
    {
        const bool branch_taken_0x1db750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db750) {
            ctx->pc = 0x1DB77Cu;
            goto label_1db77c;
        }
    }
    ctx->pc = 0x1DB758u;
label_1db758:
    // 0x1db758: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1db75c:
    // 0x1db75c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1db760:
    if (ctx->pc == 0x1DB760u) {
        ctx->pc = 0x1DB764u;
        goto label_1db764;
    }
    ctx->pc = 0x1DB75Cu;
    {
        const bool branch_taken_0x1db75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db75c) {
            ctx->pc = 0x1DB77Cu;
            goto label_1db77c;
        }
    }
    ctx->pc = 0x1DB764u;
label_1db764:
    // 0x1db764: 0xc077320  jal         func_1DCC80
label_1db768:
    if (ctx->pc == 0x1DB768u) {
        ctx->pc = 0x1DB768u;
            // 0x1db768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB76Cu;
        goto label_1db76c;
    }
    ctx->pc = 0x1DB764u;
    SET_GPR_U32(ctx, 31, 0x1DB76Cu);
    ctx->pc = 0x1DB768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB764u;
            // 0x1db768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB76Cu; }
        if (ctx->pc != 0x1DB76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB76Cu; }
        if (ctx->pc != 0x1DB76Cu) { return; }
    }
    ctx->pc = 0x1DB76Cu;
label_1db76c:
    // 0x1db76c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1db76cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1db770:
    // 0x1db770: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1db770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1db774:
    // 0x1db774: 0xc077308  jal         func_1DCC20
label_1db778:
    if (ctx->pc == 0x1DB778u) {
        ctx->pc = 0x1DB778u;
            // 0x1db778: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->pc = 0x1DB77Cu;
        goto label_1db77c;
    }
    ctx->pc = 0x1DB774u;
    SET_GPR_U32(ctx, 31, 0x1DB77Cu);
    ctx->pc = 0x1DB778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB774u;
            // 0x1db778: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC20u;
    if (runtime->hasFunction(0x1DCC20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB77Cu; }
        if (ctx->pc != 0x1DB77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC20_0x1dcc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB77Cu; }
        if (ctx->pc != 0x1DB77Cu) { return; }
    }
    ctx->pc = 0x1DB77Cu;
label_1db77c:
    // 0x1db77c: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x1db77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_1db780:
    // 0x1db780: 0xc04cc08  jal         func_133020
label_1db784:
    if (ctx->pc == 0x1DB784u) {
        ctx->pc = 0x1DB784u;
            // 0x1db784: 0x26450570  addiu       $a1, $s2, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1392));
        ctx->pc = 0x1DB788u;
        goto label_1db788;
    }
    ctx->pc = 0x1DB780u;
    SET_GPR_U32(ctx, 31, 0x1DB788u);
    ctx->pc = 0x1DB784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB780u;
            // 0x1db784: 0x26450570  addiu       $a1, $s2, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB788u; }
        if (ctx->pc != 0x1DB788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB788u; }
        if (ctx->pc != 0x1DB788u) { return; }
    }
    ctx->pc = 0x1DB788u;
label_1db788:
    // 0x1db788: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x1db788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_1db78c:
    // 0x1db78c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1db78cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1db790:
    // 0x1db790: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1db790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_1db794:
    // 0x1db794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1db798:
    // 0x1db798: 0x0  nop
    ctx->pc = 0x1db798u;
    // NOP
label_1db79c:
    // 0x1db79c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1db79cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db7a0:
    // 0x1db7a0: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
label_1db7a4:
    if (ctx->pc == 0x1DB7A4u) {
        ctx->pc = 0x1DB7A4u;
            // 0x1db7a4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x1DB7A8u;
        goto label_1db7a8;
    }
    ctx->pc = 0x1DB7A0u;
    {
        const bool branch_taken_0x1db7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db7a0) {
            ctx->pc = 0x1DB7A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB7A0u;
            // 0x1db7a4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB81Cu;
            goto label_1db81c;
        }
    }
    ctx->pc = 0x1DB7A8u;
label_1db7a8:
    // 0x1db7a8: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x1db7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_1db7ac:
    // 0x1db7ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1db7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1db7b0:
    // 0x1db7b0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1db7b4:
    if (ctx->pc == 0x1DB7B4u) {
        ctx->pc = 0x1DB7B8u;
        goto label_1db7b8;
    }
    ctx->pc = 0x1DB7B0u;
    {
        const bool branch_taken_0x1db7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7b0) {
            ctx->pc = 0x1DB818u;
            goto label_1db818;
        }
    }
    ctx->pc = 0x1DB7B8u;
label_1db7b8:
    // 0x1db7b8: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x1db7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_1db7bc:
    // 0x1db7bc: 0xc075318  jal         func_1D4C60
label_1db7c0:
    if (ctx->pc == 0x1DB7C0u) {
        ctx->pc = 0x1DB7C0u;
            // 0x1db7c0: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->pc = 0x1DB7C4u;
        goto label_1db7c4;
    }
    ctx->pc = 0x1DB7BCu;
    SET_GPR_U32(ctx, 31, 0x1DB7C4u);
    ctx->pc = 0x1DB7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB7BCu;
            // 0x1db7c0: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7C4u; }
        if (ctx->pc != 0x1DB7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7C4u; }
        if (ctx->pc != 0x1DB7C4u) { return; }
    }
    ctx->pc = 0x1DB7C4u;
label_1db7c4:
    // 0x1db7c4: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x1db7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_1db7c8:
    // 0x1db7c8: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x1db7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
label_1db7cc:
    // 0x1db7cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1db7d0:
    // 0x1db7d0: 0xc0c6250  jal         func_318940
label_1db7d4:
    if (ctx->pc == 0x1DB7D4u) {
        ctx->pc = 0x1DB7D4u;
            // 0x1db7d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB7D8u;
        goto label_1db7d8;
    }
    ctx->pc = 0x1DB7D0u;
    SET_GPR_U32(ctx, 31, 0x1DB7D8u);
    ctx->pc = 0x1DB7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB7D0u;
            // 0x1db7d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7D8u; }
        if (ctx->pc != 0x1DB7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7D8u; }
        if (ctx->pc != 0x1DB7D8u) { return; }
    }
    ctx->pc = 0x1DB7D8u;
label_1db7d8:
    // 0x1db7d8: 0x8e420d9c  lw          $v0, 0xD9C($s2)
    ctx->pc = 0x1db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_1db7dc:
    // 0x1db7dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1db7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1db7e0:
    // 0x1db7e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1db7e4:
    if (ctx->pc == 0x1DB7E4u) {
        ctx->pc = 0x1DB7E8u;
        goto label_1db7e8;
    }
    ctx->pc = 0x1DB7E0u;
    {
        const bool branch_taken_0x1db7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7e0) {
            ctx->pc = 0x1DB818u;
            goto label_1db818;
        }
    }
    ctx->pc = 0x1DB7E8u;
label_1db7e8:
    // 0x1db7e8: 0x4614a0c2  mul.s       $f3, $f20, $f20
    ctx->pc = 0x1db7e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_1db7ec:
    // 0x1db7ec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1db7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1db7f0:
    // 0x1db7f0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1db7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_1db7f4:
    // 0x1db7f4: 0x264408f0  addiu       $a0, $s2, 0x8F0
    ctx->pc = 0x1db7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2288));
label_1db7f8:
    // 0x1db7f8: 0x26450910  addiu       $a1, $s2, 0x910
    ctx->pc = 0x1db7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2320));
label_1db7fc:
    // 0x1db7fc: 0x26460560  addiu       $a2, $s2, 0x560
    ctx->pc = 0x1db7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_1db800:
    // 0x1db800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1db800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db804:
    // 0x1db804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1db808:
    // 0x1db808: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1db808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1db80c:
    // 0x1db80c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1db80cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1db810:
    // 0x1db810: 0xc0c6250  jal         func_318940
label_1db814:
    if (ctx->pc == 0x1DB814u) {
        ctx->pc = 0x1DB814u;
            // 0x1db814: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x1DB818u;
        goto label_1db818;
    }
    ctx->pc = 0x1DB810u;
    SET_GPR_U32(ctx, 31, 0x1DB818u);
    ctx->pc = 0x1DB814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB810u;
            // 0x1db814: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB818u; }
        if (ctx->pc != 0x1DB818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB818u; }
        if (ctx->pc != 0x1DB818u) { return; }
    }
    ctx->pc = 0x1DB818u;
label_1db818:
    // 0x1db818: 0x26440440  addiu       $a0, $s2, 0x440
    ctx->pc = 0x1db818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
label_1db81c:
    // 0x1db81c: 0xc0754bc  jal         func_1D52F0
label_1db820:
    if (ctx->pc == 0x1DB820u) {
        ctx->pc = 0x1DB824u;
        goto label_1db824;
    }
    ctx->pc = 0x1DB81Cu;
    SET_GPR_U32(ctx, 31, 0x1DB824u);
    ctx->pc = 0x1D52F0u;
    if (runtime->hasFunction(0x1D52F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB824u; }
        if (ctx->pc != 0x1DB824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52F0_0x1d52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB824u; }
        if (ctx->pc != 0x1DB824u) { return; }
    }
    ctx->pc = 0x1DB824u;
label_1db824:
    // 0x1db824: 0xc0c0d7c  jal         func_3035F0
label_1db828:
    if (ctx->pc == 0x1DB828u) {
        ctx->pc = 0x1DB828u;
            // 0x1db828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB82Cu;
        goto label_1db82c;
    }
    ctx->pc = 0x1DB824u;
    SET_GPR_U32(ctx, 31, 0x1DB82Cu);
    ctx->pc = 0x1DB828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB824u;
            // 0x1db828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3035F0u;
    if (runtime->hasFunction(0x3035F0u)) {
        auto targetFn = runtime->lookupFunction(0x3035F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB82Cu; }
        if (ctx->pc != 0x1DB82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003035F0_0x3035f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB82Cu; }
        if (ctx->pc != 0x1DB82Cu) { return; }
    }
    ctx->pc = 0x1DB82Cu;
label_1db82c:
    // 0x1db82c: 0xc07729c  jal         func_1DCA70
label_1db830:
    if (ctx->pc == 0x1DB830u) {
        ctx->pc = 0x1DB830u;
            // 0x1db830: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->pc = 0x1DB834u;
        goto label_1db834;
    }
    ctx->pc = 0x1DB82Cu;
    SET_GPR_U32(ctx, 31, 0x1DB834u);
    ctx->pc = 0x1DB830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB82Cu;
            // 0x1db830: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA70u;
    if (runtime->hasFunction(0x1DCA70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB834u; }
        if (ctx->pc != 0x1DB834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA70_0x1dca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB834u; }
        if (ctx->pc != 0x1DB834u) { return; }
    }
    ctx->pc = 0x1DB834u;
label_1db834:
    // 0x1db834: 0xc077298  jal         func_1DCA60
label_1db838:
    if (ctx->pc == 0x1DB838u) {
        ctx->pc = 0x1DB838u;
            // 0x1db838: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->pc = 0x1DB83Cu;
        goto label_1db83c;
    }
    ctx->pc = 0x1DB834u;
    SET_GPR_U32(ctx, 31, 0x1DB83Cu);
    ctx->pc = 0x1DB838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB834u;
            // 0x1db838: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA60u;
    if (runtime->hasFunction(0x1DCA60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB83Cu; }
        if (ctx->pc != 0x1DB83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA60_0x1dca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB83Cu; }
        if (ctx->pc != 0x1DB83Cu) { return; }
    }
    ctx->pc = 0x1DB83Cu;
label_1db83c:
    // 0x1db83c: 0xc0b9210  jal         func_2E4840
label_1db840:
    if (ctx->pc == 0x1DB840u) {
        ctx->pc = 0x1DB840u;
            // 0x1db840: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->pc = 0x1DB844u;
        goto label_1db844;
    }
    ctx->pc = 0x1DB83Cu;
    SET_GPR_U32(ctx, 31, 0x1DB844u);
    ctx->pc = 0x1DB840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB83Cu;
            // 0x1db840: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB844u; }
        if (ctx->pc != 0x1DB844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB844u; }
        if (ctx->pc != 0x1DB844u) { return; }
    }
    ctx->pc = 0x1DB844u;
label_1db844:
    // 0x1db844: 0xc07729c  jal         func_1DCA70
label_1db848:
    if (ctx->pc == 0x1DB848u) {
        ctx->pc = 0x1DB848u;
            // 0x1db848: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->pc = 0x1DB84Cu;
        goto label_1db84c;
    }
    ctx->pc = 0x1DB844u;
    SET_GPR_U32(ctx, 31, 0x1DB84Cu);
    ctx->pc = 0x1DB848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB844u;
            // 0x1db848: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA70u;
    if (runtime->hasFunction(0x1DCA70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB84Cu; }
        if (ctx->pc != 0x1DB84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA70_0x1dca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB84Cu; }
        if (ctx->pc != 0x1DB84Cu) { return; }
    }
    ctx->pc = 0x1DB84Cu;
label_1db84c:
    // 0x1db84c: 0xc077298  jal         func_1DCA60
label_1db850:
    if (ctx->pc == 0x1DB850u) {
        ctx->pc = 0x1DB850u;
            // 0x1db850: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->pc = 0x1DB854u;
        goto label_1db854;
    }
    ctx->pc = 0x1DB84Cu;
    SET_GPR_U32(ctx, 31, 0x1DB854u);
    ctx->pc = 0x1DB850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB84Cu;
            // 0x1db850: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA60u;
    if (runtime->hasFunction(0x1DCA60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB854u; }
        if (ctx->pc != 0x1DB854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA60_0x1dca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB854u; }
        if (ctx->pc != 0x1DB854u) { return; }
    }
    ctx->pc = 0x1DB854u;
label_1db854:
    // 0x1db854: 0xc0b9210  jal         func_2E4840
label_1db858:
    if (ctx->pc == 0x1DB858u) {
        ctx->pc = 0x1DB858u;
            // 0x1db858: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->pc = 0x1DB85Cu;
        goto label_1db85c;
    }
    ctx->pc = 0x1DB854u;
    SET_GPR_U32(ctx, 31, 0x1DB85Cu);
    ctx->pc = 0x1DB858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB854u;
            // 0x1db858: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB85Cu; }
        if (ctx->pc != 0x1DB85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB85Cu; }
        if (ctx->pc != 0x1DB85Cu) { return; }
    }
    ctx->pc = 0x1DB85Cu;
label_1db85c:
    // 0x1db85c: 0xc077294  jal         func_1DCA50
label_1db860:
    if (ctx->pc == 0x1DB860u) {
        ctx->pc = 0x1DB860u;
            // 0x1db860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB864u;
        goto label_1db864;
    }
    ctx->pc = 0x1DB85Cu;
    SET_GPR_U32(ctx, 31, 0x1DB864u);
    ctx->pc = 0x1DB860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB85Cu;
            // 0x1db860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA50u;
    if (runtime->hasFunction(0x1DCA50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB864u; }
        if (ctx->pc != 0x1DB864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA50_0x1dca50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB864u; }
        if (ctx->pc != 0x1DB864u) { return; }
    }
    ctx->pc = 0x1DB864u;
label_1db864:
    // 0x1db864: 0xc0772f0  jal         func_1DCBC0
label_1db868:
    if (ctx->pc == 0x1DB868u) {
        ctx->pc = 0x1DB868u;
            // 0x1db868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB86Cu;
        goto label_1db86c;
    }
    ctx->pc = 0x1DB864u;
    SET_GPR_U32(ctx, 31, 0x1DB86Cu);
    ctx->pc = 0x1DB868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB864u;
            // 0x1db868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB86Cu; }
        if (ctx->pc != 0x1DB86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB86Cu; }
        if (ctx->pc != 0x1DB86Cu) { return; }
    }
    ctx->pc = 0x1DB86Cu;
label_1db86c:
    // 0x1db86c: 0xc0772ec  jal         func_1DCBB0
label_1db870:
    if (ctx->pc == 0x1DB870u) {
        ctx->pc = 0x1DB870u;
            // 0x1db870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB874u;
        goto label_1db874;
    }
    ctx->pc = 0x1DB86Cu;
    SET_GPR_U32(ctx, 31, 0x1DB874u);
    ctx->pc = 0x1DB870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB86Cu;
            // 0x1db870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (runtime->hasFunction(0x1DCBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB874u; }
        if (ctx->pc != 0x1DB874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBB0_0x1dcbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB874u; }
        if (ctx->pc != 0x1DB874u) { return; }
    }
    ctx->pc = 0x1DB874u;
label_1db874:
    // 0x1db874: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_1db878:
    if (ctx->pc == 0x1DB878u) {
        ctx->pc = 0x1DB878u;
            // 0x1db878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB87Cu;
        goto label_1db87c;
    }
    ctx->pc = 0x1DB874u;
    {
        const bool branch_taken_0x1db874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db874) {
            ctx->pc = 0x1DB878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB874u;
            // 0x1db878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB8E4u;
            goto label_1db8e4;
        }
    }
    ctx->pc = 0x1DB87Cu;
label_1db87c:
    // 0x1db87c: 0xc077290  jal         func_1DCA40
label_1db880:
    if (ctx->pc == 0x1DB880u) {
        ctx->pc = 0x1DB880u;
            // 0x1db880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB884u;
        goto label_1db884;
    }
    ctx->pc = 0x1DB87Cu;
    SET_GPR_U32(ctx, 31, 0x1DB884u);
    ctx->pc = 0x1DB880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB87Cu;
            // 0x1db880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB884u; }
        if (ctx->pc != 0x1DB884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB884u; }
        if (ctx->pc != 0x1DB884u) { return; }
    }
    ctx->pc = 0x1DB884u;
label_1db884:
    // 0x1db884: 0xc07728c  jal         func_1DCA30
label_1db888:
    if (ctx->pc == 0x1DB888u) {
        ctx->pc = 0x1DB888u;
            // 0x1db888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB88Cu;
        goto label_1db88c;
    }
    ctx->pc = 0x1DB884u;
    SET_GPR_U32(ctx, 31, 0x1DB88Cu);
    ctx->pc = 0x1DB888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB884u;
            // 0x1db888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA30u;
    if (runtime->hasFunction(0x1DCA30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB88Cu; }
        if (ctx->pc != 0x1DB88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA30_0x1dca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB88Cu; }
        if (ctx->pc != 0x1DB88Cu) { return; }
    }
    ctx->pc = 0x1DB88Cu;
label_1db88c:
    // 0x1db88c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1db88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1db890:
    // 0x1db890: 0xc442c5d8  lwc1        $f2, -0x3A28($v0)
    ctx->pc = 0x1db890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1db894:
    // 0x1db894: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1db894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db898:
    // 0x1db898: 0x45030030  bc1tl       . + 4 + (0x30 << 2)
label_1db89c:
    if (ctx->pc == 0x1DB89Cu) {
        ctx->pc = 0x1DB89Cu;
            // 0x1db89c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1DB8A0u;
        goto label_1db8a0;
    }
    ctx->pc = 0x1DB898u;
    {
        const bool branch_taken_0x1db898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db898) {
            ctx->pc = 0x1DB89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB898u;
            // 0x1db89c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB95Cu;
            goto label_1db95c;
        }
    }
    ctx->pc = 0x1DB8A0u;
label_1db8a0:
    // 0x1db8a0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1db8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1db8a4:
    // 0x1db8a4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1db8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1db8a8:
    // 0x1db8a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1db8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db8ac:
    // 0x1db8ac: 0x0  nop
    ctx->pc = 0x1db8acu;
    // NOP
label_1db8b0:
    // 0x1db8b0: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x1db8b0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1db8b4:
    // 0x1db8b4: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x1db8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db8b8:
    // 0x1db8b8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1db8bc:
    if (ctx->pc == 0x1DB8BCu) {
        ctx->pc = 0x1DB8BCu;
            // 0x1db8bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8C0u;
        goto label_1db8c0;
    }
    ctx->pc = 0x1DB8B8u;
    {
        const bool branch_taken_0x1db8b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db8b8) {
            ctx->pc = 0x1DB8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8B8u;
            // 0x1db8bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB8C8u;
            goto label_1db8c8;
        }
    }
    ctx->pc = 0x1DB8C0u;
label_1db8c0:
    // 0x1db8c0: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x1db8c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_1db8c4:
    // 0x1db8c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db8c8:
    // 0x1db8c8: 0xc077290  jal         func_1DCA40
label_1db8cc:
    if (ctx->pc == 0x1DB8CCu) {
        ctx->pc = 0x1DB8D0u;
        goto label_1db8d0;
    }
    ctx->pc = 0x1DB8C8u;
    SET_GPR_U32(ctx, 31, 0x1DB8D0u);
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8D0u; }
        if (ctx->pc != 0x1DB8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8D0u; }
        if (ctx->pc != 0x1DB8D0u) { return; }
    }
    ctx->pc = 0x1DB8D0u;
label_1db8d0:
    // 0x1db8d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db8d4:
    // 0x1db8d4: 0xc077288  jal         func_1DCA20
label_1db8d8:
    if (ctx->pc == 0x1DB8D8u) {
        ctx->pc = 0x1DB8D8u;
            // 0x1db8d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1DB8DCu;
        goto label_1db8dc;
    }
    ctx->pc = 0x1DB8D4u;
    SET_GPR_U32(ctx, 31, 0x1DB8DCu);
    ctx->pc = 0x1DB8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8D4u;
            // 0x1db8d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA20u;
    if (runtime->hasFunction(0x1DCA20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8DCu; }
        if (ctx->pc != 0x1DB8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA20_0x1dca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8DCu; }
        if (ctx->pc != 0x1DB8DCu) { return; }
    }
    ctx->pc = 0x1DB8DCu;
label_1db8dc:
    // 0x1db8dc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1db8e0:
    if (ctx->pc == 0x1DB8E0u) {
        ctx->pc = 0x1DB8E4u;
        goto label_1db8e4;
    }
    ctx->pc = 0x1DB8DCu;
    {
        const bool branch_taken_0x1db8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db8dc) {
            ctx->pc = 0x1DB958u;
            goto label_1db958;
        }
    }
    ctx->pc = 0x1DB8E4u;
label_1db8e4:
    // 0x1db8e4: 0xc077290  jal         func_1DCA40
label_1db8e8:
    if (ctx->pc == 0x1DB8E8u) {
        ctx->pc = 0x1DB8ECu;
        goto label_1db8ec;
    }
    ctx->pc = 0x1DB8E4u;
    SET_GPR_U32(ctx, 31, 0x1DB8ECu);
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8ECu; }
        if (ctx->pc != 0x1DB8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8ECu; }
        if (ctx->pc != 0x1DB8ECu) { return; }
    }
    ctx->pc = 0x1DB8ECu;
label_1db8ec:
    // 0x1db8ec: 0xc07728c  jal         func_1DCA30
label_1db8f0:
    if (ctx->pc == 0x1DB8F0u) {
        ctx->pc = 0x1DB8F0u;
            // 0x1db8f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8F4u;
        goto label_1db8f4;
    }
    ctx->pc = 0x1DB8ECu;
    SET_GPR_U32(ctx, 31, 0x1DB8F4u);
    ctx->pc = 0x1DB8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8ECu;
            // 0x1db8f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA30u;
    if (runtime->hasFunction(0x1DCA30u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8F4u; }
        if (ctx->pc != 0x1DB8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA30_0x1dca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8F4u; }
        if (ctx->pc != 0x1DB8F4u) { return; }
    }
    ctx->pc = 0x1DB8F4u;
label_1db8f4:
    // 0x1db8f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1db8f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1db8f8:
    // 0x1db8f8: 0xc0772f0  jal         func_1DCBC0
label_1db8fc:
    if (ctx->pc == 0x1DB8FCu) {
        ctx->pc = 0x1DB8FCu;
            // 0x1db8fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB900u;
        goto label_1db900;
    }
    ctx->pc = 0x1DB8F8u;
    SET_GPR_U32(ctx, 31, 0x1DB900u);
    ctx->pc = 0x1DB8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8F8u;
            // 0x1db8fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB900u; }
        if (ctx->pc != 0x1DB900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB900u; }
        if (ctx->pc != 0x1DB900u) { return; }
    }
    ctx->pc = 0x1DB900u;
label_1db900:
    // 0x1db900: 0xc0be258  jal         func_2F8960
label_1db904:
    if (ctx->pc == 0x1DB904u) {
        ctx->pc = 0x1DB904u;
            // 0x1db904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB908u;
        goto label_1db908;
    }
    ctx->pc = 0x1DB900u;
    SET_GPR_U32(ctx, 31, 0x1DB908u);
    ctx->pc = 0x1DB904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB900u;
            // 0x1db904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB908u; }
        if (ctx->pc != 0x1DB908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB908u; }
        if (ctx->pc != 0x1DB908u) { return; }
    }
    ctx->pc = 0x1DB908u;
label_1db908:
    // 0x1db908: 0xc077284  jal         func_1DCA10
label_1db90c:
    if (ctx->pc == 0x1DB90Cu) {
        ctx->pc = 0x1DB90Cu;
            // 0x1db90c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB910u;
        goto label_1db910;
    }
    ctx->pc = 0x1DB908u;
    SET_GPR_U32(ctx, 31, 0x1DB910u);
    ctx->pc = 0x1DB90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB908u;
            // 0x1db90c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA10u;
    if (runtime->hasFunction(0x1DCA10u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB910u; }
        if (ctx->pc != 0x1DB910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA10_0x1dca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB910u; }
        if (ctx->pc != 0x1DB910u) { return; }
    }
    ctx->pc = 0x1DB910u;
label_1db910:
    // 0x1db910: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1db910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db914:
    // 0x1db914: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1db918:
    if (ctx->pc == 0x1DB918u) {
        ctx->pc = 0x1DB91Cu;
        goto label_1db91c;
    }
    ctx->pc = 0x1DB914u;
    {
        const bool branch_taken_0x1db914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db914) {
            ctx->pc = 0x1DB958u;
            goto label_1db958;
        }
    }
    ctx->pc = 0x1DB91Cu;
label_1db91c:
    // 0x1db91c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1db91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1db920:
    // 0x1db920: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1db920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1db924:
    // 0x1db924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1db924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db928:
    // 0x1db928: 0x0  nop
    ctx->pc = 0x1db928u;
    // NOP
label_1db92c:
    // 0x1db92c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1db92cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_1db930:
    // 0x1db930: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1db930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db934:
    // 0x1db934: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_1db938:
    if (ctx->pc == 0x1DB938u) {
        ctx->pc = 0x1DB938u;
            // 0x1db938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB93Cu;
        goto label_1db93c;
    }
    ctx->pc = 0x1DB934u;
    {
        const bool branch_taken_0x1db934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db934) {
            ctx->pc = 0x1DB938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB934u;
            // 0x1db938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB944u;
            goto label_1db944;
        }
    }
    ctx->pc = 0x1DB93Cu;
label_1db93c:
    // 0x1db93c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1db93cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1db940:
    // 0x1db940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db944:
    // 0x1db944: 0xc077290  jal         func_1DCA40
label_1db948:
    if (ctx->pc == 0x1DB948u) {
        ctx->pc = 0x1DB94Cu;
        goto label_1db94c;
    }
    ctx->pc = 0x1DB944u;
    SET_GPR_U32(ctx, 31, 0x1DB94Cu);
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB94Cu; }
        if (ctx->pc != 0x1DB94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB94Cu; }
        if (ctx->pc != 0x1DB94Cu) { return; }
    }
    ctx->pc = 0x1DB94Cu;
label_1db94c:
    // 0x1db94c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db950:
    // 0x1db950: 0xc077288  jal         func_1DCA20
label_1db954:
    if (ctx->pc == 0x1DB954u) {
        ctx->pc = 0x1DB954u;
            // 0x1db954: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1DB958u;
        goto label_1db958;
    }
    ctx->pc = 0x1DB950u;
    SET_GPR_U32(ctx, 31, 0x1DB958u);
    ctx->pc = 0x1DB954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB950u;
            // 0x1db954: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA20u;
    if (runtime->hasFunction(0x1DCA20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB958u; }
        if (ctx->pc != 0x1DB958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA20_0x1dca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB958u; }
        if (ctx->pc != 0x1DB958u) { return; }
    }
    ctx->pc = 0x1DB958u;
label_1db958:
    // 0x1db958: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1db95c:
    // 0x1db95c: 0xc04cc04  jal         func_133010
label_1db960:
    if (ctx->pc == 0x1DB960u) {
        ctx->pc = 0x1DB960u;
            // 0x1db960: 0x264503c0  addiu       $a1, $s2, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
        ctx->pc = 0x1DB964u;
        goto label_1db964;
    }
    ctx->pc = 0x1DB95Cu;
    SET_GPR_U32(ctx, 31, 0x1DB964u);
    ctx->pc = 0x1DB960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB95Cu;
            // 0x1db960: 0x264503c0  addiu       $a1, $s2, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB964u; }
        if (ctx->pc != 0x1DB964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB964u; }
        if (ctx->pc != 0x1DB964u) { return; }
    }
    ctx->pc = 0x1DB964u;
label_1db964:
    // 0x1db964: 0xc077290  jal         func_1DCA40
label_1db968:
    if (ctx->pc == 0x1DB968u) {
        ctx->pc = 0x1DB968u;
            // 0x1db968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB96Cu;
        goto label_1db96c;
    }
    ctx->pc = 0x1DB964u;
    SET_GPR_U32(ctx, 31, 0x1DB96Cu);
    ctx->pc = 0x1DB968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB964u;
            // 0x1db968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB96Cu; }
        if (ctx->pc != 0x1DB96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB96Cu; }
        if (ctx->pc != 0x1DB96Cu) { return; }
    }
    ctx->pc = 0x1DB96Cu;
label_1db96c:
    // 0x1db96c: 0x8c590054  lw          $t9, 0x54($v0)
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1db970:
    // 0x1db970: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1db970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1db974:
    // 0x1db974: 0x320f809  jalr        $t9
label_1db978:
    if (ctx->pc == 0x1DB978u) {
        ctx->pc = 0x1DB978u;
            // 0x1db978: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB97Cu;
        goto label_1db97c;
    }
    ctx->pc = 0x1DB974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB97Cu);
        ctx->pc = 0x1DB978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB974u;
            // 0x1db978: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB97Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB97Cu; }
            if (ctx->pc != 0x1DB97Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DB97Cu;
label_1db97c:
    // 0x1db97c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1db97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db980:
    // 0x1db980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db984:
    // 0x1db984: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1db984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1db988:
    // 0x1db988: 0xc077280  jal         func_1DCA00
label_1db98c:
    if (ctx->pc == 0x1DB98Cu) {
        ctx->pc = 0x1DB98Cu;
            // 0x1db98c: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->pc = 0x1DB990u;
        goto label_1db990;
    }
    ctx->pc = 0x1DB988u;
    SET_GPR_U32(ctx, 31, 0x1DB990u);
    ctx->pc = 0x1DB98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB988u;
            // 0x1db98c: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB990u; }
        if (ctx->pc != 0x1DB990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB990u; }
        if (ctx->pc != 0x1DB990u) { return; }
    }
    ctx->pc = 0x1DB990u;
label_1db990:
    // 0x1db990: 0xc07727c  jal         func_1DC9F0
label_1db994:
    if (ctx->pc == 0x1DB994u) {
        ctx->pc = 0x1DB994u;
            // 0x1db994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB998u;
        goto label_1db998;
    }
    ctx->pc = 0x1DB990u;
    SET_GPR_U32(ctx, 31, 0x1DB998u);
    ctx->pc = 0x1DB994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB990u;
            // 0x1db994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB998u; }
        if (ctx->pc != 0x1DB998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB998u; }
        if (ctx->pc != 0x1DB998u) { return; }
    }
    ctx->pc = 0x1DB998u;
label_1db998:
    // 0x1db998: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1db998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1db99c:
    // 0x1db99c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db9a0:
    // 0x1db9a0: 0xc077268  jal         func_1DC9A0
label_1db9a4:
    if (ctx->pc == 0x1DB9A4u) {
        ctx->pc = 0x1DB9A4u;
            // 0x1db9a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9A8u;
        goto label_1db9a8;
    }
    ctx->pc = 0x1DB9A0u;
    SET_GPR_U32(ctx, 31, 0x1DB9A8u);
    ctx->pc = 0x1DB9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9A0u;
            // 0x1db9a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9A0u;
    if (runtime->hasFunction(0x1DC9A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9A8u; }
        if (ctx->pc != 0x1DB9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9A0_0x1dc9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9A8u; }
        if (ctx->pc != 0x1DB9A8u) { return; }
    }
    ctx->pc = 0x1DB9A8u;
label_1db9a8:
    // 0x1db9a8: 0xc077264  jal         func_1DC990
label_1db9ac:
    if (ctx->pc == 0x1DB9ACu) {
        ctx->pc = 0x1DB9ACu;
            // 0x1db9ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9B0u;
        goto label_1db9b0;
    }
    ctx->pc = 0x1DB9A8u;
    SET_GPR_U32(ctx, 31, 0x1DB9B0u);
    ctx->pc = 0x1DB9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9A8u;
            // 0x1db9ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9B0u; }
        if (ctx->pc != 0x1DB9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9B0u; }
        if (ctx->pc != 0x1DB9B0u) { return; }
    }
    ctx->pc = 0x1DB9B0u;
label_1db9b0:
    // 0x1db9b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1db9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db9b4:
    // 0x1db9b4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1db9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1db9b8:
    // 0x1db9b8: 0xc04cbe0  jal         func_132F80
label_1db9bc:
    if (ctx->pc == 0x1DB9BCu) {
        ctx->pc = 0x1DB9BCu;
            // 0x1db9bc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1DB9C0u;
        goto label_1db9c0;
    }
    ctx->pc = 0x1DB9B8u;
    SET_GPR_U32(ctx, 31, 0x1DB9C0u);
    ctx->pc = 0x1DB9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9B8u;
            // 0x1db9bc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9C0u; }
        if (ctx->pc != 0x1DB9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9C0u; }
        if (ctx->pc != 0x1DB9C0u) { return; }
    }
    ctx->pc = 0x1DB9C0u;
label_1db9c0:
    // 0x1db9c0: 0xc07725c  jal         func_1DC970
label_1db9c4:
    if (ctx->pc == 0x1DB9C4u) {
        ctx->pc = 0x1DB9C4u;
            // 0x1db9c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9C8u;
        goto label_1db9c8;
    }
    ctx->pc = 0x1DB9C0u;
    SET_GPR_U32(ctx, 31, 0x1DB9C8u);
    ctx->pc = 0x1DB9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9C0u;
            // 0x1db9c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9C8u; }
        if (ctx->pc != 0x1DB9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9C8u; }
        if (ctx->pc != 0x1DB9C8u) { return; }
    }
    ctx->pc = 0x1DB9C8u;
label_1db9c8:
    // 0x1db9c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1db9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db9cc:
    // 0x1db9cc: 0xc077258  jal         func_1DC960
label_1db9d0:
    if (ctx->pc == 0x1DB9D0u) {
        ctx->pc = 0x1DB9D0u;
            // 0x1db9d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9D4u;
        goto label_1db9d4;
    }
    ctx->pc = 0x1DB9CCu;
    SET_GPR_U32(ctx, 31, 0x1DB9D4u);
    ctx->pc = 0x1DB9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9CCu;
            // 0x1db9d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9D4u; }
        if (ctx->pc != 0x1DB9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9D4u; }
        if (ctx->pc != 0x1DB9D4u) { return; }
    }
    ctx->pc = 0x1DB9D4u;
label_1db9d4:
    // 0x1db9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db9d8:
    // 0x1db9d8: 0xc04cce8  jal         func_1333A0
label_1db9dc:
    if (ctx->pc == 0x1DB9DCu) {
        ctx->pc = 0x1DB9DCu;
            // 0x1db9dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9E0u;
        goto label_1db9e0;
    }
    ctx->pc = 0x1DB9D8u;
    SET_GPR_U32(ctx, 31, 0x1DB9E0u);
    ctx->pc = 0x1DB9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9D8u;
            // 0x1db9dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9E0u; }
        if (ctx->pc != 0x1DB9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9E0u; }
        if (ctx->pc != 0x1DB9E0u) { return; }
    }
    ctx->pc = 0x1DB9E0u;
label_1db9e0:
    // 0x1db9e0: 0xc07725c  jal         func_1DC970
label_1db9e4:
    if (ctx->pc == 0x1DB9E4u) {
        ctx->pc = 0x1DB9E4u;
            // 0x1db9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9E8u;
        goto label_1db9e8;
    }
    ctx->pc = 0x1DB9E0u;
    SET_GPR_U32(ctx, 31, 0x1DB9E8u);
    ctx->pc = 0x1DB9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9E0u;
            // 0x1db9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9E8u; }
        if (ctx->pc != 0x1DB9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9E8u; }
        if (ctx->pc != 0x1DB9E8u) { return; }
    }
    ctx->pc = 0x1DB9E8u;
label_1db9e8:
    // 0x1db9e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db9ec:
    // 0x1db9ec: 0xc04ce80  jal         func_133A00
label_1db9f0:
    if (ctx->pc == 0x1DB9F0u) {
        ctx->pc = 0x1DB9F0u;
            // 0x1db9f0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1DB9F4u;
        goto label_1db9f4;
    }
    ctx->pc = 0x1DB9ECu;
    SET_GPR_U32(ctx, 31, 0x1DB9F4u);
    ctx->pc = 0x1DB9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9ECu;
            // 0x1db9f0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9F4u; }
        if (ctx->pc != 0x1DB9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9F4u; }
        if (ctx->pc != 0x1DB9F4u) { return; }
    }
    ctx->pc = 0x1DB9F4u;
label_1db9f4:
    // 0x1db9f4: 0xc64c1194  lwc1        $f12, 0x1194($s2)
    ctx->pc = 0x1db9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db9f8:
    // 0x1db9f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1db9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1db9fc:
    // 0x1db9fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1db9fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1dba00:
    // 0x1dba00: 0xc04f3f4  jal         func_13CFD0
label_1dba04:
    if (ctx->pc == 0x1DBA04u) {
        ctx->pc = 0x1DBA04u;
            // 0x1dba04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DBA08u;
        goto label_1dba08;
    }
    ctx->pc = 0x1DBA00u;
    SET_GPR_U32(ctx, 31, 0x1DBA08u);
    ctx->pc = 0x1DBA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA00u;
            // 0x1dba04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA08u; }
        if (ctx->pc != 0x1DBA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA08u; }
        if (ctx->pc != 0x1DBA08u) { return; }
    }
    ctx->pc = 0x1DBA08u;
label_1dba08:
    // 0x1dba08: 0xc07725c  jal         func_1DC970
label_1dba0c:
    if (ctx->pc == 0x1DBA0Cu) {
        ctx->pc = 0x1DBA0Cu;
            // 0x1dba0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA10u;
        goto label_1dba10;
    }
    ctx->pc = 0x1DBA08u;
    SET_GPR_U32(ctx, 31, 0x1DBA10u);
    ctx->pc = 0x1DBA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA08u;
            // 0x1dba0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA10u; }
        if (ctx->pc != 0x1DBA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA10u; }
        if (ctx->pc != 0x1DBA10u) { return; }
    }
    ctx->pc = 0x1DBA10u;
label_1dba10:
    // 0x1dba10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dba10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dba14:
    // 0x1dba14: 0xc07725c  jal         func_1DC970
label_1dba18:
    if (ctx->pc == 0x1DBA18u) {
        ctx->pc = 0x1DBA18u;
            // 0x1dba18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA1Cu;
        goto label_1dba1c;
    }
    ctx->pc = 0x1DBA14u;
    SET_GPR_U32(ctx, 31, 0x1DBA1Cu);
    ctx->pc = 0x1DBA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA14u;
            // 0x1dba18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA1Cu; }
        if (ctx->pc != 0x1DBA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA1Cu; }
        if (ctx->pc != 0x1DBA1Cu) { return; }
    }
    ctx->pc = 0x1DBA1Cu;
label_1dba1c:
    // 0x1dba1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dba20:
    // 0x1dba20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dba20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dba24:
    // 0x1dba24: 0xc04cd60  jal         func_133580
label_1dba28:
    if (ctx->pc == 0x1DBA28u) {
        ctx->pc = 0x1DBA28u;
            // 0x1dba28: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1DBA2Cu;
        goto label_1dba2c;
    }
    ctx->pc = 0x1DBA24u;
    SET_GPR_U32(ctx, 31, 0x1DBA2Cu);
    ctx->pc = 0x1DBA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA24u;
            // 0x1dba28: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA2Cu; }
        if (ctx->pc != 0x1DBA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA2Cu; }
        if (ctx->pc != 0x1DBA2Cu) { return; }
    }
    ctx->pc = 0x1DBA2Cu;
label_1dba2c:
    // 0x1dba2c: 0xc0775b8  jal         func_1DD6E0
label_1dba30:
    if (ctx->pc == 0x1DBA30u) {
        ctx->pc = 0x1DBA30u;
            // 0x1dba30: 0x2650121c  addiu       $s0, $s2, 0x121C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4636));
        ctx->pc = 0x1DBA34u;
        goto label_1dba34;
    }
    ctx->pc = 0x1DBA2Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA34u);
    ctx->pc = 0x1DBA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA2Cu;
            // 0x1dba30: 0x2650121c  addiu       $s0, $s2, 0x121C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA34u; }
        if (ctx->pc != 0x1DBA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA34u; }
        if (ctx->pc != 0x1DBA34u) { return; }
    }
    ctx->pc = 0x1DBA34u;
label_1dba34:
    // 0x1dba34: 0xc0775b4  jal         func_1DD6D0
label_1dba38:
    if (ctx->pc == 0x1DBA38u) {
        ctx->pc = 0x1DBA38u;
            // 0x1dba38: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DBA3Cu;
        goto label_1dba3c;
    }
    ctx->pc = 0x1DBA34u;
    SET_GPR_U32(ctx, 31, 0x1DBA3Cu);
    ctx->pc = 0x1DBA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA34u;
            // 0x1dba38: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA3Cu; }
        if (ctx->pc != 0x1DBA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA3Cu; }
        if (ctx->pc != 0x1DBA3Cu) { return; }
    }
    ctx->pc = 0x1DBA3Cu;
label_1dba3c:
    // 0x1dba3c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1dba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dba40:
    // 0x1dba40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dba44:
    // 0x1dba44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dba44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dba48:
    // 0x1dba48: 0x0  nop
    ctx->pc = 0x1dba48u;
    // NOP
label_1dba4c:
    // 0x1dba4c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dba4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dba50:
    // 0x1dba50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dba50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dba54:
    // 0x1dba54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dba58:
    if (ctx->pc == 0x1DBA58u) {
        ctx->pc = 0x1DBA58u;
            // 0x1dba58: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x1DBA5Cu;
        goto label_1dba5c;
    }
    ctx->pc = 0x1DBA54u;
    {
        const bool branch_taken_0x1dba54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA54u;
            // 0x1dba58: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba54) {
            ctx->pc = 0x1DBA60u;
            goto label_1dba60;
        }
    }
    ctx->pc = 0x1DBA5Cu;
label_1dba5c:
    // 0x1dba5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dba5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dba60:
    // 0x1dba60: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_1dba64:
    if (ctx->pc == 0x1DBA64u) {
        ctx->pc = 0x1DBA64u;
            // 0x1dba64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1DBA68u;
        goto label_1dba68;
    }
    ctx->pc = 0x1DBA60u;
    {
        const bool branch_taken_0x1dba60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1dba60) {
            ctx->pc = 0x1DBA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA60u;
            // 0x1dba64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBA74u;
            goto label_1dba74;
        }
    }
    ctx->pc = 0x1DBA68u;
label_1dba68:
    // 0x1dba68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dba68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dba6c:
    // 0x1dba6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dba70:
    if (ctx->pc == 0x1DBA70u) {
        ctx->pc = 0x1DBA70u;
            // 0x1dba70: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1DBA74u;
        goto label_1dba74;
    }
    ctx->pc = 0x1DBA6Cu;
    {
        const bool branch_taken_0x1dba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA6Cu;
            // 0x1dba70: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba6c) {
            ctx->pc = 0x1DBA8Cu;
            goto label_1dba8c;
        }
    }
    ctx->pc = 0x1DBA74u;
label_1dba74:
    // 0x1dba74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dba78:
    // 0x1dba78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dba7c:
    // 0x1dba7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dba7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dba80:
    // 0x1dba80: 0x0  nop
    ctx->pc = 0x1dba80u;
    // NOP
label_1dba84:
    // 0x1dba84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1dba84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1dba88:
    // 0x1dba88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1dba88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1dba8c:
    // 0x1dba8c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1dba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dba90:
    // 0x1dba90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dba94:
    // 0x1dba94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dba94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1dba98:
    // 0x1dba98: 0xc077254  jal         func_1DC950
label_1dba9c:
    if (ctx->pc == 0x1DBA9Cu) {
        ctx->pc = 0x1DBA9Cu;
            // 0x1dba9c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x1DBAA0u;
        goto label_1dbaa0;
    }
    ctx->pc = 0x1DBA98u;
    SET_GPR_U32(ctx, 31, 0x1DBAA0u);
    ctx->pc = 0x1DBA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA98u;
            // 0x1dba9c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC950u;
    if (runtime->hasFunction(0x1DC950u)) {
        auto targetFn = runtime->lookupFunction(0x1DC950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAA0u; }
        if (ctx->pc != 0x1DBAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC950_0x1dc950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAA0u; }
        if (ctx->pc != 0x1DBAA0u) { return; }
    }
    ctx->pc = 0x1DBAA0u;
label_1dbaa0:
    // 0x1dbaa0: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_1dbaa4:
    if (ctx->pc == 0x1DBAA4u) {
        ctx->pc = 0x1DBAA4u;
            // 0x1dbaa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAA8u;
        goto label_1dbaa8;
    }
    ctx->pc = 0x1DBAA0u;
    {
        const bool branch_taken_0x1dbaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbaa0) {
            ctx->pc = 0x1DBAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAA0u;
            // 0x1dbaa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBB14u;
            goto label_1dbb14;
        }
    }
    ctx->pc = 0x1DBAA8u;
label_1dbaa8:
    // 0x1dbaa8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dbaac:
    // 0x1dbaac: 0xc077250  jal         func_1DC940
label_1dbab0:
    if (ctx->pc == 0x1DBAB0u) {
        ctx->pc = 0x1DBAB0u;
            // 0x1dbab0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1DBAB4u;
        goto label_1dbab4;
    }
    ctx->pc = 0x1DBAACu;
    SET_GPR_U32(ctx, 31, 0x1DBAB4u);
    ctx->pc = 0x1DBAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAACu;
            // 0x1dbab0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC940u;
    if (runtime->hasFunction(0x1DC940u)) {
        auto targetFn = runtime->lookupFunction(0x1DC940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAB4u; }
        if (ctx->pc != 0x1DBAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC940_0x1dc940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAB4u; }
        if (ctx->pc != 0x1DBAB4u) { return; }
    }
    ctx->pc = 0x1DBAB4u;
label_1dbab4:
    // 0x1dbab4: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x1dbab4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_1dbab8:
    // 0x1dbab8: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
label_1dbabc:
    if (ctx->pc == 0x1DBABCu) {
        ctx->pc = 0x1DBAC0u;
        goto label_1dbac0;
    }
    ctx->pc = 0x1DBAB8u;
    {
        const bool branch_taken_0x1dbab8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbab8) {
            ctx->pc = 0x1DBB10u;
            goto label_1dbb10;
        }
    }
    ctx->pc = 0x1DBAC0u;
label_1dbac0:
    // 0x1dbac0: 0xc0775b0  jal         func_1DD6C0
label_1dbac4:
    if (ctx->pc == 0x1DBAC4u) {
        ctx->pc = 0x1DBAC8u;
        goto label_1dbac8;
    }
    ctx->pc = 0x1DBAC0u;
    SET_GPR_U32(ctx, 31, 0x1DBAC8u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAC8u; }
        if (ctx->pc != 0x1DBAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAC8u; }
        if (ctx->pc != 0x1DBAC8u) { return; }
    }
    ctx->pc = 0x1DBAC8u;
label_1dbac8:
    // 0x1dbac8: 0xc0775ac  jal         func_1DD6B0
label_1dbacc:
    if (ctx->pc == 0x1DBACCu) {
        ctx->pc = 0x1DBACCu;
            // 0x1dbacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAD0u;
        goto label_1dbad0;
    }
    ctx->pc = 0x1DBAC8u;
    SET_GPR_U32(ctx, 31, 0x1DBAD0u);
    ctx->pc = 0x1DBACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAC8u;
            // 0x1dbacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAD0u; }
        if (ctx->pc != 0x1DBAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAD0u; }
        if (ctx->pc != 0x1DBAD0u) { return; }
    }
    ctx->pc = 0x1DBAD0u;
label_1dbad0:
    // 0x1dbad0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1dbad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dbad4:
    // 0x1dbad4: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_1dbad8:
    if (ctx->pc == 0x1DBAD8u) {
        ctx->pc = 0x1DBADCu;
        goto label_1dbadc;
    }
    ctx->pc = 0x1DBAD4u;
    {
        const bool branch_taken_0x1dbad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dbad4) {
            ctx->pc = 0x1DBB10u;
            goto label_1dbb10;
        }
    }
    ctx->pc = 0x1DBADCu;
label_1dbadc:
    // 0x1dbadc: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x1dbadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1dbae0:
    // 0x1dbae0: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x1dbae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1dbae4:
    // 0x1dbae4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1dbae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1dbae8:
    // 0x1dbae8: 0x320f809  jalr        $t9
label_1dbaec:
    if (ctx->pc == 0x1DBAECu) {
        ctx->pc = 0x1DBAF0u;
        goto label_1dbaf0;
    }
    ctx->pc = 0x1DBAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBAF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DBAF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAF0u; }
            if (ctx->pc != 0x1DBAF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DBAF0u;
label_1dbaf0:
    // 0x1dbaf0: 0xc07724c  jal         func_1DC930
label_1dbaf4:
    if (ctx->pc == 0x1DBAF4u) {
        ctx->pc = 0x1DBAF4u;
            // 0x1dbaf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAF8u;
        goto label_1dbaf8;
    }
    ctx->pc = 0x1DBAF0u;
    SET_GPR_U32(ctx, 31, 0x1DBAF8u);
    ctx->pc = 0x1DBAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAF0u;
            // 0x1dbaf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAF8u; }
        if (ctx->pc != 0x1DBAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAF8u; }
        if (ctx->pc != 0x1DBAF8u) { return; }
    }
    ctx->pc = 0x1DBAF8u;
label_1dbaf8:
    // 0x1dbaf8: 0xc0bbf08  jal         func_2EFC20
label_1dbafc:
    if (ctx->pc == 0x1DBAFCu) {
        ctx->pc = 0x1DBAFCu;
            // 0x1dbafc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB00u;
        goto label_1dbb00;
    }
    ctx->pc = 0x1DBAF8u;
    SET_GPR_U32(ctx, 31, 0x1DBB00u);
    ctx->pc = 0x1DBAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAF8u;
            // 0x1dbafc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EFC20u;
    if (runtime->hasFunction(0x2EFC20u)) {
        auto targetFn = runtime->lookupFunction(0x2EFC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB00u; }
        if (ctx->pc != 0x1DBB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EFC20_0x2efc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB00u; }
        if (ctx->pc != 0x1DBB00u) { return; }
    }
    ctx->pc = 0x1DBB00u;
label_1dbb00:
    // 0x1dbb00: 0xc0bf9b4  jal         func_2FE6D0
label_1dbb04:
    if (ctx->pc == 0x1DBB04u) {
        ctx->pc = 0x1DBB04u;
            // 0x1dbb04: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->pc = 0x1DBB08u;
        goto label_1dbb08;
    }
    ctx->pc = 0x1DBB00u;
    SET_GPR_U32(ctx, 31, 0x1DBB08u);
    ctx->pc = 0x1DBB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB00u;
            // 0x1dbb04: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE6D0u;
    if (runtime->hasFunction(0x2FE6D0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB08u; }
        if (ctx->pc != 0x1DBB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE6D0_0x2fe6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB08u; }
        if (ctx->pc != 0x1DBB08u) { return; }
    }
    ctx->pc = 0x1DBB08u;
label_1dbb08:
    // 0x1dbb08: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_1dbb0c:
    if (ctx->pc == 0x1DBB0Cu) {
        ctx->pc = 0x1DBB10u;
        goto label_1dbb10;
    }
    ctx->pc = 0x1DBB08u;
    {
        const bool branch_taken_0x1dbb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbb08) {
            ctx->pc = 0x1DBE90u;
            goto label_1dbe90;
        }
    }
    ctx->pc = 0x1DBB10u;
label_1dbb10:
    // 0x1dbb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dbb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb14:
    // 0x1dbb14: 0xc077290  jal         func_1DCA40
label_1dbb18:
    if (ctx->pc == 0x1DBB18u) {
        ctx->pc = 0x1DBB1Cu;
        goto label_1dbb1c;
    }
    ctx->pc = 0x1DBB14u;
    SET_GPR_U32(ctx, 31, 0x1DBB1Cu);
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB1Cu; }
        if (ctx->pc != 0x1DBB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB1Cu; }
        if (ctx->pc != 0x1DBB1Cu) { return; }
    }
    ctx->pc = 0x1DBB1Cu;
label_1dbb1c:
    // 0x1dbb1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1dbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dbb20:
    // 0x1dbb20: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1dbb20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_1dbb24:
    // 0x1dbb24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dbb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dbb28:
    // 0x1dbb28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dbb2c:
    // 0x1dbb2c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_1dbb30:
    if (ctx->pc == 0x1DBB30u) {
        ctx->pc = 0x1DBB30u;
            // 0x1dbb30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1DBB34u;
        goto label_1dbb34;
    }
    ctx->pc = 0x1DBB2Cu;
    {
        const bool branch_taken_0x1dbb2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1dbb2c) {
            ctx->pc = 0x1DBB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB2Cu;
            // 0x1dbb30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBB40u;
            goto label_1dbb40;
        }
    }
    ctx->pc = 0x1DBB34u;
label_1dbb34:
    // 0x1dbb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dbb38:
    // 0x1dbb38: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dbb3c:
    if (ctx->pc == 0x1DBB3Cu) {
        ctx->pc = 0x1DBB3Cu;
            // 0x1dbb3c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1DBB40u;
        goto label_1dbb40;
    }
    ctx->pc = 0x1DBB38u;
    {
        const bool branch_taken_0x1dbb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB38u;
            // 0x1dbb3c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb38) {
            ctx->pc = 0x1DBB58u;
            goto label_1dbb58;
        }
    }
    ctx->pc = 0x1DBB40u;
label_1dbb40:
    // 0x1dbb40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dbb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dbb44:
    // 0x1dbb44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dbb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dbb48:
    // 0x1dbb48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dbb48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dbb4c:
    // 0x1dbb4c: 0x0  nop
    ctx->pc = 0x1dbb4cu;
    // NOP
label_1dbb50:
    // 0x1dbb50: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1dbb50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1dbb54:
    // 0x1dbb54: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1dbb54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1dbb58:
    // 0x1dbb58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dbb5c:
    // 0x1dbb5c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1dbb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1dbb60:
    // 0x1dbb60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1dbb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1dbb64:
    // 0x1dbb64: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dbb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dbb68:
    // 0x1dbb68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbb68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dbb6c:
    // 0x1dbb6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dbb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dbb70:
    // 0x1dbb70: 0x0  nop
    ctx->pc = 0x1dbb70u;
    // NOP
label_1dbb74:
    // 0x1dbb74: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x1dbb74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_1dbb78:
    // 0x1dbb78: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1dbb78u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_1dbb7c:
    // 0x1dbb7c: 0xc04f3f4  jal         func_13CFD0
label_1dbb80:
    if (ctx->pc == 0x1DBB80u) {
        ctx->pc = 0x1DBB80u;
            // 0x1dbb80: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x1DBB84u;
        goto label_1dbb84;
    }
    ctx->pc = 0x1DBB7Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB84u);
    ctx->pc = 0x1DBB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB7Cu;
            // 0x1dbb80: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB84u; }
        if (ctx->pc != 0x1DBB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB84u; }
        if (ctx->pc != 0x1DBB84u) { return; }
    }
    ctx->pc = 0x1DBB84u;
label_1dbb84:
    // 0x1dbb84: 0xc077248  jal         func_1DC920
label_1dbb88:
    if (ctx->pc == 0x1DBB88u) {
        ctx->pc = 0x1DBB88u;
            // 0x1dbb88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB8Cu;
        goto label_1dbb8c;
    }
    ctx->pc = 0x1DBB84u;
    SET_GPR_U32(ctx, 31, 0x1DBB8Cu);
    ctx->pc = 0x1DBB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB84u;
            // 0x1dbb88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC920u;
    if (runtime->hasFunction(0x1DC920u)) {
        auto targetFn = runtime->lookupFunction(0x1DC920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB8Cu; }
        if (ctx->pc != 0x1DBB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC920_0x1dc920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB8Cu; }
        if (ctx->pc != 0x1DBB8Cu) { return; }
    }
    ctx->pc = 0x1DBB8Cu;
label_1dbb8c:
    // 0x1dbb8c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1dbb90:
    if (ctx->pc == 0x1DBB90u) {
        ctx->pc = 0x1DBB94u;
        goto label_1dbb94;
    }
    ctx->pc = 0x1DBB8Cu;
    {
        const bool branch_taken_0x1dbb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbb8c) {
            ctx->pc = 0x1DBBFCu;
            goto label_1dbbfc;
        }
    }
    ctx->pc = 0x1DBB94u;
label_1dbb94:
    // 0x1dbb94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dbb98:
    // 0x1dbb98: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dbb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dbb9c:
    // 0x1dbb9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1dbb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1dbba0:
    // 0x1dbba0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dbba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbba4:
    // 0x1dbba4: 0xc64c11d0  lwc1        $f12, 0x11D0($s2)
    ctx->pc = 0x1dbba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dbba8:
    // 0x1dbba8: 0xc04ce50  jal         func_133940
label_1dbbac:
    if (ctx->pc == 0x1DBBACu) {
        ctx->pc = 0x1DBBACu;
            // 0x1dbbac: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1DBBB0u;
        goto label_1dbbb0;
    }
    ctx->pc = 0x1DBBA8u;
    SET_GPR_U32(ctx, 31, 0x1DBBB0u);
    ctx->pc = 0x1DBBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBA8u;
            // 0x1dbbac: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBB0u; }
        if (ctx->pc != 0x1DBBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBB0u; }
        if (ctx->pc != 0x1DBBB0u) { return; }
    }
    ctx->pc = 0x1DBBB0u;
label_1dbbb0:
    // 0x1dbbb0: 0xc0775b8  jal         func_1DD6E0
label_1dbbb4:
    if (ctx->pc == 0x1DBBB4u) {
        ctx->pc = 0x1DBBB8u;
        goto label_1dbbb8;
    }
    ctx->pc = 0x1DBBB0u;
    SET_GPR_U32(ctx, 31, 0x1DBBB8u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBB8u; }
        if (ctx->pc != 0x1DBBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBB8u; }
        if (ctx->pc != 0x1DBBB8u) { return; }
    }
    ctx->pc = 0x1DBBB8u;
label_1dbbb8:
    // 0x1dbbb8: 0xc0775b4  jal         func_1DD6D0
label_1dbbbc:
    if (ctx->pc == 0x1DBBBCu) {
        ctx->pc = 0x1DBBBCu;
            // 0x1dbbbc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DBBC0u;
        goto label_1dbbc0;
    }
    ctx->pc = 0x1DBBB8u;
    SET_GPR_U32(ctx, 31, 0x1DBBC0u);
    ctx->pc = 0x1DBBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBB8u;
            // 0x1dbbbc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBC0u; }
        if (ctx->pc != 0x1DBBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBC0u; }
        if (ctx->pc != 0x1DBBC0u) { return; }
    }
    ctx->pc = 0x1DBBC0u;
label_1dbbc0:
    // 0x1dbbc0: 0xc64311d0  lwc1        $f3, 0x11D0($s2)
    ctx->pc = 0x1dbbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dbbc4:
    // 0x1dbbc4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x1dbbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
label_1dbbc8:
    // 0x1dbbc8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1dbbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_1dbbcc:
    // 0x1dbbcc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1dbbd0:
    // 0x1dbbd0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1dbbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dbbd4:
    // 0x1dbbd4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1dbbd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1dbbd8:
    // 0x1dbbd8: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x1dbbd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1dbbdc:
    // 0x1dbbdc: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x1dbbdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_1dbbe0:
    // 0x1dbbe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dbbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dbbe4:
    // 0x1dbbe4: 0x0  nop
    ctx->pc = 0x1dbbe4u;
    // NOP
label_1dbbe8:
    // 0x1dbbe8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dbbe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dbbec:
    // 0x1dbbec: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_1dbbf0:
    if (ctx->pc == 0x1DBBF0u) {
        ctx->pc = 0x1DBBF0u;
            // 0x1dbbf0: 0xe64011d0  swc1        $f0, 0x11D0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4560), bits); }
        ctx->pc = 0x1DBBF4u;
        goto label_1dbbf4;
    }
    ctx->pc = 0x1DBBECu;
    {
        const bool branch_taken_0x1dbbec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBECu;
            // 0x1dbbf0: 0xe64011d0  swc1        $f0, 0x11D0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbec) {
            ctx->pc = 0x1DBC60u;
            goto label_1dbc60;
        }
    }
    ctx->pc = 0x1DBBF4u;
label_1dbbf4:
    // 0x1dbbf4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1dbbf8:
    if (ctx->pc == 0x1DBBF8u) {
        ctx->pc = 0x1DBBF8u;
            // 0x1dbbf8: 0xe64111d0  swc1        $f1, 0x11D0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4560), bits); }
        ctx->pc = 0x1DBBFCu;
        goto label_1dbbfc;
    }
    ctx->pc = 0x1DBBF4u;
    {
        const bool branch_taken_0x1dbbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBF4u;
            // 0x1dbbf8: 0xe64111d0  swc1        $f1, 0x11D0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbf4) {
            ctx->pc = 0x1DBC60u;
            goto label_1dbc60;
        }
    }
    ctx->pc = 0x1DBBFCu;
label_1dbbfc:
    // 0x1dbbfc: 0xc0775b8  jal         func_1DD6E0
label_1dbc00:
    if (ctx->pc == 0x1DBC00u) {
        ctx->pc = 0x1DBC04u;
        goto label_1dbc04;
    }
    ctx->pc = 0x1DBBFCu;
    SET_GPR_U32(ctx, 31, 0x1DBC04u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC04u; }
        if (ctx->pc != 0x1DBC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC04u; }
        if (ctx->pc != 0x1DBC04u) { return; }
    }
    ctx->pc = 0x1DBC04u;
label_1dbc04:
    // 0x1dbc04: 0xc0775b4  jal         func_1DD6D0
label_1dbc08:
    if (ctx->pc == 0x1DBC08u) {
        ctx->pc = 0x1DBC08u;
            // 0x1dbc08: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DBC0Cu;
        goto label_1dbc0c;
    }
    ctx->pc = 0x1DBC04u;
    SET_GPR_U32(ctx, 31, 0x1DBC0Cu);
    ctx->pc = 0x1DBC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC04u;
            // 0x1dbc08: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC0Cu; }
        if (ctx->pc != 0x1DBC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC0Cu; }
        if (ctx->pc != 0x1DBC0Cu) { return; }
    }
    ctx->pc = 0x1DBC0Cu;
label_1dbc0c:
    // 0x1dbc0c: 0xc64211d0  lwc1        $f2, 0x11D0($s2)
    ctx->pc = 0x1dbc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbc10:
    // 0x1dbc10: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x1dbc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
label_1dbc14:
    // 0x1dbc14: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1dbc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_1dbc18:
    // 0x1dbc18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dbc1c:
    // 0x1dbc1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dbc1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dbc20:
    // 0x1dbc20: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1dbc20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1dbc24:
    // 0x1dbc24: 0x0  nop
    ctx->pc = 0x1dbc24u;
    // NOP
label_1dbc28:
    // 0x1dbc28: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1dbc28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1dbc2c:
    // 0x1dbc2c: 0x46001b1c  madd.s      $f12, $f3, $f0
    ctx->pc = 0x1dbc2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1dbc30:
    // 0x1dbc30: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1dbc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1dbc34:
    // 0x1dbc34: 0x0  nop
    ctx->pc = 0x1dbc34u;
    // NOP
label_1dbc38:
    // 0x1dbc38: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x1dbc38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dbc3c:
    // 0x1dbc3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1dbc40:
    if (ctx->pc == 0x1DBC40u) {
        ctx->pc = 0x1DBC40u;
            // 0x1dbc40: 0xe64c11d0  swc1        $f12, 0x11D0($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4560), bits); }
        ctx->pc = 0x1DBC44u;
        goto label_1dbc44;
    }
    ctx->pc = 0x1DBC3Cu;
    {
        const bool branch_taken_0x1dbc3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC3Cu;
            // 0x1dbc40: 0xe64c11d0  swc1        $f12, 0x11D0($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc3c) {
            ctx->pc = 0x1DBC5Cu;
            goto label_1dbc5c;
        }
    }
    ctx->pc = 0x1DBC44u;
label_1dbc44:
    // 0x1dbc44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dbc48:
    // 0x1dbc48: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1dbc48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_1dbc4c:
    // 0x1dbc4c: 0xc04ce50  jal         func_133940
label_1dbc50:
    if (ctx->pc == 0x1DBC50u) {
        ctx->pc = 0x1DBC50u;
            // 0x1dbc50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC54u;
        goto label_1dbc54;
    }
    ctx->pc = 0x1DBC4Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC54u);
    ctx->pc = 0x1DBC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC4Cu;
            // 0x1dbc50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC54u; }
        if (ctx->pc != 0x1DBC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC54u; }
        if (ctx->pc != 0x1DBC54u) { return; }
    }
    ctx->pc = 0x1DBC54u;
label_1dbc54:
    // 0x1dbc54: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dbc58:
    if (ctx->pc == 0x1DBC58u) {
        ctx->pc = 0x1DBC58u;
            // 0x1dbc58: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->pc = 0x1DBC5Cu;
        goto label_1dbc5c;
    }
    ctx->pc = 0x1DBC54u;
    {
        const bool branch_taken_0x1dbc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC54u;
            // 0x1dbc58: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc54) {
            ctx->pc = 0x1DBC64u;
            goto label_1dbc64;
        }
    }
    ctx->pc = 0x1DBC5Cu;
label_1dbc5c:
    // 0x1dbc5c: 0xe64d11d0  swc1        $f13, 0x11D0($s2)
    ctx->pc = 0x1dbc5cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4560), bits); }
label_1dbc60:
    // 0x1dbc60: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x1dbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1dbc64:
    // 0x1dbc64: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x1dbc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1dbc68:
    // 0x1dbc68: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1dbc68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1dbc6c:
    // 0x1dbc6c: 0x320f809  jalr        $t9
label_1dbc70:
    if (ctx->pc == 0x1DBC70u) {
        ctx->pc = 0x1DBC74u;
        goto label_1dbc74;
    }
    ctx->pc = 0x1DBC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBC74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DBC74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC74u; }
            if (ctx->pc != 0x1DBC74u) { return; }
        }
        }
    }
    ctx->pc = 0x1DBC74u;
label_1dbc74:
    // 0x1dbc74: 0x8e420d98  lw          $v0, 0xD98($s2)
    ctx->pc = 0x1dbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_1dbc78:
    // 0x1dbc78: 0xc0775b8  jal         func_1DD6E0
label_1dbc7c:
    if (ctx->pc == 0x1DBC7Cu) {
        ctx->pc = 0x1DBC7Cu;
            // 0x1dbc7c: 0x30500001  andi        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x1DBC80u;
        goto label_1dbc80;
    }
    ctx->pc = 0x1DBC78u;
    SET_GPR_U32(ctx, 31, 0x1DBC80u);
    ctx->pc = 0x1DBC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC78u;
            // 0x1dbc7c: 0x30500001  andi        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC80u; }
        if (ctx->pc != 0x1DBC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC80u; }
        if (ctx->pc != 0x1DBC80u) { return; }
    }
    ctx->pc = 0x1DBC80u;
label_1dbc80:
    // 0x1dbc80: 0xc077244  jal         func_1DC910
label_1dbc84:
    if (ctx->pc == 0x1DBC84u) {
        ctx->pc = 0x1DBC84u;
            // 0x1dbc84: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DBC88u;
        goto label_1dbc88;
    }
    ctx->pc = 0x1DBC80u;
    SET_GPR_U32(ctx, 31, 0x1DBC88u);
    ctx->pc = 0x1DBC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC80u;
            // 0x1dbc84: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC910u;
    if (runtime->hasFunction(0x1DC910u)) {
        auto targetFn = runtime->lookupFunction(0x1DC910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC88u; }
        if (ctx->pc != 0x1DBC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC910_0x1dc910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC88u; }
        if (ctx->pc != 0x1DBC88u) { return; }
    }
    ctx->pc = 0x1DBC88u;
label_1dbc88:
    // 0x1dbc88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dbc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dbc8c:
    // 0x1dbc8c: 0x5202001e  beql        $s0, $v0, . + 4 + (0x1E << 2)
label_1dbc90:
    if (ctx->pc == 0x1DBC90u) {
        ctx->pc = 0x1DBC90u;
            // 0x1dbc90: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->pc = 0x1DBC94u;
        goto label_1dbc94;
    }
    ctx->pc = 0x1DBC8Cu;
    {
        const bool branch_taken_0x1dbc8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dbc8c) {
            ctx->pc = 0x1DBC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC8Cu;
            // 0x1dbc90: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD08u;
            goto label_1dbd08;
        }
    }
    ctx->pc = 0x1DBC94u;
label_1dbc94:
    // 0x1dbc94: 0xc077228  jal         func_1DC8A0
label_1dbc98:
    if (ctx->pc == 0x1DBC98u) {
        ctx->pc = 0x1DBC98u;
            // 0x1dbc98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC9Cu;
        goto label_1dbc9c;
    }
    ctx->pc = 0x1DBC94u;
    SET_GPR_U32(ctx, 31, 0x1DBC9Cu);
    ctx->pc = 0x1DBC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC94u;
            // 0x1dbc98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC8A0u;
    if (runtime->hasFunction(0x1DC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC9Cu; }
        if (ctx->pc != 0x1DBC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC8A0_0x1dc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC9Cu; }
        if (ctx->pc != 0x1DBC9Cu) { return; }
    }
    ctx->pc = 0x1DBC9Cu;
label_1dbc9c:
    // 0x1dbc9c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1dbca0:
    if (ctx->pc == 0x1DBCA0u) {
        ctx->pc = 0x1DBCA4u;
        goto label_1dbca4;
    }
    ctx->pc = 0x1DBC9Cu;
    {
        const bool branch_taken_0x1dbc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc9c) {
            ctx->pc = 0x1DBD04u;
            goto label_1dbd04;
        }
    }
    ctx->pc = 0x1DBCA4u;
label_1dbca4:
    // 0x1dbca4: 0xc077290  jal         func_1DCA40
label_1dbca8:
    if (ctx->pc == 0x1DBCA8u) {
        ctx->pc = 0x1DBCA8u;
            // 0x1dbca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCACu;
        goto label_1dbcac;
    }
    ctx->pc = 0x1DBCA4u;
    SET_GPR_U32(ctx, 31, 0x1DBCACu);
    ctx->pc = 0x1DBCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCA4u;
            // 0x1dbca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCACu; }
        if (ctx->pc != 0x1DBCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCACu; }
        if (ctx->pc != 0x1DBCACu) { return; }
    }
    ctx->pc = 0x1DBCACu;
label_1dbcac:
    // 0x1dbcac: 0xc077224  jal         func_1DC890
label_1dbcb0:
    if (ctx->pc == 0x1DBCB0u) {
        ctx->pc = 0x1DBCB0u;
            // 0x1dbcb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCB4u;
        goto label_1dbcb4;
    }
    ctx->pc = 0x1DBCACu;
    SET_GPR_U32(ctx, 31, 0x1DBCB4u);
    ctx->pc = 0x1DBCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCACu;
            // 0x1dbcb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCB4u; }
        if (ctx->pc != 0x1DBCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCB4u; }
        if (ctx->pc != 0x1DBCB4u) { return; }
    }
    ctx->pc = 0x1DBCB4u;
label_1dbcb4:
    // 0x1dbcb4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1dbcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dbcb8:
    // 0x1dbcb8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1dbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dbcbc:
    // 0x1dbcbc: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_1dbcc0:
    if (ctx->pc == 0x1DBCC0u) {
        ctx->pc = 0x1DBCC0u;
            // 0x1dbcc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCC4u;
        goto label_1dbcc4;
    }
    ctx->pc = 0x1DBCBCu;
    {
        const bool branch_taken_0x1dbcbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dbcbc) {
            ctx->pc = 0x1DBCC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCBCu;
            // 0x1dbcc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBCE8u;
            goto label_1dbce8;
        }
    }
    ctx->pc = 0x1DBCC4u;
label_1dbcc4:
    // 0x1dbcc4: 0xc077290  jal         func_1DCA40
label_1dbcc8:
    if (ctx->pc == 0x1DBCC8u) {
        ctx->pc = 0x1DBCC8u;
            // 0x1dbcc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCCCu;
        goto label_1dbccc;
    }
    ctx->pc = 0x1DBCC4u;
    SET_GPR_U32(ctx, 31, 0x1DBCCCu);
    ctx->pc = 0x1DBCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCC4u;
            // 0x1dbcc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCCCu; }
        if (ctx->pc != 0x1DBCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCCCu; }
        if (ctx->pc != 0x1DBCCCu) { return; }
    }
    ctx->pc = 0x1DBCCCu;
label_1dbccc:
    // 0x1dbccc: 0xc077224  jal         func_1DC890
label_1dbcd0:
    if (ctx->pc == 0x1DBCD0u) {
        ctx->pc = 0x1DBCD0u;
            // 0x1dbcd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCD4u;
        goto label_1dbcd4;
    }
    ctx->pc = 0x1DBCCCu;
    SET_GPR_U32(ctx, 31, 0x1DBCD4u);
    ctx->pc = 0x1DBCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCCCu;
            // 0x1dbcd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCD4u; }
        if (ctx->pc != 0x1DBCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCD4u; }
        if (ctx->pc != 0x1DBCD4u) { return; }
    }
    ctx->pc = 0x1DBCD4u;
label_1dbcd4:
    // 0x1dbcd4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1dbcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dbcd8:
    // 0x1dbcd8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1dbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1dbcdc:
    // 0x1dbcdc: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_1dbce0:
    if (ctx->pc == 0x1DBCE0u) {
        ctx->pc = 0x1DBCE0u;
            // 0x1dbce0: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->pc = 0x1DBCE4u;
        goto label_1dbce4;
    }
    ctx->pc = 0x1DBCDCu;
    {
        const bool branch_taken_0x1dbcdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbcdc) {
            ctx->pc = 0x1DBCE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCDCu;
            // 0x1dbce0: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD48u;
            goto label_1dbd48;
        }
    }
    ctx->pc = 0x1DBCE4u;
label_1dbce4:
    // 0x1dbce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dbce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dbce8:
    // 0x1dbce8: 0xc0772f0  jal         func_1DCBC0
label_1dbcec:
    if (ctx->pc == 0x1DBCECu) {
        ctx->pc = 0x1DBCF0u;
        goto label_1dbcf0;
    }
    ctx->pc = 0x1DBCE8u;
    SET_GPR_U32(ctx, 31, 0x1DBCF0u);
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCF0u; }
        if (ctx->pc != 0x1DBCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCF0u; }
        if (ctx->pc != 0x1DBCF0u) { return; }
    }
    ctx->pc = 0x1DBCF0u;
label_1dbcf0:
    // 0x1dbcf0: 0xc0772ec  jal         func_1DCBB0
label_1dbcf4:
    if (ctx->pc == 0x1DBCF4u) {
        ctx->pc = 0x1DBCF4u;
            // 0x1dbcf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCF8u;
        goto label_1dbcf8;
    }
    ctx->pc = 0x1DBCF0u;
    SET_GPR_U32(ctx, 31, 0x1DBCF8u);
    ctx->pc = 0x1DBCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCF0u;
            // 0x1dbcf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (runtime->hasFunction(0x1DCBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCF8u; }
        if (ctx->pc != 0x1DBCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBB0_0x1dcbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCF8u; }
        if (ctx->pc != 0x1DBCF8u) { return; }
    }
    ctx->pc = 0x1DBCF8u;
label_1dbcf8:
    // 0x1dbcf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dbcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dbcfc:
    // 0x1dbcfc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1dbd00:
    if (ctx->pc == 0x1DBD00u) {
        ctx->pc = 0x1DBD04u;
        goto label_1dbd04;
    }
    ctx->pc = 0x1DBCFCu;
    {
        const bool branch_taken_0x1dbcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbcfc) {
            ctx->pc = 0x1DBD44u;
            goto label_1dbd44;
        }
    }
    ctx->pc = 0x1DBD04u;
label_1dbd04:
    // 0x1dbd04: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x1dbd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1dbd08:
    // 0x1dbd08: 0xc0bf928  jal         func_2FE4A0
label_1dbd0c:
    if (ctx->pc == 0x1DBD0Cu) {
        ctx->pc = 0x1DBD10u;
        goto label_1dbd10;
    }
    ctx->pc = 0x1DBD08u;
    SET_GPR_U32(ctx, 31, 0x1DBD10u);
    ctx->pc = 0x2FE4A0u;
    if (runtime->hasFunction(0x2FE4A0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD10u; }
        if (ctx->pc != 0x1DBD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE4A0_0x2fe4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD10u; }
        if (ctx->pc != 0x1DBD10u) { return; }
    }
    ctx->pc = 0x1DBD10u;
label_1dbd10:
    // 0x1dbd10: 0x8e420d9c  lw          $v0, 0xD9C($s2)
    ctx->pc = 0x1dbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_1dbd14:
    // 0x1dbd14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1dbd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1dbd18:
    // 0x1dbd18: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_1dbd1c:
    if (ctx->pc == 0x1DBD1Cu) {
        ctx->pc = 0x1DBD1Cu;
            // 0x1dbd1c: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->pc = 0x1DBD20u;
        goto label_1dbd20;
    }
    ctx->pc = 0x1DBD18u;
    {
        const bool branch_taken_0x1dbd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd18) {
            ctx->pc = 0x1DBD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD18u;
            // 0x1dbd1c: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD98u;
            goto label_1dbd98;
        }
    }
    ctx->pc = 0x1DBD20u;
label_1dbd20:
    // 0x1dbd20: 0x8e440d6c  lw          $a0, 0xD6C($s2)
    ctx->pc = 0x1dbd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_1dbd24:
    // 0x1dbd24: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x1dbd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1dbd28:
    // 0x1dbd28: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dbd28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dbd2c:
    // 0x1dbd2c: 0x320f809  jalr        $t9
label_1dbd30:
    if (ctx->pc == 0x1DBD30u) {
        ctx->pc = 0x1DBD34u;
        goto label_1dbd34;
    }
    ctx->pc = 0x1DBD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBD34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DBD34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD34u; }
            if (ctx->pc != 0x1DBD34u) { return; }
        }
        }
    }
    ctx->pc = 0x1DBD34u;
label_1dbd34:
    // 0x1dbd34: 0xc077128  jal         func_1DC4A0
label_1dbd38:
    if (ctx->pc == 0x1DBD38u) {
        ctx->pc = 0x1DBD38u;
            // 0x1dbd38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD3Cu;
        goto label_1dbd3c;
    }
    ctx->pc = 0x1DBD34u;
    SET_GPR_U32(ctx, 31, 0x1DBD3Cu);
    ctx->pc = 0x1DBD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD34u;
            // 0x1dbd38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4A0u;
    if (runtime->hasFunction(0x1DC4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD3Cu; }
        if (ctx->pc != 0x1DBD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC4A0_0x1dc4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD3Cu; }
        if (ctx->pc != 0x1DBD3Cu) { return; }
    }
    ctx->pc = 0x1DBD3Cu;
label_1dbd3c:
    // 0x1dbd3c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dbd40:
    if (ctx->pc == 0x1DBD40u) {
        ctx->pc = 0x1DBD44u;
        goto label_1dbd44;
    }
    ctx->pc = 0x1DBD3Cu;
    {
        const bool branch_taken_0x1dbd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd3c) {
            ctx->pc = 0x1DBD94u;
            goto label_1dbd94;
        }
    }
    ctx->pc = 0x1DBD44u;
label_1dbd44:
    // 0x1dbd44: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x1dbd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1dbd48:
    // 0x1dbd48: 0xc077124  jal         func_1DC490
label_1dbd4c:
    if (ctx->pc == 0x1DBD4Cu) {
        ctx->pc = 0x1DBD50u;
        goto label_1dbd50;
    }
    ctx->pc = 0x1DBD48u;
    SET_GPR_U32(ctx, 31, 0x1DBD50u);
    ctx->pc = 0x1DC490u;
    if (runtime->hasFunction(0x1DC490u)) {
        auto targetFn = runtime->lookupFunction(0x1DC490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD50u; }
        if (ctx->pc != 0x1DBD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC490_0x1dc490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD50u; }
        if (ctx->pc != 0x1DBD50u) { return; }
    }
    ctx->pc = 0x1DBD50u;
label_1dbd50:
    // 0x1dbd50: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1dbd54:
    if (ctx->pc == 0x1DBD54u) {
        ctx->pc = 0x1DBD58u;
        goto label_1dbd58;
    }
    ctx->pc = 0x1DBD50u;
    {
        const bool branch_taken_0x1dbd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd50) {
            ctx->pc = 0x1DBD94u;
            goto label_1dbd94;
        }
    }
    ctx->pc = 0x1DBD58u;
label_1dbd58:
    // 0x1dbd58: 0xc07711c  jal         func_1DC470
label_1dbd5c:
    if (ctx->pc == 0x1DBD5Cu) {
        ctx->pc = 0x1DBD5Cu;
            // 0x1dbd5c: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->pc = 0x1DBD60u;
        goto label_1dbd60;
    }
    ctx->pc = 0x1DBD58u;
    SET_GPR_U32(ctx, 31, 0x1DBD60u);
    ctx->pc = 0x1DBD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD58u;
            // 0x1dbd5c: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC470u;
    if (runtime->hasFunction(0x1DC470u)) {
        auto targetFn = runtime->lookupFunction(0x1DC470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD60u; }
        if (ctx->pc != 0x1DBD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC470_0x1dc470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD60u; }
        if (ctx->pc != 0x1DBD60u) { return; }
    }
    ctx->pc = 0x1DBD60u;
label_1dbd60:
    // 0x1dbd60: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x1dbd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1dbd64:
    // 0x1dbd64: 0xc077114  jal         func_1DC450
label_1dbd68:
    if (ctx->pc == 0x1DBD68u) {
        ctx->pc = 0x1DBD68u;
            // 0x1dbd68: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD6Cu;
        goto label_1dbd6c;
    }
    ctx->pc = 0x1DBD64u;
    SET_GPR_U32(ctx, 31, 0x1DBD6Cu);
    ctx->pc = 0x1DBD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD64u;
            // 0x1dbd68: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC450u;
    if (runtime->hasFunction(0x1DC450u)) {
        auto targetFn = runtime->lookupFunction(0x1DC450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD6Cu; }
        if (ctx->pc != 0x1DBD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC450_0x1dc450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD6Cu; }
        if (ctx->pc != 0x1DBD6Cu) { return; }
    }
    ctx->pc = 0x1DBD6Cu;
label_1dbd6c:
    // 0x1dbd6c: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x1dbd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1dbd70:
    // 0x1dbd70: 0xc077110  jal         func_1DC440
label_1dbd74:
    if (ctx->pc == 0x1DBD74u) {
        ctx->pc = 0x1DBD74u;
            // 0x1dbd74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD78u;
        goto label_1dbd78;
    }
    ctx->pc = 0x1DBD70u;
    SET_GPR_U32(ctx, 31, 0x1DBD78u);
    ctx->pc = 0x1DBD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD70u;
            // 0x1dbd74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC440u;
    if (runtime->hasFunction(0x1DC440u)) {
        auto targetFn = runtime->lookupFunction(0x1DC440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD78u; }
        if (ctx->pc != 0x1DBD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC440_0x1dc440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD78u; }
        if (ctx->pc != 0x1DBD78u) { return; }
    }
    ctx->pc = 0x1DBD78u;
label_1dbd78:
    // 0x1dbd78: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1dbd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1dbd7c:
    // 0x1dbd7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd80:
    // 0x1dbd80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dbd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd84:
    // 0x1dbd84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1dbd88:
    // 0x1dbd88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbd8c:
    // 0x1dbd8c: 0xc04a508  jal         func_129420
label_1dbd90:
    if (ctx->pc == 0x1DBD90u) {
        ctx->pc = 0x1DBD90u;
            // 0x1dbd90: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DBD94u;
        goto label_1dbd94;
    }
    ctx->pc = 0x1DBD8Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD94u);
    ctx->pc = 0x1DBD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD8Cu;
            // 0x1dbd90: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD94u; }
        if (ctx->pc != 0x1DBD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD94u; }
        if (ctx->pc != 0x1DBD94u) { return; }
    }
    ctx->pc = 0x1DBD94u;
label_1dbd94:
    // 0x1dbd94: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x1dbd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1dbd98:
    // 0x1dbd98: 0xc077104  jal         func_1DC410
label_1dbd9c:
    if (ctx->pc == 0x1DBD9Cu) {
        ctx->pc = 0x1DBD9Cu;
            // 0x1dbd9c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DBDA0u;
        goto label_1dbda0;
    }
    ctx->pc = 0x1DBD98u;
    SET_GPR_U32(ctx, 31, 0x1DBDA0u);
    ctx->pc = 0x1DBD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD98u;
            // 0x1dbd9c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC410u;
    if (runtime->hasFunction(0x1DC410u)) {
        auto targetFn = runtime->lookupFunction(0x1DC410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDA0u; }
        if (ctx->pc != 0x1DBDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC410_0x1dc410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDA0u; }
        if (ctx->pc != 0x1DBDA0u) { return; }
    }
    ctx->pc = 0x1DBDA0u;
label_1dbda0:
    // 0x1dbda0: 0xc077100  jal         func_1DC400
label_1dbda4:
    if (ctx->pc == 0x1DBDA4u) {
        ctx->pc = 0x1DBDA4u;
            // 0x1dbda4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDA8u;
        goto label_1dbda8;
    }
    ctx->pc = 0x1DBDA0u;
    SET_GPR_U32(ctx, 31, 0x1DBDA8u);
    ctx->pc = 0x1DBDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDA0u;
            // 0x1dbda4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC400u;
    if (runtime->hasFunction(0x1DC400u)) {
        auto targetFn = runtime->lookupFunction(0x1DC400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDA8u; }
        if (ctx->pc != 0x1DBDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC400_0x1dc400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDA8u; }
        if (ctx->pc != 0x1DBDA8u) { return; }
    }
    ctx->pc = 0x1DBDA8u;
label_1dbda8:
    // 0x1dbda8: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x1dbda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1dbdac:
    // 0x1dbdac: 0xc0770f8  jal         func_1DC3E0
label_1dbdb0:
    if (ctx->pc == 0x1DBDB0u) {
        ctx->pc = 0x1DBDB0u;
            // 0x1dbdb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDB4u;
        goto label_1dbdb4;
    }
    ctx->pc = 0x1DBDACu;
    SET_GPR_U32(ctx, 31, 0x1DBDB4u);
    ctx->pc = 0x1DBDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDACu;
            // 0x1dbdb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3E0u;
    if (runtime->hasFunction(0x1DC3E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDB4u; }
        if (ctx->pc != 0x1DBDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3E0_0x1dc3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDB4u; }
        if (ctx->pc != 0x1DBDB4u) { return; }
    }
    ctx->pc = 0x1DBDB4u;
label_1dbdb4:
    // 0x1dbdb4: 0x8e420d9c  lw          $v0, 0xD9C($s2)
    ctx->pc = 0x1dbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_1dbdb8:
    // 0x1dbdb8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1dbdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1dbdbc:
    // 0x1dbdbc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1dbdc0:
    if (ctx->pc == 0x1DBDC0u) {
        ctx->pc = 0x1DBDC0u;
            // 0x1dbdc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDC4u;
        goto label_1dbdc4;
    }
    ctx->pc = 0x1DBDBCu;
    {
        const bool branch_taken_0x1dbdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbdbc) {
            ctx->pc = 0x1DBDC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDBCu;
            // 0x1dbdc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBDE0u;
            goto label_1dbde0;
        }
    }
    ctx->pc = 0x1DBDC4u;
label_1dbdc4:
    // 0x1dbdc4: 0xc0772ec  jal         func_1DCBB0
label_1dbdc8:
    if (ctx->pc == 0x1DBDC8u) {
        ctx->pc = 0x1DBDC8u;
            // 0x1dbdc8: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x1DBDCCu;
        goto label_1dbdcc;
    }
    ctx->pc = 0x1DBDC4u;
    SET_GPR_U32(ctx, 31, 0x1DBDCCu);
    ctx->pc = 0x1DBDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDC4u;
            // 0x1dbdc8: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (runtime->hasFunction(0x1DCBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDCCu; }
        if (ctx->pc != 0x1DBDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBB0_0x1dcbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDCCu; }
        if (ctx->pc != 0x1DBDCCu) { return; }
    }
    ctx->pc = 0x1DBDCCu;
label_1dbdcc:
    // 0x1dbdcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dbdd0:
    if (ctx->pc == 0x1DBDD0u) {
        ctx->pc = 0x1DBDD4u;
        goto label_1dbdd4;
    }
    ctx->pc = 0x1DBDCCu;
    {
        const bool branch_taken_0x1dbdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbdcc) {
            ctx->pc = 0x1DBDDCu;
            goto label_1dbddc;
        }
    }
    ctx->pc = 0x1DBDD4u;
label_1dbdd4:
    // 0x1dbdd4: 0xc0bd7a0  jal         func_2F5E80
label_1dbdd8:
    if (ctx->pc == 0x1DBDD8u) {
        ctx->pc = 0x1DBDD8u;
            // 0x1dbdd8: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x1DBDDCu;
        goto label_1dbddc;
    }
    ctx->pc = 0x1DBDD4u;
    SET_GPR_U32(ctx, 31, 0x1DBDDCu);
    ctx->pc = 0x1DBDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDD4u;
            // 0x1dbdd8: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E80u;
    if (runtime->hasFunction(0x2F5E80u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDDCu; }
        if (ctx->pc != 0x1DBDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E80_0x2f5e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDDCu; }
        if (ctx->pc != 0x1DBDDCu) { return; }
    }
    ctx->pc = 0x1DBDDCu;
label_1dbddc:
    // 0x1dbddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dbddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dbde0:
    // 0x1dbde0: 0xc0770f4  jal         func_1DC3D0
label_1dbde4:
    if (ctx->pc == 0x1DBDE4u) {
        ctx->pc = 0x1DBDE8u;
        goto label_1dbde8;
    }
    ctx->pc = 0x1DBDE0u;
    SET_GPR_U32(ctx, 31, 0x1DBDE8u);
    ctx->pc = 0x1DC3D0u;
    if (runtime->hasFunction(0x1DC3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDE8u; }
        if (ctx->pc != 0x1DBDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3D0_0x1dc3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDE8u; }
        if (ctx->pc != 0x1DBDE8u) { return; }
    }
    ctx->pc = 0x1DBDE8u;
label_1dbde8:
    // 0x1dbde8: 0x8e420d9c  lw          $v0, 0xD9C($s2)
    ctx->pc = 0x1dbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_1dbdec:
    // 0x1dbdec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1dbdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1dbdf0:
    // 0x1dbdf0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1dbdf4:
    if (ctx->pc == 0x1DBDF4u) {
        ctx->pc = 0x1DBDF4u;
            // 0x1dbdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDF8u;
        goto label_1dbdf8;
    }
    ctx->pc = 0x1DBDF0u;
    {
        const bool branch_taken_0x1dbdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbdf0) {
            ctx->pc = 0x1DBDF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDF0u;
            // 0x1dbdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBE14u;
            goto label_1dbe14;
        }
    }
    ctx->pc = 0x1DBDF8u;
label_1dbdf8:
    // 0x1dbdf8: 0xc0772ec  jal         func_1DCBB0
label_1dbdfc:
    if (ctx->pc == 0x1DBDFCu) {
        ctx->pc = 0x1DBDFCu;
            // 0x1dbdfc: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x1DBE00u;
        goto label_1dbe00;
    }
    ctx->pc = 0x1DBDF8u;
    SET_GPR_U32(ctx, 31, 0x1DBE00u);
    ctx->pc = 0x1DBDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDF8u;
            // 0x1dbdfc: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (runtime->hasFunction(0x1DCBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE00u; }
        if (ctx->pc != 0x1DBE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBB0_0x1dcbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE00u; }
        if (ctx->pc != 0x1DBE00u) { return; }
    }
    ctx->pc = 0x1DBE00u;
label_1dbe00:
    // 0x1dbe00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dbe04:
    if (ctx->pc == 0x1DBE04u) {
        ctx->pc = 0x1DBE08u;
        goto label_1dbe08;
    }
    ctx->pc = 0x1DBE00u;
    {
        const bool branch_taken_0x1dbe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbe00) {
            ctx->pc = 0x1DBE10u;
            goto label_1dbe10;
        }
    }
    ctx->pc = 0x1DBE08u;
label_1dbe08:
    // 0x1dbe08: 0xc0bd788  jal         func_2F5E20
label_1dbe0c:
    if (ctx->pc == 0x1DBE0Cu) {
        ctx->pc = 0x1DBE0Cu;
            // 0x1dbe0c: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x1DBE10u;
        goto label_1dbe10;
    }
    ctx->pc = 0x1DBE08u;
    SET_GPR_U32(ctx, 31, 0x1DBE10u);
    ctx->pc = 0x1DBE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE08u;
            // 0x1dbe0c: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E20u;
    if (runtime->hasFunction(0x2F5E20u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE10u; }
        if (ctx->pc != 0x1DBE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E20_0x2f5e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE10u; }
        if (ctx->pc != 0x1DBE10u) { return; }
    }
    ctx->pc = 0x1DBE10u;
label_1dbe10:
    // 0x1dbe10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dbe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe14:
    // 0x1dbe14: 0xc07725c  jal         func_1DC970
label_1dbe18:
    if (ctx->pc == 0x1DBE18u) {
        ctx->pc = 0x1DBE1Cu;
        goto label_1dbe1c;
    }
    ctx->pc = 0x1DBE14u;
    SET_GPR_U32(ctx, 31, 0x1DBE1Cu);
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE1Cu; }
        if (ctx->pc != 0x1DBE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE1Cu; }
        if (ctx->pc != 0x1DBE1Cu) { return; }
    }
    ctx->pc = 0x1DBE1Cu;
label_1dbe1c:
    // 0x1dbe1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbe1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe20:
    // 0x1dbe20: 0xc07725c  jal         func_1DC970
label_1dbe24:
    if (ctx->pc == 0x1DBE24u) {
        ctx->pc = 0x1DBE24u;
            // 0x1dbe24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE28u;
        goto label_1dbe28;
    }
    ctx->pc = 0x1DBE20u;
    SET_GPR_U32(ctx, 31, 0x1DBE28u);
    ctx->pc = 0x1DBE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE20u;
            // 0x1dbe24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE28u; }
        if (ctx->pc != 0x1DBE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE28u; }
        if (ctx->pc != 0x1DBE28u) { return; }
    }
    ctx->pc = 0x1DBE28u;
label_1dbe28:
    // 0x1dbe28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe2c:
    // 0x1dbe2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dbe2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe30:
    // 0x1dbe30: 0xc04cd60  jal         func_133580
label_1dbe34:
    if (ctx->pc == 0x1DBE34u) {
        ctx->pc = 0x1DBE34u;
            // 0x1dbe34: 0x26460140  addiu       $a2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->pc = 0x1DBE38u;
        goto label_1dbe38;
    }
    ctx->pc = 0x1DBE30u;
    SET_GPR_U32(ctx, 31, 0x1DBE38u);
    ctx->pc = 0x1DBE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE30u;
            // 0x1dbe34: 0x26460140  addiu       $a2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE38u; }
        if (ctx->pc != 0x1DBE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE38u; }
        if (ctx->pc != 0x1DBE38u) { return; }
    }
    ctx->pc = 0x1DBE38u;
label_1dbe38:
    // 0x1dbe38: 0xc07724c  jal         func_1DC930
label_1dbe3c:
    if (ctx->pc == 0x1DBE3Cu) {
        ctx->pc = 0x1DBE3Cu;
            // 0x1dbe3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE40u;
        goto label_1dbe40;
    }
    ctx->pc = 0x1DBE38u;
    SET_GPR_U32(ctx, 31, 0x1DBE40u);
    ctx->pc = 0x1DBE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE38u;
            // 0x1dbe3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE40u; }
        if (ctx->pc != 0x1DBE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE40u; }
        if (ctx->pc != 0x1DBE40u) { return; }
    }
    ctx->pc = 0x1DBE40u;
label_1dbe40:
    // 0x1dbe40: 0xc0bbf08  jal         func_2EFC20
label_1dbe44:
    if (ctx->pc == 0x1DBE44u) {
        ctx->pc = 0x1DBE44u;
            // 0x1dbe44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE48u;
        goto label_1dbe48;
    }
    ctx->pc = 0x1DBE40u;
    SET_GPR_U32(ctx, 31, 0x1DBE48u);
    ctx->pc = 0x1DBE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE40u;
            // 0x1dbe44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EFC20u;
    if (runtime->hasFunction(0x2EFC20u)) {
        auto targetFn = runtime->lookupFunction(0x2EFC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE48u; }
        if (ctx->pc != 0x1DBE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EFC20_0x2efc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE48u; }
        if (ctx->pc != 0x1DBE48u) { return; }
    }
    ctx->pc = 0x1DBE48u;
label_1dbe48:
    // 0x1dbe48: 0xc07725c  jal         func_1DC970
label_1dbe4c:
    if (ctx->pc == 0x1DBE4Cu) {
        ctx->pc = 0x1DBE4Cu;
            // 0x1dbe4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE50u;
        goto label_1dbe50;
    }
    ctx->pc = 0x1DBE48u;
    SET_GPR_U32(ctx, 31, 0x1DBE50u);
    ctx->pc = 0x1DBE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE48u;
            // 0x1dbe4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE50u; }
        if (ctx->pc != 0x1DBE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE50u; }
        if (ctx->pc != 0x1DBE50u) { return; }
    }
    ctx->pc = 0x1DBE50u;
label_1dbe50:
    // 0x1dbe50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbe50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe54:
    // 0x1dbe54: 0xc07725c  jal         func_1DC970
label_1dbe58:
    if (ctx->pc == 0x1DBE58u) {
        ctx->pc = 0x1DBE58u;
            // 0x1dbe58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE5Cu;
        goto label_1dbe5c;
    }
    ctx->pc = 0x1DBE54u;
    SET_GPR_U32(ctx, 31, 0x1DBE5Cu);
    ctx->pc = 0x1DBE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE54u;
            // 0x1dbe58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE5Cu; }
        if (ctx->pc != 0x1DBE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE5Cu; }
        if (ctx->pc != 0x1DBE5Cu) { return; }
    }
    ctx->pc = 0x1DBE5Cu;
label_1dbe5c:
    // 0x1dbe5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbe5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe60:
    // 0x1dbe60: 0xc07724c  jal         func_1DC930
label_1dbe64:
    if (ctx->pc == 0x1DBE64u) {
        ctx->pc = 0x1DBE64u;
            // 0x1dbe64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE68u;
        goto label_1dbe68;
    }
    ctx->pc = 0x1DBE60u;
    SET_GPR_U32(ctx, 31, 0x1DBE68u);
    ctx->pc = 0x1DBE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE60u;
            // 0x1dbe64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE68u; }
        if (ctx->pc != 0x1DBE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE68u; }
        if (ctx->pc != 0x1DBE68u) { return; }
    }
    ctx->pc = 0x1DBE68u;
label_1dbe68:
    // 0x1dbe68: 0xc0770f0  jal         func_1DC3C0
label_1dbe6c:
    if (ctx->pc == 0x1DBE6Cu) {
        ctx->pc = 0x1DBE6Cu;
            // 0x1dbe6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE70u;
        goto label_1dbe70;
    }
    ctx->pc = 0x1DBE68u;
    SET_GPR_U32(ctx, 31, 0x1DBE70u);
    ctx->pc = 0x1DBE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE68u;
            // 0x1dbe6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3C0u;
    if (runtime->hasFunction(0x1DC3C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE70u; }
        if (ctx->pc != 0x1DBE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3C0_0x1dc3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE70u; }
        if (ctx->pc != 0x1DBE70u) { return; }
    }
    ctx->pc = 0x1DBE70u;
label_1dbe70:
    // 0x1dbe70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe74:
    // 0x1dbe74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dbe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe78:
    // 0x1dbe78: 0xc04cd60  jal         func_133580
label_1dbe7c:
    if (ctx->pc == 0x1DBE7Cu) {
        ctx->pc = 0x1DBE7Cu;
            // 0x1dbe7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE80u;
        goto label_1dbe80;
    }
    ctx->pc = 0x1DBE78u;
    SET_GPR_U32(ctx, 31, 0x1DBE80u);
    ctx->pc = 0x1DBE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE78u;
            // 0x1dbe7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE80u; }
        if (ctx->pc != 0x1DBE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE80u; }
        if (ctx->pc != 0x1DBE80u) { return; }
    }
    ctx->pc = 0x1DBE80u;
label_1dbe80:
    // 0x1dbe80: 0xc0bf9b4  jal         func_2FE6D0
label_1dbe84:
    if (ctx->pc == 0x1DBE84u) {
        ctx->pc = 0x1DBE84u;
            // 0x1dbe84: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->pc = 0x1DBE88u;
        goto label_1dbe88;
    }
    ctx->pc = 0x1DBE80u;
    SET_GPR_U32(ctx, 31, 0x1DBE88u);
    ctx->pc = 0x1DBE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE80u;
            // 0x1dbe84: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE6D0u;
    if (runtime->hasFunction(0x2FE6D0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE88u; }
        if (ctx->pc != 0x1DBE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE6D0_0x2fe6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE88u; }
        if (ctx->pc != 0x1DBE88u) { return; }
    }
    ctx->pc = 0x1DBE88u;
label_1dbe88:
    // 0x1dbe88: 0xc0760a8  jal         func_1D82A0
label_1dbe8c:
    if (ctx->pc == 0x1DBE8Cu) {
        ctx->pc = 0x1DBE8Cu;
            // 0x1dbe8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE90u;
        goto label_1dbe90;
    }
    ctx->pc = 0x1DBE88u;
    SET_GPR_U32(ctx, 31, 0x1DBE90u);
    ctx->pc = 0x1DBE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE88u;
            // 0x1dbe8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D82A0u;
    if (runtime->hasFunction(0x1D82A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE90u; }
        if (ctx->pc != 0x1DBE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D82A0_0x1d82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE90u; }
        if (ctx->pc != 0x1DBE90u) { return; }
    }
    ctx->pc = 0x1DBE90u;
label_1dbe90:
    // 0x1dbe90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dbe94:
    // 0x1dbe94: 0x26450c6c  addiu       $a1, $s2, 0xC6C
    ctx->pc = 0x1dbe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3180));
label_1dbe98:
    // 0x1dbe98: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x1dbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1dbe9c:
    // 0x1dbe9c: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x1dbe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_1dbea0:
    // 0x1dbea0: 0x26470820  addiu       $a3, $s2, 0x820
    ctx->pc = 0x1dbea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
label_1dbea4:
    // 0x1dbea4: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x1dbea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1dbea8:
    // 0x1dbea8: 0xc0c614c  jal         func_318530
label_1dbeac:
    if (ctx->pc == 0x1DBEACu) {
        ctx->pc = 0x1DBEACu;
            // 0x1dbeac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEB0u;
        goto label_1dbeb0;
    }
    ctx->pc = 0x1DBEA8u;
    SET_GPR_U32(ctx, 31, 0x1DBEB0u);
    ctx->pc = 0x1DBEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBEA8u;
            // 0x1dbeac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEB0u; }
        if (ctx->pc != 0x1DBEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318530_0x318530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEB0u; }
        if (ctx->pc != 0x1DBEB0u) { return; }
    }
    ctx->pc = 0x1DBEB0u;
label_1dbeb0:
    // 0x1dbeb0: 0xc0770ec  jal         func_1DC3B0
label_1dbeb4:
    if (ctx->pc == 0x1DBEB4u) {
        ctx->pc = 0x1DBEB4u;
            // 0x1dbeb4: 0x26440c6c  addiu       $a0, $s2, 0xC6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3180));
        ctx->pc = 0x1DBEB8u;
        goto label_1dbeb8;
    }
    ctx->pc = 0x1DBEB0u;
    SET_GPR_U32(ctx, 31, 0x1DBEB8u);
    ctx->pc = 0x1DBEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBEB0u;
            // 0x1dbeb4: 0x26440c6c  addiu       $a0, $s2, 0xC6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B0u;
    if (runtime->hasFunction(0x1DC3B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEB8u; }
        if (ctx->pc != 0x1DBEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3B0_0x1dc3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEB8u; }
        if (ctx->pc != 0x1DBEB8u) { return; }
    }
    ctx->pc = 0x1DBEB8u;
label_1dbeb8:
    // 0x1dbeb8: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_1dbebc:
    // 0x1dbebc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1dbebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1dbec0:
    // 0x1dbec0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dbec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dbec4:
    // 0x1dbec4: 0x0  nop
    ctx->pc = 0x1dbec4u;
    // NOP
label_1dbec8:
    // 0x1dbec8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dbec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dbecc:
    // 0x1dbecc: 0x45020072  bc1fl       . + 4 + (0x72 << 2)
label_1dbed0:
    if (ctx->pc == 0x1DBED0u) {
        ctx->pc = 0x1DBED0u;
            // 0x1dbed0: 0x3c034270  lui         $v1, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
        ctx->pc = 0x1DBED4u;
        goto label_1dbed4;
    }
    ctx->pc = 0x1DBECCu;
    {
        const bool branch_taken_0x1dbecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbecc) {
            ctx->pc = 0x1DBED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBECCu;
            // 0x1dbed0: 0x3c034270  lui         $v1, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC098u;
            goto label_1dc098;
        }
    }
    ctx->pc = 0x1DBED4u;
label_1dbed4:
    // 0x1dbed4: 0xc077574  jal         func_1DD5D0
label_1dbed8:
    if (ctx->pc == 0x1DBED8u) {
        ctx->pc = 0x1DBED8u;
            // 0x1dbed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEDCu;
        goto label_1dbedc;
    }
    ctx->pc = 0x1DBED4u;
    SET_GPR_U32(ctx, 31, 0x1DBEDCu);
    ctx->pc = 0x1DBED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBED4u;
            // 0x1dbed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEDCu; }
        if (ctx->pc != 0x1DBEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEDCu; }
        if (ctx->pc != 0x1DBEDCu) { return; }
    }
    ctx->pc = 0x1DBEDCu;
label_1dbedc:
    // 0x1dbedc: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_1dbee0:
    if (ctx->pc == 0x1DBEE0u) {
        ctx->pc = 0x1DBEE4u;
        goto label_1dbee4;
    }
    ctx->pc = 0x1DBEDCu;
    {
        const bool branch_taken_0x1dbedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbedc) {
            ctx->pc = 0x1DC094u;
            goto label_1dc094;
        }
    }
    ctx->pc = 0x1DBEE4u;
label_1dbee4:
    // 0x1dbee4: 0xc077574  jal         func_1DD5D0
label_1dbee8:
    if (ctx->pc == 0x1DBEE8u) {
        ctx->pc = 0x1DBEE8u;
            // 0x1dbee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEECu;
        goto label_1dbeec;
    }
    ctx->pc = 0x1DBEE4u;
    SET_GPR_U32(ctx, 31, 0x1DBEECu);
    ctx->pc = 0x1DBEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBEE4u;
            // 0x1dbee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEECu; }
        if (ctx->pc != 0x1DBEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEECu; }
        if (ctx->pc != 0x1DBEECu) { return; }
    }
    ctx->pc = 0x1DBEECu;
label_1dbeec:
    // 0x1dbeec: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1dbeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1dbef0:
    // 0x1dbef0: 0x10430068  beq         $v0, $v1, . + 4 + (0x68 << 2)
label_1dbef4:
    if (ctx->pc == 0x1DBEF4u) {
        ctx->pc = 0x1DBEF8u;
        goto label_1dbef8;
    }
    ctx->pc = 0x1DBEF0u;
    {
        const bool branch_taken_0x1dbef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dbef0) {
            ctx->pc = 0x1DC094u;
            goto label_1dc094;
        }
    }
    ctx->pc = 0x1DBEF8u;
label_1dbef8:
    // 0x1dbef8: 0xc077574  jal         func_1DD5D0
label_1dbefc:
    if (ctx->pc == 0x1DBEFCu) {
        ctx->pc = 0x1DBEFCu;
            // 0x1dbefc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF00u;
        goto label_1dbf00;
    }
    ctx->pc = 0x1DBEF8u;
    SET_GPR_U32(ctx, 31, 0x1DBF00u);
    ctx->pc = 0x1DBEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBEF8u;
            // 0x1dbefc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF00u; }
        if (ctx->pc != 0x1DBF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF00u; }
        if (ctx->pc != 0x1DBF00u) { return; }
    }
    ctx->pc = 0x1DBF00u;
label_1dbf00:
    // 0x1dbf00: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1dbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1dbf04:
    // 0x1dbf04: 0x10430063  beq         $v0, $v1, . + 4 + (0x63 << 2)
label_1dbf08:
    if (ctx->pc == 0x1DBF08u) {
        ctx->pc = 0x1DBF0Cu;
        goto label_1dbf0c;
    }
    ctx->pc = 0x1DBF04u;
    {
        const bool branch_taken_0x1dbf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dbf04) {
            ctx->pc = 0x1DC094u;
            goto label_1dc094;
        }
    }
    ctx->pc = 0x1DBF0Cu;
label_1dbf0c:
    // 0x1dbf0c: 0xc077574  jal         func_1DD5D0
label_1dbf10:
    if (ctx->pc == 0x1DBF10u) {
        ctx->pc = 0x1DBF10u;
            // 0x1dbf10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF14u;
        goto label_1dbf14;
    }
    ctx->pc = 0x1DBF0Cu;
    SET_GPR_U32(ctx, 31, 0x1DBF14u);
    ctx->pc = 0x1DBF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF0Cu;
            // 0x1dbf10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF14u; }
        if (ctx->pc != 0x1DBF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF14u; }
        if (ctx->pc != 0x1DBF14u) { return; }
    }
    ctx->pc = 0x1DBF14u;
label_1dbf14:
    // 0x1dbf14: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1dbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1dbf18:
    // 0x1dbf18: 0x1043005e  beq         $v0, $v1, . + 4 + (0x5E << 2)
label_1dbf1c:
    if (ctx->pc == 0x1DBF1Cu) {
        ctx->pc = 0x1DBF20u;
        goto label_1dbf20;
    }
    ctx->pc = 0x1DBF18u;
    {
        const bool branch_taken_0x1dbf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dbf18) {
            ctx->pc = 0x1DC094u;
            goto label_1dc094;
        }
    }
    ctx->pc = 0x1DBF20u;
label_1dbf20:
    // 0x1dbf20: 0xc077574  jal         func_1DD5D0
label_1dbf24:
    if (ctx->pc == 0x1DBF24u) {
        ctx->pc = 0x1DBF24u;
            // 0x1dbf24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF28u;
        goto label_1dbf28;
    }
    ctx->pc = 0x1DBF20u;
    SET_GPR_U32(ctx, 31, 0x1DBF28u);
    ctx->pc = 0x1DBF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF20u;
            // 0x1dbf24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF28u; }
        if (ctx->pc != 0x1DBF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF28u; }
        if (ctx->pc != 0x1DBF28u) { return; }
    }
    ctx->pc = 0x1DBF28u;
label_1dbf28:
    // 0x1dbf28: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x1dbf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1dbf2c:
    // 0x1dbf2c: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
label_1dbf30:
    if (ctx->pc == 0x1DBF30u) {
        ctx->pc = 0x1DBF34u;
        goto label_1dbf34;
    }
    ctx->pc = 0x1DBF2Cu;
    {
        const bool branch_taken_0x1dbf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dbf2c) {
            ctx->pc = 0x1DC094u;
            goto label_1dc094;
        }
    }
    ctx->pc = 0x1DBF34u;
label_1dbf34:
    // 0x1dbf34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dbf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dbf38:
    // 0x1dbf38: 0xc0770e8  jal         func_1DC3A0
label_1dbf3c:
    if (ctx->pc == 0x1DBF3Cu) {
        ctx->pc = 0x1DBF3Cu;
            // 0x1dbf3c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1DBF40u;
        goto label_1dbf40;
    }
    ctx->pc = 0x1DBF38u;
    SET_GPR_U32(ctx, 31, 0x1DBF40u);
    ctx->pc = 0x1DBF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF38u;
            // 0x1dbf3c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3A0u;
    if (runtime->hasFunction(0x1DC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF40u; }
        if (ctx->pc != 0x1DBF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3A0_0x1dc3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF40u; }
        if (ctx->pc != 0x1DBF40u) { return; }
    }
    ctx->pc = 0x1DBF40u;
label_1dbf40:
    // 0x1dbf40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dbf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dbf44:
    // 0x1dbf44: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_1dbf48:
    if (ctx->pc == 0x1DBF48u) {
        ctx->pc = 0x1DBF4Cu;
        goto label_1dbf4c;
    }
    ctx->pc = 0x1DBF44u;
    {
        const bool branch_taken_0x1dbf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbf44) {
            ctx->pc = 0x1DC094u;
            goto label_1dc094;
        }
    }
    ctx->pc = 0x1DBF4Cu;
label_1dbf4c:
    // 0x1dbf4c: 0xc07758c  jal         func_1DD630
label_1dbf50:
    if (ctx->pc == 0x1DBF50u) {
        ctx->pc = 0x1DBF50u;
            // 0x1dbf50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF54u;
        goto label_1dbf54;
    }
    ctx->pc = 0x1DBF4Cu;
    SET_GPR_U32(ctx, 31, 0x1DBF54u);
    ctx->pc = 0x1DBF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF4Cu;
            // 0x1dbf50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD630u;
    if (runtime->hasFunction(0x1DD630u)) {
        auto targetFn = runtime->lookupFunction(0x1DD630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF54u; }
        if (ctx->pc != 0x1DBF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD630_0x1dd630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF54u; }
        if (ctx->pc != 0x1DBF54u) { return; }
    }
    ctx->pc = 0x1DBF54u;
label_1dbf54:
    // 0x1dbf54: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1dbf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1dbf58:
    // 0x1dbf58: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_1dbf5c:
    if (ctx->pc == 0x1DBF5Cu) {
        ctx->pc = 0x1DBF60u;
        goto label_1dbf60;
    }
    ctx->pc = 0x1DBF58u;
    {
        const bool branch_taken_0x1dbf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbf58) {
            ctx->pc = 0x1DC094u;
            goto label_1dc094;
        }
    }
    ctx->pc = 0x1DBF60u;
label_1dbf60:
    // 0x1dbf60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dbf64:
    // 0x1dbf64: 0xc0770e4  jal         func_1DC390
label_1dbf68:
    if (ctx->pc == 0x1DBF68u) {
        ctx->pc = 0x1DBF68u;
            // 0x1dbf68: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1DBF6Cu;
        goto label_1dbf6c;
    }
    ctx->pc = 0x1DBF64u;
    SET_GPR_U32(ctx, 31, 0x1DBF6Cu);
    ctx->pc = 0x1DBF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF64u;
            // 0x1dbf68: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF6Cu; }
        if (ctx->pc != 0x1DBF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF6Cu; }
        if (ctx->pc != 0x1DBF6Cu) { return; }
    }
    ctx->pc = 0x1DBF6Cu;
label_1dbf6c:
    // 0x1dbf6c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1dbf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1dbf70:
    // 0x1dbf70: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_1dbf74:
    if (ctx->pc == 0x1DBF74u) {
        ctx->pc = 0x1DBF74u;
            // 0x1dbf74: 0xc6410e9c  lwc1        $f1, 0xE9C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1DBF78u;
        goto label_1dbf78;
    }
    ctx->pc = 0x1DBF70u;
    {
        const bool branch_taken_0x1dbf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dbf70) {
            ctx->pc = 0x1DBF74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF70u;
            // 0x1dbf74: 0xc6410e9c  lwc1        $f1, 0xE9C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBF90u;
            goto label_1dbf90;
        }
    }
    ctx->pc = 0x1DBF78u;
label_1dbf78:
    // 0x1dbf78: 0xc077574  jal         func_1DD5D0
label_1dbf7c:
    if (ctx->pc == 0x1DBF7Cu) {
        ctx->pc = 0x1DBF7Cu;
            // 0x1dbf7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF80u;
        goto label_1dbf80;
    }
    ctx->pc = 0x1DBF78u;
    SET_GPR_U32(ctx, 31, 0x1DBF80u);
    ctx->pc = 0x1DBF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF78u;
            // 0x1dbf7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF80u; }
        if (ctx->pc != 0x1DBF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF80u; }
        if (ctx->pc != 0x1DBF80u) { return; }
    }
    ctx->pc = 0x1DBF80u;
label_1dbf80:
    // 0x1dbf80: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1dbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1dbf84:
    // 0x1dbf84: 0x10430043  beq         $v0, $v1, . + 4 + (0x43 << 2)
label_1dbf88:
    if (ctx->pc == 0x1DBF88u) {
        ctx->pc = 0x1DBF8Cu;
        goto label_1dbf8c;
    }
    ctx->pc = 0x1DBF84u;
    {
        const bool branch_taken_0x1dbf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dbf84) {
            ctx->pc = 0x1DC094u;
            goto label_1dc094;
        }
    }
    ctx->pc = 0x1DBF8Cu;
label_1dbf8c:
    // 0x1dbf8c: 0xc6410e9c  lwc1        $f1, 0xE9C($s2)
    ctx->pc = 0x1dbf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbf90:
    // 0x1dbf90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dbf94:
    // 0x1dbf94: 0x0  nop
    ctx->pc = 0x1dbf94u;
    // NOP
label_1dbf98:
    // 0x1dbf98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dbf98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dbf9c:
    // 0x1dbf9c: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
label_1dbfa0:
    if (ctx->pc == 0x1DBFA0u) {
        ctx->pc = 0x1DBFA0u;
            // 0x1dbfa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFA4u;
        goto label_1dbfa4;
    }
    ctx->pc = 0x1DBF9Cu;
    {
        const bool branch_taken_0x1dbf9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbf9c) {
            ctx->pc = 0x1DBFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF9Cu;
            // 0x1dbfa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC028u;
            goto label_1dc028;
        }
    }
    ctx->pc = 0x1DBFA4u;
label_1dbfa4:
    // 0x1dbfa4: 0xc0775b8  jal         func_1DD6E0
label_1dbfa8:
    if (ctx->pc == 0x1DBFA8u) {
        ctx->pc = 0x1DBFACu;
        goto label_1dbfac;
    }
    ctx->pc = 0x1DBFA4u;
    SET_GPR_U32(ctx, 31, 0x1DBFACu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFACu; }
        if (ctx->pc != 0x1DBFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFACu; }
        if (ctx->pc != 0x1DBFACu) { return; }
    }
    ctx->pc = 0x1DBFACu;
label_1dbfac:
    // 0x1dbfac: 0xc0775b4  jal         func_1DD6D0
label_1dbfb0:
    if (ctx->pc == 0x1DBFB0u) {
        ctx->pc = 0x1DBFB0u;
            // 0x1dbfb0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DBFB4u;
        goto label_1dbfb4;
    }
    ctx->pc = 0x1DBFACu;
    SET_GPR_U32(ctx, 31, 0x1DBFB4u);
    ctx->pc = 0x1DBFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFACu;
            // 0x1dbfb0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFB4u; }
        if (ctx->pc != 0x1DBFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFB4u; }
        if (ctx->pc != 0x1DBFB4u) { return; }
    }
    ctx->pc = 0x1DBFB4u;
label_1dbfb4:
    // 0x1dbfb4: 0xc6420e9c  lwc1        $f2, 0xE9C($s2)
    ctx->pc = 0x1dbfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbfb8:
    // 0x1dbfb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dbfb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dbfbc:
    // 0x1dbfbc: 0x0  nop
    ctx->pc = 0x1dbfbcu;
    // NOP
label_1dbfc0:
    // 0x1dbfc0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dbfc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dbfc4:
    // 0x1dbfc4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dbfc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dbfc8:
    // 0x1dbfc8: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_1dbfcc:
    if (ctx->pc == 0x1DBFCCu) {
        ctx->pc = 0x1DBFCCu;
            // 0x1dbfcc: 0xe6400e9c  swc1        $f0, 0xE9C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3740), bits); }
        ctx->pc = 0x1DBFD0u;
        goto label_1dbfd0;
    }
    ctx->pc = 0x1DBFC8u;
    {
        const bool branch_taken_0x1dbfc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFC8u;
            // 0x1dbfcc: 0xe6400e9c  swc1        $f0, 0xE9C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3740), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfc8) {
            ctx->pc = 0x1DC0A4u;
            goto label_1dc0a4;
        }
    }
    ctx->pc = 0x1DBFD0u;
label_1dbfd0:
    // 0x1dbfd0: 0xe6410e9c  swc1        $f1, 0xE9C($s2)
    ctx->pc = 0x1dbfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3740), bits); }
label_1dbfd4:
    // 0x1dbfd4: 0xc07731c  jal         func_1DCC70
label_1dbfd8:
    if (ctx->pc == 0x1DBFD8u) {
        ctx->pc = 0x1DBFD8u;
            // 0x1dbfd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFDCu;
        goto label_1dbfdc;
    }
    ctx->pc = 0x1DBFD4u;
    SET_GPR_U32(ctx, 31, 0x1DBFDCu);
    ctx->pc = 0x1DBFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFD4u;
            // 0x1dbfd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFDCu; }
        if (ctx->pc != 0x1DBFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFDCu; }
        if (ctx->pc != 0x1DBFDCu) { return; }
    }
    ctx->pc = 0x1DBFDCu;
label_1dbfdc:
    // 0x1dbfdc: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x1dbfdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1dbfe0:
    // 0x1dbfe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfe4:
    // 0x1dbfe4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dbfe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dbfe8:
    // 0x1dbfe8: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x1dbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
label_1dbfec:
    // 0x1dbfec: 0x320f809  jalr        $t9
label_1dbff0:
    if (ctx->pc == 0x1DBFF0u) {
        ctx->pc = 0x1DBFF0u;
            // 0x1dbff0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1DBFF4u;
        goto label_1dbff4;
    }
    ctx->pc = 0x1DBFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBFF4u);
        ctx->pc = 0x1DBFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFECu;
            // 0x1dbff0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DBFF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFF4u; }
            if (ctx->pc != 0x1DBFF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DBFF4u;
label_1dbff4:
    // 0x1dbff4: 0xc07731c  jal         func_1DCC70
label_1dbff8:
    if (ctx->pc == 0x1DBFF8u) {
        ctx->pc = 0x1DBFF8u;
            // 0x1dbff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFFCu;
        goto label_1dbffc;
    }
    ctx->pc = 0x1DBFF4u;
    SET_GPR_U32(ctx, 31, 0x1DBFFCu);
    ctx->pc = 0x1DBFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFF4u;
            // 0x1dbff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFFCu; }
        if (ctx->pc != 0x1DBFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFFCu; }
        if (ctx->pc != 0x1DBFFCu) { return; }
    }
    ctx->pc = 0x1DBFFCu;
label_1dbffc:
    // 0x1dbffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc000:
    // 0x1dc000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dc004:
    // 0x1dc004: 0xc0770e0  jal         func_1DC380
label_1dc008:
    if (ctx->pc == 0x1DC008u) {
        ctx->pc = 0x1DC008u;
            // 0x1dc008: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x1DC00Cu;
        goto label_1dc00c;
    }
    ctx->pc = 0x1DC004u;
    SET_GPR_U32(ctx, 31, 0x1DC00Cu);
    ctx->pc = 0x1DC008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC004u;
            // 0x1dc008: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC00Cu; }
        if (ctx->pc != 0x1DC00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC00Cu; }
        if (ctx->pc != 0x1DC00Cu) { return; }
    }
    ctx->pc = 0x1DC00Cu;
label_1dc00c:
    // 0x1dc00c: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x1dc00cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1dc010:
    // 0x1dc010: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc014:
    // 0x1dc014: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1dc014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1dc018:
    // 0x1dc018: 0x320f809  jalr        $t9
label_1dc01c:
    if (ctx->pc == 0x1DC01Cu) {
        ctx->pc = 0x1DC01Cu;
            // 0x1dc01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC020u;
        goto label_1dc020;
    }
    ctx->pc = 0x1DC018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC020u);
        ctx->pc = 0x1DC01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC018u;
            // 0x1dc01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC020u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC020u; }
            if (ctx->pc != 0x1DC020u) { return; }
        }
        }
    }
    ctx->pc = 0x1DC020u;
label_1dc020:
    // 0x1dc020: 0x10000021  b           . + 4 + (0x21 << 2)
label_1dc024:
    if (ctx->pc == 0x1DC024u) {
        ctx->pc = 0x1DC024u;
            // 0x1dc024: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x1DC028u;
        goto label_1dc028;
    }
    ctx->pc = 0x1DC020u;
    {
        const bool branch_taken_0x1dc020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC020u;
            // 0x1dc024: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc020) {
            ctx->pc = 0x1DC0A8u;
            goto label_1dc0a8;
        }
    }
    ctx->pc = 0x1DC028u;
label_1dc028:
    // 0x1dc028: 0xc0770dc  jal         func_1DC370
label_1dc02c:
    if (ctx->pc == 0x1DC02Cu) {
        ctx->pc = 0x1DC02Cu;
            // 0x1dc02c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1DC030u;
        goto label_1dc030;
    }
    ctx->pc = 0x1DC028u;
    SET_GPR_U32(ctx, 31, 0x1DC030u);
    ctx->pc = 0x1DC02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC028u;
            // 0x1dc02c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC370u;
    if (runtime->hasFunction(0x1DC370u)) {
        auto targetFn = runtime->lookupFunction(0x1DC370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC030u; }
        if (ctx->pc != 0x1DC030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC370_0x1dc370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC030u; }
        if (ctx->pc != 0x1DC030u) { return; }
    }
    ctx->pc = 0x1DC030u;
label_1dc030:
    // 0x1dc030: 0xc6410e98  lwc1        $f1, 0xE98($s2)
    ctx->pc = 0x1dc030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dc034:
    // 0x1dc034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dc038:
    // 0x1dc038: 0x0  nop
    ctx->pc = 0x1dc038u;
    // NOP
label_1dc03c:
    // 0x1dc03c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc03cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dc040:
    // 0x1dc040: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_1dc044:
    if (ctx->pc == 0x1DC044u) {
        ctx->pc = 0x1DC044u;
            // 0x1dc044: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1DC048u;
        goto label_1dc048;
    }
    ctx->pc = 0x1DC040u;
    {
        const bool branch_taken_0x1dc040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc040) {
            ctx->pc = 0x1DC044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC040u;
            // 0x1dc044: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC07Cu;
            goto label_1dc07c;
        }
    }
    ctx->pc = 0x1DC048u;
label_1dc048:
    // 0x1dc048: 0xc0775b8  jal         func_1DD6E0
label_1dc04c:
    if (ctx->pc == 0x1DC04Cu) {
        ctx->pc = 0x1DC050u;
        goto label_1dc050;
    }
    ctx->pc = 0x1DC048u;
    SET_GPR_U32(ctx, 31, 0x1DC050u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC050u; }
        if (ctx->pc != 0x1DC050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC050u; }
        if (ctx->pc != 0x1DC050u) { return; }
    }
    ctx->pc = 0x1DC050u;
label_1dc050:
    // 0x1dc050: 0xc0775b4  jal         func_1DD6D0
label_1dc054:
    if (ctx->pc == 0x1DC054u) {
        ctx->pc = 0x1DC054u;
            // 0x1dc054: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DC058u;
        goto label_1dc058;
    }
    ctx->pc = 0x1DC050u;
    SET_GPR_U32(ctx, 31, 0x1DC058u);
    ctx->pc = 0x1DC054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC050u;
            // 0x1dc054: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC058u; }
        if (ctx->pc != 0x1DC058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC058u; }
        if (ctx->pc != 0x1DC058u) { return; }
    }
    ctx->pc = 0x1DC058u;
label_1dc058:
    // 0x1dc058: 0xc6420e98  lwc1        $f2, 0xE98($s2)
    ctx->pc = 0x1dc058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dc05c:
    // 0x1dc05c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dc05cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc060:
    // 0x1dc060: 0x0  nop
    ctx->pc = 0x1dc060u;
    // NOP
label_1dc064:
    // 0x1dc064: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dc064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dc068:
    // 0x1dc068: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dc068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dc06c:
    // 0x1dc06c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1dc070:
    if (ctx->pc == 0x1DC070u) {
        ctx->pc = 0x1DC070u;
            // 0x1dc070: 0xe6400e98  swc1        $f0, 0xE98($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3736), bits); }
        ctx->pc = 0x1DC074u;
        goto label_1dc074;
    }
    ctx->pc = 0x1DC06Cu;
    {
        const bool branch_taken_0x1dc06c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC06Cu;
            // 0x1dc070: 0xe6400e98  swc1        $f0, 0xE98($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3736), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc06c) {
            ctx->pc = 0x1DC0A4u;
            goto label_1dc0a4;
        }
    }
    ctx->pc = 0x1DC074u;
label_1dc074:
    // 0x1dc074: 0x1000000b  b           . + 4 + (0xB << 2)
label_1dc078:
    if (ctx->pc == 0x1DC078u) {
        ctx->pc = 0x1DC078u;
            // 0x1dc078: 0xe6410e98  swc1        $f1, 0xE98($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3736), bits); }
        ctx->pc = 0x1DC07Cu;
        goto label_1dc07c;
    }
    ctx->pc = 0x1DC074u;
    {
        const bool branch_taken_0x1dc074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC074u;
            // 0x1dc078: 0xe6410e98  swc1        $f1, 0xE98($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3736), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc074) {
            ctx->pc = 0x1DC0A4u;
            goto label_1dc0a4;
        }
    }
    ctx->pc = 0x1DC07Cu;
label_1dc07c:
    // 0x1dc07c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dc080:
    // 0x1dc080: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x1dc080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_1dc084:
    // 0x1dc084: 0x320f809  jalr        $t9
label_1dc088:
    if (ctx->pc == 0x1DC088u) {
        ctx->pc = 0x1DC088u;
            // 0x1dc088: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x1DC08Cu;
        goto label_1dc08c;
    }
    ctx->pc = 0x1DC084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC08Cu);
        ctx->pc = 0x1DC088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC084u;
            // 0x1dc088: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC08Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC08Cu; }
            if (ctx->pc != 0x1DC08Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DC08Cu;
label_1dc08c:
    // 0x1dc08c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dc090:
    if (ctx->pc == 0x1DC090u) {
        ctx->pc = 0x1DC094u;
        goto label_1dc094;
    }
    ctx->pc = 0x1DC08Cu;
    {
        const bool branch_taken_0x1dc08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc08c) {
            ctx->pc = 0x1DC0A4u;
            goto label_1dc0a4;
        }
    }
    ctx->pc = 0x1DC094u;
label_1dc094:
    // 0x1dc094: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1dc094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_1dc098:
    // 0x1dc098: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1dc098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_1dc09c:
    // 0x1dc09c: 0xae430e9c  sw          $v1, 0xE9C($s2)
    ctx->pc = 0x1dc09cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3740), GPR_U32(ctx, 3));
label_1dc0a0:
    // 0x1dc0a0: 0xae420e98  sw          $v0, 0xE98($s2)
    ctx->pc = 0x1dc0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3736), GPR_U32(ctx, 2));
label_1dc0a4:
    // 0x1dc0a4: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x1dc0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_1dc0a8:
    // 0x1dc0a8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1dc0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1dc0ac:
    // 0x1dc0ac: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1dc0b0:
    if (ctx->pc == 0x1DC0B0u) {
        ctx->pc = 0x1DC0B0u;
            // 0x1dc0b0: 0x8e420d78  lw          $v0, 0xD78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
        ctx->pc = 0x1DC0B4u;
        goto label_1dc0b4;
    }
    ctx->pc = 0x1DC0ACu;
    {
        const bool branch_taken_0x1dc0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dc0ac) {
            ctx->pc = 0x1DC0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC0ACu;
            // 0x1dc0b0: 0x8e420d78  lw          $v0, 0xD78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC0CCu;
            goto label_1dc0cc;
        }
    }
    ctx->pc = 0x1DC0B4u;
label_1dc0b4:
    // 0x1dc0b4: 0x8e440d78  lw          $a0, 0xD78($s2)
    ctx->pc = 0x1dc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
label_1dc0b8:
    // 0x1dc0b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dc0b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dc0bc:
    // 0x1dc0bc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1dc0bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1dc0c0:
    // 0x1dc0c0: 0x320f809  jalr        $t9
label_1dc0c4:
    if (ctx->pc == 0x1DC0C4u) {
        ctx->pc = 0x1DC0C8u;
        goto label_1dc0c8;
    }
    ctx->pc = 0x1DC0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC0C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC0C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC0C8u; }
            if (ctx->pc != 0x1DC0C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DC0C8u;
label_1dc0c8:
    // 0x1dc0c8: 0x8e420d78  lw          $v0, 0xD78($s2)
    ctx->pc = 0x1dc0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
label_1dc0cc:
    // 0x1dc0cc: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1dc0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1dc0d0:
    // 0x1dc0d0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1dc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1dc0d4:
    // 0x1dc0d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1dc0d8:
    if (ctx->pc == 0x1DC0D8u) {
        ctx->pc = 0x1DC0DCu;
        goto label_1dc0dc;
    }
    ctx->pc = 0x1DC0D4u;
    {
        const bool branch_taken_0x1dc0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dc0d4) {
            ctx->pc = 0x1DC0E4u;
            goto label_1dc0e4;
        }
    }
    ctx->pc = 0x1DC0DCu;
label_1dc0dc:
    // 0x1dc0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc0e0:
    // 0x1dc0e0: 0xa242119e  sb          $v0, 0x119E($s2)
    ctx->pc = 0x1dc0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4510), (uint8_t)GPR_U32(ctx, 2));
label_1dc0e4:
    // 0x1dc0e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dc0e8:
    // 0x1dc0e8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1dc0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1dc0ec:
    // 0x1dc0ec: 0xc0770d8  jal         func_1DC360
label_1dc0f0:
    if (ctx->pc == 0x1DC0F0u) {
        ctx->pc = 0x1DC0F0u;
            // 0x1dc0f0: 0x9650119c  lhu         $s0, 0x119C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4508)));
        ctx->pc = 0x1DC0F4u;
        goto label_1dc0f4;
    }
    ctx->pc = 0x1DC0ECu;
    SET_GPR_U32(ctx, 31, 0x1DC0F4u);
    ctx->pc = 0x1DC0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC0ECu;
            // 0x1dc0f0: 0x9650119c  lhu         $s0, 0x119C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4508)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC360u;
    if (runtime->hasFunction(0x1DC360u)) {
        auto targetFn = runtime->lookupFunction(0x1DC360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC0F4u; }
        if (ctx->pc != 0x1DC0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC360_0x1dc360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC0F4u; }
        if (ctx->pc != 0x1DC0F4u) { return; }
    }
    ctx->pc = 0x1DC0F4u;
label_1dc0f4:
    // 0x1dc0f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dc0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0f8:
    // 0x1dc0f8: 0xc0770d4  jal         func_1DC350
label_1dc0fc:
    if (ctx->pc == 0x1DC0FCu) {
        ctx->pc = 0x1DC0FCu;
            // 0x1dc0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC100u;
        goto label_1dc100;
    }
    ctx->pc = 0x1DC0F8u;
    SET_GPR_U32(ctx, 31, 0x1DC100u);
    ctx->pc = 0x1DC0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC0F8u;
            // 0x1dc0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC350u;
    if (runtime->hasFunction(0x1DC350u)) {
        auto targetFn = runtime->lookupFunction(0x1DC350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC100u; }
        if (ctx->pc != 0x1DC100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC350_0x1dc350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC100u; }
        if (ctx->pc != 0x1DC100u) { return; }
    }
    ctx->pc = 0x1DC100u;
label_1dc100:
    // 0x1dc100: 0xc0770d0  jal         func_1DC340
label_1dc104:
    if (ctx->pc == 0x1DC104u) {
        ctx->pc = 0x1DC104u;
            // 0x1dc104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC108u;
        goto label_1dc108;
    }
    ctx->pc = 0x1DC100u;
    SET_GPR_U32(ctx, 31, 0x1DC108u);
    ctx->pc = 0x1DC104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC100u;
            // 0x1dc104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC340u;
    if (runtime->hasFunction(0x1DC340u)) {
        auto targetFn = runtime->lookupFunction(0x1DC340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC108u; }
        if (ctx->pc != 0x1DC108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC340_0x1dc340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC108u; }
        if (ctx->pc != 0x1DC108u) { return; }
    }
    ctx->pc = 0x1DC108u;
label_1dc108:
    // 0x1dc108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc10c:
    // 0x1dc10c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1dc10cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1dc110:
    // 0x1dc110: 0xc0770c8  jal         func_1DC320
label_1dc114:
    if (ctx->pc == 0x1DC114u) {
        ctx->pc = 0x1DC114u;
            // 0x1dc114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC118u;
        goto label_1dc118;
    }
    ctx->pc = 0x1DC110u;
    SET_GPR_U32(ctx, 31, 0x1DC118u);
    ctx->pc = 0x1DC114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC110u;
            // 0x1dc114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC118u; }
        if (ctx->pc != 0x1DC118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC118u; }
        if (ctx->pc != 0x1DC118u) { return; }
    }
    ctx->pc = 0x1DC118u;
label_1dc118:
    // 0x1dc118: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dc118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1dc11c:
    // 0x1dc11c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x1dc11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1dc120:
    // 0x1dc120: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
label_1dc124:
    if (ctx->pc == 0x1DC124u) {
        ctx->pc = 0x1DC124u;
            // 0x1dc124: 0x94500004  lhu         $s0, 0x4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1DC128u;
        goto label_1dc128;
    }
    ctx->pc = 0x1DC120u;
    {
        const bool branch_taken_0x1dc120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC120u;
            // 0x1dc124: 0x94500004  lhu         $s0, 0x4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc120) {
            ctx->pc = 0x1DC270u;
            goto label_1dc270;
        }
    }
    ctx->pc = 0x1DC128u;
label_1dc128:
    // 0x1dc128: 0xc077588  jal         func_1DD620
label_1dc12c:
    if (ctx->pc == 0x1DC12Cu) {
        ctx->pc = 0x1DC12Cu;
            // 0x1dc12c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC130u;
        goto label_1dc130;
    }
    ctx->pc = 0x1DC128u;
    SET_GPR_U32(ctx, 31, 0x1DC130u);
    ctx->pc = 0x1DC12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC128u;
            // 0x1dc12c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD620u;
    if (runtime->hasFunction(0x1DD620u)) {
        auto targetFn = runtime->lookupFunction(0x1DD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC130u; }
        if (ctx->pc != 0x1DC130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD620_0x1dd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC130u; }
        if (ctx->pc != 0x1DC130u) { return; }
    }
    ctx->pc = 0x1DC130u;
label_1dc130:
    // 0x1dc130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dc130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dc134:
    // 0x1dc134: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_1dc138:
    if (ctx->pc == 0x1DC138u) {
        ctx->pc = 0x1DC138u;
            // 0x1dc138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC13Cu;
        goto label_1dc13c;
    }
    ctx->pc = 0x1DC134u;
    {
        const bool branch_taken_0x1dc134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc134) {
            ctx->pc = 0x1DC138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC134u;
            // 0x1dc138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC1C0u;
            goto label_1dc1c0;
        }
    }
    ctx->pc = 0x1DC13Cu;
label_1dc13c:
    // 0x1dc13c: 0xc077574  jal         func_1DD5D0
label_1dc140:
    if (ctx->pc == 0x1DC140u) {
        ctx->pc = 0x1DC140u;
            // 0x1dc140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC144u;
        goto label_1dc144;
    }
    ctx->pc = 0x1DC13Cu;
    SET_GPR_U32(ctx, 31, 0x1DC144u);
    ctx->pc = 0x1DC140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC13Cu;
            // 0x1dc140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC144u; }
        if (ctx->pc != 0x1DC144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC144u; }
        if (ctx->pc != 0x1DC144u) { return; }
    }
    ctx->pc = 0x1DC144u;
label_1dc144:
    // 0x1dc144: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1dc144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1dc148:
    // 0x1dc148: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
label_1dc14c:
    if (ctx->pc == 0x1DC14Cu) {
        ctx->pc = 0x1DC150u;
        goto label_1dc150;
    }
    ctx->pc = 0x1DC148u;
    {
        const bool branch_taken_0x1dc148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc148) {
            ctx->pc = 0x1DC1BCu;
            goto label_1dc1bc;
        }
    }
    ctx->pc = 0x1DC150u;
label_1dc150:
    // 0x1dc150: 0xc077574  jal         func_1DD5D0
label_1dc154:
    if (ctx->pc == 0x1DC154u) {
        ctx->pc = 0x1DC154u;
            // 0x1dc154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC158u;
        goto label_1dc158;
    }
    ctx->pc = 0x1DC150u;
    SET_GPR_U32(ctx, 31, 0x1DC158u);
    ctx->pc = 0x1DC154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC150u;
            // 0x1dc154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC158u; }
        if (ctx->pc != 0x1DC158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC158u; }
        if (ctx->pc != 0x1DC158u) { return; }
    }
    ctx->pc = 0x1DC158u;
label_1dc158:
    // 0x1dc158: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1dc158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1dc15c:
    // 0x1dc15c: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
label_1dc160:
    if (ctx->pc == 0x1DC160u) {
        ctx->pc = 0x1DC164u;
        goto label_1dc164;
    }
    ctx->pc = 0x1DC15Cu;
    {
        const bool branch_taken_0x1dc15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc15c) {
            ctx->pc = 0x1DC1BCu;
            goto label_1dc1bc;
        }
    }
    ctx->pc = 0x1DC164u;
label_1dc164:
    // 0x1dc164: 0xc077574  jal         func_1DD5D0
label_1dc168:
    if (ctx->pc == 0x1DC168u) {
        ctx->pc = 0x1DC168u;
            // 0x1dc168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC16Cu;
        goto label_1dc16c;
    }
    ctx->pc = 0x1DC164u;
    SET_GPR_U32(ctx, 31, 0x1DC16Cu);
    ctx->pc = 0x1DC168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC164u;
            // 0x1dc168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC16Cu; }
        if (ctx->pc != 0x1DC16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC16Cu; }
        if (ctx->pc != 0x1DC16Cu) { return; }
    }
    ctx->pc = 0x1DC16Cu;
label_1dc16c:
    // 0x1dc16c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1dc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1dc170:
    // 0x1dc170: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_1dc174:
    if (ctx->pc == 0x1DC174u) {
        ctx->pc = 0x1DC178u;
        goto label_1dc178;
    }
    ctx->pc = 0x1DC170u;
    {
        const bool branch_taken_0x1dc170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc170) {
            ctx->pc = 0x1DC1BCu;
            goto label_1dc1bc;
        }
    }
    ctx->pc = 0x1DC178u;
label_1dc178:
    // 0x1dc178: 0xc0775b0  jal         func_1DD6C0
label_1dc17c:
    if (ctx->pc == 0x1DC17Cu) {
        ctx->pc = 0x1DC180u;
        goto label_1dc180;
    }
    ctx->pc = 0x1DC178u;
    SET_GPR_U32(ctx, 31, 0x1DC180u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC180u; }
        if (ctx->pc != 0x1DC180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC180u; }
        if (ctx->pc != 0x1DC180u) { return; }
    }
    ctx->pc = 0x1DC180u;
label_1dc180:
    // 0x1dc180: 0xc0775ac  jal         func_1DD6B0
label_1dc184:
    if (ctx->pc == 0x1DC184u) {
        ctx->pc = 0x1DC184u;
            // 0x1dc184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC188u;
        goto label_1dc188;
    }
    ctx->pc = 0x1DC180u;
    SET_GPR_U32(ctx, 31, 0x1DC188u);
    ctx->pc = 0x1DC184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC180u;
            // 0x1dc184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC188u; }
        if (ctx->pc != 0x1DC188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC188u; }
        if (ctx->pc != 0x1DC188u) { return; }
    }
    ctx->pc = 0x1DC188u;
label_1dc188:
    // 0x1dc188: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1dc188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1dc18c:
    // 0x1dc18c: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_1dc190:
    if (ctx->pc == 0x1DC190u) {
        ctx->pc = 0x1DC190u;
            // 0x1dc190: 0x9243119e  lbu         $v1, 0x119E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4510)));
        ctx->pc = 0x1DC194u;
        goto label_1dc194;
    }
    ctx->pc = 0x1DC18Cu;
    {
        const bool branch_taken_0x1dc18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc18c) {
            ctx->pc = 0x1DC190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC18Cu;
            // 0x1dc190: 0x9243119e  lbu         $v1, 0x119E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4510)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC1B4u;
            goto label_1dc1b4;
        }
    }
    ctx->pc = 0x1DC194u;
label_1dc194:
    // 0x1dc194: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dc194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dc198:
    // 0x1dc198: 0xc0775a8  jal         func_1DD6A0
label_1dc19c:
    if (ctx->pc == 0x1DC19Cu) {
        ctx->pc = 0x1DC19Cu;
            // 0x1dc19c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1DC1A0u;
        goto label_1dc1a0;
    }
    ctx->pc = 0x1DC198u;
    SET_GPR_U32(ctx, 31, 0x1DC1A0u);
    ctx->pc = 0x1DC19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC198u;
            // 0x1dc19c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6A0u;
    if (runtime->hasFunction(0x1DD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1A0u; }
        if (ctx->pc != 0x1DC1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6A0_0x1dd6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1A0u; }
        if (ctx->pc != 0x1DC1A0u) { return; }
    }
    ctx->pc = 0x1DC1A0u;
label_1dc1a0:
    // 0x1dc1a0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1dc1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dc1a4:
    // 0x1dc1a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dc1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc1a8:
    // 0x1dc1a8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1dc1ac:
    if (ctx->pc == 0x1DC1ACu) {
        ctx->pc = 0x1DC1B0u;
        goto label_1dc1b0;
    }
    ctx->pc = 0x1DC1A8u;
    {
        const bool branch_taken_0x1dc1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc1a8) {
            ctx->pc = 0x1DC1BCu;
            goto label_1dc1bc;
        }
    }
    ctx->pc = 0x1DC1B0u;
label_1dc1b0:
    // 0x1dc1b0: 0x9243119e  lbu         $v1, 0x119E($s2)
    ctx->pc = 0x1dc1b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4510)));
label_1dc1b4:
    // 0x1dc1b4: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
label_1dc1b8:
    if (ctx->pc == 0x1DC1B8u) {
        ctx->pc = 0x1DC1B8u;
            // 0x1dc1b8: 0x8e441140  lw          $a0, 0x1140($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4416)));
        ctx->pc = 0x1DC1BCu;
        goto label_1dc1bc;
    }
    ctx->pc = 0x1DC1B4u;
    {
        const bool branch_taken_0x1dc1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc1b4) {
            ctx->pc = 0x1DC1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1B4u;
            // 0x1dc1b8: 0x8e441140  lw          $a0, 0x1140($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC274u;
            goto label_1dc274;
        }
    }
    ctx->pc = 0x1DC1BCu;
label_1dc1bc:
    // 0x1dc1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1c0:
    // 0x1dc1c0: 0xc077574  jal         func_1DD5D0
label_1dc1c4:
    if (ctx->pc == 0x1DC1C4u) {
        ctx->pc = 0x1DC1C8u;
        goto label_1dc1c8;
    }
    ctx->pc = 0x1DC1C0u;
    SET_GPR_U32(ctx, 31, 0x1DC1C8u);
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1C8u; }
        if (ctx->pc != 0x1DC1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1C8u; }
        if (ctx->pc != 0x1DC1C8u) { return; }
    }
    ctx->pc = 0x1DC1C8u;
label_1dc1c8:
    // 0x1dc1c8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1dc1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1dc1cc:
    // 0x1dc1cc: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
label_1dc1d0:
    if (ctx->pc == 0x1DC1D0u) {
        ctx->pc = 0x1DC1D4u;
        goto label_1dc1d4;
    }
    ctx->pc = 0x1DC1CCu;
    {
        const bool branch_taken_0x1dc1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc1cc) {
            ctx->pc = 0x1DC270u;
            goto label_1dc270;
        }
    }
    ctx->pc = 0x1DC1D4u;
label_1dc1d4:
    // 0x1dc1d4: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dc1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1dc1d8:
    // 0x1dc1d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1dc1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1dc1dc:
    // 0x1dc1dc: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_1dc1e0:
    if (ctx->pc == 0x1DC1E0u) {
        ctx->pc = 0x1DC1E4u;
        goto label_1dc1e4;
    }
    ctx->pc = 0x1DC1DCu;
    {
        const bool branch_taken_0x1dc1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc1dc) {
            ctx->pc = 0x1DC270u;
            goto label_1dc270;
        }
    }
    ctx->pc = 0x1DC1E4u;
label_1dc1e4:
    // 0x1dc1e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dc1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1e8:
    // 0x1dc1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1ec:
    // 0x1dc1ec: 0xc0770c4  jal         func_1DC310
label_1dc1f0:
    if (ctx->pc == 0x1DC1F0u) {
        ctx->pc = 0x1DC1F0u;
            // 0x1dc1f0: 0xa240119e  sb          $zero, 0x119E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4510), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1DC1F4u;
        goto label_1dc1f4;
    }
    ctx->pc = 0x1DC1ECu;
    SET_GPR_U32(ctx, 31, 0x1DC1F4u);
    ctx->pc = 0x1DC1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1ECu;
            // 0x1dc1f0: 0xa240119e  sb          $zero, 0x119E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4510), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC310u;
    if (runtime->hasFunction(0x1DC310u)) {
        auto targetFn = runtime->lookupFunction(0x1DC310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1F4u; }
        if (ctx->pc != 0x1DC1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC310_0x1dc310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1F4u; }
        if (ctx->pc != 0x1DC1F4u) { return; }
    }
    ctx->pc = 0x1DC1F4u;
label_1dc1f4:
    // 0x1dc1f4: 0xc0770c0  jal         func_1DC300
label_1dc1f8:
    if (ctx->pc == 0x1DC1F8u) {
        ctx->pc = 0x1DC1F8u;
            // 0x1dc1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1FCu;
        goto label_1dc1fc;
    }
    ctx->pc = 0x1DC1F4u;
    SET_GPR_U32(ctx, 31, 0x1DC1FCu);
    ctx->pc = 0x1DC1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1F4u;
            // 0x1dc1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1FCu; }
        if (ctx->pc != 0x1DC1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1FCu; }
        if (ctx->pc != 0x1DC1FCu) { return; }
    }
    ctx->pc = 0x1DC1FCu;
label_1dc1fc:
    // 0x1dc1fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc200:
    // 0x1dc200: 0x264406b0  addiu       $a0, $s2, 0x6B0
    ctx->pc = 0x1dc200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1712));
label_1dc204:
    // 0x1dc204: 0xc04a508  jal         func_129420
label_1dc208:
    if (ctx->pc == 0x1DC208u) {
        ctx->pc = 0x1DC208u;
            // 0x1dc208: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x1DC20Cu;
        goto label_1dc20c;
    }
    ctx->pc = 0x1DC204u;
    SET_GPR_U32(ctx, 31, 0x1DC20Cu);
    ctx->pc = 0x1DC208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC204u;
            // 0x1dc208: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC20Cu; }
        if (ctx->pc != 0x1DC20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC20Cu; }
        if (ctx->pc != 0x1DC20Cu) { return; }
    }
    ctx->pc = 0x1DC20Cu;
label_1dc20c:
    // 0x1dc20c: 0xc0770bc  jal         func_1DC2F0
label_1dc210:
    if (ctx->pc == 0x1DC210u) {
        ctx->pc = 0x1DC210u;
            // 0x1dc210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC214u;
        goto label_1dc214;
    }
    ctx->pc = 0x1DC20Cu;
    SET_GPR_U32(ctx, 31, 0x1DC214u);
    ctx->pc = 0x1DC210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC20Cu;
            // 0x1dc210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2F0u;
    if (runtime->hasFunction(0x1DC2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC214u; }
        if (ctx->pc != 0x1DC214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2F0_0x1dc2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC214u; }
        if (ctx->pc != 0x1DC214u) { return; }
    }
    ctx->pc = 0x1DC214u;
label_1dc214:
    // 0x1dc214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc218:
    // 0x1dc218: 0xc0770b8  jal         func_1DC2E0
label_1dc21c:
    if (ctx->pc == 0x1DC21Cu) {
        ctx->pc = 0x1DC21Cu;
            // 0x1dc21c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC220u;
        goto label_1dc220;
    }
    ctx->pc = 0x1DC218u;
    SET_GPR_U32(ctx, 31, 0x1DC220u);
    ctx->pc = 0x1DC21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC218u;
            // 0x1dc21c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2E0u;
    if (runtime->hasFunction(0x1DC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC220u; }
        if (ctx->pc != 0x1DC220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2E0_0x1dc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC220u; }
        if (ctx->pc != 0x1DC220u) { return; }
    }
    ctx->pc = 0x1DC220u;
label_1dc220:
    // 0x1dc220: 0xc077330  jal         func_1DCCC0
label_1dc224:
    if (ctx->pc == 0x1DC224u) {
        ctx->pc = 0x1DC224u;
            // 0x1dc224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC228u;
        goto label_1dc228;
    }
    ctx->pc = 0x1DC220u;
    SET_GPR_U32(ctx, 31, 0x1DC228u);
    ctx->pc = 0x1DC224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC220u;
            // 0x1dc224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC228u; }
        if (ctx->pc != 0x1DC228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC228u; }
        if (ctx->pc != 0x1DC228u) { return; }
    }
    ctx->pc = 0x1DC228u;
label_1dc228:
    // 0x1dc228: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1dc22c:
    if (ctx->pc == 0x1DC22Cu) {
        ctx->pc = 0x1DC230u;
        goto label_1dc230;
    }
    ctx->pc = 0x1DC228u;
    {
        const bool branch_taken_0x1dc228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc228) {
            ctx->pc = 0x1DC240u;
            goto label_1dc240;
        }
    }
    ctx->pc = 0x1DC230u;
label_1dc230:
    // 0x1dc230: 0xc07732c  jal         func_1DCCB0
label_1dc234:
    if (ctx->pc == 0x1DC234u) {
        ctx->pc = 0x1DC234u;
            // 0x1dc234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC238u;
        goto label_1dc238;
    }
    ctx->pc = 0x1DC230u;
    SET_GPR_U32(ctx, 31, 0x1DC238u);
    ctx->pc = 0x1DC234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC230u;
            // 0x1dc234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC238u; }
        if (ctx->pc != 0x1DC238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC238u; }
        if (ctx->pc != 0x1DC238u) { return; }
    }
    ctx->pc = 0x1DC238u;
label_1dc238:
    // 0x1dc238: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1dc23c:
    if (ctx->pc == 0x1DC23Cu) {
        ctx->pc = 0x1DC240u;
        goto label_1dc240;
    }
    ctx->pc = 0x1DC238u;
    {
        const bool branch_taken_0x1dc238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc238) {
            ctx->pc = 0x1DC270u;
            goto label_1dc270;
        }
    }
    ctx->pc = 0x1DC240u;
label_1dc240:
    // 0x1dc240: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dc240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dc244:
    // 0x1dc244: 0xc0770b4  jal         func_1DC2D0
label_1dc248:
    if (ctx->pc == 0x1DC248u) {
        ctx->pc = 0x1DC248u;
            // 0x1dc248: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1DC24Cu;
        goto label_1dc24c;
    }
    ctx->pc = 0x1DC244u;
    SET_GPR_U32(ctx, 31, 0x1DC24Cu);
    ctx->pc = 0x1DC248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC244u;
            // 0x1dc248: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2D0u;
    if (runtime->hasFunction(0x1DC2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC24Cu; }
        if (ctx->pc != 0x1DC24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2D0_0x1dc2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC24Cu; }
        if (ctx->pc != 0x1DC24Cu) { return; }
    }
    ctx->pc = 0x1DC24Cu;
label_1dc24c:
    // 0x1dc24c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dc24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc250:
    // 0x1dc250: 0xc077320  jal         func_1DCC80
label_1dc254:
    if (ctx->pc == 0x1DC254u) {
        ctx->pc = 0x1DC254u;
            // 0x1dc254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC258u;
        goto label_1dc258;
    }
    ctx->pc = 0x1DC250u;
    SET_GPR_U32(ctx, 31, 0x1DC258u);
    ctx->pc = 0x1DC254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC250u;
            // 0x1dc254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC258u; }
        if (ctx->pc != 0x1DC258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC258u; }
        if (ctx->pc != 0x1DC258u) { return; }
    }
    ctx->pc = 0x1DC258u;
label_1dc258:
    // 0x1dc258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc25c:
    // 0x1dc25c: 0xc0770b0  jal         func_1DC2C0
label_1dc260:
    if (ctx->pc == 0x1DC260u) {
        ctx->pc = 0x1DC260u;
            // 0x1dc260: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC264u;
        goto label_1dc264;
    }
    ctx->pc = 0x1DC25Cu;
    SET_GPR_U32(ctx, 31, 0x1DC264u);
    ctx->pc = 0x1DC260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC25Cu;
            // 0x1dc260: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2C0u;
    if (runtime->hasFunction(0x1DC2C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC264u; }
        if (ctx->pc != 0x1DC264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2C0_0x1dc2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC264u; }
        if (ctx->pc != 0x1DC264u) { return; }
    }
    ctx->pc = 0x1DC264u;
label_1dc264:
    // 0x1dc264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dc268:
    // 0x1dc268: 0xc0770ac  jal         func_1DC2B0
label_1dc26c:
    if (ctx->pc == 0x1DC26Cu) {
        ctx->pc = 0x1DC26Cu;
            // 0x1dc26c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC270u;
        goto label_1dc270;
    }
    ctx->pc = 0x1DC268u;
    SET_GPR_U32(ctx, 31, 0x1DC270u);
    ctx->pc = 0x1DC26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC268u;
            // 0x1dc26c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2B0u;
    if (runtime->hasFunction(0x1DC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC270u; }
        if (ctx->pc != 0x1DC270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2B0_0x1dc2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC270u; }
        if (ctx->pc != 0x1DC270u) { return; }
    }
    ctx->pc = 0x1DC270u;
label_1dc270:
    // 0x1dc270: 0x8e441140  lw          $a0, 0x1140($s2)
    ctx->pc = 0x1dc270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4416)));
label_1dc274:
    // 0x1dc274: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x1dc274u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_1dc278:
    // 0x1dc278: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1dc278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_1dc27c:
    // 0x1dc27c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x1dc27cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_1dc280:
    // 0x1dc280: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1dc280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1dc284:
    // 0x1dc284: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dc284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dc288:
    // 0x1dc288: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1dc288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dc28c:
    // 0x1dc28c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1dc28cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dc290:
    // 0x1dc290: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dc290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc294:
    // 0x1dc294: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dc294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc298:
    // 0x1dc298: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dc298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc29c:
    // 0x1dc29c: 0x3e00008  jr          $ra
label_1dc2a0:
    if (ctx->pc == 0x1DC2A0u) {
        ctx->pc = 0x1DC2A0u;
            // 0x1dc2a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1DC2A4u;
        goto label_1dc2a4;
    }
    ctx->pc = 0x1DC29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC29Cu;
            // 0x1dc2a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC2A4u;
label_1dc2a4:
    // 0x1dc2a4: 0x0  nop
    ctx->pc = 0x1dc2a4u;
    // NOP
label_1dc2a8:
    // 0x1dc2a8: 0x0  nop
    ctx->pc = 0x1dc2a8u;
    // NOP
label_1dc2ac:
    // 0x1dc2ac: 0x0  nop
    ctx->pc = 0x1dc2acu;
    // NOP
}
