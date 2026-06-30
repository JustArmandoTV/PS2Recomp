#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EDA10
// Address: 0x3eda10 - 0x3ee650
void sub_003EDA10_0x3eda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDA10_0x3eda10");
#endif

    switch (ctx->pc) {
        case 0x3eda10u: goto label_3eda10;
        case 0x3eda14u: goto label_3eda14;
        case 0x3eda18u: goto label_3eda18;
        case 0x3eda1cu: goto label_3eda1c;
        case 0x3eda20u: goto label_3eda20;
        case 0x3eda24u: goto label_3eda24;
        case 0x3eda28u: goto label_3eda28;
        case 0x3eda2cu: goto label_3eda2c;
        case 0x3eda30u: goto label_3eda30;
        case 0x3eda34u: goto label_3eda34;
        case 0x3eda38u: goto label_3eda38;
        case 0x3eda3cu: goto label_3eda3c;
        case 0x3eda40u: goto label_3eda40;
        case 0x3eda44u: goto label_3eda44;
        case 0x3eda48u: goto label_3eda48;
        case 0x3eda4cu: goto label_3eda4c;
        case 0x3eda50u: goto label_3eda50;
        case 0x3eda54u: goto label_3eda54;
        case 0x3eda58u: goto label_3eda58;
        case 0x3eda5cu: goto label_3eda5c;
        case 0x3eda60u: goto label_3eda60;
        case 0x3eda64u: goto label_3eda64;
        case 0x3eda68u: goto label_3eda68;
        case 0x3eda6cu: goto label_3eda6c;
        case 0x3eda70u: goto label_3eda70;
        case 0x3eda74u: goto label_3eda74;
        case 0x3eda78u: goto label_3eda78;
        case 0x3eda7cu: goto label_3eda7c;
        case 0x3eda80u: goto label_3eda80;
        case 0x3eda84u: goto label_3eda84;
        case 0x3eda88u: goto label_3eda88;
        case 0x3eda8cu: goto label_3eda8c;
        case 0x3eda90u: goto label_3eda90;
        case 0x3eda94u: goto label_3eda94;
        case 0x3eda98u: goto label_3eda98;
        case 0x3eda9cu: goto label_3eda9c;
        case 0x3edaa0u: goto label_3edaa0;
        case 0x3edaa4u: goto label_3edaa4;
        case 0x3edaa8u: goto label_3edaa8;
        case 0x3edaacu: goto label_3edaac;
        case 0x3edab0u: goto label_3edab0;
        case 0x3edab4u: goto label_3edab4;
        case 0x3edab8u: goto label_3edab8;
        case 0x3edabcu: goto label_3edabc;
        case 0x3edac0u: goto label_3edac0;
        case 0x3edac4u: goto label_3edac4;
        case 0x3edac8u: goto label_3edac8;
        case 0x3edaccu: goto label_3edacc;
        case 0x3edad0u: goto label_3edad0;
        case 0x3edad4u: goto label_3edad4;
        case 0x3edad8u: goto label_3edad8;
        case 0x3edadcu: goto label_3edadc;
        case 0x3edae0u: goto label_3edae0;
        case 0x3edae4u: goto label_3edae4;
        case 0x3edae8u: goto label_3edae8;
        case 0x3edaecu: goto label_3edaec;
        case 0x3edaf0u: goto label_3edaf0;
        case 0x3edaf4u: goto label_3edaf4;
        case 0x3edaf8u: goto label_3edaf8;
        case 0x3edafcu: goto label_3edafc;
        case 0x3edb00u: goto label_3edb00;
        case 0x3edb04u: goto label_3edb04;
        case 0x3edb08u: goto label_3edb08;
        case 0x3edb0cu: goto label_3edb0c;
        case 0x3edb10u: goto label_3edb10;
        case 0x3edb14u: goto label_3edb14;
        case 0x3edb18u: goto label_3edb18;
        case 0x3edb1cu: goto label_3edb1c;
        case 0x3edb20u: goto label_3edb20;
        case 0x3edb24u: goto label_3edb24;
        case 0x3edb28u: goto label_3edb28;
        case 0x3edb2cu: goto label_3edb2c;
        case 0x3edb30u: goto label_3edb30;
        case 0x3edb34u: goto label_3edb34;
        case 0x3edb38u: goto label_3edb38;
        case 0x3edb3cu: goto label_3edb3c;
        case 0x3edb40u: goto label_3edb40;
        case 0x3edb44u: goto label_3edb44;
        case 0x3edb48u: goto label_3edb48;
        case 0x3edb4cu: goto label_3edb4c;
        case 0x3edb50u: goto label_3edb50;
        case 0x3edb54u: goto label_3edb54;
        case 0x3edb58u: goto label_3edb58;
        case 0x3edb5cu: goto label_3edb5c;
        case 0x3edb60u: goto label_3edb60;
        case 0x3edb64u: goto label_3edb64;
        case 0x3edb68u: goto label_3edb68;
        case 0x3edb6cu: goto label_3edb6c;
        case 0x3edb70u: goto label_3edb70;
        case 0x3edb74u: goto label_3edb74;
        case 0x3edb78u: goto label_3edb78;
        case 0x3edb7cu: goto label_3edb7c;
        case 0x3edb80u: goto label_3edb80;
        case 0x3edb84u: goto label_3edb84;
        case 0x3edb88u: goto label_3edb88;
        case 0x3edb8cu: goto label_3edb8c;
        case 0x3edb90u: goto label_3edb90;
        case 0x3edb94u: goto label_3edb94;
        case 0x3edb98u: goto label_3edb98;
        case 0x3edb9cu: goto label_3edb9c;
        case 0x3edba0u: goto label_3edba0;
        case 0x3edba4u: goto label_3edba4;
        case 0x3edba8u: goto label_3edba8;
        case 0x3edbacu: goto label_3edbac;
        case 0x3edbb0u: goto label_3edbb0;
        case 0x3edbb4u: goto label_3edbb4;
        case 0x3edbb8u: goto label_3edbb8;
        case 0x3edbbcu: goto label_3edbbc;
        case 0x3edbc0u: goto label_3edbc0;
        case 0x3edbc4u: goto label_3edbc4;
        case 0x3edbc8u: goto label_3edbc8;
        case 0x3edbccu: goto label_3edbcc;
        case 0x3edbd0u: goto label_3edbd0;
        case 0x3edbd4u: goto label_3edbd4;
        case 0x3edbd8u: goto label_3edbd8;
        case 0x3edbdcu: goto label_3edbdc;
        case 0x3edbe0u: goto label_3edbe0;
        case 0x3edbe4u: goto label_3edbe4;
        case 0x3edbe8u: goto label_3edbe8;
        case 0x3edbecu: goto label_3edbec;
        case 0x3edbf0u: goto label_3edbf0;
        case 0x3edbf4u: goto label_3edbf4;
        case 0x3edbf8u: goto label_3edbf8;
        case 0x3edbfcu: goto label_3edbfc;
        case 0x3edc00u: goto label_3edc00;
        case 0x3edc04u: goto label_3edc04;
        case 0x3edc08u: goto label_3edc08;
        case 0x3edc0cu: goto label_3edc0c;
        case 0x3edc10u: goto label_3edc10;
        case 0x3edc14u: goto label_3edc14;
        case 0x3edc18u: goto label_3edc18;
        case 0x3edc1cu: goto label_3edc1c;
        case 0x3edc20u: goto label_3edc20;
        case 0x3edc24u: goto label_3edc24;
        case 0x3edc28u: goto label_3edc28;
        case 0x3edc2cu: goto label_3edc2c;
        case 0x3edc30u: goto label_3edc30;
        case 0x3edc34u: goto label_3edc34;
        case 0x3edc38u: goto label_3edc38;
        case 0x3edc3cu: goto label_3edc3c;
        case 0x3edc40u: goto label_3edc40;
        case 0x3edc44u: goto label_3edc44;
        case 0x3edc48u: goto label_3edc48;
        case 0x3edc4cu: goto label_3edc4c;
        case 0x3edc50u: goto label_3edc50;
        case 0x3edc54u: goto label_3edc54;
        case 0x3edc58u: goto label_3edc58;
        case 0x3edc5cu: goto label_3edc5c;
        case 0x3edc60u: goto label_3edc60;
        case 0x3edc64u: goto label_3edc64;
        case 0x3edc68u: goto label_3edc68;
        case 0x3edc6cu: goto label_3edc6c;
        case 0x3edc70u: goto label_3edc70;
        case 0x3edc74u: goto label_3edc74;
        case 0x3edc78u: goto label_3edc78;
        case 0x3edc7cu: goto label_3edc7c;
        case 0x3edc80u: goto label_3edc80;
        case 0x3edc84u: goto label_3edc84;
        case 0x3edc88u: goto label_3edc88;
        case 0x3edc8cu: goto label_3edc8c;
        case 0x3edc90u: goto label_3edc90;
        case 0x3edc94u: goto label_3edc94;
        case 0x3edc98u: goto label_3edc98;
        case 0x3edc9cu: goto label_3edc9c;
        case 0x3edca0u: goto label_3edca0;
        case 0x3edca4u: goto label_3edca4;
        case 0x3edca8u: goto label_3edca8;
        case 0x3edcacu: goto label_3edcac;
        case 0x3edcb0u: goto label_3edcb0;
        case 0x3edcb4u: goto label_3edcb4;
        case 0x3edcb8u: goto label_3edcb8;
        case 0x3edcbcu: goto label_3edcbc;
        case 0x3edcc0u: goto label_3edcc0;
        case 0x3edcc4u: goto label_3edcc4;
        case 0x3edcc8u: goto label_3edcc8;
        case 0x3edcccu: goto label_3edccc;
        case 0x3edcd0u: goto label_3edcd0;
        case 0x3edcd4u: goto label_3edcd4;
        case 0x3edcd8u: goto label_3edcd8;
        case 0x3edcdcu: goto label_3edcdc;
        case 0x3edce0u: goto label_3edce0;
        case 0x3edce4u: goto label_3edce4;
        case 0x3edce8u: goto label_3edce8;
        case 0x3edcecu: goto label_3edcec;
        case 0x3edcf0u: goto label_3edcf0;
        case 0x3edcf4u: goto label_3edcf4;
        case 0x3edcf8u: goto label_3edcf8;
        case 0x3edcfcu: goto label_3edcfc;
        case 0x3edd00u: goto label_3edd00;
        case 0x3edd04u: goto label_3edd04;
        case 0x3edd08u: goto label_3edd08;
        case 0x3edd0cu: goto label_3edd0c;
        case 0x3edd10u: goto label_3edd10;
        case 0x3edd14u: goto label_3edd14;
        case 0x3edd18u: goto label_3edd18;
        case 0x3edd1cu: goto label_3edd1c;
        case 0x3edd20u: goto label_3edd20;
        case 0x3edd24u: goto label_3edd24;
        case 0x3edd28u: goto label_3edd28;
        case 0x3edd2cu: goto label_3edd2c;
        case 0x3edd30u: goto label_3edd30;
        case 0x3edd34u: goto label_3edd34;
        case 0x3edd38u: goto label_3edd38;
        case 0x3edd3cu: goto label_3edd3c;
        case 0x3edd40u: goto label_3edd40;
        case 0x3edd44u: goto label_3edd44;
        case 0x3edd48u: goto label_3edd48;
        case 0x3edd4cu: goto label_3edd4c;
        case 0x3edd50u: goto label_3edd50;
        case 0x3edd54u: goto label_3edd54;
        case 0x3edd58u: goto label_3edd58;
        case 0x3edd5cu: goto label_3edd5c;
        case 0x3edd60u: goto label_3edd60;
        case 0x3edd64u: goto label_3edd64;
        case 0x3edd68u: goto label_3edd68;
        case 0x3edd6cu: goto label_3edd6c;
        case 0x3edd70u: goto label_3edd70;
        case 0x3edd74u: goto label_3edd74;
        case 0x3edd78u: goto label_3edd78;
        case 0x3edd7cu: goto label_3edd7c;
        case 0x3edd80u: goto label_3edd80;
        case 0x3edd84u: goto label_3edd84;
        case 0x3edd88u: goto label_3edd88;
        case 0x3edd8cu: goto label_3edd8c;
        case 0x3edd90u: goto label_3edd90;
        case 0x3edd94u: goto label_3edd94;
        case 0x3edd98u: goto label_3edd98;
        case 0x3edd9cu: goto label_3edd9c;
        case 0x3edda0u: goto label_3edda0;
        case 0x3edda4u: goto label_3edda4;
        case 0x3edda8u: goto label_3edda8;
        case 0x3eddacu: goto label_3eddac;
        case 0x3eddb0u: goto label_3eddb0;
        case 0x3eddb4u: goto label_3eddb4;
        case 0x3eddb8u: goto label_3eddb8;
        case 0x3eddbcu: goto label_3eddbc;
        case 0x3eddc0u: goto label_3eddc0;
        case 0x3eddc4u: goto label_3eddc4;
        case 0x3eddc8u: goto label_3eddc8;
        case 0x3eddccu: goto label_3eddcc;
        case 0x3eddd0u: goto label_3eddd0;
        case 0x3eddd4u: goto label_3eddd4;
        case 0x3eddd8u: goto label_3eddd8;
        case 0x3edddcu: goto label_3edddc;
        case 0x3edde0u: goto label_3edde0;
        case 0x3edde4u: goto label_3edde4;
        case 0x3edde8u: goto label_3edde8;
        case 0x3eddecu: goto label_3eddec;
        case 0x3eddf0u: goto label_3eddf0;
        case 0x3eddf4u: goto label_3eddf4;
        case 0x3eddf8u: goto label_3eddf8;
        case 0x3eddfcu: goto label_3eddfc;
        case 0x3ede00u: goto label_3ede00;
        case 0x3ede04u: goto label_3ede04;
        case 0x3ede08u: goto label_3ede08;
        case 0x3ede0cu: goto label_3ede0c;
        case 0x3ede10u: goto label_3ede10;
        case 0x3ede14u: goto label_3ede14;
        case 0x3ede18u: goto label_3ede18;
        case 0x3ede1cu: goto label_3ede1c;
        case 0x3ede20u: goto label_3ede20;
        case 0x3ede24u: goto label_3ede24;
        case 0x3ede28u: goto label_3ede28;
        case 0x3ede2cu: goto label_3ede2c;
        case 0x3ede30u: goto label_3ede30;
        case 0x3ede34u: goto label_3ede34;
        case 0x3ede38u: goto label_3ede38;
        case 0x3ede3cu: goto label_3ede3c;
        case 0x3ede40u: goto label_3ede40;
        case 0x3ede44u: goto label_3ede44;
        case 0x3ede48u: goto label_3ede48;
        case 0x3ede4cu: goto label_3ede4c;
        case 0x3ede50u: goto label_3ede50;
        case 0x3ede54u: goto label_3ede54;
        case 0x3ede58u: goto label_3ede58;
        case 0x3ede5cu: goto label_3ede5c;
        case 0x3ede60u: goto label_3ede60;
        case 0x3ede64u: goto label_3ede64;
        case 0x3ede68u: goto label_3ede68;
        case 0x3ede6cu: goto label_3ede6c;
        case 0x3ede70u: goto label_3ede70;
        case 0x3ede74u: goto label_3ede74;
        case 0x3ede78u: goto label_3ede78;
        case 0x3ede7cu: goto label_3ede7c;
        case 0x3ede80u: goto label_3ede80;
        case 0x3ede84u: goto label_3ede84;
        case 0x3ede88u: goto label_3ede88;
        case 0x3ede8cu: goto label_3ede8c;
        case 0x3ede90u: goto label_3ede90;
        case 0x3ede94u: goto label_3ede94;
        case 0x3ede98u: goto label_3ede98;
        case 0x3ede9cu: goto label_3ede9c;
        case 0x3edea0u: goto label_3edea0;
        case 0x3edea4u: goto label_3edea4;
        case 0x3edea8u: goto label_3edea8;
        case 0x3edeacu: goto label_3edeac;
        case 0x3edeb0u: goto label_3edeb0;
        case 0x3edeb4u: goto label_3edeb4;
        case 0x3edeb8u: goto label_3edeb8;
        case 0x3edebcu: goto label_3edebc;
        case 0x3edec0u: goto label_3edec0;
        case 0x3edec4u: goto label_3edec4;
        case 0x3edec8u: goto label_3edec8;
        case 0x3edeccu: goto label_3edecc;
        case 0x3eded0u: goto label_3eded0;
        case 0x3eded4u: goto label_3eded4;
        case 0x3eded8u: goto label_3eded8;
        case 0x3ededcu: goto label_3ededc;
        case 0x3edee0u: goto label_3edee0;
        case 0x3edee4u: goto label_3edee4;
        case 0x3edee8u: goto label_3edee8;
        case 0x3edeecu: goto label_3edeec;
        case 0x3edef0u: goto label_3edef0;
        case 0x3edef4u: goto label_3edef4;
        case 0x3edef8u: goto label_3edef8;
        case 0x3edefcu: goto label_3edefc;
        case 0x3edf00u: goto label_3edf00;
        case 0x3edf04u: goto label_3edf04;
        case 0x3edf08u: goto label_3edf08;
        case 0x3edf0cu: goto label_3edf0c;
        case 0x3edf10u: goto label_3edf10;
        case 0x3edf14u: goto label_3edf14;
        case 0x3edf18u: goto label_3edf18;
        case 0x3edf1cu: goto label_3edf1c;
        case 0x3edf20u: goto label_3edf20;
        case 0x3edf24u: goto label_3edf24;
        case 0x3edf28u: goto label_3edf28;
        case 0x3edf2cu: goto label_3edf2c;
        case 0x3edf30u: goto label_3edf30;
        case 0x3edf34u: goto label_3edf34;
        case 0x3edf38u: goto label_3edf38;
        case 0x3edf3cu: goto label_3edf3c;
        case 0x3edf40u: goto label_3edf40;
        case 0x3edf44u: goto label_3edf44;
        case 0x3edf48u: goto label_3edf48;
        case 0x3edf4cu: goto label_3edf4c;
        case 0x3edf50u: goto label_3edf50;
        case 0x3edf54u: goto label_3edf54;
        case 0x3edf58u: goto label_3edf58;
        case 0x3edf5cu: goto label_3edf5c;
        case 0x3edf60u: goto label_3edf60;
        case 0x3edf64u: goto label_3edf64;
        case 0x3edf68u: goto label_3edf68;
        case 0x3edf6cu: goto label_3edf6c;
        case 0x3edf70u: goto label_3edf70;
        case 0x3edf74u: goto label_3edf74;
        case 0x3edf78u: goto label_3edf78;
        case 0x3edf7cu: goto label_3edf7c;
        case 0x3edf80u: goto label_3edf80;
        case 0x3edf84u: goto label_3edf84;
        case 0x3edf88u: goto label_3edf88;
        case 0x3edf8cu: goto label_3edf8c;
        case 0x3edf90u: goto label_3edf90;
        case 0x3edf94u: goto label_3edf94;
        case 0x3edf98u: goto label_3edf98;
        case 0x3edf9cu: goto label_3edf9c;
        case 0x3edfa0u: goto label_3edfa0;
        case 0x3edfa4u: goto label_3edfa4;
        case 0x3edfa8u: goto label_3edfa8;
        case 0x3edfacu: goto label_3edfac;
        case 0x3edfb0u: goto label_3edfb0;
        case 0x3edfb4u: goto label_3edfb4;
        case 0x3edfb8u: goto label_3edfb8;
        case 0x3edfbcu: goto label_3edfbc;
        case 0x3edfc0u: goto label_3edfc0;
        case 0x3edfc4u: goto label_3edfc4;
        case 0x3edfc8u: goto label_3edfc8;
        case 0x3edfccu: goto label_3edfcc;
        case 0x3edfd0u: goto label_3edfd0;
        case 0x3edfd4u: goto label_3edfd4;
        case 0x3edfd8u: goto label_3edfd8;
        case 0x3edfdcu: goto label_3edfdc;
        case 0x3edfe0u: goto label_3edfe0;
        case 0x3edfe4u: goto label_3edfe4;
        case 0x3edfe8u: goto label_3edfe8;
        case 0x3edfecu: goto label_3edfec;
        case 0x3edff0u: goto label_3edff0;
        case 0x3edff4u: goto label_3edff4;
        case 0x3edff8u: goto label_3edff8;
        case 0x3edffcu: goto label_3edffc;
        case 0x3ee000u: goto label_3ee000;
        case 0x3ee004u: goto label_3ee004;
        case 0x3ee008u: goto label_3ee008;
        case 0x3ee00cu: goto label_3ee00c;
        case 0x3ee010u: goto label_3ee010;
        case 0x3ee014u: goto label_3ee014;
        case 0x3ee018u: goto label_3ee018;
        case 0x3ee01cu: goto label_3ee01c;
        case 0x3ee020u: goto label_3ee020;
        case 0x3ee024u: goto label_3ee024;
        case 0x3ee028u: goto label_3ee028;
        case 0x3ee02cu: goto label_3ee02c;
        case 0x3ee030u: goto label_3ee030;
        case 0x3ee034u: goto label_3ee034;
        case 0x3ee038u: goto label_3ee038;
        case 0x3ee03cu: goto label_3ee03c;
        case 0x3ee040u: goto label_3ee040;
        case 0x3ee044u: goto label_3ee044;
        case 0x3ee048u: goto label_3ee048;
        case 0x3ee04cu: goto label_3ee04c;
        case 0x3ee050u: goto label_3ee050;
        case 0x3ee054u: goto label_3ee054;
        case 0x3ee058u: goto label_3ee058;
        case 0x3ee05cu: goto label_3ee05c;
        case 0x3ee060u: goto label_3ee060;
        case 0x3ee064u: goto label_3ee064;
        case 0x3ee068u: goto label_3ee068;
        case 0x3ee06cu: goto label_3ee06c;
        case 0x3ee070u: goto label_3ee070;
        case 0x3ee074u: goto label_3ee074;
        case 0x3ee078u: goto label_3ee078;
        case 0x3ee07cu: goto label_3ee07c;
        case 0x3ee080u: goto label_3ee080;
        case 0x3ee084u: goto label_3ee084;
        case 0x3ee088u: goto label_3ee088;
        case 0x3ee08cu: goto label_3ee08c;
        case 0x3ee090u: goto label_3ee090;
        case 0x3ee094u: goto label_3ee094;
        case 0x3ee098u: goto label_3ee098;
        case 0x3ee09cu: goto label_3ee09c;
        case 0x3ee0a0u: goto label_3ee0a0;
        case 0x3ee0a4u: goto label_3ee0a4;
        case 0x3ee0a8u: goto label_3ee0a8;
        case 0x3ee0acu: goto label_3ee0ac;
        case 0x3ee0b0u: goto label_3ee0b0;
        case 0x3ee0b4u: goto label_3ee0b4;
        case 0x3ee0b8u: goto label_3ee0b8;
        case 0x3ee0bcu: goto label_3ee0bc;
        case 0x3ee0c0u: goto label_3ee0c0;
        case 0x3ee0c4u: goto label_3ee0c4;
        case 0x3ee0c8u: goto label_3ee0c8;
        case 0x3ee0ccu: goto label_3ee0cc;
        case 0x3ee0d0u: goto label_3ee0d0;
        case 0x3ee0d4u: goto label_3ee0d4;
        case 0x3ee0d8u: goto label_3ee0d8;
        case 0x3ee0dcu: goto label_3ee0dc;
        case 0x3ee0e0u: goto label_3ee0e0;
        case 0x3ee0e4u: goto label_3ee0e4;
        case 0x3ee0e8u: goto label_3ee0e8;
        case 0x3ee0ecu: goto label_3ee0ec;
        case 0x3ee0f0u: goto label_3ee0f0;
        case 0x3ee0f4u: goto label_3ee0f4;
        case 0x3ee0f8u: goto label_3ee0f8;
        case 0x3ee0fcu: goto label_3ee0fc;
        case 0x3ee100u: goto label_3ee100;
        case 0x3ee104u: goto label_3ee104;
        case 0x3ee108u: goto label_3ee108;
        case 0x3ee10cu: goto label_3ee10c;
        case 0x3ee110u: goto label_3ee110;
        case 0x3ee114u: goto label_3ee114;
        case 0x3ee118u: goto label_3ee118;
        case 0x3ee11cu: goto label_3ee11c;
        case 0x3ee120u: goto label_3ee120;
        case 0x3ee124u: goto label_3ee124;
        case 0x3ee128u: goto label_3ee128;
        case 0x3ee12cu: goto label_3ee12c;
        case 0x3ee130u: goto label_3ee130;
        case 0x3ee134u: goto label_3ee134;
        case 0x3ee138u: goto label_3ee138;
        case 0x3ee13cu: goto label_3ee13c;
        case 0x3ee140u: goto label_3ee140;
        case 0x3ee144u: goto label_3ee144;
        case 0x3ee148u: goto label_3ee148;
        case 0x3ee14cu: goto label_3ee14c;
        case 0x3ee150u: goto label_3ee150;
        case 0x3ee154u: goto label_3ee154;
        case 0x3ee158u: goto label_3ee158;
        case 0x3ee15cu: goto label_3ee15c;
        case 0x3ee160u: goto label_3ee160;
        case 0x3ee164u: goto label_3ee164;
        case 0x3ee168u: goto label_3ee168;
        case 0x3ee16cu: goto label_3ee16c;
        case 0x3ee170u: goto label_3ee170;
        case 0x3ee174u: goto label_3ee174;
        case 0x3ee178u: goto label_3ee178;
        case 0x3ee17cu: goto label_3ee17c;
        case 0x3ee180u: goto label_3ee180;
        case 0x3ee184u: goto label_3ee184;
        case 0x3ee188u: goto label_3ee188;
        case 0x3ee18cu: goto label_3ee18c;
        case 0x3ee190u: goto label_3ee190;
        case 0x3ee194u: goto label_3ee194;
        case 0x3ee198u: goto label_3ee198;
        case 0x3ee19cu: goto label_3ee19c;
        case 0x3ee1a0u: goto label_3ee1a0;
        case 0x3ee1a4u: goto label_3ee1a4;
        case 0x3ee1a8u: goto label_3ee1a8;
        case 0x3ee1acu: goto label_3ee1ac;
        case 0x3ee1b0u: goto label_3ee1b0;
        case 0x3ee1b4u: goto label_3ee1b4;
        case 0x3ee1b8u: goto label_3ee1b8;
        case 0x3ee1bcu: goto label_3ee1bc;
        case 0x3ee1c0u: goto label_3ee1c0;
        case 0x3ee1c4u: goto label_3ee1c4;
        case 0x3ee1c8u: goto label_3ee1c8;
        case 0x3ee1ccu: goto label_3ee1cc;
        case 0x3ee1d0u: goto label_3ee1d0;
        case 0x3ee1d4u: goto label_3ee1d4;
        case 0x3ee1d8u: goto label_3ee1d8;
        case 0x3ee1dcu: goto label_3ee1dc;
        case 0x3ee1e0u: goto label_3ee1e0;
        case 0x3ee1e4u: goto label_3ee1e4;
        case 0x3ee1e8u: goto label_3ee1e8;
        case 0x3ee1ecu: goto label_3ee1ec;
        case 0x3ee1f0u: goto label_3ee1f0;
        case 0x3ee1f4u: goto label_3ee1f4;
        case 0x3ee1f8u: goto label_3ee1f8;
        case 0x3ee1fcu: goto label_3ee1fc;
        case 0x3ee200u: goto label_3ee200;
        case 0x3ee204u: goto label_3ee204;
        case 0x3ee208u: goto label_3ee208;
        case 0x3ee20cu: goto label_3ee20c;
        case 0x3ee210u: goto label_3ee210;
        case 0x3ee214u: goto label_3ee214;
        case 0x3ee218u: goto label_3ee218;
        case 0x3ee21cu: goto label_3ee21c;
        case 0x3ee220u: goto label_3ee220;
        case 0x3ee224u: goto label_3ee224;
        case 0x3ee228u: goto label_3ee228;
        case 0x3ee22cu: goto label_3ee22c;
        case 0x3ee230u: goto label_3ee230;
        case 0x3ee234u: goto label_3ee234;
        case 0x3ee238u: goto label_3ee238;
        case 0x3ee23cu: goto label_3ee23c;
        case 0x3ee240u: goto label_3ee240;
        case 0x3ee244u: goto label_3ee244;
        case 0x3ee248u: goto label_3ee248;
        case 0x3ee24cu: goto label_3ee24c;
        case 0x3ee250u: goto label_3ee250;
        case 0x3ee254u: goto label_3ee254;
        case 0x3ee258u: goto label_3ee258;
        case 0x3ee25cu: goto label_3ee25c;
        case 0x3ee260u: goto label_3ee260;
        case 0x3ee264u: goto label_3ee264;
        case 0x3ee268u: goto label_3ee268;
        case 0x3ee26cu: goto label_3ee26c;
        case 0x3ee270u: goto label_3ee270;
        case 0x3ee274u: goto label_3ee274;
        case 0x3ee278u: goto label_3ee278;
        case 0x3ee27cu: goto label_3ee27c;
        case 0x3ee280u: goto label_3ee280;
        case 0x3ee284u: goto label_3ee284;
        case 0x3ee288u: goto label_3ee288;
        case 0x3ee28cu: goto label_3ee28c;
        case 0x3ee290u: goto label_3ee290;
        case 0x3ee294u: goto label_3ee294;
        case 0x3ee298u: goto label_3ee298;
        case 0x3ee29cu: goto label_3ee29c;
        case 0x3ee2a0u: goto label_3ee2a0;
        case 0x3ee2a4u: goto label_3ee2a4;
        case 0x3ee2a8u: goto label_3ee2a8;
        case 0x3ee2acu: goto label_3ee2ac;
        case 0x3ee2b0u: goto label_3ee2b0;
        case 0x3ee2b4u: goto label_3ee2b4;
        case 0x3ee2b8u: goto label_3ee2b8;
        case 0x3ee2bcu: goto label_3ee2bc;
        case 0x3ee2c0u: goto label_3ee2c0;
        case 0x3ee2c4u: goto label_3ee2c4;
        case 0x3ee2c8u: goto label_3ee2c8;
        case 0x3ee2ccu: goto label_3ee2cc;
        case 0x3ee2d0u: goto label_3ee2d0;
        case 0x3ee2d4u: goto label_3ee2d4;
        case 0x3ee2d8u: goto label_3ee2d8;
        case 0x3ee2dcu: goto label_3ee2dc;
        case 0x3ee2e0u: goto label_3ee2e0;
        case 0x3ee2e4u: goto label_3ee2e4;
        case 0x3ee2e8u: goto label_3ee2e8;
        case 0x3ee2ecu: goto label_3ee2ec;
        case 0x3ee2f0u: goto label_3ee2f0;
        case 0x3ee2f4u: goto label_3ee2f4;
        case 0x3ee2f8u: goto label_3ee2f8;
        case 0x3ee2fcu: goto label_3ee2fc;
        case 0x3ee300u: goto label_3ee300;
        case 0x3ee304u: goto label_3ee304;
        case 0x3ee308u: goto label_3ee308;
        case 0x3ee30cu: goto label_3ee30c;
        case 0x3ee310u: goto label_3ee310;
        case 0x3ee314u: goto label_3ee314;
        case 0x3ee318u: goto label_3ee318;
        case 0x3ee31cu: goto label_3ee31c;
        case 0x3ee320u: goto label_3ee320;
        case 0x3ee324u: goto label_3ee324;
        case 0x3ee328u: goto label_3ee328;
        case 0x3ee32cu: goto label_3ee32c;
        case 0x3ee330u: goto label_3ee330;
        case 0x3ee334u: goto label_3ee334;
        case 0x3ee338u: goto label_3ee338;
        case 0x3ee33cu: goto label_3ee33c;
        case 0x3ee340u: goto label_3ee340;
        case 0x3ee344u: goto label_3ee344;
        case 0x3ee348u: goto label_3ee348;
        case 0x3ee34cu: goto label_3ee34c;
        case 0x3ee350u: goto label_3ee350;
        case 0x3ee354u: goto label_3ee354;
        case 0x3ee358u: goto label_3ee358;
        case 0x3ee35cu: goto label_3ee35c;
        case 0x3ee360u: goto label_3ee360;
        case 0x3ee364u: goto label_3ee364;
        case 0x3ee368u: goto label_3ee368;
        case 0x3ee36cu: goto label_3ee36c;
        case 0x3ee370u: goto label_3ee370;
        case 0x3ee374u: goto label_3ee374;
        case 0x3ee378u: goto label_3ee378;
        case 0x3ee37cu: goto label_3ee37c;
        case 0x3ee380u: goto label_3ee380;
        case 0x3ee384u: goto label_3ee384;
        case 0x3ee388u: goto label_3ee388;
        case 0x3ee38cu: goto label_3ee38c;
        case 0x3ee390u: goto label_3ee390;
        case 0x3ee394u: goto label_3ee394;
        case 0x3ee398u: goto label_3ee398;
        case 0x3ee39cu: goto label_3ee39c;
        case 0x3ee3a0u: goto label_3ee3a0;
        case 0x3ee3a4u: goto label_3ee3a4;
        case 0x3ee3a8u: goto label_3ee3a8;
        case 0x3ee3acu: goto label_3ee3ac;
        case 0x3ee3b0u: goto label_3ee3b0;
        case 0x3ee3b4u: goto label_3ee3b4;
        case 0x3ee3b8u: goto label_3ee3b8;
        case 0x3ee3bcu: goto label_3ee3bc;
        case 0x3ee3c0u: goto label_3ee3c0;
        case 0x3ee3c4u: goto label_3ee3c4;
        case 0x3ee3c8u: goto label_3ee3c8;
        case 0x3ee3ccu: goto label_3ee3cc;
        case 0x3ee3d0u: goto label_3ee3d0;
        case 0x3ee3d4u: goto label_3ee3d4;
        case 0x3ee3d8u: goto label_3ee3d8;
        case 0x3ee3dcu: goto label_3ee3dc;
        case 0x3ee3e0u: goto label_3ee3e0;
        case 0x3ee3e4u: goto label_3ee3e4;
        case 0x3ee3e8u: goto label_3ee3e8;
        case 0x3ee3ecu: goto label_3ee3ec;
        case 0x3ee3f0u: goto label_3ee3f0;
        case 0x3ee3f4u: goto label_3ee3f4;
        case 0x3ee3f8u: goto label_3ee3f8;
        case 0x3ee3fcu: goto label_3ee3fc;
        case 0x3ee400u: goto label_3ee400;
        case 0x3ee404u: goto label_3ee404;
        case 0x3ee408u: goto label_3ee408;
        case 0x3ee40cu: goto label_3ee40c;
        case 0x3ee410u: goto label_3ee410;
        case 0x3ee414u: goto label_3ee414;
        case 0x3ee418u: goto label_3ee418;
        case 0x3ee41cu: goto label_3ee41c;
        case 0x3ee420u: goto label_3ee420;
        case 0x3ee424u: goto label_3ee424;
        case 0x3ee428u: goto label_3ee428;
        case 0x3ee42cu: goto label_3ee42c;
        case 0x3ee430u: goto label_3ee430;
        case 0x3ee434u: goto label_3ee434;
        case 0x3ee438u: goto label_3ee438;
        case 0x3ee43cu: goto label_3ee43c;
        case 0x3ee440u: goto label_3ee440;
        case 0x3ee444u: goto label_3ee444;
        case 0x3ee448u: goto label_3ee448;
        case 0x3ee44cu: goto label_3ee44c;
        case 0x3ee450u: goto label_3ee450;
        case 0x3ee454u: goto label_3ee454;
        case 0x3ee458u: goto label_3ee458;
        case 0x3ee45cu: goto label_3ee45c;
        case 0x3ee460u: goto label_3ee460;
        case 0x3ee464u: goto label_3ee464;
        case 0x3ee468u: goto label_3ee468;
        case 0x3ee46cu: goto label_3ee46c;
        case 0x3ee470u: goto label_3ee470;
        case 0x3ee474u: goto label_3ee474;
        case 0x3ee478u: goto label_3ee478;
        case 0x3ee47cu: goto label_3ee47c;
        case 0x3ee480u: goto label_3ee480;
        case 0x3ee484u: goto label_3ee484;
        case 0x3ee488u: goto label_3ee488;
        case 0x3ee48cu: goto label_3ee48c;
        case 0x3ee490u: goto label_3ee490;
        case 0x3ee494u: goto label_3ee494;
        case 0x3ee498u: goto label_3ee498;
        case 0x3ee49cu: goto label_3ee49c;
        case 0x3ee4a0u: goto label_3ee4a0;
        case 0x3ee4a4u: goto label_3ee4a4;
        case 0x3ee4a8u: goto label_3ee4a8;
        case 0x3ee4acu: goto label_3ee4ac;
        case 0x3ee4b0u: goto label_3ee4b0;
        case 0x3ee4b4u: goto label_3ee4b4;
        case 0x3ee4b8u: goto label_3ee4b8;
        case 0x3ee4bcu: goto label_3ee4bc;
        case 0x3ee4c0u: goto label_3ee4c0;
        case 0x3ee4c4u: goto label_3ee4c4;
        case 0x3ee4c8u: goto label_3ee4c8;
        case 0x3ee4ccu: goto label_3ee4cc;
        case 0x3ee4d0u: goto label_3ee4d0;
        case 0x3ee4d4u: goto label_3ee4d4;
        case 0x3ee4d8u: goto label_3ee4d8;
        case 0x3ee4dcu: goto label_3ee4dc;
        case 0x3ee4e0u: goto label_3ee4e0;
        case 0x3ee4e4u: goto label_3ee4e4;
        case 0x3ee4e8u: goto label_3ee4e8;
        case 0x3ee4ecu: goto label_3ee4ec;
        case 0x3ee4f0u: goto label_3ee4f0;
        case 0x3ee4f4u: goto label_3ee4f4;
        case 0x3ee4f8u: goto label_3ee4f8;
        case 0x3ee4fcu: goto label_3ee4fc;
        case 0x3ee500u: goto label_3ee500;
        case 0x3ee504u: goto label_3ee504;
        case 0x3ee508u: goto label_3ee508;
        case 0x3ee50cu: goto label_3ee50c;
        case 0x3ee510u: goto label_3ee510;
        case 0x3ee514u: goto label_3ee514;
        case 0x3ee518u: goto label_3ee518;
        case 0x3ee51cu: goto label_3ee51c;
        case 0x3ee520u: goto label_3ee520;
        case 0x3ee524u: goto label_3ee524;
        case 0x3ee528u: goto label_3ee528;
        case 0x3ee52cu: goto label_3ee52c;
        case 0x3ee530u: goto label_3ee530;
        case 0x3ee534u: goto label_3ee534;
        case 0x3ee538u: goto label_3ee538;
        case 0x3ee53cu: goto label_3ee53c;
        case 0x3ee540u: goto label_3ee540;
        case 0x3ee544u: goto label_3ee544;
        case 0x3ee548u: goto label_3ee548;
        case 0x3ee54cu: goto label_3ee54c;
        case 0x3ee550u: goto label_3ee550;
        case 0x3ee554u: goto label_3ee554;
        case 0x3ee558u: goto label_3ee558;
        case 0x3ee55cu: goto label_3ee55c;
        case 0x3ee560u: goto label_3ee560;
        case 0x3ee564u: goto label_3ee564;
        case 0x3ee568u: goto label_3ee568;
        case 0x3ee56cu: goto label_3ee56c;
        case 0x3ee570u: goto label_3ee570;
        case 0x3ee574u: goto label_3ee574;
        case 0x3ee578u: goto label_3ee578;
        case 0x3ee57cu: goto label_3ee57c;
        case 0x3ee580u: goto label_3ee580;
        case 0x3ee584u: goto label_3ee584;
        case 0x3ee588u: goto label_3ee588;
        case 0x3ee58cu: goto label_3ee58c;
        case 0x3ee590u: goto label_3ee590;
        case 0x3ee594u: goto label_3ee594;
        case 0x3ee598u: goto label_3ee598;
        case 0x3ee59cu: goto label_3ee59c;
        case 0x3ee5a0u: goto label_3ee5a0;
        case 0x3ee5a4u: goto label_3ee5a4;
        case 0x3ee5a8u: goto label_3ee5a8;
        case 0x3ee5acu: goto label_3ee5ac;
        case 0x3ee5b0u: goto label_3ee5b0;
        case 0x3ee5b4u: goto label_3ee5b4;
        case 0x3ee5b8u: goto label_3ee5b8;
        case 0x3ee5bcu: goto label_3ee5bc;
        case 0x3ee5c0u: goto label_3ee5c0;
        case 0x3ee5c4u: goto label_3ee5c4;
        case 0x3ee5c8u: goto label_3ee5c8;
        case 0x3ee5ccu: goto label_3ee5cc;
        case 0x3ee5d0u: goto label_3ee5d0;
        case 0x3ee5d4u: goto label_3ee5d4;
        case 0x3ee5d8u: goto label_3ee5d8;
        case 0x3ee5dcu: goto label_3ee5dc;
        case 0x3ee5e0u: goto label_3ee5e0;
        case 0x3ee5e4u: goto label_3ee5e4;
        case 0x3ee5e8u: goto label_3ee5e8;
        case 0x3ee5ecu: goto label_3ee5ec;
        case 0x3ee5f0u: goto label_3ee5f0;
        case 0x3ee5f4u: goto label_3ee5f4;
        case 0x3ee5f8u: goto label_3ee5f8;
        case 0x3ee5fcu: goto label_3ee5fc;
        case 0x3ee600u: goto label_3ee600;
        case 0x3ee604u: goto label_3ee604;
        case 0x3ee608u: goto label_3ee608;
        case 0x3ee60cu: goto label_3ee60c;
        case 0x3ee610u: goto label_3ee610;
        case 0x3ee614u: goto label_3ee614;
        case 0x3ee618u: goto label_3ee618;
        case 0x3ee61cu: goto label_3ee61c;
        case 0x3ee620u: goto label_3ee620;
        case 0x3ee624u: goto label_3ee624;
        case 0x3ee628u: goto label_3ee628;
        case 0x3ee62cu: goto label_3ee62c;
        case 0x3ee630u: goto label_3ee630;
        case 0x3ee634u: goto label_3ee634;
        case 0x3ee638u: goto label_3ee638;
        case 0x3ee63cu: goto label_3ee63c;
        case 0x3ee640u: goto label_3ee640;
        case 0x3ee644u: goto label_3ee644;
        case 0x3ee648u: goto label_3ee648;
        case 0x3ee64cu: goto label_3ee64c;
        default: break;
    }

    ctx->pc = 0x3eda10u;

label_3eda10:
    // 0x3eda10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3eda10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3eda14:
    // 0x3eda14: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3eda14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3eda18:
    // 0x3eda18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3eda18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3eda1c:
    // 0x3eda1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3eda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3eda20:
    // 0x3eda20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3eda20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3eda24:
    // 0x3eda24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3eda24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eda28:
    // 0x3eda28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eda28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3eda2c:
    // 0x3eda2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3eda2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eda30:
    // 0x3eda30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3eda30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3eda34:
    // 0x3eda34: 0x34452824  ori         $a1, $v0, 0x2824
    ctx->pc = 0x3eda34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10276);
label_3eda38:
    // 0x3eda38: 0xc0d0eac  jal         func_343AB0
label_3eda3c:
    if (ctx->pc == 0x3EDA3Cu) {
        ctx->pc = 0x3EDA3Cu;
            // 0x3eda3c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3EDA40u;
        goto label_3eda40;
    }
    ctx->pc = 0x3EDA38u;
    SET_GPR_U32(ctx, 31, 0x3EDA40u);
    ctx->pc = 0x3EDA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDA38u;
            // 0x3eda3c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343AB0u;
    if (runtime->hasFunction(0x343AB0u)) {
        auto targetFn = runtime->lookupFunction(0x343AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDA40u; }
        if (ctx->pc != 0x3EDA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343AB0_0x343ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDA40u; }
        if (ctx->pc != 0x3EDA40u) { return; }
    }
    ctx->pc = 0x3EDA40u;
label_3eda40:
    // 0x3eda40: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3eda40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3eda44:
    // 0x3eda44: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3eda44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3eda48:
    // 0x3eda48: 0x24639e80  addiu       $v1, $v1, -0x6180
    ctx->pc = 0x3eda48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942336));
label_3eda4c:
    // 0x3eda4c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3eda4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3eda50:
    // 0x3eda50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3eda54:
    if (ctx->pc == 0x3EDA54u) {
        ctx->pc = 0x3EDA54u;
            // 0x3eda54: 0xae5000a0  sw          $s0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
        ctx->pc = 0x3EDA58u;
        goto label_3eda58;
    }
    ctx->pc = 0x3EDA50u;
    {
        const bool branch_taken_0x3eda50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EDA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDA50u;
            // 0x3eda54: 0xae5000a0  sw          $s0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eda50) {
            ctx->pc = 0x3EDA6Cu;
            goto label_3eda6c;
        }
    }
    ctx->pc = 0x3EDA58u;
label_3eda58:
    // 0x3eda58: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3eda58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3eda5c:
    // 0x3eda5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3eda5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eda60:
    // 0x3eda60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3eda60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3eda64:
    // 0x3eda64: 0x320f809  jalr        $t9
label_3eda68:
    if (ctx->pc == 0x3EDA68u) {
        ctx->pc = 0x3EDA68u;
            // 0x3eda68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EDA6Cu;
        goto label_3eda6c;
    }
    ctx->pc = 0x3EDA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EDA6Cu);
        ctx->pc = 0x3EDA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDA64u;
            // 0x3eda68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EDA6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EDA6Cu; }
            if (ctx->pc != 0x3EDA6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3EDA6Cu;
label_3eda6c:
    // 0x3eda6c: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x3eda6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_3eda70:
    // 0x3eda70: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3eda70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eda74:
    // 0x3eda74: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x3eda74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_3eda78:
    // 0x3eda78: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x3eda78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_3eda7c:
    // 0x3eda7c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x3eda7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_3eda80:
    // 0x3eda80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3eda80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3eda84:
    // 0x3eda84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3eda84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eda88:
    // 0x3eda88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3eda88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eda8c:
    // 0x3eda8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3eda8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eda90:
    // 0x3eda90: 0x3e00008  jr          $ra
label_3eda94:
    if (ctx->pc == 0x3EDA94u) {
        ctx->pc = 0x3EDA94u;
            // 0x3eda94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3EDA98u;
        goto label_3eda98;
    }
    ctx->pc = 0x3EDA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDA90u;
            // 0x3eda94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EDA98u;
label_3eda98:
    // 0x3eda98: 0x0  nop
    ctx->pc = 0x3eda98u;
    // NOP
label_3eda9c:
    // 0x3eda9c: 0x0  nop
    ctx->pc = 0x3eda9cu;
    // NOP
label_3edaa0:
    // 0x3edaa0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3edaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3edaa4:
    // 0x3edaa4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3edaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3edaa8:
    // 0x3edaa8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3edaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3edaac:
    // 0x3edaac: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3edaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3edab0:
    // 0x3edab0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3edab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3edab4:
    // 0x3edab4: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3edab4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3edab8:
    // 0x3edab8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3edab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3edabc:
    // 0x3edabc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3edabcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3edac0:
    // 0x3edac0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3edac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3edac4:
    // 0x3edac4: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x3edac4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3edac8:
    // 0x3edac8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3edac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3edacc:
    // 0x3edacc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3edaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3edad0:
    // 0x3edad0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3edad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3edad4:
    // 0x3edad4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3edad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3edad8:
    // 0x3edad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3edad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3edadc:
    // 0x3edadc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3edadcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3edae0:
    // 0x3edae0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3edae0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3edae4:
    // 0x3edae4: 0x26300054  addiu       $s0, $s1, 0x54
    ctx->pc = 0x3edae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_3edae8:
    // 0x3edae8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3edae8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3edaec:
    // 0x3edaec: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3edaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3edaf0:
    // 0x3edaf0: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3edaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3edaf4:
    // 0x3edaf4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3edaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3edaf8:
    // 0x3edaf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3edaf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edafc:
    // 0x3edafc: 0x0  nop
    ctx->pc = 0x3edafcu;
    // NOP
label_3edb00:
    // 0x3edb00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3edb00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3edb04:
    // 0x3edb04: 0x450102b0  bc1t        . + 4 + (0x2B0 << 2)
label_3edb08:
    if (ctx->pc == 0x3EDB08u) {
        ctx->pc = 0x3EDB0Cu;
        goto label_3edb0c;
    }
    ctx->pc = 0x3EDB04u;
    {
        const bool branch_taken_0x3edb04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3edb04) {
            ctx->pc = 0x3EE5C8u;
            goto label_3ee5c8;
        }
    }
    ctx->pc = 0x3EDB0Cu;
label_3edb0c:
    // 0x3edb0c: 0x16e0003a  bnez        $s7, . + 4 + (0x3A << 2)
label_3edb10:
    if (ctx->pc == 0x3EDB10u) {
        ctx->pc = 0x3EDB14u;
        goto label_3edb14;
    }
    ctx->pc = 0x3EDB0Cu;
    {
        const bool branch_taken_0x3edb0c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3edb0c) {
            ctx->pc = 0x3EDBF8u;
            goto label_3edbf8;
        }
    }
    ctx->pc = 0x3EDB14u;
label_3edb14:
    // 0x3edb14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3edb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3edb18:
    // 0x3edb18: 0x8e3302d8  lw          $s3, 0x2D8($s1)
    ctx->pc = 0x3edb18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
label_3edb1c:
    // 0x3edb1c: 0x8c5489f0  lw          $s4, -0x7610($v0)
    ctx->pc = 0x3edb1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3edb20:
    // 0x3edb20: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3edb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_3edb24:
    // 0x3edb24: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x3edb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_3edb28:
    // 0x3edb28: 0xc05750c  jal         func_15D430
label_3edb2c:
    if (ctx->pc == 0x3EDB2Cu) {
        ctx->pc = 0x3EDB2Cu;
            // 0x3edb2c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3EDB30u;
        goto label_3edb30;
    }
    ctx->pc = 0x3EDB28u;
    SET_GPR_U32(ctx, 31, 0x3EDB30u);
    ctx->pc = 0x3EDB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDB28u;
            // 0x3edb2c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDB30u; }
        if (ctx->pc != 0x3EDB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDB30u; }
        if (ctx->pc != 0x3EDB30u) { return; }
    }
    ctx->pc = 0x3EDB30u;
label_3edb30:
    // 0x3edb30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3edb30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3edb34:
    // 0x3edb34: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3edb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3edb38:
    // 0x3edb38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3edb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3edb3c:
    // 0x3edb3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3edb40:
    if (ctx->pc == 0x3EDB40u) {
        ctx->pc = 0x3EDB40u;
            // 0x3edb40: 0xde660000  ld          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3EDB44u;
        goto label_3edb44;
    }
    ctx->pc = 0x3EDB3Cu;
    {
        const bool branch_taken_0x3edb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDB3Cu;
            // 0x3edb40: 0xde660000  ld          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb3c) {
            ctx->pc = 0x3EDB58u;
            goto label_3edb58;
        }
    }
    ctx->pc = 0x3EDB44u;
label_3edb44:
    // 0x3edb44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3edb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3edb48:
    // 0x3edb48: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x3edb48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_3edb4c:
    // 0x3edb4c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3edb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_3edb50:
    // 0x3edb50: 0x10000005  b           . + 4 + (0x5 << 2)
label_3edb54:
    if (ctx->pc == 0x3EDB54u) {
        ctx->pc = 0x3EDB54u;
            // 0x3edb54: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x3EDB58u;
        goto label_3edb58;
    }
    ctx->pc = 0x3EDB50u;
    {
        const bool branch_taken_0x3edb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDB50u;
            // 0x3edb54: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb50) {
            ctx->pc = 0x3EDB68u;
            goto label_3edb68;
        }
    }
    ctx->pc = 0x3EDB58u;
label_3edb58:
    // 0x3edb58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3edb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3edb5c:
    // 0x3edb5c: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x3edb5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_3edb60:
    // 0x3edb60: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3edb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_3edb64:
    // 0x3edb64: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x3edb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_3edb68:
    // 0x3edb68: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x3edb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_3edb6c:
    // 0x3edb6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3edb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3edb70:
    // 0x3edb70: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x3edb70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
label_3edb74:
    // 0x3edb74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3edb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3edb78:
    // 0x3edb78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3edb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3edb7c:
    // 0x3edb7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3edb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3edb80:
    // 0x3edb80: 0xc057540  jal         func_15D500
label_3edb84:
    if (ctx->pc == 0x3EDB84u) {
        ctx->pc = 0x3EDB84u;
            // 0x3edb84: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x3EDB88u;
        goto label_3edb88;
    }
    ctx->pc = 0x3EDB80u;
    SET_GPR_U32(ctx, 31, 0x3EDB88u);
    ctx->pc = 0x3EDB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDB80u;
            // 0x3edb84: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDB88u; }
        if (ctx->pc != 0x3EDB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDB88u; }
        if (ctx->pc != 0x3EDB88u) { return; }
    }
    ctx->pc = 0x3EDB88u;
label_3edb88:
    // 0x3edb88: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3edb88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3edb8c:
    // 0x3edb8c: 0x0  nop
    ctx->pc = 0x3edb8cu;
    // NOP
label_3edb90:
    // 0x3edb90: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x3edb90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3edb94:
    // 0x3edb94: 0xde660000  ld          $a2, 0x0($s3)
    ctx->pc = 0x3edb94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_3edb98:
    // 0x3edb98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3edb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3edb9c:
    // 0x3edb9c: 0xde670008  ld          $a3, 0x8($s3)
    ctx->pc = 0x3edb9cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 8)));
label_3edba0:
    // 0x3edba0: 0xc057540  jal         func_15D500
label_3edba4:
    if (ctx->pc == 0x3EDBA4u) {
        ctx->pc = 0x3EDBA4u;
            // 0x3edba4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EDBA8u;
        goto label_3edba8;
    }
    ctx->pc = 0x3EDBA0u;
    SET_GPR_U32(ctx, 31, 0x3EDBA8u);
    ctx->pc = 0x3EDBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDBA0u;
            // 0x3edba4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDBA8u; }
        if (ctx->pc != 0x3EDBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDBA8u; }
        if (ctx->pc != 0x3EDBA8u) { return; }
    }
    ctx->pc = 0x3EDBA8u;
label_3edba8:
    // 0x3edba8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3edba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3edbac:
    // 0x3edbac: 0x2e82000a  sltiu       $v0, $s4, 0xA
    ctx->pc = 0x3edbacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3edbb0:
    // 0x3edbb0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3edbb4:
    if (ctx->pc == 0x3EDBB4u) {
        ctx->pc = 0x3EDBB8u;
        goto label_3edbb8;
    }
    ctx->pc = 0x3EDBB0u;
    {
        const bool branch_taken_0x3edbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3edbb0) {
            ctx->pc = 0x3EDB90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3edb90;
        }
    }
    ctx->pc = 0x3EDBB8u;
label_3edbb8:
    // 0x3edbb8: 0xc057528  jal         func_15D4A0
label_3edbbc:
    if (ctx->pc == 0x3EDBBCu) {
        ctx->pc = 0x3EDBBCu;
            // 0x3edbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EDBC0u;
        goto label_3edbc0;
    }
    ctx->pc = 0x3EDBB8u;
    SET_GPR_U32(ctx, 31, 0x3EDBC0u);
    ctx->pc = 0x3EDBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDBB8u;
            // 0x3edbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDBC0u; }
        if (ctx->pc != 0x3EDBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDBC0u; }
        if (ctx->pc != 0x3EDBC0u) { return; }
    }
    ctx->pc = 0x3EDBC0u;
label_3edbc0:
    // 0x3edbc0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3edbc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3edbc4:
    // 0x3edbc4: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x3edbc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_3edbc8:
    // 0x3edbc8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3edbcc:
    if (ctx->pc == 0x3EDBCCu) {
        ctx->pc = 0x3EDBCCu;
            // 0x3edbcc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EDBD0u;
        goto label_3edbd0;
    }
    ctx->pc = 0x3EDBC8u;
    {
        const bool branch_taken_0x3edbc8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3EDBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDBC8u;
            // 0x3edbcc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edbc8) {
            ctx->pc = 0x3EDBDCu;
            goto label_3edbdc;
        }
    }
    ctx->pc = 0x3EDBD0u;
label_3edbd0:
    // 0x3edbd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3edbd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edbd4:
    // 0x3edbd4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3edbd8:
    if (ctx->pc == 0x3EDBD8u) {
        ctx->pc = 0x3EDBD8u;
            // 0x3edbd8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EDBDCu;
        goto label_3edbdc;
    }
    ctx->pc = 0x3EDBD4u;
    {
        const bool branch_taken_0x3edbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDBD4u;
            // 0x3edbd8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edbd4) {
            ctx->pc = 0x3EDBF8u;
            goto label_3edbf8;
        }
    }
    ctx->pc = 0x3EDBDCu;
label_3edbdc:
    // 0x3edbdc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3edbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3edbe0:
    // 0x3edbe0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3edbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3edbe4:
    // 0x3edbe4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3edbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3edbe8:
    // 0x3edbe8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3edbe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edbec:
    // 0x3edbec: 0x0  nop
    ctx->pc = 0x3edbecu;
    // NOP
label_3edbf0:
    // 0x3edbf0: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3edbf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3edbf4:
    // 0x3edbf4: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x3edbf4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_3edbf8:
    // 0x3edbf8: 0x9203000b  lbu         $v1, 0xB($s0)
    ctx->pc = 0x3edbf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_3edbfc:
    // 0x3edbfc: 0x13c3001c  beq         $fp, $v1, . + 4 + (0x1C << 2)
label_3edc00:
    if (ctx->pc == 0x3EDC00u) {
        ctx->pc = 0x3EDC04u;
        goto label_3edc04;
    }
    ctx->pc = 0x3EDBFCu;
    {
        const bool branch_taken_0x3edbfc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        if (branch_taken_0x3edbfc) {
            ctx->pc = 0x3EDC70u;
            goto label_3edc70;
        }
    }
    ctx->pc = 0x3EDC04u;
label_3edc04:
    // 0x3edc04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3edc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3edc08:
    // 0x3edc08: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x3edc08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3edc0c:
    // 0x3edc0c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3edc0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3edc10:
    // 0x3edc10: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3edc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3edc14:
    // 0x3edc14: 0x320f809  jalr        $t9
label_3edc18:
    if (ctx->pc == 0x3EDC18u) {
        ctx->pc = 0x3EDC18u;
            // 0x3edc18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC1Cu;
        goto label_3edc1c;
    }
    ctx->pc = 0x3EDC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EDC1Cu);
        ctx->pc = 0x3EDC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDC14u;
            // 0x3edc18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EDC1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EDC1Cu; }
            if (ctx->pc != 0x3EDC1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3EDC1Cu;
label_3edc1c:
    // 0x3edc1c: 0x9203000b  lbu         $v1, 0xB($s0)
    ctx->pc = 0x3edc1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_3edc20:
    // 0x3edc20: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3edc20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3edc24:
    // 0x3edc24: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3edc24u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3edc28:
    // 0x3edc28: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3edc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3edc2c:
    // 0x3edc2c: 0x0  nop
    ctx->pc = 0x3edc2cu;
    // NOP
label_3edc30:
    // 0x3edc30: 0x2812  mflo        $a1
    ctx->pc = 0x3edc30u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_3edc34:
    // 0x3edc34: 0x320f809  jalr        $t9
label_3edc38:
    if (ctx->pc == 0x3EDC38u) {
        ctx->pc = 0x3EDC38u;
            // 0x3edc38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC3Cu;
        goto label_3edc3c;
    }
    ctx->pc = 0x3EDC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EDC3Cu);
        ctx->pc = 0x3EDC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDC34u;
            // 0x3edc38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EDC3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EDC3Cu; }
            if (ctx->pc != 0x3EDC3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3EDC3Cu;
label_3edc3c:
    // 0x3edc3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3edc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3edc40:
    // 0x3edc40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3edc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3edc44:
    // 0x3edc44: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3edc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3edc48:
    // 0x3edc48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3edc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3edc4c:
    // 0x3edc4c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3edc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3edc50:
    // 0x3edc50: 0xc047740  jal         func_11DD00
label_3edc54:
    if (ctx->pc == 0x3EDC54u) {
        ctx->pc = 0x3EDC54u;
            // 0x3edc54: 0xc44c0de4  lwc1        $f12, 0xDE4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3EDC58u;
        goto label_3edc58;
    }
    ctx->pc = 0x3EDC50u;
    SET_GPR_U32(ctx, 31, 0x3EDC58u);
    ctx->pc = 0x3EDC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDC50u;
            // 0x3edc54: 0xc44c0de4  lwc1        $f12, 0xDE4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDC58u; }
        if (ctx->pc != 0x3EDC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDC58u; }
        if (ctx->pc != 0x3EDC58u) { return; }
    }
    ctx->pc = 0x3EDC58u;
label_3edc58:
    // 0x3edc58: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3edc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3edc5c:
    // 0x3edc5c: 0x921e000b  lbu         $fp, 0xB($s0)
    ctx->pc = 0x3edc5cu;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_3edc60:
    // 0x3edc60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3edc60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3edc64:
    // 0x3edc64: 0x0  nop
    ctx->pc = 0x3edc64u;
    // NOP
label_3edc68:
    // 0x3edc68: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x3edc68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3edc6c:
    // 0x3edc6c: 0x0  nop
    ctx->pc = 0x3edc6cu;
    // NOP
label_3edc70:
    // 0x3edc70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3edc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3edc74:
    // 0x3edc74: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3edc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3edc78:
    // 0x3edc78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3edc78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3edc7c:
    // 0x3edc7c: 0x0  nop
    ctx->pc = 0x3edc7cu;
    // NOP
label_3edc80:
    // 0x3edc80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3edc80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3edc84:
    // 0x3edc84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3edc88:
    if (ctx->pc == 0x3EDC88u) {
        ctx->pc = 0x3EDC8Cu;
        goto label_3edc8c;
    }
    ctx->pc = 0x3EDC84u;
    {
        const bool branch_taken_0x3edc84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3edc84) {
            ctx->pc = 0x3EDC98u;
            goto label_3edc98;
        }
    }
    ctx->pc = 0x3EDC8Cu;
label_3edc8c:
    // 0x3edc8c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3edc8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_3edc90:
    // 0x3edc90: 0x1000000b  b           . + 4 + (0xB << 2)
label_3edc94:
    if (ctx->pc == 0x3EDC94u) {
        ctx->pc = 0x3EDC94u;
            // 0x3edc94: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x3EDC98u;
        goto label_3edc98;
    }
    ctx->pc = 0x3EDC90u;
    {
        const bool branch_taken_0x3edc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDC90u;
            // 0x3edc94: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edc90) {
            ctx->pc = 0x3EDCC0u;
            goto label_3edcc0;
        }
    }
    ctx->pc = 0x3EDC98u;
label_3edc98:
    // 0x3edc98: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3edc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3edc9c:
    // 0x3edc9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3edc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edca0:
    // 0x3edca0: 0x0  nop
    ctx->pc = 0x3edca0u;
    // NOP
label_3edca4:
    // 0x3edca4: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x3edca4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_3edca8:
    // 0x3edca8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3edca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3edcac:
    // 0x3edcac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3edcb0:
    if (ctx->pc == 0x3EDCB0u) {
        ctx->pc = 0x3EDCB0u;
            // 0x3edcb0: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->pc = 0x3EDCB4u;
        goto label_3edcb4;
    }
    ctx->pc = 0x3EDCACu;
    {
        const bool branch_taken_0x3edcac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EDCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDCACu;
            // 0x3edcb0: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edcac) {
            ctx->pc = 0x3EDCC0u;
            goto label_3edcc0;
        }
    }
    ctx->pc = 0x3EDCB4u;
label_3edcb4:
    // 0x3edcb4: 0x10000244  b           . + 4 + (0x244 << 2)
label_3edcb8:
    if (ctx->pc == 0x3EDCB8u) {
        ctx->pc = 0x3EDCB8u;
            // 0x3edcb8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x3EDCBCu;
        goto label_3edcbc;
    }
    ctx->pc = 0x3EDCB4u;
    {
        const bool branch_taken_0x3edcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDCB4u;
            // 0x3edcb8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edcb4) {
            ctx->pc = 0x3EE5C8u;
            goto label_3ee5c8;
        }
    }
    ctx->pc = 0x3EDCBCu;
label_3edcbc:
    // 0x3edcbc: 0x0  nop
    ctx->pc = 0x3edcbcu;
    // NOP
label_3edcc0:
    // 0x3edcc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3edcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3edcc4:
    // 0x3edcc4: 0x96140006  lhu         $s4, 0x6($s0)
    ctx->pc = 0x3edcc4u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3edcc8:
    // 0x3edcc8: 0x92130008  lbu         $s3, 0x8($s0)
    ctx->pc = 0x3edcc8u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_3edccc:
    // 0x3edccc: 0x92120009  lbu         $s2, 0x9($s0)
    ctx->pc = 0x3edcccu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_3edcd0:
    // 0x3edcd0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3edcd4:
    if (ctx->pc == 0x3EDCD4u) {
        ctx->pc = 0x3EDCD4u;
            // 0x3edcd4: 0x96150004  lhu         $s5, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3EDCD8u;
        goto label_3edcd8;
    }
    ctx->pc = 0x3EDCD0u;
    {
        const bool branch_taken_0x3edcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDCD0u;
            // 0x3edcd4: 0x96150004  lhu         $s5, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edcd0) {
            ctx->pc = 0x3EDD68u;
            goto label_3edd68;
        }
    }
    ctx->pc = 0x3EDCD8u;
label_3edcd8:
    // 0x3edcd8: 0x2e61005a  sltiu       $at, $s3, 0x5A
    ctx->pc = 0x3edcd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
label_3edcdc:
    // 0x3edcdc: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_3edce0:
    if (ctx->pc == 0x3EDCE0u) {
        ctx->pc = 0x3EDCE4u;
        goto label_3edce4;
    }
    ctx->pc = 0x3EDCDCu;
    {
        const bool branch_taken_0x3edcdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edcdc) {
            ctx->pc = 0x3EDD60u;
            goto label_3edd60;
        }
    }
    ctx->pc = 0x3EDCE4u;
label_3edce4:
    // 0x3edce4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x3edce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3edce8:
    // 0x3edce8: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x3edce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_3edcec:
    // 0x3edcec: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x3edcecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_3edcf0:
    // 0x3edcf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3edcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3edcf4:
    // 0x3edcf4: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x3edcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_3edcf8:
    // 0x3edcf8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3edcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3edcfc:
    // 0x3edcfc: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
label_3edd00:
    if (ctx->pc == 0x3EDD00u) {
        ctx->pc = 0x3EDD04u;
        goto label_3edd04;
    }
    ctx->pc = 0x3EDCFCu;
    {
        const bool branch_taken_0x3edcfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edcfc) {
            ctx->pc = 0x3EDD68u;
            goto label_3edd68;
        }
    }
    ctx->pc = 0x3EDD04u;
label_3edd04:
    // 0x3edd04: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3edd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3edd08:
    // 0x3edd08: 0x9203000b  lbu         $v1, 0xB($s0)
    ctx->pc = 0x3edd08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_3edd0c:
    // 0x3edd0c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3edd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3edd10:
    // 0x3edd10: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3edd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3edd14:
    // 0x3edd14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3edd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3edd18:
    // 0x3edd18: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3edd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3edd1c:
    // 0x3edd1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3edd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3edd20:
    // 0x3edd20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3edd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3edd24:
    // 0x3edd24: 0xc075094  jal         func_1D4250
label_3edd28:
    if (ctx->pc == 0x3EDD28u) {
        ctx->pc = 0x3EDD28u;
            // 0x3edd28: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->pc = 0x3EDD2Cu;
        goto label_3edd2c;
    }
    ctx->pc = 0x3EDD24u;
    SET_GPR_U32(ctx, 31, 0x3EDD2Cu);
    ctx->pc = 0x3EDD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDD24u;
            // 0x3edd28: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDD2Cu; }
        if (ctx->pc != 0x3EDD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EDD2Cu; }
        if (ctx->pc != 0x3EDD2Cu) { return; }
    }
    ctx->pc = 0x3EDD2Cu;
label_3edd2c:
    // 0x3edd2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3edd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3edd30:
    // 0x3edd30: 0x9207000b  lbu         $a3, 0xB($s0)
    ctx->pc = 0x3edd30u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_3edd34:
    // 0x3edd34: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3edd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3edd38:
    // 0x3edd38: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x3edd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_3edd3c:
    // 0x3edd3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3edd3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3edd40:
    // 0x3edd40: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x3edd40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_3edd44:
    // 0x3edd44: 0x320f809  jalr        $t9
label_3edd48:
    if (ctx->pc == 0x3EDD48u) {
        ctx->pc = 0x3EDD48u;
            // 0x3edd48: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3EDD4Cu;
        goto label_3edd4c;
    }
    ctx->pc = 0x3EDD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EDD4Cu);
        ctx->pc = 0x3EDD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDD44u;
            // 0x3edd48: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EDD4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EDD4Cu; }
            if (ctx->pc != 0x3EDD4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3EDD4Cu;
label_3edd4c:
    // 0x3edd4c: 0x87a200dc  lh          $v0, 0xDC($sp)
    ctx->pc = 0x3edd4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
label_3edd50:
    // 0x3edd50: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x3edd50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_3edd54:
    // 0x3edd54: 0x87a200de  lh          $v0, 0xDE($sp)
    ctx->pc = 0x3edd54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
label_3edd58:
    // 0x3edd58: 0x10000003  b           . + 4 + (0x3 << 2)
label_3edd5c:
    if (ctx->pc == 0x3EDD5Cu) {
        ctx->pc = 0x3EDD5Cu;
            // 0x3edd5c: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EDD60u;
        goto label_3edd60;
    }
    ctx->pc = 0x3EDD58u;
    {
        const bool branch_taken_0x3edd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDD58u;
            // 0x3edd5c: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd58) {
            ctx->pc = 0x3EDD68u;
            goto label_3edd68;
        }
    }
    ctx->pc = 0x3EDD60u;
label_3edd60:
    // 0x3edd60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3edd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3edd64:
    // 0x3edd64: 0x0  nop
    ctx->pc = 0x3edd64u;
    // NOP
label_3edd68:
    // 0x3edd68: 0x8204000a  lb          $a0, 0xA($s0)
    ctx->pc = 0x3edd68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_3edd6c:
    // 0x3edd6c: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x3edd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_3edd70:
    // 0x3edd70: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3edd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3edd74:
    // 0x3edd74: 0x24636bf8  addiu       $v1, $v1, 0x6BF8
    ctx->pc = 0x3edd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27640));
label_3edd78:
    // 0x3edd78: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x3edd78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_3edd7c:
    // 0x3edd7c: 0xa443f9d0  sh          $v1, -0x630($v0)
    ctx->pc = 0x3edd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965712), (uint16_t)GPR_U32(ctx, 3));
label_3edd80:
    // 0x3edd80: 0x8e2502dc  lw          $a1, 0x2DC($s1)
    ctx->pc = 0x3edd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_3edd84:
    // 0x3edd84: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3edd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3edd88:
    // 0x3edd88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3edd88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3edd8c:
    // 0x3edd8c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3edd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3edd90:
    // 0x3edd90: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x3edd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3edd94:
    // 0x3edd94: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
label_3edd98:
    if (ctx->pc == 0x3EDD98u) {
        ctx->pc = 0x3EDD98u;
            // 0x3edd98: 0xa443f9d2  sh          $v1, -0x62E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965714), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3EDD9Cu;
        goto label_3edd9c;
    }
    ctx->pc = 0x3EDD94u;
    {
        const bool branch_taken_0x3edd94 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x3EDD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDD94u;
            // 0x3edd98: 0xa443f9d2  sh          $v1, -0x62E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965714), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd94) {
            ctx->pc = 0x3EDDA8u;
            goto label_3edda8;
        }
    }
    ctx->pc = 0x3EDD9Cu;
label_3edd9c:
    // 0x3edd9c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3edd9cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edda0:
    // 0x3edda0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3edda4:
    if (ctx->pc == 0x3EDDA4u) {
        ctx->pc = 0x3EDDA4u;
            // 0x3edda4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EDDA8u;
        goto label_3edda8;
    }
    ctx->pc = 0x3EDDA0u;
    {
        const bool branch_taken_0x3edda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDDA0u;
            // 0x3edda4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edda0) {
            ctx->pc = 0x3EDDC4u;
            goto label_3eddc4;
        }
    }
    ctx->pc = 0x3EDDA8u;
label_3edda8:
    // 0x3edda8: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x3edda8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_3eddac:
    // 0x3eddac: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x3eddacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3eddb0:
    // 0x3eddb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eddb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3eddb4:
    // 0x3eddb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eddb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eddb8:
    // 0x3eddb8: 0x0  nop
    ctx->pc = 0x3eddb8u;
    // NOP
label_3eddbc:
    // 0x3eddbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3eddbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3eddc0:
    // 0x3eddc0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3eddc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3eddc4:
    // 0x3eddc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3eddc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3eddc8:
    // 0x3eddc8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3eddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3eddcc:
    // 0x3eddcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eddccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eddd0:
    // 0x3eddd0: 0x0  nop
    ctx->pc = 0x3eddd0u;
    // NOP
label_3eddd4:
    // 0x3eddd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eddd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3eddd8:
    // 0x3eddd8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3edddc:
    if (ctx->pc == 0x3EDDDCu) {
        ctx->pc = 0x3EDDDCu;
            // 0x3edddc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EDDE0u;
        goto label_3edde0;
    }
    ctx->pc = 0x3EDDD8u;
    {
        const bool branch_taken_0x3eddd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eddd8) {
            ctx->pc = 0x3EDDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDDD8u;
            // 0x3edddc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EDDF0u;
            goto label_3eddf0;
        }
    }
    ctx->pc = 0x3EDDE0u;
label_3edde0:
    // 0x3edde0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3edde0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3edde4:
    // 0x3edde4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3edde4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3edde8:
    // 0x3edde8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3eddec:
    if (ctx->pc == 0x3EDDECu) {
        ctx->pc = 0x3EDDECu;
            // 0x3eddec: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x3EDDF0u;
        goto label_3eddf0;
    }
    ctx->pc = 0x3EDDE8u;
    {
        const bool branch_taken_0x3edde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDDE8u;
            // 0x3eddec: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edde8) {
            ctx->pc = 0x3EDE08u;
            goto label_3ede08;
        }
    }
    ctx->pc = 0x3EDDF0u;
label_3eddf0:
    // 0x3eddf0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3eddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3eddf4:
    // 0x3eddf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eddf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3eddf8:
    // 0x3eddf8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3eddf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3eddfc:
    // 0x3eddfc: 0x0  nop
    ctx->pc = 0x3eddfcu;
    // NOP
label_3ede00:
    // 0x3ede00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ede00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ede04:
    // 0x3ede04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ede04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3ede08:
    // 0x3ede08: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ede08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ede0c:
    // 0x3ede0c: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_3ede10:
    if (ctx->pc == 0x3EDE10u) {
        ctx->pc = 0x3EDE10u;
            // 0x3ede10: 0xa443f9d4  sh          $v1, -0x62C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965716), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3EDE14u;
        goto label_3ede14;
    }
    ctx->pc = 0x3EDE0Cu;
    {
        const bool branch_taken_0x3ede0c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3EDE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDE0Cu;
            // 0x3ede10: 0xa443f9d4  sh          $v1, -0x62C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965716), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede0c) {
            ctx->pc = 0x3EDE20u;
            goto label_3ede20;
        }
    }
    ctx->pc = 0x3EDE14u;
label_3ede14:
    // 0x3ede14: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3ede14u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ede18:
    // 0x3ede18: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ede1c:
    if (ctx->pc == 0x3EDE1Cu) {
        ctx->pc = 0x3EDE1Cu;
            // 0x3ede1c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EDE20u;
        goto label_3ede20;
    }
    ctx->pc = 0x3EDE18u;
    {
        const bool branch_taken_0x3ede18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDE18u;
            // 0x3ede1c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede18) {
            ctx->pc = 0x3EDE3Cu;
            goto label_3ede3c;
        }
    }
    ctx->pc = 0x3EDE20u;
label_3ede20:
    // 0x3ede20: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x3ede20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_3ede24:
    // 0x3ede24: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x3ede24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_3ede28:
    // 0x3ede28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ede28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ede2c:
    // 0x3ede2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ede2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ede30:
    // 0x3ede30: 0x0  nop
    ctx->pc = 0x3ede30u;
    // NOP
label_3ede34:
    // 0x3ede34: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ede34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ede38:
    // 0x3ede38: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ede38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ede3c:
    // 0x3ede3c: 0xc62102e0  lwc1        $f1, 0x2E0($s1)
    ctx->pc = 0x3ede3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ede40:
    // 0x3ede40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ede40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3ede44:
    // 0x3ede44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ede44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ede48:
    // 0x3ede48: 0x0  nop
    ctx->pc = 0x3ede48u;
    // NOP
label_3ede4c:
    // 0x3ede4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ede4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3ede50:
    // 0x3ede50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ede50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ede54:
    // 0x3ede54: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ede58:
    if (ctx->pc == 0x3EDE58u) {
        ctx->pc = 0x3EDE58u;
            // 0x3ede58: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EDE5Cu;
        goto label_3ede5c;
    }
    ctx->pc = 0x3EDE54u;
    {
        const bool branch_taken_0x3ede54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ede54) {
            ctx->pc = 0x3EDE58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDE54u;
            // 0x3ede58: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EDE6Cu;
            goto label_3ede6c;
        }
    }
    ctx->pc = 0x3EDE5Cu;
label_3ede5c:
    // 0x3ede5c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ede5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ede60:
    // 0x3ede60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ede60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ede64:
    // 0x3ede64: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ede68:
    if (ctx->pc == 0x3EDE68u) {
        ctx->pc = 0x3EDE68u;
            // 0x3ede68: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x3EDE6Cu;
        goto label_3ede6c;
    }
    ctx->pc = 0x3EDE64u;
    {
        const bool branch_taken_0x3ede64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDE64u;
            // 0x3ede68: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede64) {
            ctx->pc = 0x3EDE84u;
            goto label_3ede84;
        }
    }
    ctx->pc = 0x3EDE6Cu;
label_3ede6c:
    // 0x3ede6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ede6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3ede70:
    // 0x3ede70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ede70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ede74:
    // 0x3ede74: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ede74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ede78:
    // 0x3ede78: 0x0  nop
    ctx->pc = 0x3ede78u;
    // NOP
label_3ede7c:
    // 0x3ede7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ede7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ede80:
    // 0x3ede80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ede80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3ede84:
    // 0x3ede84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ede84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ede88:
    // 0x3ede88: 0xa443f9d6  sh          $v1, -0x62A($v0)
    ctx->pc = 0x3ede88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965718), (uint16_t)GPR_U32(ctx, 3));
label_3ede8c:
    // 0x3ede8c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3ede8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ede90:
    // 0x3ede90: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ede90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3ede94:
    // 0x3ede94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ede94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ede98:
    // 0x3ede98: 0x0  nop
    ctx->pc = 0x3ede98u;
    // NOP
label_3ede9c:
    // 0x3ede9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ede9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3edea0:
    // 0x3edea0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3edea4:
    if (ctx->pc == 0x3EDEA4u) {
        ctx->pc = 0x3EDEA4u;
            // 0x3edea4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EDEA8u;
        goto label_3edea8;
    }
    ctx->pc = 0x3EDEA0u;
    {
        const bool branch_taken_0x3edea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3edea0) {
            ctx->pc = 0x3EDEA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDEA0u;
            // 0x3edea4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EDEB8u;
            goto label_3edeb8;
        }
    }
    ctx->pc = 0x3EDEA8u;
label_3edea8:
    // 0x3edea8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3edea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3edeac:
    // 0x3edeac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3edeacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3edeb0:
    // 0x3edeb0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3edeb4:
    if (ctx->pc == 0x3EDEB4u) {
        ctx->pc = 0x3EDEB4u;
            // 0x3edeb4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3EDEB8u;
        goto label_3edeb8;
    }
    ctx->pc = 0x3EDEB0u;
    {
        const bool branch_taken_0x3edeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDEB0u;
            // 0x3edeb4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edeb0) {
            ctx->pc = 0x3EDED0u;
            goto label_3eded0;
        }
    }
    ctx->pc = 0x3EDEB8u;
label_3edeb8:
    // 0x3edeb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3edeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3edebc:
    // 0x3edebc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3edebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3edec0:
    // 0x3edec0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3edec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3edec4:
    // 0x3edec4: 0x0  nop
    ctx->pc = 0x3edec4u;
    // NOP
label_3edec8:
    // 0x3edec8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3edec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3edecc:
    // 0x3edecc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3edeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3eded0:
    // 0x3eded0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3eded0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3eded4:
    // 0x3eded4: 0x2b23823  subu        $a3, $s5, $s2
    ctx->pc = 0x3eded4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_3eded8:
    // 0x3eded8: 0xa043f9d8  sb          $v1, -0x628($v0)
    ctx->pc = 0x3eded8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294965720), (uint8_t)GPR_U32(ctx, 3));
label_3ededc:
    // 0x3ededc: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ededcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3edee0:
    // 0x3edee0: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x3edee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_3edee4:
    // 0x3edee4: 0x24436bf8  addiu       $v1, $v0, 0x6BF8
    ctx->pc = 0x3edee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
label_3edee8:
    // 0x3edee8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3edee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3edeec:
    // 0x3edeec: 0xa443f9da  sh          $v1, -0x626($v0)
    ctx->pc = 0x3edeecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965722), (uint16_t)GPR_U32(ctx, 3));
label_3edef0:
    // 0x3edef0: 0x8e2602dc  lw          $a2, 0x2DC($s1)
    ctx->pc = 0x3edef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_3edef4:
    // 0x3edef4: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x3edef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_3edef8:
    // 0x3edef8: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x3edef8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3edefc:
    // 0x3edefc: 0x41823  negu        $v1, $a0
    ctx->pc = 0x3edefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3edf00:
    // 0x3edf00: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x3edf00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3edf04:
    // 0x3edf04: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3edf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3edf08:
    // 0x3edf08: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_3edf0c:
    if (ctx->pc == 0x3EDF0Cu) {
        ctx->pc = 0x3EDF0Cu;
            // 0x3edf0c: 0xa4a6f9dc  sh          $a2, -0x624($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294965724), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x3EDF10u;
        goto label_3edf10;
    }
    ctx->pc = 0x3EDF08u;
    {
        const bool branch_taken_0x3edf08 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x3EDF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDF08u;
            // 0x3edf0c: 0xa4a6f9dc  sh          $a2, -0x624($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294965724), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edf08) {
            ctx->pc = 0x3EDF1Cu;
            goto label_3edf1c;
        }
    }
    ctx->pc = 0x3EDF10u;
label_3edf10:
    // 0x3edf10: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3edf10u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edf14:
    // 0x3edf14: 0x10000008  b           . + 4 + (0x8 << 2)
label_3edf18:
    if (ctx->pc == 0x3EDF18u) {
        ctx->pc = 0x3EDF18u;
            // 0x3edf18: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EDF1Cu;
        goto label_3edf1c;
    }
    ctx->pc = 0x3EDF14u;
    {
        const bool branch_taken_0x3edf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDF14u;
            // 0x3edf18: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edf14) {
            ctx->pc = 0x3EDF38u;
            goto label_3edf38;
        }
    }
    ctx->pc = 0x3EDF1Cu;
label_3edf1c:
    // 0x3edf1c: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x3edf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_3edf20:
    // 0x3edf20: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x3edf20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_3edf24:
    // 0x3edf24: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3edf24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3edf28:
    // 0x3edf28: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3edf28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edf2c:
    // 0x3edf2c: 0x0  nop
    ctx->pc = 0x3edf2cu;
    // NOP
label_3edf30:
    // 0x3edf30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3edf30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3edf34:
    // 0x3edf34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3edf34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3edf38:
    // 0x3edf38: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x3edf38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_3edf3c:
    // 0x3edf3c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x3edf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_3edf40:
    // 0x3edf40: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3edf40u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edf44:
    // 0x3edf44: 0x0  nop
    ctx->pc = 0x3edf44u;
    // NOP
label_3edf48:
    // 0x3edf48: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3edf48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3edf4c:
    // 0x3edf4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3edf4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edf50:
    // 0x3edf50: 0x0  nop
    ctx->pc = 0x3edf50u;
    // NOP
label_3edf54:
    // 0x3edf54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3edf54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3edf58:
    // 0x3edf58: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3edf5c:
    if (ctx->pc == 0x3EDF5Cu) {
        ctx->pc = 0x3EDF5Cu;
            // 0x3edf5c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EDF60u;
        goto label_3edf60;
    }
    ctx->pc = 0x3EDF58u;
    {
        const bool branch_taken_0x3edf58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3edf58) {
            ctx->pc = 0x3EDF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDF58u;
            // 0x3edf5c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EDF70u;
            goto label_3edf70;
        }
    }
    ctx->pc = 0x3EDF60u;
label_3edf60:
    // 0x3edf60: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3edf60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3edf64:
    // 0x3edf64: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3edf64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3edf68:
    // 0x3edf68: 0x10000007  b           . + 4 + (0x7 << 2)
label_3edf6c:
    if (ctx->pc == 0x3EDF6Cu) {
        ctx->pc = 0x3EDF6Cu;
            // 0x3edf6c: 0x62900  sll         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x3EDF70u;
        goto label_3edf70;
    }
    ctx->pc = 0x3EDF68u;
    {
        const bool branch_taken_0x3edf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDF68u;
            // 0x3edf6c: 0x62900  sll         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edf68) {
            ctx->pc = 0x3EDF88u;
            goto label_3edf88;
        }
    }
    ctx->pc = 0x3EDF70u;
label_3edf70:
    // 0x3edf70: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3edf70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_3edf74:
    // 0x3edf74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3edf74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3edf78:
    // 0x3edf78: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3edf78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3edf7c:
    // 0x3edf7c: 0x0  nop
    ctx->pc = 0x3edf7cu;
    // NOP
label_3edf80:
    // 0x3edf80: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3edf80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3edf84:
    // 0x3edf84: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x3edf84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3edf88:
    // 0x3edf88: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x3edf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3edf8c:
    // 0x3edf8c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3edf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3edf90:
    // 0x3edf90: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_3edf94:
    if (ctx->pc == 0x3EDF94u) {
        ctx->pc = 0x3EDF94u;
            // 0x3edf94: 0xa445f9de  sh          $a1, -0x622($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965726), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x3EDF98u;
        goto label_3edf98;
    }
    ctx->pc = 0x3EDF90u;
    {
        const bool branch_taken_0x3edf90 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3EDF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDF90u;
            // 0x3edf94: 0xa445f9de  sh          $a1, -0x622($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965726), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edf90) {
            ctx->pc = 0x3EDFA4u;
            goto label_3edfa4;
        }
    }
    ctx->pc = 0x3EDF98u;
label_3edf98:
    // 0x3edf98: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3edf98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edf9c:
    // 0x3edf9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3edfa0:
    if (ctx->pc == 0x3EDFA0u) {
        ctx->pc = 0x3EDFA0u;
            // 0x3edfa0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EDFA4u;
        goto label_3edfa4;
    }
    ctx->pc = 0x3EDF9Cu;
    {
        const bool branch_taken_0x3edf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDF9Cu;
            // 0x3edfa0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edf9c) {
            ctx->pc = 0x3EDFC0u;
            goto label_3edfc0;
        }
    }
    ctx->pc = 0x3EDFA4u;
label_3edfa4:
    // 0x3edfa4: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x3edfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_3edfa8:
    // 0x3edfa8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3edfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3edfac:
    // 0x3edfac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3edfacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3edfb0:
    // 0x3edfb0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3edfb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edfb4:
    // 0x3edfb4: 0x0  nop
    ctx->pc = 0x3edfb4u;
    // NOP
label_3edfb8:
    // 0x3edfb8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3edfb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3edfbc:
    // 0x3edfbc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3edfbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3edfc0:
    // 0x3edfc0: 0xc62102e0  lwc1        $f1, 0x2E0($s1)
    ctx->pc = 0x3edfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3edfc4:
    // 0x3edfc4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3edfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3edfc8:
    // 0x3edfc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3edfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3edfcc:
    // 0x3edfcc: 0x0  nop
    ctx->pc = 0x3edfccu;
    // NOP
label_3edfd0:
    // 0x3edfd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3edfd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3edfd4:
    // 0x3edfd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3edfd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3edfd8:
    // 0x3edfd8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3edfdc:
    if (ctx->pc == 0x3EDFDCu) {
        ctx->pc = 0x3EDFDCu;
            // 0x3edfdc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EDFE0u;
        goto label_3edfe0;
    }
    ctx->pc = 0x3EDFD8u;
    {
        const bool branch_taken_0x3edfd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3edfd8) {
            ctx->pc = 0x3EDFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDFD8u;
            // 0x3edfdc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EDFF0u;
            goto label_3edff0;
        }
    }
    ctx->pc = 0x3EDFE0u;
label_3edfe0:
    // 0x3edfe0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3edfe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3edfe4:
    // 0x3edfe4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3edfe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3edfe8:
    // 0x3edfe8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3edfec:
    if (ctx->pc == 0x3EDFECu) {
        ctx->pc = 0x3EDFECu;
            // 0x3edfec: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3EDFF0u;
        goto label_3edff0;
    }
    ctx->pc = 0x3EDFE8u;
    {
        const bool branch_taken_0x3edfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDFE8u;
            // 0x3edfec: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edfe8) {
            ctx->pc = 0x3EE008u;
            goto label_3ee008;
        }
    }
    ctx->pc = 0x3EDFF0u;
label_3edff0:
    // 0x3edff0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3edff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3edff4:
    // 0x3edff4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3edff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3edff8:
    // 0x3edff8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3edff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3edffc:
    // 0x3edffc: 0x0  nop
    ctx->pc = 0x3edffcu;
    // NOP
label_3ee000:
    // 0x3ee000: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3ee000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3ee004:
    // 0x3ee004: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3ee004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3ee008:
    // 0x3ee008: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee00c:
    // 0x3ee00c: 0xa445f9e0  sh          $a1, -0x620($v0)
    ctx->pc = 0x3ee00cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965728), (uint16_t)GPR_U32(ctx, 5));
label_3ee010:
    // 0x3ee010: 0x2b22821  addu        $a1, $s5, $s2
    ctx->pc = 0x3ee010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_3ee014:
    // 0x3ee014: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3ee014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3ee018:
    // 0x3ee018: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x3ee018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ee01c:
    // 0x3ee01c: 0x24456bf8  addiu       $a1, $v0, 0x6BF8
    ctx->pc = 0x3ee01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
label_3ee020:
    // 0x3ee020: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee024:
    // 0x3ee024: 0xa445f9e4  sh          $a1, -0x61C($v0)
    ctx->pc = 0x3ee024u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965732), (uint16_t)GPR_U32(ctx, 5));
label_3ee028:
    // 0x3ee028: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee02c:
    // 0x3ee02c: 0x9445f9dc  lhu         $a1, -0x624($v0)
    ctx->pc = 0x3ee02cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965724)));
label_3ee030:
    // 0x3ee030: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee034:
    // 0x3ee034: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_3ee038:
    if (ctx->pc == 0x3EE038u) {
        ctx->pc = 0x3EE038u;
            // 0x3ee038: 0xa445f9e6  sh          $a1, -0x61A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965734), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x3EE03Cu;
        goto label_3ee03c;
    }
    ctx->pc = 0x3EE034u;
    {
        const bool branch_taken_0x3ee034 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3EE038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE034u;
            // 0x3ee038: 0xa445f9e6  sh          $a1, -0x61A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965734), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee034) {
            ctx->pc = 0x3EE048u;
            goto label_3ee048;
        }
    }
    ctx->pc = 0x3EE03Cu;
label_3ee03c:
    // 0x3ee03c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ee03cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee040:
    // 0x3ee040: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ee044:
    if (ctx->pc == 0x3EE044u) {
        ctx->pc = 0x3EE044u;
            // 0x3ee044: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EE048u;
        goto label_3ee048;
    }
    ctx->pc = 0x3EE040u;
    {
        const bool branch_taken_0x3ee040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE040u;
            // 0x3ee044: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee040) {
            ctx->pc = 0x3EE064u;
            goto label_3ee064;
        }
    }
    ctx->pc = 0x3EE048u;
label_3ee048:
    // 0x3ee048: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x3ee048u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_3ee04c:
    // 0x3ee04c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3ee04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3ee050:
    // 0x3ee050: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3ee050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3ee054:
    // 0x3ee054: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ee054u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee058:
    // 0x3ee058: 0x0  nop
    ctx->pc = 0x3ee058u;
    // NOP
label_3ee05c:
    // 0x3ee05c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ee05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ee060:
    // 0x3ee060: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ee060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ee064:
    // 0x3ee064: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x3ee064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_3ee068:
    // 0x3ee068: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ee068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3ee06c:
    // 0x3ee06c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ee06cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee070:
    // 0x3ee070: 0x0  nop
    ctx->pc = 0x3ee070u;
    // NOP
label_3ee074:
    // 0x3ee074: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3ee074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ee078:
    // 0x3ee078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee07c:
    // 0x3ee07c: 0x0  nop
    ctx->pc = 0x3ee07cu;
    // NOP
label_3ee080:
    // 0x3ee080: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ee080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ee084:
    // 0x3ee084: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ee088:
    if (ctx->pc == 0x3EE088u) {
        ctx->pc = 0x3EE088u;
            // 0x3ee088: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EE08Cu;
        goto label_3ee08c;
    }
    ctx->pc = 0x3EE084u;
    {
        const bool branch_taken_0x3ee084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee084) {
            ctx->pc = 0x3EE088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE084u;
            // 0x3ee088: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EE09Cu;
            goto label_3ee09c;
        }
    }
    ctx->pc = 0x3EE08Cu;
label_3ee08c:
    // 0x3ee08c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee08cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee090:
    // 0x3ee090: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ee090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ee094:
    // 0x3ee094: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ee098:
    if (ctx->pc == 0x3EE098u) {
        ctx->pc = 0x3EE098u;
            // 0x3ee098: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3EE09Cu;
        goto label_3ee09c;
    }
    ctx->pc = 0x3EE094u;
    {
        const bool branch_taken_0x3ee094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE094u;
            // 0x3ee098: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee094) {
            ctx->pc = 0x3EE0B4u;
            goto label_3ee0b4;
        }
    }
    ctx->pc = 0x3EE09Cu;
label_3ee09c:
    // 0x3ee09c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3ee0a0:
    // 0x3ee0a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee0a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee0a4:
    // 0x3ee0a4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ee0a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ee0a8:
    // 0x3ee0a8: 0x0  nop
    ctx->pc = 0x3ee0a8u;
    // NOP
label_3ee0ac:
    // 0x3ee0ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3ee0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3ee0b0:
    // 0x3ee0b0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3ee0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3ee0b4:
    // 0x3ee0b4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee0b8:
    // 0x3ee0b8: 0xa445f9e8  sh          $a1, -0x618($v0)
    ctx->pc = 0x3ee0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965736), (uint16_t)GPR_U32(ctx, 5));
label_3ee0bc:
    // 0x3ee0bc: 0x2b33821  addu        $a3, $s5, $s3
    ctx->pc = 0x3ee0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_3ee0c0:
    // 0x3ee0c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee0c4:
    // 0x3ee0c4: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x3ee0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_3ee0c8:
    // 0x3ee0c8: 0x9448f9e0  lhu         $t0, -0x620($v0)
    ctx->pc = 0x3ee0c8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965728)));
label_3ee0cc:
    // 0x3ee0cc: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ee0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3ee0d0:
    // 0x3ee0d0: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x3ee0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3ee0d4:
    // 0x3ee0d4: 0xa4a8f9ea  sh          $t0, -0x616($a1)
    ctx->pc = 0x3ee0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294965738), (uint16_t)GPR_U32(ctx, 8));
label_3ee0d8:
    // 0x3ee0d8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee0dc:
    // 0x3ee0dc: 0x24c56bf8  addiu       $a1, $a2, 0x6BF8
    ctx->pc = 0x3ee0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 27640));
label_3ee0e0:
    // 0x3ee0e0: 0xa445f9ee  sh          $a1, -0x612($v0)
    ctx->pc = 0x3ee0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965742), (uint16_t)GPR_U32(ctx, 5));
label_3ee0e4:
    // 0x3ee0e4: 0x8e2602dc  lw          $a2, 0x2DC($s1)
    ctx->pc = 0x3ee0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_3ee0e8:
    // 0x3ee0e8: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x3ee0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_3ee0ec:
    // 0x3ee0ec: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x3ee0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ee0f0:
    // 0x3ee0f0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ee0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3ee0f4:
    // 0x3ee0f4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3ee0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3ee0f8:
    // 0x3ee0f8: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_3ee0fc:
    if (ctx->pc == 0x3EE0FCu) {
        ctx->pc = 0x3EE0FCu;
            // 0x3ee0fc: 0xa4a6f9f0  sh          $a2, -0x610($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294965744), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x3EE100u;
        goto label_3ee100;
    }
    ctx->pc = 0x3EE0F8u;
    {
        const bool branch_taken_0x3ee0f8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x3EE0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE0F8u;
            // 0x3ee0fc: 0xa4a6f9f0  sh          $a2, -0x610($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294965744), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee0f8) {
            ctx->pc = 0x3EE10Cu;
            goto label_3ee10c;
        }
    }
    ctx->pc = 0x3EE100u;
label_3ee100:
    // 0x3ee100: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3ee100u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee104:
    // 0x3ee104: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ee108:
    if (ctx->pc == 0x3EE108u) {
        ctx->pc = 0x3EE108u;
            // 0x3ee108: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EE10Cu;
        goto label_3ee10c;
    }
    ctx->pc = 0x3EE104u;
    {
        const bool branch_taken_0x3ee104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE104u;
            // 0x3ee108: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee104) {
            ctx->pc = 0x3EE128u;
            goto label_3ee128;
        }
    }
    ctx->pc = 0x3EE10Cu;
label_3ee10c:
    // 0x3ee10c: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x3ee10cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_3ee110:
    // 0x3ee110: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x3ee110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_3ee114:
    // 0x3ee114: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3ee114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3ee118:
    // 0x3ee118: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ee118u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee11c:
    // 0x3ee11c: 0x0  nop
    ctx->pc = 0x3ee11cu;
    // NOP
label_3ee120:
    // 0x3ee120: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ee120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ee124:
    // 0x3ee124: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ee124u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ee128:
    // 0x3ee128: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x3ee128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_3ee12c:
    // 0x3ee12c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x3ee12cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_3ee130:
    // 0x3ee130: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ee130u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee134:
    // 0x3ee134: 0x0  nop
    ctx->pc = 0x3ee134u;
    // NOP
label_3ee138:
    // 0x3ee138: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3ee138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ee13c:
    // 0x3ee13c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ee13cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee140:
    // 0x3ee140: 0x0  nop
    ctx->pc = 0x3ee140u;
    // NOP
label_3ee144:
    // 0x3ee144: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ee144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ee148:
    // 0x3ee148: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ee14c:
    if (ctx->pc == 0x3EE14Cu) {
        ctx->pc = 0x3EE14Cu;
            // 0x3ee14c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EE150u;
        goto label_3ee150;
    }
    ctx->pc = 0x3EE148u;
    {
        const bool branch_taken_0x3ee148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee148) {
            ctx->pc = 0x3EE14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE148u;
            // 0x3ee14c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EE160u;
            goto label_3ee160;
        }
    }
    ctx->pc = 0x3EE150u;
label_3ee150:
    // 0x3ee150: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee154:
    // 0x3ee154: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ee154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3ee158:
    // 0x3ee158: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ee15c:
    if (ctx->pc == 0x3EE15Cu) {
        ctx->pc = 0x3EE15Cu;
            // 0x3ee15c: 0x62900  sll         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x3EE160u;
        goto label_3ee160;
    }
    ctx->pc = 0x3EE158u;
    {
        const bool branch_taken_0x3ee158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE158u;
            // 0x3ee15c: 0x62900  sll         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee158) {
            ctx->pc = 0x3EE178u;
            goto label_3ee178;
        }
    }
    ctx->pc = 0x3EE160u;
label_3ee160:
    // 0x3ee160: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3ee160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_3ee164:
    // 0x3ee164: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee168:
    // 0x3ee168: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ee168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3ee16c:
    // 0x3ee16c: 0x0  nop
    ctx->pc = 0x3ee16cu;
    // NOP
label_3ee170:
    // 0x3ee170: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3ee170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3ee174:
    // 0x3ee174: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x3ee174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3ee178:
    // 0x3ee178: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x3ee178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ee17c:
    // 0x3ee17c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee180:
    // 0x3ee180: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_3ee184:
    if (ctx->pc == 0x3EE184u) {
        ctx->pc = 0x3EE184u;
            // 0x3ee184: 0xa445f9f2  sh          $a1, -0x60E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965746), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x3EE188u;
        goto label_3ee188;
    }
    ctx->pc = 0x3EE180u;
    {
        const bool branch_taken_0x3ee180 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3EE184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE180u;
            // 0x3ee184: 0xa445f9f2  sh          $a1, -0x60E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965746), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee180) {
            ctx->pc = 0x3EE194u;
            goto label_3ee194;
        }
    }
    ctx->pc = 0x3EE188u;
label_3ee188:
    // 0x3ee188: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ee188u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee18c:
    // 0x3ee18c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ee190:
    if (ctx->pc == 0x3EE190u) {
        ctx->pc = 0x3EE190u;
            // 0x3ee190: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EE194u;
        goto label_3ee194;
    }
    ctx->pc = 0x3EE18Cu;
    {
        const bool branch_taken_0x3ee18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE18Cu;
            // 0x3ee190: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee18c) {
            ctx->pc = 0x3EE1B0u;
            goto label_3ee1b0;
        }
    }
    ctx->pc = 0x3EE194u;
label_3ee194:
    // 0x3ee194: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x3ee194u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_3ee198:
    // 0x3ee198: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3ee198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3ee19c:
    // 0x3ee19c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3ee19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3ee1a0:
    // 0x3ee1a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ee1a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee1a4:
    // 0x3ee1a4: 0x0  nop
    ctx->pc = 0x3ee1a4u;
    // NOP
label_3ee1a8:
    // 0x3ee1a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ee1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ee1ac:
    // 0x3ee1ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ee1acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ee1b0:
    // 0x3ee1b0: 0xc62102e0  lwc1        $f1, 0x2E0($s1)
    ctx->pc = 0x3ee1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ee1b4:
    // 0x3ee1b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3ee1b8:
    // 0x3ee1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee1bc:
    // 0x3ee1bc: 0x0  nop
    ctx->pc = 0x3ee1bcu;
    // NOP
label_3ee1c0:
    // 0x3ee1c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ee1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ee1c4:
    // 0x3ee1c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ee1c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ee1c8:
    // 0x3ee1c8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ee1cc:
    if (ctx->pc == 0x3EE1CCu) {
        ctx->pc = 0x3EE1CCu;
            // 0x3ee1cc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EE1D0u;
        goto label_3ee1d0;
    }
    ctx->pc = 0x3EE1C8u;
    {
        const bool branch_taken_0x3ee1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee1c8) {
            ctx->pc = 0x3EE1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE1C8u;
            // 0x3ee1cc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EE1E0u;
            goto label_3ee1e0;
        }
    }
    ctx->pc = 0x3EE1D0u;
label_3ee1d0:
    // 0x3ee1d0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee1d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee1d4:
    // 0x3ee1d4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ee1d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ee1d8:
    // 0x3ee1d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ee1dc:
    if (ctx->pc == 0x3EE1DCu) {
        ctx->pc = 0x3EE1DCu;
            // 0x3ee1dc: 0x53900  sll         $a3, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3EE1E0u;
        goto label_3ee1e0;
    }
    ctx->pc = 0x3EE1D8u;
    {
        const bool branch_taken_0x3ee1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE1D8u;
            // 0x3ee1dc: 0x53900  sll         $a3, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee1d8) {
            ctx->pc = 0x3EE1F8u;
            goto label_3ee1f8;
        }
    }
    ctx->pc = 0x3EE1E0u;
label_3ee1e0:
    // 0x3ee1e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3ee1e4:
    // 0x3ee1e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee1e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee1e8:
    // 0x3ee1e8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ee1e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ee1ec:
    // 0x3ee1ec: 0x0  nop
    ctx->pc = 0x3ee1ecu;
    // NOP
label_3ee1f0:
    // 0x3ee1f0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3ee1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3ee1f4:
    // 0x3ee1f4: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x3ee1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3ee1f8:
    // 0x3ee1f8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee1fc:
    // 0x3ee1fc: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ee1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3ee200:
    // 0x3ee200: 0x944af9ee  lhu         $t2, -0x612($v0)
    ctx->pc = 0x3ee200u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965742)));
label_3ee204:
    // 0x3ee204: 0xa4a7f9f4  sh          $a3, -0x60C($a1)
    ctx->pc = 0x3ee204u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294965748), (uint16_t)GPR_U32(ctx, 7));
label_3ee208:
    // 0x3ee208: 0x2923021  addu        $a2, $s4, $s2
    ctx->pc = 0x3ee208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_3ee20c:
    // 0x3ee20c: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3ee20cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3ee210:
    // 0x3ee210: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ee210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3ee214:
    // 0x3ee214: 0xa4eaf9f8  sh          $t2, -0x608($a3)
    ctx->pc = 0x3ee214u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294965752), (uint16_t)GPR_U32(ctx, 10));
label_3ee218:
    // 0x3ee218: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee21c:
    // 0x3ee21c: 0x94a5f9f2  lhu         $a1, -0x60E($a1)
    ctx->pc = 0x3ee21cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294965746)));
label_3ee220:
    // 0x3ee220: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x3ee220u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3ee224:
    // 0x3ee224: 0x8e2702dc  lw          $a3, 0x2DC($s1)
    ctx->pc = 0x3ee224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_3ee228:
    // 0x3ee228: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x3ee228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3ee22c:
    // 0x3ee22c: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3ee22cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_3ee230:
    // 0x3ee230: 0xa445f9fc  sh          $a1, -0x604($v0)
    ctx->pc = 0x3ee230u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965756), (uint16_t)GPR_U32(ctx, 5));
label_3ee234:
    // 0x3ee234: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x3ee234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_3ee238:
    // 0x3ee238: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
label_3ee23c:
    if (ctx->pc == 0x3EE23Cu) {
        ctx->pc = 0x3EE23Cu;
            // 0x3ee23c: 0xa4c2f9fa  sh          $v0, -0x606($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4294965754), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EE240u;
        goto label_3ee240;
    }
    ctx->pc = 0x3EE238u;
    {
        const bool branch_taken_0x3ee238 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3EE23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE238u;
            // 0x3ee23c: 0xa4c2f9fa  sh          $v0, -0x606($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4294965754), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee238) {
            ctx->pc = 0x3EE24Cu;
            goto label_3ee24c;
        }
    }
    ctx->pc = 0x3EE240u;
label_3ee240:
    // 0x3ee240: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ee240u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee244:
    // 0x3ee244: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ee248:
    if (ctx->pc == 0x3EE248u) {
        ctx->pc = 0x3EE248u;
            // 0x3ee248: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EE24Cu;
        goto label_3ee24c;
    }
    ctx->pc = 0x3EE244u;
    {
        const bool branch_taken_0x3ee244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE244u;
            // 0x3ee248: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee244) {
            ctx->pc = 0x3EE268u;
            goto label_3ee268;
        }
    }
    ctx->pc = 0x3EE24Cu;
label_3ee24c:
    // 0x3ee24c: 0x82842  srl         $a1, $t0, 1
    ctx->pc = 0x3ee24cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_3ee250:
    // 0x3ee250: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x3ee250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_3ee254:
    // 0x3ee254: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3ee254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3ee258:
    // 0x3ee258: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ee258u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee25c:
    // 0x3ee25c: 0x0  nop
    ctx->pc = 0x3ee25cu;
    // NOP
label_3ee260:
    // 0x3ee260: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ee260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ee264:
    // 0x3ee264: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ee264u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ee268:
    // 0x3ee268: 0xc62102e0  lwc1        $f1, 0x2E0($s1)
    ctx->pc = 0x3ee268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ee26c:
    // 0x3ee26c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ee26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3ee270:
    // 0x3ee270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee274:
    // 0x3ee274: 0x0  nop
    ctx->pc = 0x3ee274u;
    // NOP
label_3ee278:
    // 0x3ee278: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ee278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ee27c:
    // 0x3ee27c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ee27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ee280:
    // 0x3ee280: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ee284:
    if (ctx->pc == 0x3EE284u) {
        ctx->pc = 0x3EE284u;
            // 0x3ee284: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EE288u;
        goto label_3ee288;
    }
    ctx->pc = 0x3EE280u;
    {
        const bool branch_taken_0x3ee280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee280) {
            ctx->pc = 0x3EE284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE280u;
            // 0x3ee284: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EE298u;
            goto label_3ee298;
        }
    }
    ctx->pc = 0x3EE288u;
label_3ee288:
    // 0x3ee288: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee28c:
    // 0x3ee28c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ee28cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ee290:
    // 0x3ee290: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ee294:
    if (ctx->pc == 0x3EE294u) {
        ctx->pc = 0x3EE294u;
            // 0x3ee294: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->pc = 0x3EE298u;
        goto label_3ee298;
    }
    ctx->pc = 0x3EE290u;
    {
        const bool branch_taken_0x3ee290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE290u;
            // 0x3ee294: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee290) {
            ctx->pc = 0x3EE2B0u;
            goto label_3ee2b0;
        }
    }
    ctx->pc = 0x3EE298u;
label_3ee298:
    // 0x3ee298: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3ee29c:
    // 0x3ee29c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee29cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee2a0:
    // 0x3ee2a0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ee2a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ee2a4:
    // 0x3ee2a4: 0x0  nop
    ctx->pc = 0x3ee2a4u;
    // NOP
label_3ee2a8:
    // 0x3ee2a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3ee2a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3ee2ac:
    // 0x3ee2ac: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x3ee2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_3ee2b0:
    // 0x3ee2b0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3ee2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3ee2b4:
    // 0x3ee2b4: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x3ee2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3ee2b8:
    // 0x3ee2b8: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x3ee2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ee2bc:
    // 0x3ee2bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee2c0:
    // 0x3ee2c0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ee2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3ee2c4:
    // 0x3ee2c4: 0x9449f9e4  lhu         $t1, -0x61C($v0)
    ctx->pc = 0x3ee2c4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965732)));
label_3ee2c8:
    // 0x3ee2c8: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3ee2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_3ee2cc:
    // 0x3ee2cc: 0xa485f9fe  sh          $a1, -0x602($a0)
    ctx->pc = 0x3ee2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965758), (uint16_t)GPR_U32(ctx, 5));
label_3ee2d0:
    // 0x3ee2d0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ee2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3ee2d4:
    // 0x3ee2d4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ee2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3ee2d8:
    // 0x3ee2d8: 0xa4c9fa02  sh          $t1, -0x5FE($a2)
    ctx->pc = 0x3ee2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294965762), (uint16_t)GPR_U32(ctx, 9));
label_3ee2dc:
    // 0x3ee2dc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee2e0:
    // 0x3ee2e0: 0x9484f9e8  lhu         $a0, -0x618($a0)
    ctx->pc = 0x3ee2e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294965736)));
label_3ee2e4:
    // 0x3ee2e4: 0x8e2602dc  lw          $a2, 0x2DC($s1)
    ctx->pc = 0x3ee2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_3ee2e8:
    // 0x3ee2e8: 0xa444fa06  sh          $a0, -0x5FA($v0)
    ctx->pc = 0x3ee2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965766), (uint16_t)GPR_U32(ctx, 4));
label_3ee2ec:
    // 0x3ee2ec: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x3ee2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3ee2f0:
    // 0x3ee2f0: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_3ee2f4:
    if (ctx->pc == 0x3EE2F4u) {
        ctx->pc = 0x3EE2F4u;
            // 0x3ee2f4: 0xa4a2fa04  sh          $v0, -0x5FC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294965764), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EE2F8u;
        goto label_3ee2f8;
    }
    ctx->pc = 0x3EE2F0u;
    {
        const bool branch_taken_0x3ee2f0 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x3EE2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE2F0u;
            // 0x3ee2f4: 0xa4a2fa04  sh          $v0, -0x5FC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294965764), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee2f0) {
            ctx->pc = 0x3EE304u;
            goto label_3ee304;
        }
    }
    ctx->pc = 0x3EE2F8u;
label_3ee2f8:
    // 0x3ee2f8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3ee2f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee2fc:
    // 0x3ee2fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ee300:
    if (ctx->pc == 0x3EE300u) {
        ctx->pc = 0x3EE300u;
            // 0x3ee300: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EE304u;
        goto label_3ee304;
    }
    ctx->pc = 0x3EE2FCu;
    {
        const bool branch_taken_0x3ee2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE2FCu;
            // 0x3ee300: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee2fc) {
            ctx->pc = 0x3EE320u;
            goto label_3ee320;
        }
    }
    ctx->pc = 0x3EE304u;
label_3ee304:
    // 0x3ee304: 0x72042  srl         $a0, $a3, 1
    ctx->pc = 0x3ee304u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_3ee308:
    // 0x3ee308: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x3ee308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_3ee30c:
    // 0x3ee30c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ee30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3ee310:
    // 0x3ee310: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ee310u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee314:
    // 0x3ee314: 0x0  nop
    ctx->pc = 0x3ee314u;
    // NOP
label_3ee318:
    // 0x3ee318: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ee318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ee31c:
    // 0x3ee31c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ee31cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ee320:
    // 0x3ee320: 0xc62102e0  lwc1        $f1, 0x2E0($s1)
    ctx->pc = 0x3ee320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ee324:
    // 0x3ee324: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ee324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3ee328:
    // 0x3ee328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee32c:
    // 0x3ee32c: 0x0  nop
    ctx->pc = 0x3ee32cu;
    // NOP
label_3ee330:
    // 0x3ee330: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ee330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ee334:
    // 0x3ee334: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ee334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ee338:
    // 0x3ee338: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ee33c:
    if (ctx->pc == 0x3EE33Cu) {
        ctx->pc = 0x3EE33Cu;
            // 0x3ee33c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EE340u;
        goto label_3ee340;
    }
    ctx->pc = 0x3EE338u;
    {
        const bool branch_taken_0x3ee338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee338) {
            ctx->pc = 0x3EE33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE338u;
            // 0x3ee33c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EE350u;
            goto label_3ee350;
        }
    }
    ctx->pc = 0x3EE340u;
label_3ee340:
    // 0x3ee340: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee340u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee344:
    // 0x3ee344: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3ee344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ee348:
    // 0x3ee348: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ee34c:
    if (ctx->pc == 0x3EE34Cu) {
        ctx->pc = 0x3EE34Cu;
            // 0x3ee34c: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->pc = 0x3EE350u;
        goto label_3ee350;
    }
    ctx->pc = 0x3EE348u;
    {
        const bool branch_taken_0x3ee348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE348u;
            // 0x3ee34c: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee348) {
            ctx->pc = 0x3EE368u;
            goto label_3ee368;
        }
    }
    ctx->pc = 0x3EE350u;
label_3ee350:
    // 0x3ee350: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3ee354:
    // 0x3ee354: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee358:
    // 0x3ee358: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3ee358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ee35c:
    // 0x3ee35c: 0x0  nop
    ctx->pc = 0x3ee35cu;
    // NOP
label_3ee360:
    // 0x3ee360: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ee360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3ee364:
    // 0x3ee364: 0x2b31023  subu        $v0, $s5, $s3
    ctx->pc = 0x3ee364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_3ee368:
    // 0x3ee368: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3ee368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3ee36c:
    // 0x3ee36c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3ee36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ee370:
    // 0x3ee370: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ee370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ee374:
    // 0x3ee374: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ee374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ee378:
    // 0x3ee378: 0x24466bf8  addiu       $a2, $v0, 0x6BF8
    ctx->pc = 0x3ee378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
label_3ee37c:
    // 0x3ee37c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee380:
    // 0x3ee380: 0xa444fa08  sh          $a0, -0x5F8($v0)
    ctx->pc = 0x3ee380u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965768), (uint16_t)GPR_U32(ctx, 4));
label_3ee384:
    // 0x3ee384: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee388:
    // 0x3ee388: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ee388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3ee38c:
    // 0x3ee38c: 0x9448f9da  lhu         $t0, -0x626($v0)
    ctx->pc = 0x3ee38cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965722)));
label_3ee390:
    // 0x3ee390: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee394:
    // 0x3ee394: 0xa468fa0c  sh          $t0, -0x5F4($v1)
    ctx->pc = 0x3ee394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965772), (uint16_t)GPR_U32(ctx, 8));
label_3ee398:
    // 0x3ee398: 0x9447fa04  lhu         $a3, -0x5FC($v0)
    ctx->pc = 0x3ee398u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965764)));
label_3ee39c:
    // 0x3ee39c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ee39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ee3a0:
    // 0x3ee3a0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee3a4:
    // 0x3ee3a4: 0xa487fa0e  sh          $a3, -0x5F2($a0)
    ctx->pc = 0x3ee3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965774), (uint16_t)GPR_U32(ctx, 7));
label_3ee3a8:
    // 0x3ee3a8: 0x9448f9de  lhu         $t0, -0x622($v0)
    ctx->pc = 0x3ee3a8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965726)));
label_3ee3ac:
    // 0x3ee3ac: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ee3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3ee3b0:
    // 0x3ee3b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee3b4:
    // 0x3ee3b4: 0xa468fa10  sh          $t0, -0x5F0($v1)
    ctx->pc = 0x3ee3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965776), (uint16_t)GPR_U32(ctx, 8));
label_3ee3b8:
    // 0x3ee3b8: 0x9447fa08  lhu         $a3, -0x5F8($v0)
    ctx->pc = 0x3ee3b8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965768)));
label_3ee3bc:
    // 0x3ee3bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ee3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ee3c0:
    // 0x3ee3c0: 0x9463f9fa  lhu         $v1, -0x606($v1)
    ctx->pc = 0x3ee3c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294965754)));
label_3ee3c4:
    // 0x3ee3c4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee3c8:
    // 0x3ee3c8: 0xa487fa12  sh          $a3, -0x5EE($a0)
    ctx->pc = 0x3ee3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965778), (uint16_t)GPR_U32(ctx, 7));
label_3ee3cc:
    // 0x3ee3cc: 0xa446fa16  sh          $a2, -0x5EA($v0)
    ctx->pc = 0x3ee3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965782), (uint16_t)GPR_U32(ctx, 6));
label_3ee3d0:
    // 0x3ee3d0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee3d4:
    // 0x3ee3d4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_3ee3d8:
    if (ctx->pc == 0x3EE3D8u) {
        ctx->pc = 0x3EE3D8u;
            // 0x3ee3d8: 0xa443fa18  sh          $v1, -0x5E8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965784), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3EE3DCu;
        goto label_3ee3dc;
    }
    ctx->pc = 0x3EE3D4u;
    {
        const bool branch_taken_0x3ee3d4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3EE3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE3D4u;
            // 0x3ee3d8: 0xa443fa18  sh          $v1, -0x5E8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965784), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee3d4) {
            ctx->pc = 0x3EE3E8u;
            goto label_3ee3e8;
        }
    }
    ctx->pc = 0x3EE3DCu;
label_3ee3dc:
    // 0x3ee3dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ee3dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee3e0:
    // 0x3ee3e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ee3e4:
    if (ctx->pc == 0x3EE3E4u) {
        ctx->pc = 0x3EE3E4u;
            // 0x3ee3e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EE3E8u;
        goto label_3ee3e8;
    }
    ctx->pc = 0x3EE3E0u;
    {
        const bool branch_taken_0x3ee3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE3E0u;
            // 0x3ee3e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee3e0) {
            ctx->pc = 0x3EE404u;
            goto label_3ee404;
        }
    }
    ctx->pc = 0x3EE3E8u;
label_3ee3e8:
    // 0x3ee3e8: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x3ee3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_3ee3ec:
    // 0x3ee3ec: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3ee3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3ee3f0:
    // 0x3ee3f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ee3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ee3f4:
    // 0x3ee3f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ee3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee3f8:
    // 0x3ee3f8: 0x0  nop
    ctx->pc = 0x3ee3f8u;
    // NOP
label_3ee3fc:
    // 0x3ee3fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ee3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ee400:
    // 0x3ee400: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ee400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ee404:
    // 0x3ee404: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3ee404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3ee408:
    // 0x3ee408: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ee408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3ee40c:
    // 0x3ee40c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ee40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee410:
    // 0x3ee410: 0x0  nop
    ctx->pc = 0x3ee410u;
    // NOP
label_3ee414:
    // 0x3ee414: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3ee414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ee418:
    // 0x3ee418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee41c:
    // 0x3ee41c: 0x0  nop
    ctx->pc = 0x3ee41cu;
    // NOP
label_3ee420:
    // 0x3ee420: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ee420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ee424:
    // 0x3ee424: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ee428:
    if (ctx->pc == 0x3EE428u) {
        ctx->pc = 0x3EE428u;
            // 0x3ee428: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3EE42Cu;
        goto label_3ee42c;
    }
    ctx->pc = 0x3EE424u;
    {
        const bool branch_taken_0x3ee424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee424) {
            ctx->pc = 0x3EE428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE424u;
            // 0x3ee428: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EE43Cu;
            goto label_3ee43c;
        }
    }
    ctx->pc = 0x3EE42Cu;
label_3ee42c:
    // 0x3ee42c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee42cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee430:
    // 0x3ee430: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ee430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ee434:
    // 0x3ee434: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ee438:
    if (ctx->pc == 0x3EE438u) {
        ctx->pc = 0x3EE438u;
            // 0x3ee438: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x3EE43Cu;
        goto label_3ee43c;
    }
    ctx->pc = 0x3EE434u;
    {
        const bool branch_taken_0x3ee434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE434u;
            // 0x3ee438: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee434) {
            ctx->pc = 0x3EE454u;
            goto label_3ee454;
        }
    }
    ctx->pc = 0x3EE43Cu;
label_3ee43c:
    // 0x3ee43c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3ee440:
    // 0x3ee440: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ee444:
    // 0x3ee444: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ee444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ee448:
    // 0x3ee448: 0x0  nop
    ctx->pc = 0x3ee448u;
    // NOP
label_3ee44c:
    // 0x3ee44c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ee44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ee450:
    // 0x3ee450: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ee450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3ee454:
    // 0x3ee454: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee458:
    // 0x3ee458: 0xa443fa1a  sh          $v1, -0x5E6($v0)
    ctx->pc = 0x3ee458u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965786), (uint16_t)GPR_U32(ctx, 3));
label_3ee45c:
    // 0x3ee45c: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x3ee45cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
label_3ee460:
    // 0x3ee460: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee464:
    // 0x3ee464: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ee464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3ee468:
    // 0x3ee468: 0x9445f9fe  lhu         $a1, -0x602($v0)
    ctx->pc = 0x3ee468u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965758)));
label_3ee46c:
    // 0x3ee46c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ee46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ee470:
    // 0x3ee470: 0x26b5f9d0  addiu       $s5, $s5, -0x630
    ctx->pc = 0x3ee470u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965712));
label_3ee474:
    // 0x3ee474: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3ee474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee478:
    // 0x3ee478: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee47c:
    // 0x3ee47c: 0xa485fa1c  sh          $a1, -0x5E4($a0)
    ctx->pc = 0x3ee47cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965788), (uint16_t)GPR_U32(ctx, 5));
label_3ee480:
    // 0x3ee480: 0x9446fa16  lhu         $a2, -0x5EA($v0)
    ctx->pc = 0x3ee480u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965782)));
label_3ee484:
    // 0x3ee484: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ee484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3ee488:
    // 0x3ee488: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee48c:
    // 0x3ee48c: 0xa466fa20  sh          $a2, -0x5E0($v1)
    ctx->pc = 0x3ee48cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965792), (uint16_t)GPR_U32(ctx, 6));
label_3ee490:
    // 0x3ee490: 0x9445f9f0  lhu         $a1, -0x610($v0)
    ctx->pc = 0x3ee490u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965744)));
label_3ee494:
    // 0x3ee494: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ee494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ee498:
    // 0x3ee498: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee49c:
    // 0x3ee49c: 0xa485fa22  sh          $a1, -0x5DE($a0)
    ctx->pc = 0x3ee49cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965794), (uint16_t)GPR_U32(ctx, 5));
label_3ee4a0:
    // 0x3ee4a0: 0x9446fa1a  lhu         $a2, -0x5E6($v0)
    ctx->pc = 0x3ee4a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965786)));
label_3ee4a4:
    // 0x3ee4a4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ee4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3ee4a8:
    // 0x3ee4a8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee4ac:
    // 0x3ee4ac: 0xa466fa24  sh          $a2, -0x5DC($v1)
    ctx->pc = 0x3ee4acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965796), (uint16_t)GPR_U32(ctx, 6));
label_3ee4b0:
    // 0x3ee4b0: 0x9445f9f4  lhu         $a1, -0x60C($v0)
    ctx->pc = 0x3ee4b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965748)));
label_3ee4b4:
    // 0x3ee4b4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ee4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ee4b8:
    // 0x3ee4b8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee4bc:
    // 0x3ee4bc: 0xa485fa26  sh          $a1, -0x5DA($a0)
    ctx->pc = 0x3ee4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965798), (uint16_t)GPR_U32(ctx, 5));
label_3ee4c0:
    // 0x3ee4c0: 0x9446f9da  lhu         $a2, -0x626($v0)
    ctx->pc = 0x3ee4c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965722)));
label_3ee4c4:
    // 0x3ee4c4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ee4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3ee4c8:
    // 0x3ee4c8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ee4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3ee4cc:
    // 0x3ee4cc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee4d0:
    // 0x3ee4d0: 0xa466fa2a  sh          $a2, -0x5D6($v1)
    ctx->pc = 0x3ee4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965802), (uint16_t)GPR_U32(ctx, 6));
label_3ee4d4:
    // 0x3ee4d4: 0x9447f9dc  lhu         $a3, -0x624($v0)
    ctx->pc = 0x3ee4d4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965724)));
label_3ee4d8:
    // 0x3ee4d8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ee4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ee4dc:
    // 0x3ee4dc: 0x9463f9e0  lhu         $v1, -0x620($v1)
    ctx->pc = 0x3ee4dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294965728)));
label_3ee4e0:
    // 0x3ee4e0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee4e4:
    // 0x3ee4e4: 0xa4a7fa2c  sh          $a3, -0x5D4($a1)
    ctx->pc = 0x3ee4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294965804), (uint16_t)GPR_U32(ctx, 7));
label_3ee4e8:
    // 0x3ee4e8: 0x9446f9de  lhu         $a2, -0x622($v0)
    ctx->pc = 0x3ee4e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965726)));
label_3ee4ec:
    // 0x3ee4ec: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x3ee4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3ee4f0:
    // 0x3ee4f0: 0xa486fa2e  sh          $a2, -0x5D2($a0)
    ctx->pc = 0x3ee4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965806), (uint16_t)GPR_U32(ctx, 6));
label_3ee4f4:
    // 0x3ee4f4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ee4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ee4f8:
    // 0x3ee4f8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3ee4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_3ee4fc:
    // 0x3ee4fc: 0xa443fa30  sh          $v1, -0x5D0($v0)
    ctx->pc = 0x3ee4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965808), (uint16_t)GPR_U32(ctx, 3));
label_3ee500:
    // 0x3ee500: 0xc05750c  jal         func_15D430
label_3ee504:
    if (ctx->pc == 0x3EE504u) {
        ctx->pc = 0x3EE504u;
            // 0x3ee504: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x3EE508u;
        goto label_3ee508;
    }
    ctx->pc = 0x3EE500u;
    SET_GPR_U32(ctx, 31, 0x3EE508u);
    ctx->pc = 0x3EE504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE500u;
            // 0x3ee504: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE508u; }
        if (ctx->pc != 0x3EE508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE508u; }
        if (ctx->pc != 0x3EE508u) { return; }
    }
    ctx->pc = 0x3EE508u;
label_3ee508:
    // 0x3ee508: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ee508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ee50c:
    // 0x3ee50c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ee50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ee510:
    // 0x3ee510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ee510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ee514:
    // 0x3ee514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ee514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee518:
    // 0x3ee518: 0x2407035d  addiu       $a3, $zero, 0x35D
    ctx->pc = 0x3ee518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
label_3ee51c:
    // 0x3ee51c: 0xc057540  jal         func_15D500
label_3ee520:
    if (ctx->pc == 0x3EE520u) {
        ctx->pc = 0x3EE520u;
            // 0x3ee520: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x3EE524u;
        goto label_3ee524;
    }
    ctx->pc = 0x3EE51Cu;
    SET_GPR_U32(ctx, 31, 0x3EE524u);
    ctx->pc = 0x3EE520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE51Cu;
            // 0x3ee520: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE524u; }
        if (ctx->pc != 0x3EE524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE524u; }
        if (ctx->pc != 0x3EE524u) { return; }
    }
    ctx->pc = 0x3EE524u;
label_3ee524:
    // 0x3ee524: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x3ee524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ee528:
    // 0x3ee528: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ee528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ee52c:
    // 0x3ee52c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3ee52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_3ee530:
    // 0x3ee530: 0x92a40008  lbu         $a0, 0x8($s5)
    ctx->pc = 0x3ee530u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_3ee534:
    // 0x3ee534: 0x34427f7f  ori         $v0, $v0, 0x7F7F
    ctx->pc = 0x3ee534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32639);
label_3ee538:
    // 0x3ee538: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x3ee538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_3ee53c:
    // 0x3ee53c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ee53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ee540:
    // 0x3ee540: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ee540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ee544:
    // 0x3ee544: 0x41e38  dsll        $v1, $a0, 24
    ctx->pc = 0x3ee544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 24);
label_3ee548:
    // 0x3ee548: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ee548u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ee54c:
    // 0x3ee54c: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x3ee54cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ee550:
    // 0x3ee550: 0xc057540  jal         func_15D500
label_3ee554:
    if (ctx->pc == 0x3EE554u) {
        ctx->pc = 0x3EE554u;
            // 0x3ee554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EE558u;
        goto label_3ee558;
    }
    ctx->pc = 0x3EE550u;
    SET_GPR_U32(ctx, 31, 0x3EE558u);
    ctx->pc = 0x3EE554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE550u;
            // 0x3ee554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE558u; }
        if (ctx->pc != 0x3EE558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE558u; }
        if (ctx->pc != 0x3EE558u) { return; }
    }
    ctx->pc = 0x3EE558u;
label_3ee558:
    // 0x3ee558: 0x96a20006  lhu         $v0, 0x6($s5)
    ctx->pc = 0x3ee558u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_3ee55c:
    // 0x3ee55c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ee55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ee560:
    // 0x3ee560: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x3ee560u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_3ee564:
    // 0x3ee564: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ee564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ee568:
    // 0x3ee568: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3ee568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ee56c:
    // 0x3ee56c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ee56cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ee570:
    // 0x3ee570: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3ee570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3ee574:
    // 0x3ee574: 0xc057540  jal         func_15D500
label_3ee578:
    if (ctx->pc == 0x3EE578u) {
        ctx->pc = 0x3EE578u;
            // 0x3ee578: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x3EE57Cu;
        goto label_3ee57c;
    }
    ctx->pc = 0x3EE574u;
    SET_GPR_U32(ctx, 31, 0x3EE57Cu);
    ctx->pc = 0x3EE578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE574u;
            // 0x3ee578: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE57Cu; }
        if (ctx->pc != 0x3EE57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE57Cu; }
        if (ctx->pc != 0x3EE57Cu) { return; }
    }
    ctx->pc = 0x3EE57Cu;
label_3ee57c:
    // 0x3ee57c: 0x96a70002  lhu         $a3, 0x2($s5)
    ctx->pc = 0x3ee57cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_3ee580:
    // 0x3ee580: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3ee580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_3ee584:
    // 0x3ee584: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x3ee584u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_3ee588:
    // 0x3ee588: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ee588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ee58c:
    // 0x3ee58c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ee58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ee590:
    // 0x3ee590: 0x92a60009  lbu         $a2, 0x9($s5)
    ctx->pc = 0x3ee590u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 9)));
label_3ee594:
    // 0x3ee594: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3ee594u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_3ee598:
    // 0x3ee598: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ee598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3ee59c:
    // 0x3ee59c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3ee59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_3ee5a0:
    // 0x3ee5a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ee5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ee5a4:
    // 0x3ee5a4: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x3ee5a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ee5a8:
    // 0x3ee5a8: 0xc057540  jal         func_15D500
label_3ee5ac:
    if (ctx->pc == 0x3EE5ACu) {
        ctx->pc = 0x3EE5ACu;
            // 0x3ee5ac: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x3EE5B0u;
        goto label_3ee5b0;
    }
    ctx->pc = 0x3EE5A8u;
    SET_GPR_U32(ctx, 31, 0x3EE5B0u);
    ctx->pc = 0x3EE5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE5A8u;
            // 0x3ee5ac: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE5B0u; }
        if (ctx->pc != 0x3EE5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE5B0u; }
        if (ctx->pc != 0x3EE5B0u) { return; }
    }
    ctx->pc = 0x3EE5B0u;
label_3ee5b0:
    // 0x3ee5b0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ee5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ee5b4:
    // 0x3ee5b4: 0x1640ffdc  bnez        $s2, . + 4 + (-0x24 << 2)
label_3ee5b8:
    if (ctx->pc == 0x3EE5B8u) {
        ctx->pc = 0x3EE5B8u;
            // 0x3ee5b8: 0x26b5000a  addiu       $s5, $s5, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 10));
        ctx->pc = 0x3EE5BCu;
        goto label_3ee5bc;
    }
    ctx->pc = 0x3EE5B4u;
    {
        const bool branch_taken_0x3ee5b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE5B4u;
            // 0x3ee5b8: 0x26b5000a  addiu       $s5, $s5, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee5b4) {
            ctx->pc = 0x3EE528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ee528;
        }
    }
    ctx->pc = 0x3EE5BCu;
label_3ee5bc:
    // 0x3ee5bc: 0xc057528  jal         func_15D4A0
label_3ee5c0:
    if (ctx->pc == 0x3EE5C0u) {
        ctx->pc = 0x3EE5C0u;
            // 0x3ee5c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EE5C4u;
        goto label_3ee5c4;
    }
    ctx->pc = 0x3EE5BCu;
    SET_GPR_U32(ctx, 31, 0x3EE5C4u);
    ctx->pc = 0x3EE5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE5BCu;
            // 0x3ee5c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE5C4u; }
        if (ctx->pc != 0x3EE5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE5C4u; }
        if (ctx->pc != 0x3EE5C4u) { return; }
    }
    ctx->pc = 0x3EE5C4u;
label_3ee5c4:
    // 0x3ee5c4: 0x0  nop
    ctx->pc = 0x3ee5c4u;
    // NOP
label_3ee5c8:
    // 0x3ee5c8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x3ee5c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_3ee5cc:
    // 0x3ee5cc: 0x16c0fd49  bnez        $s6, . + 4 + (-0x2B7 << 2)
label_3ee5d0:
    if (ctx->pc == 0x3EE5D0u) {
        ctx->pc = 0x3EE5D0u;
            // 0x3ee5d0: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x3EE5D4u;
        goto label_3ee5d4;
    }
    ctx->pc = 0x3EE5CCu;
    {
        const bool branch_taken_0x3ee5cc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE5CCu;
            // 0x3ee5d0: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee5cc) {
            ctx->pc = 0x3EDAF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3edaf4;
        }
    }
    ctx->pc = 0x3EE5D4u;
label_3ee5d4:
    // 0x3ee5d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3ee5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3ee5d8:
    // 0x3ee5d8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ee5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ee5dc:
    // 0x3ee5dc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3ee5dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ee5e0:
    // 0x3ee5e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ee5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ee5e4:
    // 0x3ee5e4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3ee5e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ee5e8:
    // 0x3ee5e8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3ee5e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ee5ec:
    // 0x3ee5ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ee5ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ee5f0:
    // 0x3ee5f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ee5f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ee5f4:
    // 0x3ee5f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ee5f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ee5f8:
    // 0x3ee5f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ee5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ee5fc:
    // 0x3ee5fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ee5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ee600:
    // 0x3ee600: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ee600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ee604:
    // 0x3ee604: 0x3e00008  jr          $ra
label_3ee608:
    if (ctx->pc == 0x3EE608u) {
        ctx->pc = 0x3EE608u;
            // 0x3ee608: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3EE60Cu;
        goto label_3ee60c;
    }
    ctx->pc = 0x3EE604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE604u;
            // 0x3ee608: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EE60Cu;
label_3ee60c:
    // 0x3ee60c: 0x0  nop
    ctx->pc = 0x3ee60cu;
    // NOP
label_3ee610:
    // 0x3ee610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ee614:
    // 0x3ee614: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ee614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ee618:
    // 0x3ee618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ee618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ee61c:
    // 0x3ee61c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ee61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ee620:
    // 0x3ee620: 0x90630c76  lbu         $v1, 0xC76($v1)
    ctx->pc = 0x3ee620u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3190)));
label_3ee624:
    // 0x3ee624: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_3ee628:
    if (ctx->pc == 0x3EE628u) {
        ctx->pc = 0x3EE628u;
            // 0x3ee628: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3EE62Cu;
        goto label_3ee62c;
    }
    ctx->pc = 0x3EE624u;
    {
        const bool branch_taken_0x3ee624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee624) {
            ctx->pc = 0x3EE628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE624u;
            // 0x3ee628: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EE640u;
            goto label_3ee640;
        }
    }
    ctx->pc = 0x3EE62Cu;
label_3ee62c:
    // 0x3ee62c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ee62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ee630:
    // 0x3ee630: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x3ee630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_3ee634:
    // 0x3ee634: 0x320f809  jalr        $t9
label_3ee638:
    if (ctx->pc == 0x3EE638u) {
        ctx->pc = 0x3EE63Cu;
        goto label_3ee63c;
    }
    ctx->pc = 0x3EE634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EE63Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EE63Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EE63Cu; }
            if (ctx->pc != 0x3EE63Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3EE63Cu;
label_3ee63c:
    // 0x3ee63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ee63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ee640:
    // 0x3ee640: 0x3e00008  jr          $ra
label_3ee644:
    if (ctx->pc == 0x3EE644u) {
        ctx->pc = 0x3EE644u;
            // 0x3ee644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3EE648u;
        goto label_3ee648;
    }
    ctx->pc = 0x3EE640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE640u;
            // 0x3ee644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EE648u;
label_3ee648:
    // 0x3ee648: 0x0  nop
    ctx->pc = 0x3ee648u;
    // NOP
label_3ee64c:
    // 0x3ee64c: 0x0  nop
    ctx->pc = 0x3ee64cu;
    // NOP
}
