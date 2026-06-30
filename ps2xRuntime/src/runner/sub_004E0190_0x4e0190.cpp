#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E0190
// Address: 0x4e0190 - 0x4e0600
void sub_004E0190_0x4e0190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0190_0x4e0190");
#endif

    switch (ctx->pc) {
        case 0x4e0190u: goto label_4e0190;
        case 0x4e0194u: goto label_4e0194;
        case 0x4e0198u: goto label_4e0198;
        case 0x4e019cu: goto label_4e019c;
        case 0x4e01a0u: goto label_4e01a0;
        case 0x4e01a4u: goto label_4e01a4;
        case 0x4e01a8u: goto label_4e01a8;
        case 0x4e01acu: goto label_4e01ac;
        case 0x4e01b0u: goto label_4e01b0;
        case 0x4e01b4u: goto label_4e01b4;
        case 0x4e01b8u: goto label_4e01b8;
        case 0x4e01bcu: goto label_4e01bc;
        case 0x4e01c0u: goto label_4e01c0;
        case 0x4e01c4u: goto label_4e01c4;
        case 0x4e01c8u: goto label_4e01c8;
        case 0x4e01ccu: goto label_4e01cc;
        case 0x4e01d0u: goto label_4e01d0;
        case 0x4e01d4u: goto label_4e01d4;
        case 0x4e01d8u: goto label_4e01d8;
        case 0x4e01dcu: goto label_4e01dc;
        case 0x4e01e0u: goto label_4e01e0;
        case 0x4e01e4u: goto label_4e01e4;
        case 0x4e01e8u: goto label_4e01e8;
        case 0x4e01ecu: goto label_4e01ec;
        case 0x4e01f0u: goto label_4e01f0;
        case 0x4e01f4u: goto label_4e01f4;
        case 0x4e01f8u: goto label_4e01f8;
        case 0x4e01fcu: goto label_4e01fc;
        case 0x4e0200u: goto label_4e0200;
        case 0x4e0204u: goto label_4e0204;
        case 0x4e0208u: goto label_4e0208;
        case 0x4e020cu: goto label_4e020c;
        case 0x4e0210u: goto label_4e0210;
        case 0x4e0214u: goto label_4e0214;
        case 0x4e0218u: goto label_4e0218;
        case 0x4e021cu: goto label_4e021c;
        case 0x4e0220u: goto label_4e0220;
        case 0x4e0224u: goto label_4e0224;
        case 0x4e0228u: goto label_4e0228;
        case 0x4e022cu: goto label_4e022c;
        case 0x4e0230u: goto label_4e0230;
        case 0x4e0234u: goto label_4e0234;
        case 0x4e0238u: goto label_4e0238;
        case 0x4e023cu: goto label_4e023c;
        case 0x4e0240u: goto label_4e0240;
        case 0x4e0244u: goto label_4e0244;
        case 0x4e0248u: goto label_4e0248;
        case 0x4e024cu: goto label_4e024c;
        case 0x4e0250u: goto label_4e0250;
        case 0x4e0254u: goto label_4e0254;
        case 0x4e0258u: goto label_4e0258;
        case 0x4e025cu: goto label_4e025c;
        case 0x4e0260u: goto label_4e0260;
        case 0x4e0264u: goto label_4e0264;
        case 0x4e0268u: goto label_4e0268;
        case 0x4e026cu: goto label_4e026c;
        case 0x4e0270u: goto label_4e0270;
        case 0x4e0274u: goto label_4e0274;
        case 0x4e0278u: goto label_4e0278;
        case 0x4e027cu: goto label_4e027c;
        case 0x4e0280u: goto label_4e0280;
        case 0x4e0284u: goto label_4e0284;
        case 0x4e0288u: goto label_4e0288;
        case 0x4e028cu: goto label_4e028c;
        case 0x4e0290u: goto label_4e0290;
        case 0x4e0294u: goto label_4e0294;
        case 0x4e0298u: goto label_4e0298;
        case 0x4e029cu: goto label_4e029c;
        case 0x4e02a0u: goto label_4e02a0;
        case 0x4e02a4u: goto label_4e02a4;
        case 0x4e02a8u: goto label_4e02a8;
        case 0x4e02acu: goto label_4e02ac;
        case 0x4e02b0u: goto label_4e02b0;
        case 0x4e02b4u: goto label_4e02b4;
        case 0x4e02b8u: goto label_4e02b8;
        case 0x4e02bcu: goto label_4e02bc;
        case 0x4e02c0u: goto label_4e02c0;
        case 0x4e02c4u: goto label_4e02c4;
        case 0x4e02c8u: goto label_4e02c8;
        case 0x4e02ccu: goto label_4e02cc;
        case 0x4e02d0u: goto label_4e02d0;
        case 0x4e02d4u: goto label_4e02d4;
        case 0x4e02d8u: goto label_4e02d8;
        case 0x4e02dcu: goto label_4e02dc;
        case 0x4e02e0u: goto label_4e02e0;
        case 0x4e02e4u: goto label_4e02e4;
        case 0x4e02e8u: goto label_4e02e8;
        case 0x4e02ecu: goto label_4e02ec;
        case 0x4e02f0u: goto label_4e02f0;
        case 0x4e02f4u: goto label_4e02f4;
        case 0x4e02f8u: goto label_4e02f8;
        case 0x4e02fcu: goto label_4e02fc;
        case 0x4e0300u: goto label_4e0300;
        case 0x4e0304u: goto label_4e0304;
        case 0x4e0308u: goto label_4e0308;
        case 0x4e030cu: goto label_4e030c;
        case 0x4e0310u: goto label_4e0310;
        case 0x4e0314u: goto label_4e0314;
        case 0x4e0318u: goto label_4e0318;
        case 0x4e031cu: goto label_4e031c;
        case 0x4e0320u: goto label_4e0320;
        case 0x4e0324u: goto label_4e0324;
        case 0x4e0328u: goto label_4e0328;
        case 0x4e032cu: goto label_4e032c;
        case 0x4e0330u: goto label_4e0330;
        case 0x4e0334u: goto label_4e0334;
        case 0x4e0338u: goto label_4e0338;
        case 0x4e033cu: goto label_4e033c;
        case 0x4e0340u: goto label_4e0340;
        case 0x4e0344u: goto label_4e0344;
        case 0x4e0348u: goto label_4e0348;
        case 0x4e034cu: goto label_4e034c;
        case 0x4e0350u: goto label_4e0350;
        case 0x4e0354u: goto label_4e0354;
        case 0x4e0358u: goto label_4e0358;
        case 0x4e035cu: goto label_4e035c;
        case 0x4e0360u: goto label_4e0360;
        case 0x4e0364u: goto label_4e0364;
        case 0x4e0368u: goto label_4e0368;
        case 0x4e036cu: goto label_4e036c;
        case 0x4e0370u: goto label_4e0370;
        case 0x4e0374u: goto label_4e0374;
        case 0x4e0378u: goto label_4e0378;
        case 0x4e037cu: goto label_4e037c;
        case 0x4e0380u: goto label_4e0380;
        case 0x4e0384u: goto label_4e0384;
        case 0x4e0388u: goto label_4e0388;
        case 0x4e038cu: goto label_4e038c;
        case 0x4e0390u: goto label_4e0390;
        case 0x4e0394u: goto label_4e0394;
        case 0x4e0398u: goto label_4e0398;
        case 0x4e039cu: goto label_4e039c;
        case 0x4e03a0u: goto label_4e03a0;
        case 0x4e03a4u: goto label_4e03a4;
        case 0x4e03a8u: goto label_4e03a8;
        case 0x4e03acu: goto label_4e03ac;
        case 0x4e03b0u: goto label_4e03b0;
        case 0x4e03b4u: goto label_4e03b4;
        case 0x4e03b8u: goto label_4e03b8;
        case 0x4e03bcu: goto label_4e03bc;
        case 0x4e03c0u: goto label_4e03c0;
        case 0x4e03c4u: goto label_4e03c4;
        case 0x4e03c8u: goto label_4e03c8;
        case 0x4e03ccu: goto label_4e03cc;
        case 0x4e03d0u: goto label_4e03d0;
        case 0x4e03d4u: goto label_4e03d4;
        case 0x4e03d8u: goto label_4e03d8;
        case 0x4e03dcu: goto label_4e03dc;
        case 0x4e03e0u: goto label_4e03e0;
        case 0x4e03e4u: goto label_4e03e4;
        case 0x4e03e8u: goto label_4e03e8;
        case 0x4e03ecu: goto label_4e03ec;
        case 0x4e03f0u: goto label_4e03f0;
        case 0x4e03f4u: goto label_4e03f4;
        case 0x4e03f8u: goto label_4e03f8;
        case 0x4e03fcu: goto label_4e03fc;
        case 0x4e0400u: goto label_4e0400;
        case 0x4e0404u: goto label_4e0404;
        case 0x4e0408u: goto label_4e0408;
        case 0x4e040cu: goto label_4e040c;
        case 0x4e0410u: goto label_4e0410;
        case 0x4e0414u: goto label_4e0414;
        case 0x4e0418u: goto label_4e0418;
        case 0x4e041cu: goto label_4e041c;
        case 0x4e0420u: goto label_4e0420;
        case 0x4e0424u: goto label_4e0424;
        case 0x4e0428u: goto label_4e0428;
        case 0x4e042cu: goto label_4e042c;
        case 0x4e0430u: goto label_4e0430;
        case 0x4e0434u: goto label_4e0434;
        case 0x4e0438u: goto label_4e0438;
        case 0x4e043cu: goto label_4e043c;
        case 0x4e0440u: goto label_4e0440;
        case 0x4e0444u: goto label_4e0444;
        case 0x4e0448u: goto label_4e0448;
        case 0x4e044cu: goto label_4e044c;
        case 0x4e0450u: goto label_4e0450;
        case 0x4e0454u: goto label_4e0454;
        case 0x4e0458u: goto label_4e0458;
        case 0x4e045cu: goto label_4e045c;
        case 0x4e0460u: goto label_4e0460;
        case 0x4e0464u: goto label_4e0464;
        case 0x4e0468u: goto label_4e0468;
        case 0x4e046cu: goto label_4e046c;
        case 0x4e0470u: goto label_4e0470;
        case 0x4e0474u: goto label_4e0474;
        case 0x4e0478u: goto label_4e0478;
        case 0x4e047cu: goto label_4e047c;
        case 0x4e0480u: goto label_4e0480;
        case 0x4e0484u: goto label_4e0484;
        case 0x4e0488u: goto label_4e0488;
        case 0x4e048cu: goto label_4e048c;
        case 0x4e0490u: goto label_4e0490;
        case 0x4e0494u: goto label_4e0494;
        case 0x4e0498u: goto label_4e0498;
        case 0x4e049cu: goto label_4e049c;
        case 0x4e04a0u: goto label_4e04a0;
        case 0x4e04a4u: goto label_4e04a4;
        case 0x4e04a8u: goto label_4e04a8;
        case 0x4e04acu: goto label_4e04ac;
        case 0x4e04b0u: goto label_4e04b0;
        case 0x4e04b4u: goto label_4e04b4;
        case 0x4e04b8u: goto label_4e04b8;
        case 0x4e04bcu: goto label_4e04bc;
        case 0x4e04c0u: goto label_4e04c0;
        case 0x4e04c4u: goto label_4e04c4;
        case 0x4e04c8u: goto label_4e04c8;
        case 0x4e04ccu: goto label_4e04cc;
        case 0x4e04d0u: goto label_4e04d0;
        case 0x4e04d4u: goto label_4e04d4;
        case 0x4e04d8u: goto label_4e04d8;
        case 0x4e04dcu: goto label_4e04dc;
        case 0x4e04e0u: goto label_4e04e0;
        case 0x4e04e4u: goto label_4e04e4;
        case 0x4e04e8u: goto label_4e04e8;
        case 0x4e04ecu: goto label_4e04ec;
        case 0x4e04f0u: goto label_4e04f0;
        case 0x4e04f4u: goto label_4e04f4;
        case 0x4e04f8u: goto label_4e04f8;
        case 0x4e04fcu: goto label_4e04fc;
        case 0x4e0500u: goto label_4e0500;
        case 0x4e0504u: goto label_4e0504;
        case 0x4e0508u: goto label_4e0508;
        case 0x4e050cu: goto label_4e050c;
        case 0x4e0510u: goto label_4e0510;
        case 0x4e0514u: goto label_4e0514;
        case 0x4e0518u: goto label_4e0518;
        case 0x4e051cu: goto label_4e051c;
        case 0x4e0520u: goto label_4e0520;
        case 0x4e0524u: goto label_4e0524;
        case 0x4e0528u: goto label_4e0528;
        case 0x4e052cu: goto label_4e052c;
        case 0x4e0530u: goto label_4e0530;
        case 0x4e0534u: goto label_4e0534;
        case 0x4e0538u: goto label_4e0538;
        case 0x4e053cu: goto label_4e053c;
        case 0x4e0540u: goto label_4e0540;
        case 0x4e0544u: goto label_4e0544;
        case 0x4e0548u: goto label_4e0548;
        case 0x4e054cu: goto label_4e054c;
        case 0x4e0550u: goto label_4e0550;
        case 0x4e0554u: goto label_4e0554;
        case 0x4e0558u: goto label_4e0558;
        case 0x4e055cu: goto label_4e055c;
        case 0x4e0560u: goto label_4e0560;
        case 0x4e0564u: goto label_4e0564;
        case 0x4e0568u: goto label_4e0568;
        case 0x4e056cu: goto label_4e056c;
        case 0x4e0570u: goto label_4e0570;
        case 0x4e0574u: goto label_4e0574;
        case 0x4e0578u: goto label_4e0578;
        case 0x4e057cu: goto label_4e057c;
        case 0x4e0580u: goto label_4e0580;
        case 0x4e0584u: goto label_4e0584;
        case 0x4e0588u: goto label_4e0588;
        case 0x4e058cu: goto label_4e058c;
        case 0x4e0590u: goto label_4e0590;
        case 0x4e0594u: goto label_4e0594;
        case 0x4e0598u: goto label_4e0598;
        case 0x4e059cu: goto label_4e059c;
        case 0x4e05a0u: goto label_4e05a0;
        case 0x4e05a4u: goto label_4e05a4;
        case 0x4e05a8u: goto label_4e05a8;
        case 0x4e05acu: goto label_4e05ac;
        case 0x4e05b0u: goto label_4e05b0;
        case 0x4e05b4u: goto label_4e05b4;
        case 0x4e05b8u: goto label_4e05b8;
        case 0x4e05bcu: goto label_4e05bc;
        case 0x4e05c0u: goto label_4e05c0;
        case 0x4e05c4u: goto label_4e05c4;
        case 0x4e05c8u: goto label_4e05c8;
        case 0x4e05ccu: goto label_4e05cc;
        case 0x4e05d0u: goto label_4e05d0;
        case 0x4e05d4u: goto label_4e05d4;
        case 0x4e05d8u: goto label_4e05d8;
        case 0x4e05dcu: goto label_4e05dc;
        case 0x4e05e0u: goto label_4e05e0;
        case 0x4e05e4u: goto label_4e05e4;
        case 0x4e05e8u: goto label_4e05e8;
        case 0x4e05ecu: goto label_4e05ec;
        case 0x4e05f0u: goto label_4e05f0;
        case 0x4e05f4u: goto label_4e05f4;
        case 0x4e05f8u: goto label_4e05f8;
        case 0x4e05fcu: goto label_4e05fc;
        default: break;
    }

    ctx->pc = 0x4e0190u;

label_4e0190:
    // 0x4e0190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e0190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e0194:
    // 0x4e0194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e0194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e0198:
    // 0x4e0198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e0198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e019c:
    // 0x4e019c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e01a0:
    // 0x4e01a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e01a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e01a4:
    // 0x4e01a4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4e01a8:
    if (ctx->pc == 0x4E01A8u) {
        ctx->pc = 0x4E01A8u;
            // 0x4e01a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E01ACu;
        goto label_4e01ac;
    }
    ctx->pc = 0x4E01A4u;
    {
        const bool branch_taken_0x4e01a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E01A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E01A4u;
            // 0x4e01a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e01a4) {
            ctx->pc = 0x4E02D8u;
            goto label_4e02d8;
        }
    }
    ctx->pc = 0x4E01ACu;
label_4e01ac:
    // 0x4e01ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e01acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e01b0:
    // 0x4e01b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e01b4:
    // 0x4e01b4: 0x246333b0  addiu       $v1, $v1, 0x33B0
    ctx->pc = 0x4e01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13232));
label_4e01b8:
    // 0x4e01b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e01b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4e01bc:
    // 0x4e01bc: 0x244233e8  addiu       $v0, $v0, 0x33E8
    ctx->pc = 0x4e01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13288));
label_4e01c0:
    // 0x4e01c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e01c4:
    // 0x4e01c4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4e01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4e01c8:
    // 0x4e01c8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4e01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4e01cc:
    // 0x4e01cc: 0xc0407c0  jal         func_101F00
label_4e01d0:
    if (ctx->pc == 0x4E01D0u) {
        ctx->pc = 0x4E01D0u;
            // 0x4e01d0: 0x24a502f0  addiu       $a1, $a1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
        ctx->pc = 0x4E01D4u;
        goto label_4e01d4;
    }
    ctx->pc = 0x4E01CCu;
    SET_GPR_U32(ctx, 31, 0x4E01D4u);
    ctx->pc = 0x4E01D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E01CCu;
            // 0x4e01d0: 0x24a502f0  addiu       $a1, $a1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E01D4u; }
        if (ctx->pc != 0x4E01D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E01D4u; }
        if (ctx->pc != 0x4E01D4u) { return; }
    }
    ctx->pc = 0x4E01D4u;
label_4e01d4:
    // 0x4e01d4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4e01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4e01d8:
    // 0x4e01d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4e01dc:
    if (ctx->pc == 0x4E01DCu) {
        ctx->pc = 0x4E01DCu;
            // 0x4e01dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4E01E0u;
        goto label_4e01e0;
    }
    ctx->pc = 0x4E01D8u;
    {
        const bool branch_taken_0x4e01d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e01d8) {
            ctx->pc = 0x4E01DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E01D8u;
            // 0x4e01dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E01ECu;
            goto label_4e01ec;
        }
    }
    ctx->pc = 0x4E01E0u;
label_4e01e0:
    // 0x4e01e0: 0xc07507c  jal         func_1D41F0
label_4e01e4:
    if (ctx->pc == 0x4E01E4u) {
        ctx->pc = 0x4E01E4u;
            // 0x4e01e4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4E01E8u;
        goto label_4e01e8;
    }
    ctx->pc = 0x4E01E0u;
    SET_GPR_U32(ctx, 31, 0x4E01E8u);
    ctx->pc = 0x4E01E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E01E0u;
            // 0x4e01e4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E01E8u; }
        if (ctx->pc != 0x4E01E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E01E8u; }
        if (ctx->pc != 0x4E01E8u) { return; }
    }
    ctx->pc = 0x4E01E8u;
label_4e01e8:
    // 0x4e01e8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4e01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4e01ec:
    // 0x4e01ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4e01f0:
    if (ctx->pc == 0x4E01F0u) {
        ctx->pc = 0x4E01F0u;
            // 0x4e01f0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4E01F4u;
        goto label_4e01f4;
    }
    ctx->pc = 0x4E01ECu;
    {
        const bool branch_taken_0x4e01ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e01ec) {
            ctx->pc = 0x4E01F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E01ECu;
            // 0x4e01f0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E021Cu;
            goto label_4e021c;
        }
    }
    ctx->pc = 0x4E01F4u;
label_4e01f4:
    // 0x4e01f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e01f8:
    if (ctx->pc == 0x4E01F8u) {
        ctx->pc = 0x4E01FCu;
        goto label_4e01fc;
    }
    ctx->pc = 0x4E01F4u;
    {
        const bool branch_taken_0x4e01f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e01f4) {
            ctx->pc = 0x4E0218u;
            goto label_4e0218;
        }
    }
    ctx->pc = 0x4E01FCu;
label_4e01fc:
    // 0x4e01fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e0200:
    if (ctx->pc == 0x4E0200u) {
        ctx->pc = 0x4E0204u;
        goto label_4e0204;
    }
    ctx->pc = 0x4E01FCu;
    {
        const bool branch_taken_0x4e01fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e01fc) {
            ctx->pc = 0x4E0218u;
            goto label_4e0218;
        }
    }
    ctx->pc = 0x4E0204u;
label_4e0204:
    // 0x4e0204: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4e0204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4e0208:
    // 0x4e0208: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4e020c:
    if (ctx->pc == 0x4E020Cu) {
        ctx->pc = 0x4E0210u;
        goto label_4e0210;
    }
    ctx->pc = 0x4E0208u;
    {
        const bool branch_taken_0x4e0208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0208) {
            ctx->pc = 0x4E0218u;
            goto label_4e0218;
        }
    }
    ctx->pc = 0x4E0210u;
label_4e0210:
    // 0x4e0210: 0xc0400a8  jal         func_1002A0
label_4e0214:
    if (ctx->pc == 0x4E0214u) {
        ctx->pc = 0x4E0218u;
        goto label_4e0218;
    }
    ctx->pc = 0x4E0210u;
    SET_GPR_U32(ctx, 31, 0x4E0218u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0218u; }
        if (ctx->pc != 0x4E0218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0218u; }
        if (ctx->pc != 0x4E0218u) { return; }
    }
    ctx->pc = 0x4E0218u;
label_4e0218:
    // 0x4e0218: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4e0218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4e021c:
    // 0x4e021c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4e0220:
    if (ctx->pc == 0x4E0220u) {
        ctx->pc = 0x4E0220u;
            // 0x4e0220: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4E0224u;
        goto label_4e0224;
    }
    ctx->pc = 0x4E021Cu;
    {
        const bool branch_taken_0x4e021c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e021c) {
            ctx->pc = 0x4E0220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E021Cu;
            // 0x4e0220: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E024Cu;
            goto label_4e024c;
        }
    }
    ctx->pc = 0x4E0224u;
label_4e0224:
    // 0x4e0224: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e0228:
    if (ctx->pc == 0x4E0228u) {
        ctx->pc = 0x4E022Cu;
        goto label_4e022c;
    }
    ctx->pc = 0x4E0224u;
    {
        const bool branch_taken_0x4e0224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0224) {
            ctx->pc = 0x4E0248u;
            goto label_4e0248;
        }
    }
    ctx->pc = 0x4E022Cu;
label_4e022c:
    // 0x4e022c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e0230:
    if (ctx->pc == 0x4E0230u) {
        ctx->pc = 0x4E0234u;
        goto label_4e0234;
    }
    ctx->pc = 0x4E022Cu;
    {
        const bool branch_taken_0x4e022c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e022c) {
            ctx->pc = 0x4E0248u;
            goto label_4e0248;
        }
    }
    ctx->pc = 0x4E0234u;
label_4e0234:
    // 0x4e0234: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4e0234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4e0238:
    // 0x4e0238: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4e023c:
    if (ctx->pc == 0x4E023Cu) {
        ctx->pc = 0x4E0240u;
        goto label_4e0240;
    }
    ctx->pc = 0x4E0238u;
    {
        const bool branch_taken_0x4e0238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0238) {
            ctx->pc = 0x4E0248u;
            goto label_4e0248;
        }
    }
    ctx->pc = 0x4E0240u;
label_4e0240:
    // 0x4e0240: 0xc0400a8  jal         func_1002A0
label_4e0244:
    if (ctx->pc == 0x4E0244u) {
        ctx->pc = 0x4E0248u;
        goto label_4e0248;
    }
    ctx->pc = 0x4E0240u;
    SET_GPR_U32(ctx, 31, 0x4E0248u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0248u; }
        if (ctx->pc != 0x4E0248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0248u; }
        if (ctx->pc != 0x4E0248u) { return; }
    }
    ctx->pc = 0x4E0248u;
label_4e0248:
    // 0x4e0248: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4e0248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4e024c:
    // 0x4e024c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e0250:
    if (ctx->pc == 0x4E0250u) {
        ctx->pc = 0x4E0254u;
        goto label_4e0254;
    }
    ctx->pc = 0x4E024Cu;
    {
        const bool branch_taken_0x4e024c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e024c) {
            ctx->pc = 0x4E0268u;
            goto label_4e0268;
        }
    }
    ctx->pc = 0x4E0254u;
label_4e0254:
    // 0x4e0254: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e0254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0258:
    // 0x4e0258: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e0258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e025c:
    // 0x4e025c: 0x24633398  addiu       $v1, $v1, 0x3398
    ctx->pc = 0x4e025cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13208));
label_4e0260:
    // 0x4e0260: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4e0260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4e0264:
    // 0x4e0264: 0xac40aa88  sw          $zero, -0x5578($v0)
    ctx->pc = 0x4e0264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945416), GPR_U32(ctx, 0));
label_4e0268:
    // 0x4e0268: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4e026c:
    if (ctx->pc == 0x4E026Cu) {
        ctx->pc = 0x4E026Cu;
            // 0x4e026c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4E0270u;
        goto label_4e0270;
    }
    ctx->pc = 0x4E0268u;
    {
        const bool branch_taken_0x4e0268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0268) {
            ctx->pc = 0x4E026Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0268u;
            // 0x4e026c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E02C4u;
            goto label_4e02c4;
        }
    }
    ctx->pc = 0x4E0270u;
label_4e0270:
    // 0x4e0270: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e0270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e0274:
    // 0x4e0274: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4e0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4e0278:
    // 0x4e0278: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e0278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4e027c:
    // 0x4e027c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4e027cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4e0280:
    // 0x4e0280: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e0284:
    if (ctx->pc == 0x4E0284u) {
        ctx->pc = 0x4E0284u;
            // 0x4e0284: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4E0288u;
        goto label_4e0288;
    }
    ctx->pc = 0x4E0280u;
    {
        const bool branch_taken_0x4e0280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0280) {
            ctx->pc = 0x4E0284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0280u;
            // 0x4e0284: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E029Cu;
            goto label_4e029c;
        }
    }
    ctx->pc = 0x4E0288u;
label_4e0288:
    // 0x4e0288: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e0288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e028c:
    // 0x4e028c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e028cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e0290:
    // 0x4e0290: 0x320f809  jalr        $t9
label_4e0294:
    if (ctx->pc == 0x4E0294u) {
        ctx->pc = 0x4E0294u;
            // 0x4e0294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E0298u;
        goto label_4e0298;
    }
    ctx->pc = 0x4E0290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E0298u);
        ctx->pc = 0x4E0294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0290u;
            // 0x4e0294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E0298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E0298u; }
            if (ctx->pc != 0x4E0298u) { return; }
        }
        }
    }
    ctx->pc = 0x4E0298u;
label_4e0298:
    // 0x4e0298: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4e0298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4e029c:
    // 0x4e029c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e02a0:
    if (ctx->pc == 0x4E02A0u) {
        ctx->pc = 0x4E02A0u;
            // 0x4e02a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E02A4u;
        goto label_4e02a4;
    }
    ctx->pc = 0x4E029Cu;
    {
        const bool branch_taken_0x4e029c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e029c) {
            ctx->pc = 0x4E02A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E029Cu;
            // 0x4e02a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E02B8u;
            goto label_4e02b8;
        }
    }
    ctx->pc = 0x4E02A4u;
label_4e02a4:
    // 0x4e02a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e02a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e02a8:
    // 0x4e02a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e02a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e02ac:
    // 0x4e02ac: 0x320f809  jalr        $t9
label_4e02b0:
    if (ctx->pc == 0x4E02B0u) {
        ctx->pc = 0x4E02B0u;
            // 0x4e02b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E02B4u;
        goto label_4e02b4;
    }
    ctx->pc = 0x4E02ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E02B4u);
        ctx->pc = 0x4E02B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E02ACu;
            // 0x4e02b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E02B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E02B4u; }
            if (ctx->pc != 0x4E02B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4E02B4u;
label_4e02b4:
    // 0x4e02b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e02b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e02b8:
    // 0x4e02b8: 0xc075bf8  jal         func_1D6FE0
label_4e02bc:
    if (ctx->pc == 0x4E02BCu) {
        ctx->pc = 0x4E02BCu;
            // 0x4e02bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E02C0u;
        goto label_4e02c0;
    }
    ctx->pc = 0x4E02B8u;
    SET_GPR_U32(ctx, 31, 0x4E02C0u);
    ctx->pc = 0x4E02BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E02B8u;
            // 0x4e02bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E02C0u; }
        if (ctx->pc != 0x4E02C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E02C0u; }
        if (ctx->pc != 0x4E02C0u) { return; }
    }
    ctx->pc = 0x4E02C0u;
label_4e02c0:
    // 0x4e02c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e02c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e02c4:
    // 0x4e02c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e02c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e02c8:
    // 0x4e02c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e02cc:
    if (ctx->pc == 0x4E02CCu) {
        ctx->pc = 0x4E02CCu;
            // 0x4e02cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E02D0u;
        goto label_4e02d0;
    }
    ctx->pc = 0x4E02C8u;
    {
        const bool branch_taken_0x4e02c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e02c8) {
            ctx->pc = 0x4E02CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E02C8u;
            // 0x4e02cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E02DCu;
            goto label_4e02dc;
        }
    }
    ctx->pc = 0x4E02D0u;
label_4e02d0:
    // 0x4e02d0: 0xc0400a8  jal         func_1002A0
label_4e02d4:
    if (ctx->pc == 0x4E02D4u) {
        ctx->pc = 0x4E02D4u;
            // 0x4e02d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E02D8u;
        goto label_4e02d8;
    }
    ctx->pc = 0x4E02D0u;
    SET_GPR_U32(ctx, 31, 0x4E02D8u);
    ctx->pc = 0x4E02D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E02D0u;
            // 0x4e02d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E02D8u; }
        if (ctx->pc != 0x4E02D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E02D8u; }
        if (ctx->pc != 0x4E02D8u) { return; }
    }
    ctx->pc = 0x4E02D8u;
label_4e02d8:
    // 0x4e02d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e02d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e02dc:
    // 0x4e02dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e02dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e02e0:
    // 0x4e02e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e02e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e02e4:
    // 0x4e02e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e02e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e02e8:
    // 0x4e02e8: 0x3e00008  jr          $ra
label_4e02ec:
    if (ctx->pc == 0x4E02ECu) {
        ctx->pc = 0x4E02ECu;
            // 0x4e02ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E02F0u;
        goto label_4e02f0;
    }
    ctx->pc = 0x4E02E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E02ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E02E8u;
            // 0x4e02ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E02F0u;
label_4e02f0:
    // 0x4e02f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e02f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e02f4:
    // 0x4e02f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e02f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e02f8:
    // 0x4e02f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e02f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e02fc:
    // 0x4e02fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e02fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e0300:
    // 0x4e0300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e0300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e0304:
    // 0x4e0304: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4e0308:
    if (ctx->pc == 0x4E0308u) {
        ctx->pc = 0x4E0308u;
            // 0x4e0308: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E030Cu;
        goto label_4e030c;
    }
    ctx->pc = 0x4E0304u;
    {
        const bool branch_taken_0x4e0304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0304u;
            // 0x4e0308: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0304) {
            ctx->pc = 0x4E0358u;
            goto label_4e0358;
        }
    }
    ctx->pc = 0x4E030Cu;
label_4e030c:
    // 0x4e030c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e030cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0310:
    // 0x4e0310: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e0314:
    // 0x4e0314: 0x24633450  addiu       $v1, $v1, 0x3450
    ctx->pc = 0x4e0314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13392));
label_4e0318:
    // 0x4e0318: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x4e0318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
label_4e031c:
    // 0x4e031c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e031cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e0320:
    // 0x4e0320: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4e0320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4e0324:
    // 0x4e0324: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e0324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e0328:
    // 0x4e0328: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4e0328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4e032c:
    // 0x4e032c: 0x320f809  jalr        $t9
label_4e0330:
    if (ctx->pc == 0x4E0330u) {
        ctx->pc = 0x4E0334u;
        goto label_4e0334;
    }
    ctx->pc = 0x4E032Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E0334u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E0334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E0334u; }
            if (ctx->pc != 0x4E0334u) { return; }
        }
        }
    }
    ctx->pc = 0x4E0334u;
label_4e0334:
    // 0x4e0334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e0334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e0338:
    // 0x4e0338: 0xc12e684  jal         func_4B9A10
label_4e033c:
    if (ctx->pc == 0x4E033Cu) {
        ctx->pc = 0x4E033Cu;
            // 0x4e033c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0340u;
        goto label_4e0340;
    }
    ctx->pc = 0x4E0338u;
    SET_GPR_U32(ctx, 31, 0x4E0340u);
    ctx->pc = 0x4E033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0338u;
            // 0x4e033c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0340u; }
        if (ctx->pc != 0x4E0340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0340u; }
        if (ctx->pc != 0x4E0340u) { return; }
    }
    ctx->pc = 0x4E0340u;
label_4e0340:
    // 0x4e0340: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e0340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e0344:
    // 0x4e0344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e0344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e0348:
    // 0x4e0348: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e034c:
    if (ctx->pc == 0x4E034Cu) {
        ctx->pc = 0x4E034Cu;
            // 0x4e034c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0350u;
        goto label_4e0350;
    }
    ctx->pc = 0x4E0348u;
    {
        const bool branch_taken_0x4e0348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e0348) {
            ctx->pc = 0x4E034Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0348u;
            // 0x4e034c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E035Cu;
            goto label_4e035c;
        }
    }
    ctx->pc = 0x4E0350u;
label_4e0350:
    // 0x4e0350: 0xc0400a8  jal         func_1002A0
label_4e0354:
    if (ctx->pc == 0x4E0354u) {
        ctx->pc = 0x4E0354u;
            // 0x4e0354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0358u;
        goto label_4e0358;
    }
    ctx->pc = 0x4E0350u;
    SET_GPR_U32(ctx, 31, 0x4E0358u);
    ctx->pc = 0x4E0354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0350u;
            // 0x4e0354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0358u; }
        if (ctx->pc != 0x4E0358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0358u; }
        if (ctx->pc != 0x4E0358u) { return; }
    }
    ctx->pc = 0x4E0358u;
label_4e0358:
    // 0x4e0358: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e0358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e035c:
    // 0x4e035c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e035cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e0360:
    // 0x4e0360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e0360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0364:
    // 0x4e0364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0368:
    // 0x4e0368: 0x3e00008  jr          $ra
label_4e036c:
    if (ctx->pc == 0x4E036Cu) {
        ctx->pc = 0x4E036Cu;
            // 0x4e036c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E0370u;
        goto label_4e0370;
    }
    ctx->pc = 0x4E0368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0368u;
            // 0x4e036c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0370u;
label_4e0370:
    // 0x4e0370: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4e0370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4e0374:
    // 0x4e0374: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e0374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e0378:
    // 0x4e0378: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4e0378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4e037c:
    // 0x4e037c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4e037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4e0380:
    // 0x4e0380: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4e0380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4e0384:
    // 0x4e0384: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4e0384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4e0388:
    // 0x4e0388: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e0388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4e038c:
    // 0x4e038c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4e0390:
    // 0x4e0390: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4e0390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4e0394:
    // 0x4e0394: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e0394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e0398:
    // 0x4e0398: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e0398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e039c:
    // 0x4e039c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e03a0:
    // 0x4e03a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e03a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e03a4:
    // 0x4e03a4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e03a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e03a8:
    // 0x4e03a8: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4e03ac:
    if (ctx->pc == 0x4E03ACu) {
        ctx->pc = 0x4E03ACu;
            // 0x4e03ac: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E03B0u;
        goto label_4e03b0;
    }
    ctx->pc = 0x4E03A8u;
    {
        const bool branch_taken_0x4e03a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E03ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E03A8u;
            // 0x4e03ac: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e03a8) {
            ctx->pc = 0x4E040Cu;
            goto label_4e040c;
        }
    }
    ctx->pc = 0x4E03B0u;
label_4e03b0:
    // 0x4e03b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e03b4:
    // 0x4e03b4: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4e03b8:
    if (ctx->pc == 0x4E03B8u) {
        ctx->pc = 0x4E03B8u;
            // 0x4e03b8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E03BCu;
        goto label_4e03bc;
    }
    ctx->pc = 0x4E03B4u;
    {
        const bool branch_taken_0x4e03b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e03b4) {
            ctx->pc = 0x4E03B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E03B4u;
            // 0x4e03b8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E03F8u;
            goto label_4e03f8;
        }
    }
    ctx->pc = 0x4E03BCu;
label_4e03bc:
    // 0x4e03bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e03c0:
    // 0x4e03c0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4e03c4:
    if (ctx->pc == 0x4E03C4u) {
        ctx->pc = 0x4E03C8u;
        goto label_4e03c8;
    }
    ctx->pc = 0x4E03C0u;
    {
        const bool branch_taken_0x4e03c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e03c0) {
            ctx->pc = 0x4E03D0u;
            goto label_4e03d0;
        }
    }
    ctx->pc = 0x4E03C8u;
label_4e03c8:
    // 0x4e03c8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_4e03cc:
    if (ctx->pc == 0x4E03CCu) {
        ctx->pc = 0x4E03CCu;
            // 0x4e03cc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4E03D0u;
        goto label_4e03d0;
    }
    ctx->pc = 0x4E03C8u;
    {
        const bool branch_taken_0x4e03c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E03CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E03C8u;
            // 0x4e03cc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e03c8) {
            ctx->pc = 0x4E05C8u;
            goto label_4e05c8;
        }
    }
    ctx->pc = 0x4E03D0u;
label_4e03d0:
    // 0x4e03d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e03d4:
    // 0x4e03d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e03d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e03d8:
    // 0x4e03d8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4e03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4e03dc:
    // 0x4e03dc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4e03dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4e03e0:
    // 0x4e03e0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4e03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4e03e4:
    // 0x4e03e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4e03e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4e03e8:
    // 0x4e03e8: 0x320f809  jalr        $t9
label_4e03ec:
    if (ctx->pc == 0x4E03ECu) {
        ctx->pc = 0x4E03ECu;
            // 0x4e03ec: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4E03F0u;
        goto label_4e03f0;
    }
    ctx->pc = 0x4E03E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E03F0u);
        ctx->pc = 0x4E03ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E03E8u;
            // 0x4e03ec: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E03F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E03F0u; }
            if (ctx->pc != 0x4E03F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4E03F0u;
label_4e03f0:
    // 0x4e03f0: 0x10000074  b           . + 4 + (0x74 << 2)
label_4e03f4:
    if (ctx->pc == 0x4E03F4u) {
        ctx->pc = 0x4E03F8u;
        goto label_4e03f8;
    }
    ctx->pc = 0x4E03F0u;
    {
        const bool branch_taken_0x4e03f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e03f0) {
            ctx->pc = 0x4E05C4u;
            goto label_4e05c4;
        }
    }
    ctx->pc = 0x4E03F8u;
label_4e03f8:
    // 0x4e03f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e03f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e03fc:
    // 0x4e03fc: 0x320f809  jalr        $t9
label_4e0400:
    if (ctx->pc == 0x4E0400u) {
        ctx->pc = 0x4E0404u;
        goto label_4e0404;
    }
    ctx->pc = 0x4E03FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E0404u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E0404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E0404u; }
            if (ctx->pc != 0x4E0404u) { return; }
        }
        }
    }
    ctx->pc = 0x4E0404u;
label_4e0404:
    // 0x4e0404: 0x1000006f  b           . + 4 + (0x6F << 2)
label_4e0408:
    if (ctx->pc == 0x4E0408u) {
        ctx->pc = 0x4E040Cu;
        goto label_4e040c;
    }
    ctx->pc = 0x4E0404u;
    {
        const bool branch_taken_0x4e0404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0404) {
            ctx->pc = 0x4E05C4u;
            goto label_4e05c4;
        }
    }
    ctx->pc = 0x4E040Cu;
label_4e040c:
    // 0x4e040c: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4e040cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4e0410:
    // 0x4e0410: 0x12e0006c  beqz        $s7, . + 4 + (0x6C << 2)
label_4e0414:
    if (ctx->pc == 0x4E0414u) {
        ctx->pc = 0x4E0418u;
        goto label_4e0418;
    }
    ctx->pc = 0x4E0410u;
    {
        const bool branch_taken_0x4e0410 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0410) {
            ctx->pc = 0x4E05C4u;
            goto label_4e05c4;
        }
    }
    ctx->pc = 0x4E0418u;
label_4e0418:
    // 0x4e0418: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4e0418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4e041c:
    // 0x4e041c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e0420:
    // 0x4e0420: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4e0420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4e0424:
    // 0x4e0424: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4e0424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4e0428:
    // 0x4e0428: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4e0428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4e042c:
    // 0x4e042c: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x4e042cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_4e0430:
    // 0x4e0430: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4e0430u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e0434:
    // 0x4e0434: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e0434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e0438:
    // 0x4e0438: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x4e0438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4e043c:
    // 0x4e043c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e043cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e0440:
    // 0x4e0440: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4e0440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4e0444:
    // 0x4e0444: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e0444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e0448:
    // 0x4e0448: 0xc45480f8  lwc1        $f20, -0x7F08($v0)
    ctx->pc = 0x4e0448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e044c:
    // 0x4e044c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4e044cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e0450:
    // 0x4e0450: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4e0450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4e0454:
    // 0x4e0454: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e0454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e0458:
    // 0x4e0458: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4e0458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4e045c:
    // 0x4e045c: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x4e045cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4e0460:
    // 0x4e0460: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4e0460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4e0464:
    // 0x4e0464: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4e0464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4e0468:
    // 0x4e0468: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4e0468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4e046c:
    // 0x4e046c: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4e046cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4e0470:
    // 0x4e0470: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4e0470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4e0474:
    // 0x4e0474: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4e0474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4e0478:
    // 0x4e0478: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4e0478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4e047c:
    // 0x4e047c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4e047cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e0480:
    // 0x4e0480: 0xc0d639c  jal         func_358E70
label_4e0484:
    if (ctx->pc == 0x4E0484u) {
        ctx->pc = 0x4E0484u;
            // 0x4e0484: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x4E0488u;
        goto label_4e0488;
    }
    ctx->pc = 0x4E0480u;
    SET_GPR_U32(ctx, 31, 0x4E0488u);
    ctx->pc = 0x4E0484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0480u;
            // 0x4e0484: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0488u; }
        if (ctx->pc != 0x4E0488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0488u; }
        if (ctx->pc != 0x4E0488u) { return; }
    }
    ctx->pc = 0x4E0488u;
label_4e0488:
    // 0x4e0488: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4e048c:
    if (ctx->pc == 0x4E048Cu) {
        ctx->pc = 0x4E0490u;
        goto label_4e0490;
    }
    ctx->pc = 0x4E0488u;
    {
        const bool branch_taken_0x4e0488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0488) {
            ctx->pc = 0x4E0570u;
            goto label_4e0570;
        }
    }
    ctx->pc = 0x4E0490u;
label_4e0490:
    // 0x4e0490: 0xc0d1c14  jal         func_347050
label_4e0494:
    if (ctx->pc == 0x4E0494u) {
        ctx->pc = 0x4E0494u;
            // 0x4e0494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0498u;
        goto label_4e0498;
    }
    ctx->pc = 0x4E0490u;
    SET_GPR_U32(ctx, 31, 0x4E0498u);
    ctx->pc = 0x4E0494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0490u;
            // 0x4e0494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0498u; }
        if (ctx->pc != 0x4E0498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0498u; }
        if (ctx->pc != 0x4E0498u) { return; }
    }
    ctx->pc = 0x4E0498u;
label_4e0498:
    // 0x4e0498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e0498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e049c:
    // 0x4e049c: 0xc04f278  jal         func_13C9E0
label_4e04a0:
    if (ctx->pc == 0x4E04A0u) {
        ctx->pc = 0x4E04A0u;
            // 0x4e04a0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4E04A4u;
        goto label_4e04a4;
    }
    ctx->pc = 0x4E049Cu;
    SET_GPR_U32(ctx, 31, 0x4E04A4u);
    ctx->pc = 0x4E04A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E049Cu;
            // 0x4e04a0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04A4u; }
        if (ctx->pc != 0x4E04A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04A4u; }
        if (ctx->pc != 0x4E04A4u) { return; }
    }
    ctx->pc = 0x4E04A4u;
label_4e04a4:
    // 0x4e04a4: 0xc0d1c10  jal         func_347040
label_4e04a8:
    if (ctx->pc == 0x4E04A8u) {
        ctx->pc = 0x4E04A8u;
            // 0x4e04a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E04ACu;
        goto label_4e04ac;
    }
    ctx->pc = 0x4E04A4u;
    SET_GPR_U32(ctx, 31, 0x4E04ACu);
    ctx->pc = 0x4E04A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E04A4u;
            // 0x4e04a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04ACu; }
        if (ctx->pc != 0x4E04ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04ACu; }
        if (ctx->pc != 0x4E04ACu) { return; }
    }
    ctx->pc = 0x4E04ACu;
label_4e04ac:
    // 0x4e04ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e04acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e04b0:
    // 0x4e04b0: 0xc04ce80  jal         func_133A00
label_4e04b4:
    if (ctx->pc == 0x4E04B4u) {
        ctx->pc = 0x4E04B4u;
            // 0x4e04b4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4E04B8u;
        goto label_4e04b8;
    }
    ctx->pc = 0x4E04B0u;
    SET_GPR_U32(ctx, 31, 0x4E04B8u);
    ctx->pc = 0x4E04B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E04B0u;
            // 0x4e04b4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04B8u; }
        if (ctx->pc != 0x4E04B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04B8u; }
        if (ctx->pc != 0x4E04B8u) { return; }
    }
    ctx->pc = 0x4E04B8u;
label_4e04b8:
    // 0x4e04b8: 0xc0d4108  jal         func_350420
label_4e04bc:
    if (ctx->pc == 0x4E04BCu) {
        ctx->pc = 0x4E04C0u;
        goto label_4e04c0;
    }
    ctx->pc = 0x4E04B8u;
    SET_GPR_U32(ctx, 31, 0x4E04C0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04C0u; }
        if (ctx->pc != 0x4E04C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04C0u; }
        if (ctx->pc != 0x4E04C0u) { return; }
    }
    ctx->pc = 0x4E04C0u;
label_4e04c0:
    // 0x4e04c0: 0xc0b36b4  jal         func_2CDAD0
label_4e04c4:
    if (ctx->pc == 0x4E04C4u) {
        ctx->pc = 0x4E04C4u;
            // 0x4e04c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E04C8u;
        goto label_4e04c8;
    }
    ctx->pc = 0x4E04C0u;
    SET_GPR_U32(ctx, 31, 0x4E04C8u);
    ctx->pc = 0x4E04C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E04C0u;
            // 0x4e04c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04C8u; }
        if (ctx->pc != 0x4E04C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04C8u; }
        if (ctx->pc != 0x4E04C8u) { return; }
    }
    ctx->pc = 0x4E04C8u;
label_4e04c8:
    // 0x4e04c8: 0xc0b9c64  jal         func_2E7190
label_4e04cc:
    if (ctx->pc == 0x4E04CCu) {
        ctx->pc = 0x4E04CCu;
            // 0x4e04cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E04D0u;
        goto label_4e04d0;
    }
    ctx->pc = 0x4E04C8u;
    SET_GPR_U32(ctx, 31, 0x4E04D0u);
    ctx->pc = 0x4E04CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E04C8u;
            // 0x4e04cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04D0u; }
        if (ctx->pc != 0x4E04D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04D0u; }
        if (ctx->pc != 0x4E04D0u) { return; }
    }
    ctx->pc = 0x4E04D0u;
label_4e04d0:
    // 0x4e04d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e04d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e04d4:
    // 0x4e04d4: 0xc0d4104  jal         func_350410
label_4e04d8:
    if (ctx->pc == 0x4E04D8u) {
        ctx->pc = 0x4E04D8u;
            // 0x4e04d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E04DCu;
        goto label_4e04dc;
    }
    ctx->pc = 0x4E04D4u;
    SET_GPR_U32(ctx, 31, 0x4E04DCu);
    ctx->pc = 0x4E04D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E04D4u;
            // 0x4e04d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04DCu; }
        if (ctx->pc != 0x4E04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04DCu; }
        if (ctx->pc != 0x4E04DCu) { return; }
    }
    ctx->pc = 0x4E04DCu;
label_4e04dc:
    // 0x4e04dc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4e04dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e04e0:
    // 0x4e04e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e04e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e04e4:
    // 0x4e04e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e04e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e04e8:
    // 0x4e04e8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4e04e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4e04ec:
    // 0x4e04ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4e04ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e04f0:
    // 0x4e04f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e04f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e04f4:
    // 0x4e04f4: 0xc0d40ac  jal         func_3502B0
label_4e04f8:
    if (ctx->pc == 0x4E04F8u) {
        ctx->pc = 0x4E04F8u;
            // 0x4e04f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4E04FCu;
        goto label_4e04fc;
    }
    ctx->pc = 0x4E04F4u;
    SET_GPR_U32(ctx, 31, 0x4E04FCu);
    ctx->pc = 0x4E04F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E04F4u;
            // 0x4e04f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04FCu; }
        if (ctx->pc != 0x4E04FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E04FCu; }
        if (ctx->pc != 0x4E04FCu) { return; }
    }
    ctx->pc = 0x4E04FCu;
label_4e04fc:
    // 0x4e04fc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e04fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e0500:
    // 0x4e0500: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_4e0504:
    if (ctx->pc == 0x4E0504u) {
        ctx->pc = 0x4E0504u;
            // 0x4e0504: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4E0508u;
        goto label_4e0508;
    }
    ctx->pc = 0x4E0500u;
    {
        const bool branch_taken_0x4e0500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0500u;
            // 0x4e0504: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0500) {
            ctx->pc = 0x4E0570u;
            goto label_4e0570;
        }
    }
    ctx->pc = 0x4E0508u;
label_4e0508:
    // 0x4e0508: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4e0508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e050c:
    // 0x4e050c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4e050cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4e0510:
    // 0x4e0510: 0xc138180  jal         func_4E0600
label_4e0514:
    if (ctx->pc == 0x4E0514u) {
        ctx->pc = 0x4E0514u;
            // 0x4e0514: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4E0518u;
        goto label_4e0518;
    }
    ctx->pc = 0x4E0510u;
    SET_GPR_U32(ctx, 31, 0x4E0518u);
    ctx->pc = 0x4E0514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0510u;
            // 0x4e0514: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0600u;
    if (runtime->hasFunction(0x4E0600u)) {
        auto targetFn = runtime->lookupFunction(0x4E0600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0518u; }
        if (ctx->pc != 0x4E0518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E0600_0x4e0600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0518u; }
        if (ctx->pc != 0x4E0518u) { return; }
    }
    ctx->pc = 0x4E0518u;
label_4e0518:
    // 0x4e0518: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4e0518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4e051c:
    // 0x4e051c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4e051cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4e0520:
    // 0x4e0520: 0xc04cd60  jal         func_133580
label_4e0524:
    if (ctx->pc == 0x4E0524u) {
        ctx->pc = 0x4E0524u;
            // 0x4e0524: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4E0528u;
        goto label_4e0528;
    }
    ctx->pc = 0x4E0520u;
    SET_GPR_U32(ctx, 31, 0x4E0528u);
    ctx->pc = 0x4E0524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0520u;
            // 0x4e0524: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0528u; }
        if (ctx->pc != 0x4E0528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0528u; }
        if (ctx->pc != 0x4E0528u) { return; }
    }
    ctx->pc = 0x4E0528u;
label_4e0528:
    // 0x4e0528: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e0528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e052c:
    // 0x4e052c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4e052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4e0530:
    // 0x4e0530: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4e0530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4e0534:
    // 0x4e0534: 0xc04e4a4  jal         func_139290
label_4e0538:
    if (ctx->pc == 0x4E0538u) {
        ctx->pc = 0x4E0538u;
            // 0x4e0538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E053Cu;
        goto label_4e053c;
    }
    ctx->pc = 0x4E0534u;
    SET_GPR_U32(ctx, 31, 0x4E053Cu);
    ctx->pc = 0x4E0538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0534u;
            // 0x4e0538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E053Cu; }
        if (ctx->pc != 0x4E053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E053Cu; }
        if (ctx->pc != 0x4E053Cu) { return; }
    }
    ctx->pc = 0x4E053Cu;
label_4e053c:
    // 0x4e053c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4e053cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e0540:
    // 0x4e0540: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4e0540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4e0544:
    // 0x4e0544: 0x320f809  jalr        $t9
label_4e0548:
    if (ctx->pc == 0x4E0548u) {
        ctx->pc = 0x4E0548u;
            // 0x4e0548: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E054Cu;
        goto label_4e054c;
    }
    ctx->pc = 0x4E0544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E054Cu);
        ctx->pc = 0x4E0548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0544u;
            // 0x4e0548: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E054Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E054Cu; }
            if (ctx->pc != 0x4E054Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E054Cu;
label_4e054c:
    // 0x4e054c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4e054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4e0550:
    // 0x4e0550: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4e0550u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4e0554:
    // 0x4e0554: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4e0554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4e0558:
    // 0x4e0558: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4e0558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4e055c:
    // 0x4e055c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4e055cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e0560:
    // 0x4e0560: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4e0560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4e0564:
    // 0x4e0564: 0xc04cfcc  jal         func_133F30
label_4e0568:
    if (ctx->pc == 0x4E0568u) {
        ctx->pc = 0x4E0568u;
            // 0x4e0568: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E056Cu;
        goto label_4e056c;
    }
    ctx->pc = 0x4E0564u;
    SET_GPR_U32(ctx, 31, 0x4E056Cu);
    ctx->pc = 0x4E0568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0564u;
            // 0x4e0568: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E056Cu; }
        if (ctx->pc != 0x4E056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E056Cu; }
        if (ctx->pc != 0x4E056Cu) { return; }
    }
    ctx->pc = 0x4E056Cu;
label_4e056c:
    // 0x4e056c: 0x0  nop
    ctx->pc = 0x4e056cu;
    // NOP
label_4e0570:
    // 0x4e0570: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4e0570u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4e0574:
    // 0x4e0574: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x4e0574u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4e0578:
    // 0x4e0578: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_4e057c:
    if (ctx->pc == 0x4E057Cu) {
        ctx->pc = 0x4E057Cu;
            // 0x4e057c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4E0580u;
        goto label_4e0580;
    }
    ctx->pc = 0x4E0578u;
    {
        const bool branch_taken_0x4e0578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0578u;
            // 0x4e057c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0578) {
            ctx->pc = 0x4E0464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e0464;
        }
    }
    ctx->pc = 0x4E0580u;
label_4e0580:
    // 0x4e0580: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e0580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e0584:
    // 0x4e0584: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4e0584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e0588:
    // 0x4e0588: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_4e058c:
    if (ctx->pc == 0x4E058Cu) {
        ctx->pc = 0x4E0590u;
        goto label_4e0590;
    }
    ctx->pc = 0x4E0588u;
    {
        const bool branch_taken_0x4e0588 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4e0588) {
            ctx->pc = 0x4E05C4u;
            goto label_4e05c4;
        }
    }
    ctx->pc = 0x4E0590u;
label_4e0590:
    // 0x4e0590: 0xc04e738  jal         func_139CE0
label_4e0594:
    if (ctx->pc == 0x4E0594u) {
        ctx->pc = 0x4E0594u;
            // 0x4e0594: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4E0598u;
        goto label_4e0598;
    }
    ctx->pc = 0x4E0590u;
    SET_GPR_U32(ctx, 31, 0x4E0598u);
    ctx->pc = 0x4E0594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0590u;
            // 0x4e0594: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0598u; }
        if (ctx->pc != 0x4E0598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0598u; }
        if (ctx->pc != 0x4E0598u) { return; }
    }
    ctx->pc = 0x4E0598u;
label_4e0598:
    // 0x4e0598: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e0598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e059c:
    // 0x4e059c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4e059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e05a0:
    // 0x4e05a0: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4e05a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4e05a4:
    // 0x4e05a4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e05a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e05a8:
    // 0x4e05a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4e05a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e05ac:
    // 0x4e05ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e05acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e05b0:
    // 0x4e05b0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4e05b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4e05b4:
    // 0x4e05b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e05b8:
    // 0x4e05b8: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4e05b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4e05bc:
    // 0x4e05bc: 0xc055d28  jal         func_1574A0
label_4e05c0:
    if (ctx->pc == 0x4E05C0u) {
        ctx->pc = 0x4E05C0u;
            // 0x4e05c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E05C4u;
        goto label_4e05c4;
    }
    ctx->pc = 0x4E05BCu;
    SET_GPR_U32(ctx, 31, 0x4E05C4u);
    ctx->pc = 0x4E05C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E05BCu;
            // 0x4e05c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E05C4u; }
        if (ctx->pc != 0x4E05C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E05C4u; }
        if (ctx->pc != 0x4E05C4u) { return; }
    }
    ctx->pc = 0x4E05C4u;
label_4e05c4:
    // 0x4e05c4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4e05c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4e05c8:
    // 0x4e05c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e05c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e05cc:
    // 0x4e05cc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4e05ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4e05d0:
    // 0x4e05d0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4e05d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e05d4:
    // 0x4e05d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4e05d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e05d8:
    // 0x4e05d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e05d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e05dc:
    // 0x4e05dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e05dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e05e0:
    // 0x4e05e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4e05e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e05e4:
    // 0x4e05e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e05e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e05e8:
    // 0x4e05e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e05e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e05ec:
    // 0x4e05ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e05ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e05f0:
    // 0x4e05f0: 0x3e00008  jr          $ra
label_4e05f4:
    if (ctx->pc == 0x4E05F4u) {
        ctx->pc = 0x4E05F4u;
            // 0x4e05f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4E05F8u;
        goto label_4e05f8;
    }
    ctx->pc = 0x4E05F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E05F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E05F0u;
            // 0x4e05f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E05F8u;
label_4e05f8:
    // 0x4e05f8: 0x0  nop
    ctx->pc = 0x4e05f8u;
    // NOP
label_4e05fc:
    // 0x4e05fc: 0x0  nop
    ctx->pc = 0x4e05fcu;
    // NOP
}
