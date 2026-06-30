#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED690
// Address: 0x4ed690 - 0x4edcc0
void sub_004ED690_0x4ed690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED690_0x4ed690");
#endif

    switch (ctx->pc) {
        case 0x4ed690u: goto label_4ed690;
        case 0x4ed694u: goto label_4ed694;
        case 0x4ed698u: goto label_4ed698;
        case 0x4ed69cu: goto label_4ed69c;
        case 0x4ed6a0u: goto label_4ed6a0;
        case 0x4ed6a4u: goto label_4ed6a4;
        case 0x4ed6a8u: goto label_4ed6a8;
        case 0x4ed6acu: goto label_4ed6ac;
        case 0x4ed6b0u: goto label_4ed6b0;
        case 0x4ed6b4u: goto label_4ed6b4;
        case 0x4ed6b8u: goto label_4ed6b8;
        case 0x4ed6bcu: goto label_4ed6bc;
        case 0x4ed6c0u: goto label_4ed6c0;
        case 0x4ed6c4u: goto label_4ed6c4;
        case 0x4ed6c8u: goto label_4ed6c8;
        case 0x4ed6ccu: goto label_4ed6cc;
        case 0x4ed6d0u: goto label_4ed6d0;
        case 0x4ed6d4u: goto label_4ed6d4;
        case 0x4ed6d8u: goto label_4ed6d8;
        case 0x4ed6dcu: goto label_4ed6dc;
        case 0x4ed6e0u: goto label_4ed6e0;
        case 0x4ed6e4u: goto label_4ed6e4;
        case 0x4ed6e8u: goto label_4ed6e8;
        case 0x4ed6ecu: goto label_4ed6ec;
        case 0x4ed6f0u: goto label_4ed6f0;
        case 0x4ed6f4u: goto label_4ed6f4;
        case 0x4ed6f8u: goto label_4ed6f8;
        case 0x4ed6fcu: goto label_4ed6fc;
        case 0x4ed700u: goto label_4ed700;
        case 0x4ed704u: goto label_4ed704;
        case 0x4ed708u: goto label_4ed708;
        case 0x4ed70cu: goto label_4ed70c;
        case 0x4ed710u: goto label_4ed710;
        case 0x4ed714u: goto label_4ed714;
        case 0x4ed718u: goto label_4ed718;
        case 0x4ed71cu: goto label_4ed71c;
        case 0x4ed720u: goto label_4ed720;
        case 0x4ed724u: goto label_4ed724;
        case 0x4ed728u: goto label_4ed728;
        case 0x4ed72cu: goto label_4ed72c;
        case 0x4ed730u: goto label_4ed730;
        case 0x4ed734u: goto label_4ed734;
        case 0x4ed738u: goto label_4ed738;
        case 0x4ed73cu: goto label_4ed73c;
        case 0x4ed740u: goto label_4ed740;
        case 0x4ed744u: goto label_4ed744;
        case 0x4ed748u: goto label_4ed748;
        case 0x4ed74cu: goto label_4ed74c;
        case 0x4ed750u: goto label_4ed750;
        case 0x4ed754u: goto label_4ed754;
        case 0x4ed758u: goto label_4ed758;
        case 0x4ed75cu: goto label_4ed75c;
        case 0x4ed760u: goto label_4ed760;
        case 0x4ed764u: goto label_4ed764;
        case 0x4ed768u: goto label_4ed768;
        case 0x4ed76cu: goto label_4ed76c;
        case 0x4ed770u: goto label_4ed770;
        case 0x4ed774u: goto label_4ed774;
        case 0x4ed778u: goto label_4ed778;
        case 0x4ed77cu: goto label_4ed77c;
        case 0x4ed780u: goto label_4ed780;
        case 0x4ed784u: goto label_4ed784;
        case 0x4ed788u: goto label_4ed788;
        case 0x4ed78cu: goto label_4ed78c;
        case 0x4ed790u: goto label_4ed790;
        case 0x4ed794u: goto label_4ed794;
        case 0x4ed798u: goto label_4ed798;
        case 0x4ed79cu: goto label_4ed79c;
        case 0x4ed7a0u: goto label_4ed7a0;
        case 0x4ed7a4u: goto label_4ed7a4;
        case 0x4ed7a8u: goto label_4ed7a8;
        case 0x4ed7acu: goto label_4ed7ac;
        case 0x4ed7b0u: goto label_4ed7b0;
        case 0x4ed7b4u: goto label_4ed7b4;
        case 0x4ed7b8u: goto label_4ed7b8;
        case 0x4ed7bcu: goto label_4ed7bc;
        case 0x4ed7c0u: goto label_4ed7c0;
        case 0x4ed7c4u: goto label_4ed7c4;
        case 0x4ed7c8u: goto label_4ed7c8;
        case 0x4ed7ccu: goto label_4ed7cc;
        case 0x4ed7d0u: goto label_4ed7d0;
        case 0x4ed7d4u: goto label_4ed7d4;
        case 0x4ed7d8u: goto label_4ed7d8;
        case 0x4ed7dcu: goto label_4ed7dc;
        case 0x4ed7e0u: goto label_4ed7e0;
        case 0x4ed7e4u: goto label_4ed7e4;
        case 0x4ed7e8u: goto label_4ed7e8;
        case 0x4ed7ecu: goto label_4ed7ec;
        case 0x4ed7f0u: goto label_4ed7f0;
        case 0x4ed7f4u: goto label_4ed7f4;
        case 0x4ed7f8u: goto label_4ed7f8;
        case 0x4ed7fcu: goto label_4ed7fc;
        case 0x4ed800u: goto label_4ed800;
        case 0x4ed804u: goto label_4ed804;
        case 0x4ed808u: goto label_4ed808;
        case 0x4ed80cu: goto label_4ed80c;
        case 0x4ed810u: goto label_4ed810;
        case 0x4ed814u: goto label_4ed814;
        case 0x4ed818u: goto label_4ed818;
        case 0x4ed81cu: goto label_4ed81c;
        case 0x4ed820u: goto label_4ed820;
        case 0x4ed824u: goto label_4ed824;
        case 0x4ed828u: goto label_4ed828;
        case 0x4ed82cu: goto label_4ed82c;
        case 0x4ed830u: goto label_4ed830;
        case 0x4ed834u: goto label_4ed834;
        case 0x4ed838u: goto label_4ed838;
        case 0x4ed83cu: goto label_4ed83c;
        case 0x4ed840u: goto label_4ed840;
        case 0x4ed844u: goto label_4ed844;
        case 0x4ed848u: goto label_4ed848;
        case 0x4ed84cu: goto label_4ed84c;
        case 0x4ed850u: goto label_4ed850;
        case 0x4ed854u: goto label_4ed854;
        case 0x4ed858u: goto label_4ed858;
        case 0x4ed85cu: goto label_4ed85c;
        case 0x4ed860u: goto label_4ed860;
        case 0x4ed864u: goto label_4ed864;
        case 0x4ed868u: goto label_4ed868;
        case 0x4ed86cu: goto label_4ed86c;
        case 0x4ed870u: goto label_4ed870;
        case 0x4ed874u: goto label_4ed874;
        case 0x4ed878u: goto label_4ed878;
        case 0x4ed87cu: goto label_4ed87c;
        case 0x4ed880u: goto label_4ed880;
        case 0x4ed884u: goto label_4ed884;
        case 0x4ed888u: goto label_4ed888;
        case 0x4ed88cu: goto label_4ed88c;
        case 0x4ed890u: goto label_4ed890;
        case 0x4ed894u: goto label_4ed894;
        case 0x4ed898u: goto label_4ed898;
        case 0x4ed89cu: goto label_4ed89c;
        case 0x4ed8a0u: goto label_4ed8a0;
        case 0x4ed8a4u: goto label_4ed8a4;
        case 0x4ed8a8u: goto label_4ed8a8;
        case 0x4ed8acu: goto label_4ed8ac;
        case 0x4ed8b0u: goto label_4ed8b0;
        case 0x4ed8b4u: goto label_4ed8b4;
        case 0x4ed8b8u: goto label_4ed8b8;
        case 0x4ed8bcu: goto label_4ed8bc;
        case 0x4ed8c0u: goto label_4ed8c0;
        case 0x4ed8c4u: goto label_4ed8c4;
        case 0x4ed8c8u: goto label_4ed8c8;
        case 0x4ed8ccu: goto label_4ed8cc;
        case 0x4ed8d0u: goto label_4ed8d0;
        case 0x4ed8d4u: goto label_4ed8d4;
        case 0x4ed8d8u: goto label_4ed8d8;
        case 0x4ed8dcu: goto label_4ed8dc;
        case 0x4ed8e0u: goto label_4ed8e0;
        case 0x4ed8e4u: goto label_4ed8e4;
        case 0x4ed8e8u: goto label_4ed8e8;
        case 0x4ed8ecu: goto label_4ed8ec;
        case 0x4ed8f0u: goto label_4ed8f0;
        case 0x4ed8f4u: goto label_4ed8f4;
        case 0x4ed8f8u: goto label_4ed8f8;
        case 0x4ed8fcu: goto label_4ed8fc;
        case 0x4ed900u: goto label_4ed900;
        case 0x4ed904u: goto label_4ed904;
        case 0x4ed908u: goto label_4ed908;
        case 0x4ed90cu: goto label_4ed90c;
        case 0x4ed910u: goto label_4ed910;
        case 0x4ed914u: goto label_4ed914;
        case 0x4ed918u: goto label_4ed918;
        case 0x4ed91cu: goto label_4ed91c;
        case 0x4ed920u: goto label_4ed920;
        case 0x4ed924u: goto label_4ed924;
        case 0x4ed928u: goto label_4ed928;
        case 0x4ed92cu: goto label_4ed92c;
        case 0x4ed930u: goto label_4ed930;
        case 0x4ed934u: goto label_4ed934;
        case 0x4ed938u: goto label_4ed938;
        case 0x4ed93cu: goto label_4ed93c;
        case 0x4ed940u: goto label_4ed940;
        case 0x4ed944u: goto label_4ed944;
        case 0x4ed948u: goto label_4ed948;
        case 0x4ed94cu: goto label_4ed94c;
        case 0x4ed950u: goto label_4ed950;
        case 0x4ed954u: goto label_4ed954;
        case 0x4ed958u: goto label_4ed958;
        case 0x4ed95cu: goto label_4ed95c;
        case 0x4ed960u: goto label_4ed960;
        case 0x4ed964u: goto label_4ed964;
        case 0x4ed968u: goto label_4ed968;
        case 0x4ed96cu: goto label_4ed96c;
        case 0x4ed970u: goto label_4ed970;
        case 0x4ed974u: goto label_4ed974;
        case 0x4ed978u: goto label_4ed978;
        case 0x4ed97cu: goto label_4ed97c;
        case 0x4ed980u: goto label_4ed980;
        case 0x4ed984u: goto label_4ed984;
        case 0x4ed988u: goto label_4ed988;
        case 0x4ed98cu: goto label_4ed98c;
        case 0x4ed990u: goto label_4ed990;
        case 0x4ed994u: goto label_4ed994;
        case 0x4ed998u: goto label_4ed998;
        case 0x4ed99cu: goto label_4ed99c;
        case 0x4ed9a0u: goto label_4ed9a0;
        case 0x4ed9a4u: goto label_4ed9a4;
        case 0x4ed9a8u: goto label_4ed9a8;
        case 0x4ed9acu: goto label_4ed9ac;
        case 0x4ed9b0u: goto label_4ed9b0;
        case 0x4ed9b4u: goto label_4ed9b4;
        case 0x4ed9b8u: goto label_4ed9b8;
        case 0x4ed9bcu: goto label_4ed9bc;
        case 0x4ed9c0u: goto label_4ed9c0;
        case 0x4ed9c4u: goto label_4ed9c4;
        case 0x4ed9c8u: goto label_4ed9c8;
        case 0x4ed9ccu: goto label_4ed9cc;
        case 0x4ed9d0u: goto label_4ed9d0;
        case 0x4ed9d4u: goto label_4ed9d4;
        case 0x4ed9d8u: goto label_4ed9d8;
        case 0x4ed9dcu: goto label_4ed9dc;
        case 0x4ed9e0u: goto label_4ed9e0;
        case 0x4ed9e4u: goto label_4ed9e4;
        case 0x4ed9e8u: goto label_4ed9e8;
        case 0x4ed9ecu: goto label_4ed9ec;
        case 0x4ed9f0u: goto label_4ed9f0;
        case 0x4ed9f4u: goto label_4ed9f4;
        case 0x4ed9f8u: goto label_4ed9f8;
        case 0x4ed9fcu: goto label_4ed9fc;
        case 0x4eda00u: goto label_4eda00;
        case 0x4eda04u: goto label_4eda04;
        case 0x4eda08u: goto label_4eda08;
        case 0x4eda0cu: goto label_4eda0c;
        case 0x4eda10u: goto label_4eda10;
        case 0x4eda14u: goto label_4eda14;
        case 0x4eda18u: goto label_4eda18;
        case 0x4eda1cu: goto label_4eda1c;
        case 0x4eda20u: goto label_4eda20;
        case 0x4eda24u: goto label_4eda24;
        case 0x4eda28u: goto label_4eda28;
        case 0x4eda2cu: goto label_4eda2c;
        case 0x4eda30u: goto label_4eda30;
        case 0x4eda34u: goto label_4eda34;
        case 0x4eda38u: goto label_4eda38;
        case 0x4eda3cu: goto label_4eda3c;
        case 0x4eda40u: goto label_4eda40;
        case 0x4eda44u: goto label_4eda44;
        case 0x4eda48u: goto label_4eda48;
        case 0x4eda4cu: goto label_4eda4c;
        case 0x4eda50u: goto label_4eda50;
        case 0x4eda54u: goto label_4eda54;
        case 0x4eda58u: goto label_4eda58;
        case 0x4eda5cu: goto label_4eda5c;
        case 0x4eda60u: goto label_4eda60;
        case 0x4eda64u: goto label_4eda64;
        case 0x4eda68u: goto label_4eda68;
        case 0x4eda6cu: goto label_4eda6c;
        case 0x4eda70u: goto label_4eda70;
        case 0x4eda74u: goto label_4eda74;
        case 0x4eda78u: goto label_4eda78;
        case 0x4eda7cu: goto label_4eda7c;
        case 0x4eda80u: goto label_4eda80;
        case 0x4eda84u: goto label_4eda84;
        case 0x4eda88u: goto label_4eda88;
        case 0x4eda8cu: goto label_4eda8c;
        case 0x4eda90u: goto label_4eda90;
        case 0x4eda94u: goto label_4eda94;
        case 0x4eda98u: goto label_4eda98;
        case 0x4eda9cu: goto label_4eda9c;
        case 0x4edaa0u: goto label_4edaa0;
        case 0x4edaa4u: goto label_4edaa4;
        case 0x4edaa8u: goto label_4edaa8;
        case 0x4edaacu: goto label_4edaac;
        case 0x4edab0u: goto label_4edab0;
        case 0x4edab4u: goto label_4edab4;
        case 0x4edab8u: goto label_4edab8;
        case 0x4edabcu: goto label_4edabc;
        case 0x4edac0u: goto label_4edac0;
        case 0x4edac4u: goto label_4edac4;
        case 0x4edac8u: goto label_4edac8;
        case 0x4edaccu: goto label_4edacc;
        case 0x4edad0u: goto label_4edad0;
        case 0x4edad4u: goto label_4edad4;
        case 0x4edad8u: goto label_4edad8;
        case 0x4edadcu: goto label_4edadc;
        case 0x4edae0u: goto label_4edae0;
        case 0x4edae4u: goto label_4edae4;
        case 0x4edae8u: goto label_4edae8;
        case 0x4edaecu: goto label_4edaec;
        case 0x4edaf0u: goto label_4edaf0;
        case 0x4edaf4u: goto label_4edaf4;
        case 0x4edaf8u: goto label_4edaf8;
        case 0x4edafcu: goto label_4edafc;
        case 0x4edb00u: goto label_4edb00;
        case 0x4edb04u: goto label_4edb04;
        case 0x4edb08u: goto label_4edb08;
        case 0x4edb0cu: goto label_4edb0c;
        case 0x4edb10u: goto label_4edb10;
        case 0x4edb14u: goto label_4edb14;
        case 0x4edb18u: goto label_4edb18;
        case 0x4edb1cu: goto label_4edb1c;
        case 0x4edb20u: goto label_4edb20;
        case 0x4edb24u: goto label_4edb24;
        case 0x4edb28u: goto label_4edb28;
        case 0x4edb2cu: goto label_4edb2c;
        case 0x4edb30u: goto label_4edb30;
        case 0x4edb34u: goto label_4edb34;
        case 0x4edb38u: goto label_4edb38;
        case 0x4edb3cu: goto label_4edb3c;
        case 0x4edb40u: goto label_4edb40;
        case 0x4edb44u: goto label_4edb44;
        case 0x4edb48u: goto label_4edb48;
        case 0x4edb4cu: goto label_4edb4c;
        case 0x4edb50u: goto label_4edb50;
        case 0x4edb54u: goto label_4edb54;
        case 0x4edb58u: goto label_4edb58;
        case 0x4edb5cu: goto label_4edb5c;
        case 0x4edb60u: goto label_4edb60;
        case 0x4edb64u: goto label_4edb64;
        case 0x4edb68u: goto label_4edb68;
        case 0x4edb6cu: goto label_4edb6c;
        case 0x4edb70u: goto label_4edb70;
        case 0x4edb74u: goto label_4edb74;
        case 0x4edb78u: goto label_4edb78;
        case 0x4edb7cu: goto label_4edb7c;
        case 0x4edb80u: goto label_4edb80;
        case 0x4edb84u: goto label_4edb84;
        case 0x4edb88u: goto label_4edb88;
        case 0x4edb8cu: goto label_4edb8c;
        case 0x4edb90u: goto label_4edb90;
        case 0x4edb94u: goto label_4edb94;
        case 0x4edb98u: goto label_4edb98;
        case 0x4edb9cu: goto label_4edb9c;
        case 0x4edba0u: goto label_4edba0;
        case 0x4edba4u: goto label_4edba4;
        case 0x4edba8u: goto label_4edba8;
        case 0x4edbacu: goto label_4edbac;
        case 0x4edbb0u: goto label_4edbb0;
        case 0x4edbb4u: goto label_4edbb4;
        case 0x4edbb8u: goto label_4edbb8;
        case 0x4edbbcu: goto label_4edbbc;
        case 0x4edbc0u: goto label_4edbc0;
        case 0x4edbc4u: goto label_4edbc4;
        case 0x4edbc8u: goto label_4edbc8;
        case 0x4edbccu: goto label_4edbcc;
        case 0x4edbd0u: goto label_4edbd0;
        case 0x4edbd4u: goto label_4edbd4;
        case 0x4edbd8u: goto label_4edbd8;
        case 0x4edbdcu: goto label_4edbdc;
        case 0x4edbe0u: goto label_4edbe0;
        case 0x4edbe4u: goto label_4edbe4;
        case 0x4edbe8u: goto label_4edbe8;
        case 0x4edbecu: goto label_4edbec;
        case 0x4edbf0u: goto label_4edbf0;
        case 0x4edbf4u: goto label_4edbf4;
        case 0x4edbf8u: goto label_4edbf8;
        case 0x4edbfcu: goto label_4edbfc;
        case 0x4edc00u: goto label_4edc00;
        case 0x4edc04u: goto label_4edc04;
        case 0x4edc08u: goto label_4edc08;
        case 0x4edc0cu: goto label_4edc0c;
        case 0x4edc10u: goto label_4edc10;
        case 0x4edc14u: goto label_4edc14;
        case 0x4edc18u: goto label_4edc18;
        case 0x4edc1cu: goto label_4edc1c;
        case 0x4edc20u: goto label_4edc20;
        case 0x4edc24u: goto label_4edc24;
        case 0x4edc28u: goto label_4edc28;
        case 0x4edc2cu: goto label_4edc2c;
        case 0x4edc30u: goto label_4edc30;
        case 0x4edc34u: goto label_4edc34;
        case 0x4edc38u: goto label_4edc38;
        case 0x4edc3cu: goto label_4edc3c;
        case 0x4edc40u: goto label_4edc40;
        case 0x4edc44u: goto label_4edc44;
        case 0x4edc48u: goto label_4edc48;
        case 0x4edc4cu: goto label_4edc4c;
        case 0x4edc50u: goto label_4edc50;
        case 0x4edc54u: goto label_4edc54;
        case 0x4edc58u: goto label_4edc58;
        case 0x4edc5cu: goto label_4edc5c;
        case 0x4edc60u: goto label_4edc60;
        case 0x4edc64u: goto label_4edc64;
        case 0x4edc68u: goto label_4edc68;
        case 0x4edc6cu: goto label_4edc6c;
        case 0x4edc70u: goto label_4edc70;
        case 0x4edc74u: goto label_4edc74;
        case 0x4edc78u: goto label_4edc78;
        case 0x4edc7cu: goto label_4edc7c;
        case 0x4edc80u: goto label_4edc80;
        case 0x4edc84u: goto label_4edc84;
        case 0x4edc88u: goto label_4edc88;
        case 0x4edc8cu: goto label_4edc8c;
        case 0x4edc90u: goto label_4edc90;
        case 0x4edc94u: goto label_4edc94;
        case 0x4edc98u: goto label_4edc98;
        case 0x4edc9cu: goto label_4edc9c;
        case 0x4edca0u: goto label_4edca0;
        case 0x4edca4u: goto label_4edca4;
        case 0x4edca8u: goto label_4edca8;
        case 0x4edcacu: goto label_4edcac;
        case 0x4edcb0u: goto label_4edcb0;
        case 0x4edcb4u: goto label_4edcb4;
        case 0x4edcb8u: goto label_4edcb8;
        case 0x4edcbcu: goto label_4edcbc;
        default: break;
    }

    ctx->pc = 0x4ed690u;

label_4ed690:
    // 0x4ed690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ed690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ed694:
    // 0x4ed694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ed694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4ed698:
    // 0x4ed698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ed698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ed69c:
    // 0x4ed69c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ed6a0:
    // 0x4ed6a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ed6a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ed6a4:
    // 0x4ed6a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ed6a8:
    // 0x4ed6a8: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x4ed6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4ed6ac:
    // 0x4ed6ac: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x4ed6acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4ed6b0:
    // 0x4ed6b0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4ed6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_4ed6b4:
    // 0x4ed6b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4ed6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ed6b8:
    // 0x4ed6b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ed6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ed6bc:
    // 0x4ed6bc: 0x320f809  jalr        $t9
label_4ed6c0:
    if (ctx->pc == 0x4ED6C0u) {
        ctx->pc = 0x4ED6C0u;
            // 0x4ed6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED6C4u;
        goto label_4ed6c4;
    }
    ctx->pc = 0x4ED6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ED6C4u);
        ctx->pc = 0x4ED6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED6BCu;
            // 0x4ed6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ED6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ED6C4u; }
            if (ctx->pc != 0x4ED6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4ED6C4u;
label_4ed6c4:
    // 0x4ed6c4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4ed6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ed6c8:
    // 0x4ed6c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4ed6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4ed6cc:
    // 0x4ed6cc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x4ed6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4ed6d0:
    // 0x4ed6d0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4ed6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4ed6d4:
    // 0x4ed6d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4ed6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4ed6d8:
    // 0x4ed6d8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x4ed6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4ed6dc:
    // 0x4ed6dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ed6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ed6e0:
    // 0x4ed6e0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x4ed6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_4ed6e4:
    // 0x4ed6e4: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_4ed6e8:
    if (ctx->pc == 0x4ED6E8u) {
        ctx->pc = 0x4ED6E8u;
            // 0x4ed6e8: 0x26100250  addiu       $s0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->pc = 0x4ED6ECu;
        goto label_4ed6ec;
    }
    ctx->pc = 0x4ED6E4u;
    {
        const bool branch_taken_0x4ed6e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED6E4u;
            // 0x4ed6e8: 0x26100250  addiu       $s0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed6e4) {
            ctx->pc = 0x4ED6B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ed6b4;
        }
    }
    ctx->pc = 0x4ED6ECu;
label_4ed6ec:
    // 0x4ed6ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ed6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ed6f0:
    // 0x4ed6f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ed6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ed6f4:
    // 0x4ed6f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ed6f8:
    // 0x4ed6f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ed6fc:
    // 0x4ed6fc: 0x3e00008  jr          $ra
label_4ed700:
    if (ctx->pc == 0x4ED700u) {
        ctx->pc = 0x4ED700u;
            // 0x4ed700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4ED704u;
        goto label_4ed704;
    }
    ctx->pc = 0x4ED6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED6FCu;
            // 0x4ed700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED704u;
label_4ed704:
    // 0x4ed704: 0x0  nop
    ctx->pc = 0x4ed704u;
    // NOP
label_4ed708:
    // 0x4ed708: 0x0  nop
    ctx->pc = 0x4ed708u;
    // NOP
label_4ed70c:
    // 0x4ed70c: 0x0  nop
    ctx->pc = 0x4ed70cu;
    // NOP
label_4ed710:
    // 0x4ed710: 0x80ae984  j           func_2BA610
label_4ed714:
    if (ctx->pc == 0x4ED714u) {
        ctx->pc = 0x4ED714u;
            // 0x4ed714: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4ED718u;
        goto label_4ed718;
    }
    ctx->pc = 0x4ED710u;
    ctx->pc = 0x4ED714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED710u;
            // 0x4ed714: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA610u;
    {
        auto targetFn = runtime->lookupFunction(0x2BA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4ED718u;
label_4ed718:
    // 0x4ed718: 0x0  nop
    ctx->pc = 0x4ed718u;
    // NOP
label_4ed71c:
    // 0x4ed71c: 0x0  nop
    ctx->pc = 0x4ed71cu;
    // NOP
label_4ed720:
    // 0x4ed720: 0x813ac98  j           func_4EB260
label_4ed724:
    if (ctx->pc == 0x4ED724u) {
        ctx->pc = 0x4ED724u;
            // 0x4ed724: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4ED728u;
        goto label_4ed728;
    }
    ctx->pc = 0x4ED720u;
    ctx->pc = 0x4ED724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED720u;
            // 0x4ed724: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB260u;
    {
        auto targetFn = runtime->lookupFunction(0x4EB260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4ED728u;
label_4ed728:
    // 0x4ed728: 0x0  nop
    ctx->pc = 0x4ed728u;
    // NOP
label_4ed72c:
    // 0x4ed72c: 0x0  nop
    ctx->pc = 0x4ed72cu;
    // NOP
label_4ed730:
    // 0x4ed730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ed734:
    // 0x4ed734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ed734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ed738:
    // 0x4ed738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ed73c:
    // 0x4ed73c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ed740:
    // 0x4ed740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ed740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ed744:
    // 0x4ed744: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_4ed748:
    if (ctx->pc == 0x4ED748u) {
        ctx->pc = 0x4ED748u;
            // 0x4ed748: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED74Cu;
        goto label_4ed74c;
    }
    ctx->pc = 0x4ED744u;
    {
        const bool branch_taken_0x4ed744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED744u;
            // 0x4ed748: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed744) {
            ctx->pc = 0x4ED78Cu;
            goto label_4ed78c;
        }
    }
    ctx->pc = 0x4ED74Cu;
label_4ed74c:
    // 0x4ed74c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ed74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ed750:
    // 0x4ed750: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4ed750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_4ed754:
    // 0x4ed754: 0x24423c90  addiu       $v0, $v0, 0x3C90
    ctx->pc = 0x4ed754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
label_4ed758:
    // 0x4ed758: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ed758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ed75c:
    // 0x4ed75c: 0x8e240cbc  lw          $a0, 0xCBC($s1)
    ctx->pc = 0x4ed75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3260)));
label_4ed760:
    // 0x4ed760: 0xc0407c0  jal         func_101F00
label_4ed764:
    if (ctx->pc == 0x4ED764u) {
        ctx->pc = 0x4ED764u;
            // 0x4ed764: 0x24a5d7b0  addiu       $a1, $a1, -0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956976));
        ctx->pc = 0x4ED768u;
        goto label_4ed768;
    }
    ctx->pc = 0x4ED760u;
    SET_GPR_U32(ctx, 31, 0x4ED768u);
    ctx->pc = 0x4ED764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED760u;
            // 0x4ed764: 0x24a5d7b0  addiu       $a1, $a1, -0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED768u; }
        if (ctx->pc != 0x4ED768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED768u; }
        if (ctx->pc != 0x4ED768u) { return; }
    }
    ctx->pc = 0x4ED768u;
label_4ed768:
    // 0x4ed768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ed768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ed76c:
    // 0x4ed76c: 0xc0ccf5c  jal         func_333D70
label_4ed770:
    if (ctx->pc == 0x4ED770u) {
        ctx->pc = 0x4ED770u;
            // 0x4ed770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED774u;
        goto label_4ed774;
    }
    ctx->pc = 0x4ED76Cu;
    SET_GPR_U32(ctx, 31, 0x4ED774u);
    ctx->pc = 0x4ED770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED76Cu;
            // 0x4ed770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333D70u;
    if (runtime->hasFunction(0x333D70u)) {
        auto targetFn = runtime->lookupFunction(0x333D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED774u; }
        if (ctx->pc != 0x4ED774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333D70_0x333d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED774u; }
        if (ctx->pc != 0x4ED774u) { return; }
    }
    ctx->pc = 0x4ED774u;
label_4ed774:
    // 0x4ed774: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ed774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ed778:
    // 0x4ed778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ed778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ed77c:
    // 0x4ed77c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ed780:
    if (ctx->pc == 0x4ED780u) {
        ctx->pc = 0x4ED780u;
            // 0x4ed780: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED784u;
        goto label_4ed784;
    }
    ctx->pc = 0x4ED77Cu;
    {
        const bool branch_taken_0x4ed77c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ed77c) {
            ctx->pc = 0x4ED780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED77Cu;
            // 0x4ed780: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED790u;
            goto label_4ed790;
        }
    }
    ctx->pc = 0x4ED784u;
label_4ed784:
    // 0x4ed784: 0xc0400a8  jal         func_1002A0
label_4ed788:
    if (ctx->pc == 0x4ED788u) {
        ctx->pc = 0x4ED788u;
            // 0x4ed788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED78Cu;
        goto label_4ed78c;
    }
    ctx->pc = 0x4ED784u;
    SET_GPR_U32(ctx, 31, 0x4ED78Cu);
    ctx->pc = 0x4ED788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED784u;
            // 0x4ed788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED78Cu; }
        if (ctx->pc != 0x4ED78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED78Cu; }
        if (ctx->pc != 0x4ED78Cu) { return; }
    }
    ctx->pc = 0x4ED78Cu;
label_4ed78c:
    // 0x4ed78c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ed78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ed790:
    // 0x4ed790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ed790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ed794:
    // 0x4ed794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ed798:
    // 0x4ed798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ed79c:
    // 0x4ed79c: 0x3e00008  jr          $ra
label_4ed7a0:
    if (ctx->pc == 0x4ED7A0u) {
        ctx->pc = 0x4ED7A0u;
            // 0x4ed7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4ED7A4u;
        goto label_4ed7a4;
    }
    ctx->pc = 0x4ED79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED79Cu;
            // 0x4ed7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED7A4u;
label_4ed7a4:
    // 0x4ed7a4: 0x0  nop
    ctx->pc = 0x4ed7a4u;
    // NOP
label_4ed7a8:
    // 0x4ed7a8: 0x0  nop
    ctx->pc = 0x4ed7a8u;
    // NOP
label_4ed7ac:
    // 0x4ed7ac: 0x0  nop
    ctx->pc = 0x4ed7acu;
    // NOP
label_4ed7b0:
    // 0x4ed7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ed7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ed7b4:
    // 0x4ed7b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ed7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ed7b8:
    // 0x4ed7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ed7bc:
    // 0x4ed7bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ed7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ed7c0:
    // 0x4ed7c0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_4ed7c4:
    if (ctx->pc == 0x4ED7C4u) {
        ctx->pc = 0x4ED7C4u;
            // 0x4ed7c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED7C8u;
        goto label_4ed7c8;
    }
    ctx->pc = 0x4ED7C0u;
    {
        const bool branch_taken_0x4ed7c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed7c0) {
            ctx->pc = 0x4ED7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED7C0u;
            // 0x4ed7c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED7ECu;
            goto label_4ed7ec;
        }
    }
    ctx->pc = 0x4ED7C8u;
label_4ed7c8:
    // 0x4ed7c8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x4ed7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_4ed7cc:
    // 0x4ed7cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ed7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ed7d0:
    // 0x4ed7d0: 0x24633df0  addiu       $v1, $v1, 0x3DF0
    ctx->pc = 0x4ed7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15856));
label_4ed7d4:
    // 0x4ed7d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ed7d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ed7d8:
    // 0x4ed7d8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_4ed7dc:
    if (ctx->pc == 0x4ED7DCu) {
        ctx->pc = 0x4ED7DCu;
            // 0x4ed7dc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4ED7E0u;
        goto label_4ed7e0;
    }
    ctx->pc = 0x4ED7D8u;
    {
        const bool branch_taken_0x4ed7d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4ED7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED7D8u;
            // 0x4ed7dc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed7d8) {
            ctx->pc = 0x4ED7E8u;
            goto label_4ed7e8;
        }
    }
    ctx->pc = 0x4ED7E0u;
label_4ed7e0:
    // 0x4ed7e0: 0xc0400a8  jal         func_1002A0
label_4ed7e4:
    if (ctx->pc == 0x4ED7E4u) {
        ctx->pc = 0x4ED7E8u;
        goto label_4ed7e8;
    }
    ctx->pc = 0x4ED7E0u;
    SET_GPR_U32(ctx, 31, 0x4ED7E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED7E8u; }
        if (ctx->pc != 0x4ED7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED7E8u; }
        if (ctx->pc != 0x4ED7E8u) { return; }
    }
    ctx->pc = 0x4ED7E8u;
label_4ed7e8:
    // 0x4ed7e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ed7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ed7ec:
    // 0x4ed7ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ed7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ed7f0:
    // 0x4ed7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ed7f4:
    // 0x4ed7f4: 0x3e00008  jr          $ra
label_4ed7f8:
    if (ctx->pc == 0x4ED7F8u) {
        ctx->pc = 0x4ED7F8u;
            // 0x4ed7f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4ED7FCu;
        goto label_4ed7fc;
    }
    ctx->pc = 0x4ED7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED7F4u;
            // 0x4ed7f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED7FCu;
label_4ed7fc:
    // 0x4ed7fc: 0x0  nop
    ctx->pc = 0x4ed7fcu;
    // NOP
label_4ed800:
    // 0x4ed800: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4ed800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4ed804:
    // 0x4ed804: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4ed804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4ed808:
    // 0x4ed808: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4ed808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4ed80c:
    // 0x4ed80c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4ed80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4ed810:
    // 0x4ed810: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4ed810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4ed814:
    // 0x4ed814: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4ed814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4ed818:
    // 0x4ed818: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ed818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ed81c:
    // 0x4ed81c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4ed81cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ed820:
    // 0x4ed820: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ed820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ed824:
    // 0x4ed824: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4ed824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ed828:
    // 0x4ed828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ed828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ed82c:
    // 0x4ed82c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ed830:
    // 0x4ed830: 0xc0cc888  jal         func_332220
label_4ed834:
    if (ctx->pc == 0x4ED834u) {
        ctx->pc = 0x4ED834u;
            // 0x4ed834: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4ED838u;
        goto label_4ed838;
    }
    ctx->pc = 0x4ED830u;
    SET_GPR_U32(ctx, 31, 0x4ED838u);
    ctx->pc = 0x4ED834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED830u;
            // 0x4ed834: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x332220u;
    if (runtime->hasFunction(0x332220u)) {
        auto targetFn = runtime->lookupFunction(0x332220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED838u; }
        if (ctx->pc != 0x4ED838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00332220_0x332220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED838u; }
        if (ctx->pc != 0x4ED838u) { return; }
    }
    ctx->pc = 0x4ED838u;
label_4ed838:
    // 0x4ed838: 0x8ea40cd0  lw          $a0, 0xCD0($s5)
    ctx->pc = 0x4ed838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3280)));
label_4ed83c:
    // 0x4ed83c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4ed840:
    if (ctx->pc == 0x4ED840u) {
        ctx->pc = 0x4ED840u;
            // 0x4ed840: 0x2409003b  addiu       $t1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->pc = 0x4ED844u;
        goto label_4ed844;
    }
    ctx->pc = 0x4ED83Cu;
    {
        const bool branch_taken_0x4ed83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed83c) {
            ctx->pc = 0x4ED840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED83Cu;
            // 0x4ed840: 0x2409003b  addiu       $t1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED85Cu;
            goto label_4ed85c;
        }
    }
    ctx->pc = 0x4ED844u;
label_4ed844:
    // 0x4ed844: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ed844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ed848:
    // 0x4ed848: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ed848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ed84c:
    // 0x4ed84c: 0x320f809  jalr        $t9
label_4ed850:
    if (ctx->pc == 0x4ED850u) {
        ctx->pc = 0x4ED850u;
            // 0x4ed850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED854u;
        goto label_4ed854;
    }
    ctx->pc = 0x4ED84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ED854u);
        ctx->pc = 0x4ED850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED84Cu;
            // 0x4ed850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ED854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ED854u; }
            if (ctx->pc != 0x4ED854u) { return; }
        }
        }
    }
    ctx->pc = 0x4ED854u;
label_4ed854:
    // 0x4ed854: 0xaea00cd0  sw          $zero, 0xCD0($s5)
    ctx->pc = 0x4ed854u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3280), GPR_U32(ctx, 0));
label_4ed858:
    // 0x4ed858: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x4ed858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4ed85c:
    // 0x4ed85c: 0x26a40814  addiu       $a0, $s5, 0x814
    ctx->pc = 0x4ed85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2068));
label_4ed860:
    // 0x4ed860: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4ed860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4ed864:
    // 0x4ed864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ed864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ed868:
    // 0x4ed868: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4ed868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ed86c:
    // 0x4ed86c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ed86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ed870:
    // 0x4ed870: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x4ed870u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4ed874:
    // 0x4ed874: 0xc0bc754  jal         func_2F1D50
label_4ed878:
    if (ctx->pc == 0x4ED878u) {
        ctx->pc = 0x4ED878u;
            // 0x4ed878: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x4ED87Cu;
        goto label_4ed87c;
    }
    ctx->pc = 0x4ED874u;
    SET_GPR_U32(ctx, 31, 0x4ED87Cu);
    ctx->pc = 0x4ED878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED874u;
            // 0x4ed878: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D50u;
    if (runtime->hasFunction(0x2F1D50u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED87Cu; }
        if (ctx->pc != 0x4ED87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D50_0x2f1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED87Cu; }
        if (ctx->pc != 0x4ED87Cu) { return; }
    }
    ctx->pc = 0x4ED87Cu;
label_4ed87c:
    // 0x4ed87c: 0x8ea30cc0  lw          $v1, 0xCC0($s5)
    ctx->pc = 0x4ed87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3264)));
label_4ed880:
    // 0x4ed880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ed880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ed884:
    // 0x4ed884: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
label_4ed888:
    if (ctx->pc == 0x4ED888u) {
        ctx->pc = 0x4ED888u;
            // 0x4ed888: 0x8ea60cc8  lw          $a2, 0xCC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3272)));
        ctx->pc = 0x4ED88Cu;
        goto label_4ed88c;
    }
    ctx->pc = 0x4ED884u;
    {
        const bool branch_taken_0x4ed884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ed884) {
            ctx->pc = 0x4ED888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED884u;
            // 0x4ed888: 0x8ea60cc8  lw          $a2, 0xCC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED8C4u;
            goto label_4ed8c4;
        }
    }
    ctx->pc = 0x4ED88Cu;
label_4ed88c:
    // 0x4ed88c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4ed890:
    if (ctx->pc == 0x4ED890u) {
        ctx->pc = 0x4ED890u;
            // 0x4ed890: 0x8ea60cc8  lw          $a2, 0xCC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3272)));
        ctx->pc = 0x4ED894u;
        goto label_4ed894;
    }
    ctx->pc = 0x4ED88Cu;
    {
        const bool branch_taken_0x4ed88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed88c) {
            ctx->pc = 0x4ED890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED88Cu;
            // 0x4ed890: 0x8ea60cc8  lw          $a2, 0xCC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED89Cu;
            goto label_4ed89c;
        }
    }
    ctx->pc = 0x4ED894u;
label_4ed894:
    // 0x4ed894: 0x10000014  b           . + 4 + (0x14 << 2)
label_4ed898:
    if (ctx->pc == 0x4ED898u) {
        ctx->pc = 0x4ED898u;
            // 0x4ed898: 0x3c0341a0  lui         $v1, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
        ctx->pc = 0x4ED89Cu;
        goto label_4ed89c;
    }
    ctx->pc = 0x4ED894u;
    {
        const bool branch_taken_0x4ed894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED894u;
            // 0x4ed898: 0x3c0341a0  lui         $v1, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed894) {
            ctx->pc = 0x4ED8E8u;
            goto label_4ed8e8;
        }
    }
    ctx->pc = 0x4ED89Cu;
label_4ed89c:
    // 0x4ed89c: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x4ed89cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4ed8a0:
    // 0x4ed8a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ed8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ed8a4:
    // 0x4ed8a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4ed8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4ed8a8:
    // 0x4ed8a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ed8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ed8ac:
    // 0x4ed8ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ed8acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ed8b0:
    // 0x4ed8b0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x4ed8b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4ed8b4:
    // 0x4ed8b4: 0xc0cc878  jal         func_3321E0
label_4ed8b8:
    if (ctx->pc == 0x4ED8B8u) {
        ctx->pc = 0x4ED8B8u;
            // 0x4ed8b8: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x4ED8BCu;
        goto label_4ed8bc;
    }
    ctx->pc = 0x4ED8B4u;
    SET_GPR_U32(ctx, 31, 0x4ED8BCu);
    ctx->pc = 0x4ED8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED8B4u;
            // 0x4ed8b8: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321E0u;
    if (runtime->hasFunction(0x3321E0u)) {
        auto targetFn = runtime->lookupFunction(0x3321E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED8BCu; }
        if (ctx->pc != 0x4ED8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321E0_0x3321e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED8BCu; }
        if (ctx->pc != 0x4ED8BCu) { return; }
    }
    ctx->pc = 0x4ED8BCu;
label_4ed8bc:
    // 0x4ed8bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_4ed8c0:
    if (ctx->pc == 0x4ED8C0u) {
        ctx->pc = 0x4ED8C4u;
        goto label_4ed8c4;
    }
    ctx->pc = 0x4ED8BCu;
    {
        const bool branch_taken_0x4ed8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed8bc) {
            ctx->pc = 0x4ED8E4u;
            goto label_4ed8e4;
        }
    }
    ctx->pc = 0x4ED8C4u;
label_4ed8c4:
    // 0x4ed8c4: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x4ed8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4ed8c8:
    // 0x4ed8c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ed8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ed8cc:
    // 0x4ed8cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4ed8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4ed8d0:
    // 0x4ed8d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ed8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ed8d4:
    // 0x4ed8d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ed8d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ed8d8:
    // 0x4ed8d8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x4ed8d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4ed8dc:
    // 0x4ed8dc: 0xc0cc878  jal         func_3321E0
label_4ed8e0:
    if (ctx->pc == 0x4ED8E0u) {
        ctx->pc = 0x4ED8E0u;
            // 0x4ed8e0: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x4ED8E4u;
        goto label_4ed8e4;
    }
    ctx->pc = 0x4ED8DCu;
    SET_GPR_U32(ctx, 31, 0x4ED8E4u);
    ctx->pc = 0x4ED8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED8DCu;
            // 0x4ed8e0: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321E0u;
    if (runtime->hasFunction(0x3321E0u)) {
        auto targetFn = runtime->lookupFunction(0x3321E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED8E4u; }
        if (ctx->pc != 0x4ED8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321E0_0x3321e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED8E4u; }
        if (ctx->pc != 0x4ED8E4u) { return; }
    }
    ctx->pc = 0x4ED8E4u;
label_4ed8e4:
    // 0x4ed8e4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x4ed8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_4ed8e8:
    // 0x4ed8e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ed8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ed8ec:
    // 0x4ed8ec: 0xac436528  sw          $v1, 0x6528($v0)
    ctx->pc = 0x4ed8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25896), GPR_U32(ctx, 3));
label_4ed8f0:
    // 0x4ed8f0: 0x3c1600af  lui         $s6, 0xAF
    ctx->pc = 0x4ed8f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)175 << 16));
label_4ed8f4:
    // 0x4ed8f4: 0x3c023cbd  lui         $v0, 0x3CBD
    ctx->pc = 0x4ed8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15549 << 16));
label_4ed8f8:
    // 0x4ed8f8: 0x26d60e80  addiu       $s6, $s6, 0xE80
    ctx->pc = 0x4ed8f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3712));
label_4ed8fc:
    // 0x4ed8fc: 0x3443a12f  ori         $v1, $v0, 0xA12F
    ctx->pc = 0x4ed8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4ed900:
    // 0x4ed900: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4ed900u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ed904:
    // 0x4ed904: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ed904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ed908:
    // 0x4ed908: 0xac436510  sw          $v1, 0x6510($v0)
    ctx->pc = 0x4ed908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25872), GPR_U32(ctx, 3));
label_4ed90c:
    // 0x4ed90c: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x4ed90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
label_4ed910:
    // 0x4ed910: 0x344338e4  ori         $v1, $v0, 0x38E4
    ctx->pc = 0x4ed910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_4ed914:
    // 0x4ed914: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ed914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ed918:
    // 0x4ed918: 0xac436514  sw          $v1, 0x6514($v0)
    ctx->pc = 0x4ed918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25876), GPR_U32(ctx, 3));
label_4ed91c:
    // 0x4ed91c: 0x3c023cd6  lui         $v0, 0x3CD6
    ctx->pc = 0x4ed91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15574 << 16));
label_4ed920:
    // 0x4ed920: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x4ed920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_4ed924:
    // 0x4ed924: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ed924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ed928:
    // 0x4ed928: 0xac43653c  sw          $v1, 0x653C($v0)
    ctx->pc = 0x4ed928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25916), GPR_U32(ctx, 3));
label_4ed92c:
    // 0x4ed92c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ed92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ed930:
    // 0x4ed930: 0xac436540  sw          $v1, 0x6540($v0)
    ctx->pc = 0x4ed930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25920), GPR_U32(ctx, 3));
label_4ed934:
    // 0x4ed934: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ed934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ed938:
    // 0x4ed938: 0xac406598  sw          $zero, 0x6598($v0)
    ctx->pc = 0x4ed938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26008), GPR_U32(ctx, 0));
label_4ed93c:
    // 0x4ed93c: 0x8ed10004  lw          $s1, 0x4($s6)
    ctx->pc = 0x4ed93cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_4ed940:
    // 0x4ed940: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x4ed940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_4ed944:
    // 0x4ed944: 0x8e330a5c  lw          $s3, 0xA5C($s1)
    ctx->pc = 0x4ed944u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2652)));
label_4ed948:
    // 0x4ed948: 0x26300a50  addiu       $s0, $s1, 0xA50
    ctx->pc = 0x4ed948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_4ed94c:
    // 0x4ed94c: 0x8e320a60  lw          $s2, 0xA60($s1)
    ctx->pc = 0x4ed94cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2656)));
label_4ed950:
    // 0x4ed950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ed950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ed954:
    // 0x4ed954: 0x263e0440  addiu       $fp, $s1, 0x440
    ctx->pc = 0x4ed954u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_4ed958:
    // 0x4ed958: 0xc0eea24  jal         func_3BA890
label_4ed95c:
    if (ctx->pc == 0x4ED95Cu) {
        ctx->pc = 0x4ED95Cu;
            // 0x4ed95c: 0xae220a7c  sw          $v0, 0xA7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2684), GPR_U32(ctx, 2));
        ctx->pc = 0x4ED960u;
        goto label_4ed960;
    }
    ctx->pc = 0x4ED958u;
    SET_GPR_U32(ctx, 31, 0x4ED960u);
    ctx->pc = 0x4ED95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED958u;
            // 0x4ed95c: 0xae220a7c  sw          $v0, 0xA7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED960u; }
        if (ctx->pc != 0x4ED960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED960u; }
        if (ctx->pc != 0x4ED960u) { return; }
    }
    ctx->pc = 0x4ED960u;
label_4ed960:
    // 0x4ed960: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x4ed960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_4ed964:
    // 0x4ed964: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4ed964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4ed968:
    // 0x4ed968: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x4ed968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_4ed96c:
    // 0x4ed96c: 0x8e590014  lw          $t9, 0x14($s2)
    ctx->pc = 0x4ed96cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4ed970:
    // 0x4ed970: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4ed970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4ed974:
    // 0x4ed974: 0x320f809  jalr        $t9
label_4ed978:
    if (ctx->pc == 0x4ED978u) {
        ctx->pc = 0x4ED978u;
            // 0x4ed978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED97Cu;
        goto label_4ed97c;
    }
    ctx->pc = 0x4ED974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ED97Cu);
        ctx->pc = 0x4ED978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED974u;
            // 0x4ed978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ED97Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ED97Cu; }
            if (ctx->pc != 0x4ED97Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4ED97Cu;
label_4ed97c:
    // 0x4ed97c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4ed97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4ed980:
    // 0x4ed980: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4ed980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4ed984:
    // 0x4ed984: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x4ed984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_4ed988:
    // 0x4ed988: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x4ed988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_4ed98c:
    // 0x4ed98c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x4ed98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_4ed990:
    // 0x4ed990: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x4ed990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_4ed994:
    // 0x4ed994: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x4ed994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_4ed998:
    // 0x4ed998: 0x8e790014  lw          $t9, 0x14($s3)
    ctx->pc = 0x4ed998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4ed99c:
    // 0x4ed99c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4ed99cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4ed9a0:
    // 0x4ed9a0: 0x320f809  jalr        $t9
label_4ed9a4:
    if (ctx->pc == 0x4ED9A4u) {
        ctx->pc = 0x4ED9A4u;
            // 0x4ed9a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED9A8u;
        goto label_4ed9a8;
    }
    ctx->pc = 0x4ED9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ED9A8u);
        ctx->pc = 0x4ED9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED9A0u;
            // 0x4ed9a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ED9A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ED9A8u; }
            if (ctx->pc != 0x4ED9A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4ED9A8u;
label_4ed9a8:
    // 0x4ed9a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4ed9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4ed9ac:
    // 0x4ed9ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ed9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ed9b0:
    // 0x4ed9b0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x4ed9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_4ed9b4:
    // 0x4ed9b4: 0x8e220d6c  lw          $v0, 0xD6C($s1)
    ctx->pc = 0x4ed9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_4ed9b8:
    // 0x4ed9b8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x4ed9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_4ed9bc:
    // 0x4ed9bc: 0x8e250d6c  lw          $a1, 0xD6C($s1)
    ctx->pc = 0x4ed9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_4ed9c0:
    // 0x4ed9c0: 0x8e260d70  lw          $a2, 0xD70($s1)
    ctx->pc = 0x4ed9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_4ed9c4:
    // 0x4ed9c4: 0xc0753f0  jal         func_1D4FC0
label_4ed9c8:
    if (ctx->pc == 0x4ED9C8u) {
        ctx->pc = 0x4ED9C8u;
            // 0x4ed9c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED9CCu;
        goto label_4ed9cc;
    }
    ctx->pc = 0x4ED9C4u;
    SET_GPR_U32(ctx, 31, 0x4ED9CCu);
    ctx->pc = 0x4ED9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED9C4u;
            // 0x4ed9c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FC0u;
    if (runtime->hasFunction(0x1D4FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED9CCu; }
        if (ctx->pc != 0x4ED9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4FC0_0x1d4fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED9CCu; }
        if (ctx->pc != 0x4ED9CCu) { return; }
    }
    ctx->pc = 0x4ED9CCu;
label_4ed9cc:
    // 0x4ed9cc: 0xc0754e0  jal         func_1D5380
label_4ed9d0:
    if (ctx->pc == 0x4ED9D0u) {
        ctx->pc = 0x4ED9D0u;
            // 0x4ed9d0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED9D4u;
        goto label_4ed9d4;
    }
    ctx->pc = 0x4ED9CCu;
    SET_GPR_U32(ctx, 31, 0x4ED9D4u);
    ctx->pc = 0x4ED9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED9CCu;
            // 0x4ed9d0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5380u;
    if (runtime->hasFunction(0x1D5380u)) {
        auto targetFn = runtime->lookupFunction(0x1D5380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED9D4u; }
        if (ctx->pc != 0x4ED9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5380_0x1d5380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED9D4u; }
        if (ctx->pc != 0x4ED9D4u) { return; }
    }
    ctx->pc = 0x4ED9D4u;
label_4ed9d4:
    // 0x4ed9d4: 0xae200db8  sw          $zero, 0xDB8($s1)
    ctx->pc = 0x4ed9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 0));
label_4ed9d8:
    // 0x4ed9d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4ed9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ed9dc:
    // 0x4ed9dc: 0x8e250d60  lw          $a1, 0xD60($s1)
    ctx->pc = 0x4ed9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_4ed9e0:
    // 0x4ed9e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ed9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ed9e4:
    // 0x4ed9e4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4ed9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4ed9e8:
    // 0x4ed9e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4ed9e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4ed9ec:
    // 0x4ed9ec: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x4ed9ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_4ed9f0:
    // 0x4ed9f0: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x4ed9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_4ed9f4:
    // 0x4ed9f4: 0xa22411a1  sb          $a0, 0x11A1($s1)
    ctx->pc = 0x4ed9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4513), (uint8_t)GPR_U32(ctx, 4));
label_4ed9f8:
    // 0x4ed9f8: 0x8ea40cbc  lw          $a0, 0xCBC($s5)
    ctx->pc = 0x4ed9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3260)));
label_4ed9fc:
    // 0x4ed9fc: 0x8c63cdc0  lw          $v1, -0x3240($v1)
    ctx->pc = 0x4ed9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954432)));
label_4eda00:
    // 0x4eda00: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x4eda00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_4eda04:
    // 0x4eda04: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4eda04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_4eda08:
    // 0x4eda08: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4eda08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_4eda0c:
    // 0x4eda0c: 0x8ea3077c  lw          $v1, 0x77C($s5)
    ctx->pc = 0x4eda0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_4eda10:
    // 0x4eda10: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x4eda10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4eda14:
    // 0x4eda14: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
label_4eda18:
    if (ctx->pc == 0x4EDA18u) {
        ctx->pc = 0x4EDA18u;
            // 0x4eda18: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
        ctx->pc = 0x4EDA1Cu;
        goto label_4eda1c;
    }
    ctx->pc = 0x4EDA14u;
    {
        const bool branch_taken_0x4eda14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDA14u;
            // 0x4eda18: 0x26f7000c  addiu       $s7, $s7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eda14) {
            ctx->pc = 0x4ED93Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ed93c;
        }
    }
    ctx->pc = 0x4EDA1Cu;
label_4eda1c:
    // 0x4eda1c: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x4eda1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_4eda20:
    // 0x4eda20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4eda20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eda24:
    // 0x4eda24: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x4eda24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_4eda28:
    // 0x4eda28: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x4eda28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4eda2c:
    // 0x4eda2c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x4eda2cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4eda30:
    // 0x4eda30: 0x8e430e38  lw          $v1, 0xE38($s2)
    ctx->pc = 0x4eda30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_4eda34:
    // 0x4eda34: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_4eda38:
    if (ctx->pc == 0x4EDA38u) {
        ctx->pc = 0x4EDA38u;
            // 0x4eda38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDA3Cu;
        goto label_4eda3c;
    }
    ctx->pc = 0x4EDA34u;
    {
        const bool branch_taken_0x4eda34 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4EDA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDA34u;
            // 0x4eda38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eda34) {
            ctx->pc = 0x4EDA50u;
            goto label_4eda50;
        }
    }
    ctx->pc = 0x4EDA3Cu;
label_4eda3c:
    // 0x4eda3c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4eda3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4eda40:
    // 0x4eda40: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4eda44:
    if (ctx->pc == 0x4EDA44u) {
        ctx->pc = 0x4EDA48u;
        goto label_4eda48;
    }
    ctx->pc = 0x4EDA40u;
    {
        const bool branch_taken_0x4eda40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eda40) {
            ctx->pc = 0x4EDA50u;
            goto label_4eda50;
        }
    }
    ctx->pc = 0x4EDA48u;
label_4eda48:
    // 0x4eda48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eda48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eda4c:
    // 0x4eda4c: 0x0  nop
    ctx->pc = 0x4eda4cu;
    // NOP
label_4eda50:
    // 0x4eda50: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_4eda54:
    if (ctx->pc == 0x4EDA54u) {
        ctx->pc = 0x4EDA58u;
        goto label_4eda58;
    }
    ctx->pc = 0x4EDA50u;
    {
        const bool branch_taken_0x4eda50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eda50) {
            ctx->pc = 0x4EDA70u;
            goto label_4eda70;
        }
    }
    ctx->pc = 0x4EDA58u;
label_4eda58:
    // 0x4eda58: 0xc075eb4  jal         func_1D7AD0
label_4eda5c:
    if (ctx->pc == 0x4EDA5Cu) {
        ctx->pc = 0x4EDA5Cu;
            // 0x4eda5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDA60u;
        goto label_4eda60;
    }
    ctx->pc = 0x4EDA58u;
    SET_GPR_U32(ctx, 31, 0x4EDA60u);
    ctx->pc = 0x4EDA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDA58u;
            // 0x4eda5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDA60u; }
        if (ctx->pc != 0x4EDA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDA60u; }
        if (ctx->pc != 0x4EDA60u) { return; }
    }
    ctx->pc = 0x4EDA60u;
label_4eda60:
    // 0x4eda60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4eda64:
    if (ctx->pc == 0x4EDA64u) {
        ctx->pc = 0x4EDA68u;
        goto label_4eda68;
    }
    ctx->pc = 0x4EDA60u;
    {
        const bool branch_taken_0x4eda60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eda60) {
            ctx->pc = 0x4EDA70u;
            goto label_4eda70;
        }
    }
    ctx->pc = 0x4EDA68u;
label_4eda68:
    // 0x4eda68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4eda68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eda6c:
    // 0x4eda6c: 0x0  nop
    ctx->pc = 0x4eda6cu;
    // NOP
label_4eda70:
    // 0x4eda70: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_4eda74:
    if (ctx->pc == 0x4EDA74u) {
        ctx->pc = 0x4EDA78u;
        goto label_4eda78;
    }
    ctx->pc = 0x4EDA70u;
    {
        const bool branch_taken_0x4eda70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eda70) {
            ctx->pc = 0x4EDAE8u;
            goto label_4edae8;
        }
    }
    ctx->pc = 0x4EDA78u;
label_4eda78:
    // 0x4eda78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4eda78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4eda7c:
    // 0x4eda7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4eda7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eda80:
    // 0x4eda80: 0xc04a576  jal         func_1295D8
label_4eda84:
    if (ctx->pc == 0x4EDA84u) {
        ctx->pc = 0x4EDA84u;
            // 0x4eda84: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x4EDA88u;
        goto label_4eda88;
    }
    ctx->pc = 0x4EDA80u;
    SET_GPR_U32(ctx, 31, 0x4EDA88u);
    ctx->pc = 0x4EDA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDA80u;
            // 0x4eda84: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDA88u; }
        if (ctx->pc != 0x4EDA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDA88u; }
        if (ctx->pc != 0x4EDA88u) { return; }
    }
    ctx->pc = 0x4EDA88u;
label_4eda88:
    // 0x4eda88: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4eda88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4eda8c:
    // 0x4eda8c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4eda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4eda90:
    // 0x4eda90: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x4eda90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_4eda94:
    // 0x4eda94: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x4eda94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_4eda98:
    // 0x4eda98: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x4eda98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_4eda9c:
    // 0x4eda9c: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x4eda9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_4edaa0:
    // 0x4edaa0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x4edaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4edaa4:
    // 0x4edaa4: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x4edaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_4edaa8:
    // 0x4edaa8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x4edaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_4edaac:
    // 0x4edaac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4edaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4edab0:
    // 0x4edab0: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x4edab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_4edab4:
    // 0x4edab4: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x4edab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_4edab8:
    // 0x4edab8: 0x8e430d98  lw          $v1, 0xD98($s2)
    ctx->pc = 0x4edab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_4edabc:
    // 0x4edabc: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x4edabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_4edac0:
    // 0x4edac0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4edac0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4edac4:
    // 0x4edac4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_4edac8:
    if (ctx->pc == 0x4EDAC8u) {
        ctx->pc = 0x4EDAC8u;
            // 0x4edac8: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x4EDACCu;
        goto label_4edacc;
    }
    ctx->pc = 0x4EDAC4u;
    {
        const bool branch_taken_0x4edac4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4edac4) {
            ctx->pc = 0x4EDAC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDAC4u;
            // 0x4edac8: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EDAD4u;
            goto label_4edad4;
        }
    }
    ctx->pc = 0x4EDACCu;
label_4edacc:
    // 0x4edacc: 0x10000004  b           . + 4 + (0x4 << 2)
label_4edad0:
    if (ctx->pc == 0x4EDAD0u) {
        ctx->pc = 0x4EDAD0u;
            // 0x4edad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDAD4u;
        goto label_4edad4;
    }
    ctx->pc = 0x4EDACCu;
    {
        const bool branch_taken_0x4edacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDACCu;
            // 0x4edad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edacc) {
            ctx->pc = 0x4EDAE0u;
            goto label_4edae0;
        }
    }
    ctx->pc = 0x4EDAD4u;
label_4edad4:
    // 0x4edad4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4edad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4edad8:
    // 0x4edad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4edad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4edadc:
    // 0x4edadc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4edadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4edae0:
    // 0x4edae0: 0xc0b771c  jal         func_2DDC70
label_4edae4:
    if (ctx->pc == 0x4EDAE4u) {
        ctx->pc = 0x4EDAE4u;
            // 0x4edae4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4EDAE8u;
        goto label_4edae8;
    }
    ctx->pc = 0x4EDAE0u;
    SET_GPR_U32(ctx, 31, 0x4EDAE8u);
    ctx->pc = 0x4EDAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDAE0u;
            // 0x4edae4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC70u;
    if (runtime->hasFunction(0x2DDC70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDAE8u; }
        if (ctx->pc != 0x4EDAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDC70_0x2ddc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDAE8u; }
        if (ctx->pc != 0x4EDAE8u) { return; }
    }
    ctx->pc = 0x4EDAE8u;
label_4edae8:
    // 0x4edae8: 0x8ea3077c  lw          $v1, 0x77C($s5)
    ctx->pc = 0x4edae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_4edaec:
    // 0x4edaec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4edaecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4edaf0:
    // 0x4edaf0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x4edaf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4edaf4:
    // 0x4edaf4: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_4edaf8:
    if (ctx->pc == 0x4EDAF8u) {
        ctx->pc = 0x4EDAF8u;
            // 0x4edaf8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4EDAFCu;
        goto label_4edafc;
    }
    ctx->pc = 0x4EDAF4u;
    {
        const bool branch_taken_0x4edaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDAF4u;
            // 0x4edaf8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edaf4) {
            ctx->pc = 0x4EDA28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eda28;
        }
    }
    ctx->pc = 0x4EDAFCu;
label_4edafc:
    // 0x4edafc: 0xa2a00cd8  sb          $zero, 0xCD8($s5)
    ctx->pc = 0x4edafcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3288), (uint8_t)GPR_U32(ctx, 0));
label_4edb00:
    // 0x4edb00: 0xaea00ccc  sw          $zero, 0xCCC($s5)
    ctx->pc = 0x4edb00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3276), GPR_U32(ctx, 0));
label_4edb04:
    // 0x4edb04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4edb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4edb08:
    // 0x4edb08: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4edb08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4edb0c:
    // 0x4edb0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4edb0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4edb10:
    // 0x4edb10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4edb10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4edb14:
    // 0x4edb14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4edb14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4edb18:
    // 0x4edb18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4edb18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4edb1c:
    // 0x4edb1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4edb1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4edb20:
    // 0x4edb20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4edb20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4edb24:
    // 0x4edb24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4edb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4edb28:
    // 0x4edb28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4edb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4edb2c:
    // 0x4edb2c: 0x3e00008  jr          $ra
label_4edb30:
    if (ctx->pc == 0x4EDB30u) {
        ctx->pc = 0x4EDB30u;
            // 0x4edb30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4EDB34u;
        goto label_4edb34;
    }
    ctx->pc = 0x4EDB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDB2Cu;
            // 0x4edb30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EDB34u;
label_4edb34:
    // 0x4edb34: 0x0  nop
    ctx->pc = 0x4edb34u;
    // NOP
label_4edb38:
    // 0x4edb38: 0x0  nop
    ctx->pc = 0x4edb38u;
    // NOP
label_4edb3c:
    // 0x4edb3c: 0x0  nop
    ctx->pc = 0x4edb3cu;
    // NOP
label_4edb40:
    // 0x4edb40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4edb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4edb44:
    // 0x4edb44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4edb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4edb48:
    // 0x4edb48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4edb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4edb4c:
    // 0x4edb4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4edb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4edb50:
    // 0x4edb50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4edb50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4edb54:
    // 0x4edb54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4edb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4edb58:
    // 0x4edb58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4edb58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4edb5c:
    // 0x4edb5c: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x4edb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_4edb60:
    // 0x4edb60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4edb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4edb64:
    // 0x4edb64: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x4edb64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_4edb68:
    // 0x4edb68: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x4edb68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4edb6c:
    // 0x4edb6c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4edb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4edb70:
    // 0x4edb70: 0x8e050db0  lw          $a1, 0xDB0($s0)
    ctx->pc = 0x4edb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_4edb74:
    // 0x4edb74: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x4edb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_4edb78:
    // 0x4edb78: 0x10a30043  beq         $a1, $v1, . + 4 + (0x43 << 2)
label_4edb7c:
    if (ctx->pc == 0x4EDB7Cu) {
        ctx->pc = 0x4EDB7Cu;
            // 0x4edb7c: 0x26060a50  addiu       $a2, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->pc = 0x4EDB80u;
        goto label_4edb80;
    }
    ctx->pc = 0x4EDB78u;
    {
        const bool branch_taken_0x4edb78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4EDB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDB78u;
            // 0x4edb7c: 0x26060a50  addiu       $a2, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edb78) {
            ctx->pc = 0x4EDC88u;
            goto label_4edc88;
        }
    }
    ctx->pc = 0x4EDB80u;
label_4edb80:
    // 0x4edb80: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x4edb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_4edb84:
    // 0x4edb84: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_4edb88:
    if (ctx->pc == 0x4EDB88u) {
        ctx->pc = 0x4EDB8Cu;
        goto label_4edb8c;
    }
    ctx->pc = 0x4EDB84u;
    {
        const bool branch_taken_0x4edb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4edb84) {
            ctx->pc = 0x4EDBC8u;
            goto label_4edbc8;
        }
    }
    ctx->pc = 0x4EDB8Cu;
label_4edb8c:
    // 0x4edb8c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4edb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4edb90:
    // 0x4edb90: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
label_4edb94:
    if (ctx->pc == 0x4EDB94u) {
        ctx->pc = 0x4EDB98u;
        goto label_4edb98;
    }
    ctx->pc = 0x4EDB90u;
    {
        const bool branch_taken_0x4edb90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4edb90) {
            ctx->pc = 0x4EDBF0u;
            goto label_4edbf0;
        }
    }
    ctx->pc = 0x4EDB98u;
label_4edb98:
    // 0x4edb98: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x4edb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4edb9c:
    // 0x4edb9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4edb9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4edba0:
    // 0x4edba0: 0x0  nop
    ctx->pc = 0x4edba0u;
    // NOP
label_4edba4:
    // 0x4edba4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x4edba4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4edba8:
    // 0x4edba8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_4edbac:
    if (ctx->pc == 0x4EDBACu) {
        ctx->pc = 0x4EDBB0u;
        goto label_4edbb0;
    }
    ctx->pc = 0x4EDBA8u;
    {
        const bool branch_taken_0x4edba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4edba8) {
            ctx->pc = 0x4EDBF0u;
            goto label_4edbf0;
        }
    }
    ctx->pc = 0x4EDBB0u;
label_4edbb0:
    // 0x4edbb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4edbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4edbb4:
    // 0x4edbb4: 0xc0bdf9c  jal         func_2F7E70
label_4edbb8:
    if (ctx->pc == 0x4EDBB8u) {
        ctx->pc = 0x4EDBB8u;
            // 0x4edbb8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4EDBBCu;
        goto label_4edbbc;
    }
    ctx->pc = 0x4EDBB4u;
    SET_GPR_U32(ctx, 31, 0x4EDBBCu);
    ctx->pc = 0x4EDBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDBB4u;
            // 0x4edbb8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDBBCu; }
        if (ctx->pc != 0x4EDBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDBBCu; }
        if (ctx->pc != 0x4EDBBCu) { return; }
    }
    ctx->pc = 0x4EDBBCu;
label_4edbbc:
    // 0x4edbbc: 0x1000000c  b           . + 4 + (0xC << 2)
label_4edbc0:
    if (ctx->pc == 0x4EDBC0u) {
        ctx->pc = 0x4EDBC4u;
        goto label_4edbc4;
    }
    ctx->pc = 0x4EDBBCu;
    {
        const bool branch_taken_0x4edbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4edbbc) {
            ctx->pc = 0x4EDBF0u;
            goto label_4edbf0;
        }
    }
    ctx->pc = 0x4EDBC4u;
label_4edbc4:
    // 0x4edbc4: 0x0  nop
    ctx->pc = 0x4edbc4u;
    // NOP
label_4edbc8:
    // 0x4edbc8: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x4edbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4edbcc:
    // 0x4edbcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4edbccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4edbd0:
    // 0x4edbd0: 0x0  nop
    ctx->pc = 0x4edbd0u;
    // NOP
label_4edbd4:
    // 0x4edbd4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x4edbd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4edbd8:
    // 0x4edbd8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_4edbdc:
    if (ctx->pc == 0x4EDBDCu) {
        ctx->pc = 0x4EDBE0u;
        goto label_4edbe0;
    }
    ctx->pc = 0x4EDBD8u;
    {
        const bool branch_taken_0x4edbd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4edbd8) {
            ctx->pc = 0x4EDBF0u;
            goto label_4edbf0;
        }
    }
    ctx->pc = 0x4EDBE0u;
label_4edbe0:
    // 0x4edbe0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4edbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4edbe4:
    // 0x4edbe4: 0xc0bdf9c  jal         func_2F7E70
label_4edbe8:
    if (ctx->pc == 0x4EDBE8u) {
        ctx->pc = 0x4EDBE8u;
            // 0x4edbe8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4EDBECu;
        goto label_4edbec;
    }
    ctx->pc = 0x4EDBE4u;
    SET_GPR_U32(ctx, 31, 0x4EDBECu);
    ctx->pc = 0x4EDBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDBE4u;
            // 0x4edbe8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDBECu; }
        if (ctx->pc != 0x4EDBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDBECu; }
        if (ctx->pc != 0x4EDBECu) { return; }
    }
    ctx->pc = 0x4EDBECu;
label_4edbec:
    // 0x4edbec: 0x0  nop
    ctx->pc = 0x4edbecu;
    // NOP
label_4edbf0:
    // 0x4edbf0: 0x8e060d98  lw          $a2, 0xD98($s0)
    ctx->pc = 0x4edbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4edbf4:
    // 0x4edbf4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4edbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4edbf8:
    // 0x4edbf8: 0x8c840cc8  lw          $a0, 0xCC8($a0)
    ctx->pc = 0x4edbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3272)));
label_4edbfc:
    // 0x4edbfc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4edbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4edc00:
    // 0x4edc00: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4edc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4edc04:
    // 0x4edc04: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4edc04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4edc08:
    // 0x4edc08: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4edc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4edc0c:
    // 0x4edc0c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4edc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4edc10:
    // 0x4edc10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4edc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4edc14:
    // 0x4edc14: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x4edc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_4edc18:
    // 0x4edc18: 0x1c800015  bgtz        $a0, . + 4 + (0x15 << 2)
label_4edc1c:
    if (ctx->pc == 0x4EDC1Cu) {
        ctx->pc = 0x4EDC1Cu;
            // 0x4edc1c: 0x8e030a60  lw          $v1, 0xA60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2656)));
        ctx->pc = 0x4EDC20u;
        goto label_4edc20;
    }
    ctx->pc = 0x4EDC18u;
    {
        const bool branch_taken_0x4edc18 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x4EDC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDC18u;
            // 0x4edc1c: 0x8e030a60  lw          $v1, 0xA60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edc18) {
            ctx->pc = 0x4EDC70u;
            goto label_4edc70;
        }
    }
    ctx->pc = 0x4EDC20u;
label_4edc20:
    // 0x4edc20: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x4edc20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4edc24:
    // 0x4edc24: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4edc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4edc28:
    // 0x4edc28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4edc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4edc2c:
    // 0x4edc2c: 0x8c860cc0  lw          $a2, 0xCC0($a0)
    ctx->pc = 0x4edc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3264)));
label_4edc30:
    // 0x4edc30: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x4edc30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4edc34:
    // 0x4edc34: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x4edc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4edc38:
    // 0x4edc38: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x4edc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_4edc3c:
    // 0x4edc3c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4edc40:
    if (ctx->pc == 0x4EDC40u) {
        ctx->pc = 0x4EDC44u;
        goto label_4edc44;
    }
    ctx->pc = 0x4EDC3Cu;
    {
        const bool branch_taken_0x4edc3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4edc3c) {
            ctx->pc = 0x4EDC60u;
            goto label_4edc60;
        }
    }
    ctx->pc = 0x4EDC44u;
label_4edc44:
    // 0x4edc44: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4edc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4edc48:
    // 0x4edc48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4edc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4edc4c:
    // 0x4edc4c: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
label_4edc50:
    if (ctx->pc == 0x4EDC50u) {
        ctx->pc = 0x4EDC54u;
        goto label_4edc54;
    }
    ctx->pc = 0x4EDC4Cu;
    {
        const bool branch_taken_0x4edc4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x4edc4c) {
            ctx->pc = 0x4EDC60u;
            goto label_4edc60;
        }
    }
    ctx->pc = 0x4EDC54u;
label_4edc54:
    // 0x4edc54: 0x10000004  b           . + 4 + (0x4 << 2)
label_4edc58:
    if (ctx->pc == 0x4EDC58u) {
        ctx->pc = 0x4EDC58u;
            // 0x4edc58: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4EDC5Cu;
        goto label_4edc5c;
    }
    ctx->pc = 0x4EDC54u;
    {
        const bool branch_taken_0x4edc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDC54u;
            // 0x4edc58: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edc54) {
            ctx->pc = 0x4EDC68u;
            goto label_4edc68;
        }
    }
    ctx->pc = 0x4EDC5Cu;
label_4edc5c:
    // 0x4edc5c: 0x0  nop
    ctx->pc = 0x4edc5cu;
    // NOP
label_4edc60:
    // 0x4edc60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4edc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4edc64:
    // 0x4edc64: 0x0  nop
    ctx->pc = 0x4edc64u;
    // NOP
label_4edc68:
    // 0x4edc68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4edc6c:
    if (ctx->pc == 0x4EDC6Cu) {
        ctx->pc = 0x4EDC70u;
        goto label_4edc70;
    }
    ctx->pc = 0x4EDC68u;
    {
        const bool branch_taken_0x4edc68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4edc68) {
            ctx->pc = 0x4EDC80u;
            goto label_4edc80;
        }
    }
    ctx->pc = 0x4EDC70u;
label_4edc70:
    // 0x4edc70: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x4edc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_4edc74:
    // 0x4edc74: 0x34846666  ori         $a0, $a0, 0x6666
    ctx->pc = 0x4edc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_4edc78:
    // 0x4edc78: 0x10000003  b           . + 4 + (0x3 << 2)
label_4edc7c:
    if (ctx->pc == 0x4EDC7Cu) {
        ctx->pc = 0x4EDC7Cu;
            // 0x4edc7c: 0xac640088  sw          $a0, 0x88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
        ctx->pc = 0x4EDC80u;
        goto label_4edc80;
    }
    ctx->pc = 0x4EDC78u;
    {
        const bool branch_taken_0x4edc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDC78u;
            // 0x4edc7c: 0xac640088  sw          $a0, 0x88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edc78) {
            ctx->pc = 0x4EDC88u;
            goto label_4edc88;
        }
    }
    ctx->pc = 0x4EDC80u;
label_4edc80:
    // 0x4edc80: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x4edc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_4edc84:
    // 0x4edc84: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x4edc84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
label_4edc88:
    // 0x4edc88: 0x8e63077c  lw          $v1, 0x77C($s3)
    ctx->pc = 0x4edc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
label_4edc8c:
    // 0x4edc8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4edc8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4edc90:
    // 0x4edc90: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x4edc90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4edc94:
    // 0x4edc94: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
label_4edc98:
    if (ctx->pc == 0x4EDC98u) {
        ctx->pc = 0x4EDC98u;
            // 0x4edc98: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4EDC9Cu;
        goto label_4edc9c;
    }
    ctx->pc = 0x4EDC94u;
    {
        const bool branch_taken_0x4edc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDC94u;
            // 0x4edc98: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edc94) {
            ctx->pc = 0x4EDB68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4edb68;
        }
    }
    ctx->pc = 0x4EDC9Cu;
label_4edc9c:
    // 0x4edc9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4edc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4edca0:
    // 0x4edca0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4edca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4edca4:
    // 0x4edca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4edca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4edca8:
    // 0x4edca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4edca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4edcac:
    // 0x4edcac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4edcacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4edcb0:
    // 0x4edcb0: 0x3e00008  jr          $ra
label_4edcb4:
    if (ctx->pc == 0x4EDCB4u) {
        ctx->pc = 0x4EDCB4u;
            // 0x4edcb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4EDCB8u;
        goto label_4edcb8;
    }
    ctx->pc = 0x4EDCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDCB0u;
            // 0x4edcb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EDCB8u;
label_4edcb8:
    // 0x4edcb8: 0x0  nop
    ctx->pc = 0x4edcb8u;
    // NOP
label_4edcbc:
    // 0x4edcbc: 0x0  nop
    ctx->pc = 0x4edcbcu;
    // NOP
}
