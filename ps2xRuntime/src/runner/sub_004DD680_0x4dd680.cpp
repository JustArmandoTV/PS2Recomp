#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DD680
// Address: 0x4dd680 - 0x4ddaf0
void sub_004DD680_0x4dd680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD680_0x4dd680");
#endif

    switch (ctx->pc) {
        case 0x4dd680u: goto label_4dd680;
        case 0x4dd684u: goto label_4dd684;
        case 0x4dd688u: goto label_4dd688;
        case 0x4dd68cu: goto label_4dd68c;
        case 0x4dd690u: goto label_4dd690;
        case 0x4dd694u: goto label_4dd694;
        case 0x4dd698u: goto label_4dd698;
        case 0x4dd69cu: goto label_4dd69c;
        case 0x4dd6a0u: goto label_4dd6a0;
        case 0x4dd6a4u: goto label_4dd6a4;
        case 0x4dd6a8u: goto label_4dd6a8;
        case 0x4dd6acu: goto label_4dd6ac;
        case 0x4dd6b0u: goto label_4dd6b0;
        case 0x4dd6b4u: goto label_4dd6b4;
        case 0x4dd6b8u: goto label_4dd6b8;
        case 0x4dd6bcu: goto label_4dd6bc;
        case 0x4dd6c0u: goto label_4dd6c0;
        case 0x4dd6c4u: goto label_4dd6c4;
        case 0x4dd6c8u: goto label_4dd6c8;
        case 0x4dd6ccu: goto label_4dd6cc;
        case 0x4dd6d0u: goto label_4dd6d0;
        case 0x4dd6d4u: goto label_4dd6d4;
        case 0x4dd6d8u: goto label_4dd6d8;
        case 0x4dd6dcu: goto label_4dd6dc;
        case 0x4dd6e0u: goto label_4dd6e0;
        case 0x4dd6e4u: goto label_4dd6e4;
        case 0x4dd6e8u: goto label_4dd6e8;
        case 0x4dd6ecu: goto label_4dd6ec;
        case 0x4dd6f0u: goto label_4dd6f0;
        case 0x4dd6f4u: goto label_4dd6f4;
        case 0x4dd6f8u: goto label_4dd6f8;
        case 0x4dd6fcu: goto label_4dd6fc;
        case 0x4dd700u: goto label_4dd700;
        case 0x4dd704u: goto label_4dd704;
        case 0x4dd708u: goto label_4dd708;
        case 0x4dd70cu: goto label_4dd70c;
        case 0x4dd710u: goto label_4dd710;
        case 0x4dd714u: goto label_4dd714;
        case 0x4dd718u: goto label_4dd718;
        case 0x4dd71cu: goto label_4dd71c;
        case 0x4dd720u: goto label_4dd720;
        case 0x4dd724u: goto label_4dd724;
        case 0x4dd728u: goto label_4dd728;
        case 0x4dd72cu: goto label_4dd72c;
        case 0x4dd730u: goto label_4dd730;
        case 0x4dd734u: goto label_4dd734;
        case 0x4dd738u: goto label_4dd738;
        case 0x4dd73cu: goto label_4dd73c;
        case 0x4dd740u: goto label_4dd740;
        case 0x4dd744u: goto label_4dd744;
        case 0x4dd748u: goto label_4dd748;
        case 0x4dd74cu: goto label_4dd74c;
        case 0x4dd750u: goto label_4dd750;
        case 0x4dd754u: goto label_4dd754;
        case 0x4dd758u: goto label_4dd758;
        case 0x4dd75cu: goto label_4dd75c;
        case 0x4dd760u: goto label_4dd760;
        case 0x4dd764u: goto label_4dd764;
        case 0x4dd768u: goto label_4dd768;
        case 0x4dd76cu: goto label_4dd76c;
        case 0x4dd770u: goto label_4dd770;
        case 0x4dd774u: goto label_4dd774;
        case 0x4dd778u: goto label_4dd778;
        case 0x4dd77cu: goto label_4dd77c;
        case 0x4dd780u: goto label_4dd780;
        case 0x4dd784u: goto label_4dd784;
        case 0x4dd788u: goto label_4dd788;
        case 0x4dd78cu: goto label_4dd78c;
        case 0x4dd790u: goto label_4dd790;
        case 0x4dd794u: goto label_4dd794;
        case 0x4dd798u: goto label_4dd798;
        case 0x4dd79cu: goto label_4dd79c;
        case 0x4dd7a0u: goto label_4dd7a0;
        case 0x4dd7a4u: goto label_4dd7a4;
        case 0x4dd7a8u: goto label_4dd7a8;
        case 0x4dd7acu: goto label_4dd7ac;
        case 0x4dd7b0u: goto label_4dd7b0;
        case 0x4dd7b4u: goto label_4dd7b4;
        case 0x4dd7b8u: goto label_4dd7b8;
        case 0x4dd7bcu: goto label_4dd7bc;
        case 0x4dd7c0u: goto label_4dd7c0;
        case 0x4dd7c4u: goto label_4dd7c4;
        case 0x4dd7c8u: goto label_4dd7c8;
        case 0x4dd7ccu: goto label_4dd7cc;
        case 0x4dd7d0u: goto label_4dd7d0;
        case 0x4dd7d4u: goto label_4dd7d4;
        case 0x4dd7d8u: goto label_4dd7d8;
        case 0x4dd7dcu: goto label_4dd7dc;
        case 0x4dd7e0u: goto label_4dd7e0;
        case 0x4dd7e4u: goto label_4dd7e4;
        case 0x4dd7e8u: goto label_4dd7e8;
        case 0x4dd7ecu: goto label_4dd7ec;
        case 0x4dd7f0u: goto label_4dd7f0;
        case 0x4dd7f4u: goto label_4dd7f4;
        case 0x4dd7f8u: goto label_4dd7f8;
        case 0x4dd7fcu: goto label_4dd7fc;
        case 0x4dd800u: goto label_4dd800;
        case 0x4dd804u: goto label_4dd804;
        case 0x4dd808u: goto label_4dd808;
        case 0x4dd80cu: goto label_4dd80c;
        case 0x4dd810u: goto label_4dd810;
        case 0x4dd814u: goto label_4dd814;
        case 0x4dd818u: goto label_4dd818;
        case 0x4dd81cu: goto label_4dd81c;
        case 0x4dd820u: goto label_4dd820;
        case 0x4dd824u: goto label_4dd824;
        case 0x4dd828u: goto label_4dd828;
        case 0x4dd82cu: goto label_4dd82c;
        case 0x4dd830u: goto label_4dd830;
        case 0x4dd834u: goto label_4dd834;
        case 0x4dd838u: goto label_4dd838;
        case 0x4dd83cu: goto label_4dd83c;
        case 0x4dd840u: goto label_4dd840;
        case 0x4dd844u: goto label_4dd844;
        case 0x4dd848u: goto label_4dd848;
        case 0x4dd84cu: goto label_4dd84c;
        case 0x4dd850u: goto label_4dd850;
        case 0x4dd854u: goto label_4dd854;
        case 0x4dd858u: goto label_4dd858;
        case 0x4dd85cu: goto label_4dd85c;
        case 0x4dd860u: goto label_4dd860;
        case 0x4dd864u: goto label_4dd864;
        case 0x4dd868u: goto label_4dd868;
        case 0x4dd86cu: goto label_4dd86c;
        case 0x4dd870u: goto label_4dd870;
        case 0x4dd874u: goto label_4dd874;
        case 0x4dd878u: goto label_4dd878;
        case 0x4dd87cu: goto label_4dd87c;
        case 0x4dd880u: goto label_4dd880;
        case 0x4dd884u: goto label_4dd884;
        case 0x4dd888u: goto label_4dd888;
        case 0x4dd88cu: goto label_4dd88c;
        case 0x4dd890u: goto label_4dd890;
        case 0x4dd894u: goto label_4dd894;
        case 0x4dd898u: goto label_4dd898;
        case 0x4dd89cu: goto label_4dd89c;
        case 0x4dd8a0u: goto label_4dd8a0;
        case 0x4dd8a4u: goto label_4dd8a4;
        case 0x4dd8a8u: goto label_4dd8a8;
        case 0x4dd8acu: goto label_4dd8ac;
        case 0x4dd8b0u: goto label_4dd8b0;
        case 0x4dd8b4u: goto label_4dd8b4;
        case 0x4dd8b8u: goto label_4dd8b8;
        case 0x4dd8bcu: goto label_4dd8bc;
        case 0x4dd8c0u: goto label_4dd8c0;
        case 0x4dd8c4u: goto label_4dd8c4;
        case 0x4dd8c8u: goto label_4dd8c8;
        case 0x4dd8ccu: goto label_4dd8cc;
        case 0x4dd8d0u: goto label_4dd8d0;
        case 0x4dd8d4u: goto label_4dd8d4;
        case 0x4dd8d8u: goto label_4dd8d8;
        case 0x4dd8dcu: goto label_4dd8dc;
        case 0x4dd8e0u: goto label_4dd8e0;
        case 0x4dd8e4u: goto label_4dd8e4;
        case 0x4dd8e8u: goto label_4dd8e8;
        case 0x4dd8ecu: goto label_4dd8ec;
        case 0x4dd8f0u: goto label_4dd8f0;
        case 0x4dd8f4u: goto label_4dd8f4;
        case 0x4dd8f8u: goto label_4dd8f8;
        case 0x4dd8fcu: goto label_4dd8fc;
        case 0x4dd900u: goto label_4dd900;
        case 0x4dd904u: goto label_4dd904;
        case 0x4dd908u: goto label_4dd908;
        case 0x4dd90cu: goto label_4dd90c;
        case 0x4dd910u: goto label_4dd910;
        case 0x4dd914u: goto label_4dd914;
        case 0x4dd918u: goto label_4dd918;
        case 0x4dd91cu: goto label_4dd91c;
        case 0x4dd920u: goto label_4dd920;
        case 0x4dd924u: goto label_4dd924;
        case 0x4dd928u: goto label_4dd928;
        case 0x4dd92cu: goto label_4dd92c;
        case 0x4dd930u: goto label_4dd930;
        case 0x4dd934u: goto label_4dd934;
        case 0x4dd938u: goto label_4dd938;
        case 0x4dd93cu: goto label_4dd93c;
        case 0x4dd940u: goto label_4dd940;
        case 0x4dd944u: goto label_4dd944;
        case 0x4dd948u: goto label_4dd948;
        case 0x4dd94cu: goto label_4dd94c;
        case 0x4dd950u: goto label_4dd950;
        case 0x4dd954u: goto label_4dd954;
        case 0x4dd958u: goto label_4dd958;
        case 0x4dd95cu: goto label_4dd95c;
        case 0x4dd960u: goto label_4dd960;
        case 0x4dd964u: goto label_4dd964;
        case 0x4dd968u: goto label_4dd968;
        case 0x4dd96cu: goto label_4dd96c;
        case 0x4dd970u: goto label_4dd970;
        case 0x4dd974u: goto label_4dd974;
        case 0x4dd978u: goto label_4dd978;
        case 0x4dd97cu: goto label_4dd97c;
        case 0x4dd980u: goto label_4dd980;
        case 0x4dd984u: goto label_4dd984;
        case 0x4dd988u: goto label_4dd988;
        case 0x4dd98cu: goto label_4dd98c;
        case 0x4dd990u: goto label_4dd990;
        case 0x4dd994u: goto label_4dd994;
        case 0x4dd998u: goto label_4dd998;
        case 0x4dd99cu: goto label_4dd99c;
        case 0x4dd9a0u: goto label_4dd9a0;
        case 0x4dd9a4u: goto label_4dd9a4;
        case 0x4dd9a8u: goto label_4dd9a8;
        case 0x4dd9acu: goto label_4dd9ac;
        case 0x4dd9b0u: goto label_4dd9b0;
        case 0x4dd9b4u: goto label_4dd9b4;
        case 0x4dd9b8u: goto label_4dd9b8;
        case 0x4dd9bcu: goto label_4dd9bc;
        case 0x4dd9c0u: goto label_4dd9c0;
        case 0x4dd9c4u: goto label_4dd9c4;
        case 0x4dd9c8u: goto label_4dd9c8;
        case 0x4dd9ccu: goto label_4dd9cc;
        case 0x4dd9d0u: goto label_4dd9d0;
        case 0x4dd9d4u: goto label_4dd9d4;
        case 0x4dd9d8u: goto label_4dd9d8;
        case 0x4dd9dcu: goto label_4dd9dc;
        case 0x4dd9e0u: goto label_4dd9e0;
        case 0x4dd9e4u: goto label_4dd9e4;
        case 0x4dd9e8u: goto label_4dd9e8;
        case 0x4dd9ecu: goto label_4dd9ec;
        case 0x4dd9f0u: goto label_4dd9f0;
        case 0x4dd9f4u: goto label_4dd9f4;
        case 0x4dd9f8u: goto label_4dd9f8;
        case 0x4dd9fcu: goto label_4dd9fc;
        case 0x4dda00u: goto label_4dda00;
        case 0x4dda04u: goto label_4dda04;
        case 0x4dda08u: goto label_4dda08;
        case 0x4dda0cu: goto label_4dda0c;
        case 0x4dda10u: goto label_4dda10;
        case 0x4dda14u: goto label_4dda14;
        case 0x4dda18u: goto label_4dda18;
        case 0x4dda1cu: goto label_4dda1c;
        case 0x4dda20u: goto label_4dda20;
        case 0x4dda24u: goto label_4dda24;
        case 0x4dda28u: goto label_4dda28;
        case 0x4dda2cu: goto label_4dda2c;
        case 0x4dda30u: goto label_4dda30;
        case 0x4dda34u: goto label_4dda34;
        case 0x4dda38u: goto label_4dda38;
        case 0x4dda3cu: goto label_4dda3c;
        case 0x4dda40u: goto label_4dda40;
        case 0x4dda44u: goto label_4dda44;
        case 0x4dda48u: goto label_4dda48;
        case 0x4dda4cu: goto label_4dda4c;
        case 0x4dda50u: goto label_4dda50;
        case 0x4dda54u: goto label_4dda54;
        case 0x4dda58u: goto label_4dda58;
        case 0x4dda5cu: goto label_4dda5c;
        case 0x4dda60u: goto label_4dda60;
        case 0x4dda64u: goto label_4dda64;
        case 0x4dda68u: goto label_4dda68;
        case 0x4dda6cu: goto label_4dda6c;
        case 0x4dda70u: goto label_4dda70;
        case 0x4dda74u: goto label_4dda74;
        case 0x4dda78u: goto label_4dda78;
        case 0x4dda7cu: goto label_4dda7c;
        case 0x4dda80u: goto label_4dda80;
        case 0x4dda84u: goto label_4dda84;
        case 0x4dda88u: goto label_4dda88;
        case 0x4dda8cu: goto label_4dda8c;
        case 0x4dda90u: goto label_4dda90;
        case 0x4dda94u: goto label_4dda94;
        case 0x4dda98u: goto label_4dda98;
        case 0x4dda9cu: goto label_4dda9c;
        case 0x4ddaa0u: goto label_4ddaa0;
        case 0x4ddaa4u: goto label_4ddaa4;
        case 0x4ddaa8u: goto label_4ddaa8;
        case 0x4ddaacu: goto label_4ddaac;
        case 0x4ddab0u: goto label_4ddab0;
        case 0x4ddab4u: goto label_4ddab4;
        case 0x4ddab8u: goto label_4ddab8;
        case 0x4ddabcu: goto label_4ddabc;
        case 0x4ddac0u: goto label_4ddac0;
        case 0x4ddac4u: goto label_4ddac4;
        case 0x4ddac8u: goto label_4ddac8;
        case 0x4ddaccu: goto label_4ddacc;
        case 0x4ddad0u: goto label_4ddad0;
        case 0x4ddad4u: goto label_4ddad4;
        case 0x4ddad8u: goto label_4ddad8;
        case 0x4ddadcu: goto label_4ddadc;
        case 0x4ddae0u: goto label_4ddae0;
        case 0x4ddae4u: goto label_4ddae4;
        case 0x4ddae8u: goto label_4ddae8;
        case 0x4ddaecu: goto label_4ddaec;
        default: break;
    }

    ctx->pc = 0x4dd680u;

label_4dd680:
    // 0x4dd680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dd680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dd684:
    // 0x4dd684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dd684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dd688:
    // 0x4dd688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dd688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dd68c:
    // 0x4dd68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dd68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dd690:
    // 0x4dd690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dd690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd694:
    // 0x4dd694: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4dd698:
    if (ctx->pc == 0x4DD698u) {
        ctx->pc = 0x4DD698u;
            // 0x4dd698: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD69Cu;
        goto label_4dd69c;
    }
    ctx->pc = 0x4DD694u;
    {
        const bool branch_taken_0x4dd694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD694u;
            // 0x4dd698: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd694) {
            ctx->pc = 0x4DD7C8u;
            goto label_4dd7c8;
        }
    }
    ctx->pc = 0x4DD69Cu;
label_4dd69c:
    // 0x4dd69c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dd6a0:
    // 0x4dd6a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dd6a4:
    // 0x4dd6a4: 0x24632ed0  addiu       $v1, $v1, 0x2ED0
    ctx->pc = 0x4dd6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11984));
label_4dd6a8:
    // 0x4dd6a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4dd6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4dd6ac:
    // 0x4dd6ac: 0x24422f08  addiu       $v0, $v0, 0x2F08
    ctx->pc = 0x4dd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12040));
label_4dd6b0:
    // 0x4dd6b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dd6b4:
    // 0x4dd6b4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4dd6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4dd6b8:
    // 0x4dd6b8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4dd6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4dd6bc:
    // 0x4dd6bc: 0xc0407c0  jal         func_101F00
label_4dd6c0:
    if (ctx->pc == 0x4DD6C0u) {
        ctx->pc = 0x4DD6C0u;
            // 0x4dd6c0: 0x24a5d7e0  addiu       $a1, $a1, -0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957024));
        ctx->pc = 0x4DD6C4u;
        goto label_4dd6c4;
    }
    ctx->pc = 0x4DD6BCu;
    SET_GPR_U32(ctx, 31, 0x4DD6C4u);
    ctx->pc = 0x4DD6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD6BCu;
            // 0x4dd6c0: 0x24a5d7e0  addiu       $a1, $a1, -0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD6C4u; }
        if (ctx->pc != 0x4DD6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD6C4u; }
        if (ctx->pc != 0x4DD6C4u) { return; }
    }
    ctx->pc = 0x4DD6C4u;
label_4dd6c4:
    // 0x4dd6c4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4dd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4dd6c8:
    // 0x4dd6c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4dd6cc:
    if (ctx->pc == 0x4DD6CCu) {
        ctx->pc = 0x4DD6CCu;
            // 0x4dd6cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4DD6D0u;
        goto label_4dd6d0;
    }
    ctx->pc = 0x4DD6C8u;
    {
        const bool branch_taken_0x4dd6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd6c8) {
            ctx->pc = 0x4DD6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD6C8u;
            // 0x4dd6cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD6DCu;
            goto label_4dd6dc;
        }
    }
    ctx->pc = 0x4DD6D0u;
label_4dd6d0:
    // 0x4dd6d0: 0xc07507c  jal         func_1D41F0
label_4dd6d4:
    if (ctx->pc == 0x4DD6D4u) {
        ctx->pc = 0x4DD6D4u;
            // 0x4dd6d4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4DD6D8u;
        goto label_4dd6d8;
    }
    ctx->pc = 0x4DD6D0u;
    SET_GPR_U32(ctx, 31, 0x4DD6D8u);
    ctx->pc = 0x4DD6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD6D0u;
            // 0x4dd6d4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD6D8u; }
        if (ctx->pc != 0x4DD6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD6D8u; }
        if (ctx->pc != 0x4DD6D8u) { return; }
    }
    ctx->pc = 0x4DD6D8u;
label_4dd6d8:
    // 0x4dd6d8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4dd6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4dd6dc:
    // 0x4dd6dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4dd6e0:
    if (ctx->pc == 0x4DD6E0u) {
        ctx->pc = 0x4DD6E0u;
            // 0x4dd6e0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4DD6E4u;
        goto label_4dd6e4;
    }
    ctx->pc = 0x4DD6DCu;
    {
        const bool branch_taken_0x4dd6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd6dc) {
            ctx->pc = 0x4DD6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD6DCu;
            // 0x4dd6e0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD70Cu;
            goto label_4dd70c;
        }
    }
    ctx->pc = 0x4DD6E4u;
label_4dd6e4:
    // 0x4dd6e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4dd6e8:
    if (ctx->pc == 0x4DD6E8u) {
        ctx->pc = 0x4DD6ECu;
        goto label_4dd6ec;
    }
    ctx->pc = 0x4DD6E4u;
    {
        const bool branch_taken_0x4dd6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd6e4) {
            ctx->pc = 0x4DD708u;
            goto label_4dd708;
        }
    }
    ctx->pc = 0x4DD6ECu;
label_4dd6ec:
    // 0x4dd6ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4dd6f0:
    if (ctx->pc == 0x4DD6F0u) {
        ctx->pc = 0x4DD6F4u;
        goto label_4dd6f4;
    }
    ctx->pc = 0x4DD6ECu;
    {
        const bool branch_taken_0x4dd6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd6ec) {
            ctx->pc = 0x4DD708u;
            goto label_4dd708;
        }
    }
    ctx->pc = 0x4DD6F4u;
label_4dd6f4:
    // 0x4dd6f4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4dd6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4dd6f8:
    // 0x4dd6f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4dd6fc:
    if (ctx->pc == 0x4DD6FCu) {
        ctx->pc = 0x4DD700u;
        goto label_4dd700;
    }
    ctx->pc = 0x4DD6F8u;
    {
        const bool branch_taken_0x4dd6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd6f8) {
            ctx->pc = 0x4DD708u;
            goto label_4dd708;
        }
    }
    ctx->pc = 0x4DD700u;
label_4dd700:
    // 0x4dd700: 0xc0400a8  jal         func_1002A0
label_4dd704:
    if (ctx->pc == 0x4DD704u) {
        ctx->pc = 0x4DD708u;
        goto label_4dd708;
    }
    ctx->pc = 0x4DD700u;
    SET_GPR_U32(ctx, 31, 0x4DD708u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD708u; }
        if (ctx->pc != 0x4DD708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD708u; }
        if (ctx->pc != 0x4DD708u) { return; }
    }
    ctx->pc = 0x4DD708u;
label_4dd708:
    // 0x4dd708: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4dd708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4dd70c:
    // 0x4dd70c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4dd710:
    if (ctx->pc == 0x4DD710u) {
        ctx->pc = 0x4DD710u;
            // 0x4dd710: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4DD714u;
        goto label_4dd714;
    }
    ctx->pc = 0x4DD70Cu;
    {
        const bool branch_taken_0x4dd70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd70c) {
            ctx->pc = 0x4DD710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD70Cu;
            // 0x4dd710: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD73Cu;
            goto label_4dd73c;
        }
    }
    ctx->pc = 0x4DD714u;
label_4dd714:
    // 0x4dd714: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4dd718:
    if (ctx->pc == 0x4DD718u) {
        ctx->pc = 0x4DD71Cu;
        goto label_4dd71c;
    }
    ctx->pc = 0x4DD714u;
    {
        const bool branch_taken_0x4dd714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd714) {
            ctx->pc = 0x4DD738u;
            goto label_4dd738;
        }
    }
    ctx->pc = 0x4DD71Cu;
label_4dd71c:
    // 0x4dd71c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4dd720:
    if (ctx->pc == 0x4DD720u) {
        ctx->pc = 0x4DD724u;
        goto label_4dd724;
    }
    ctx->pc = 0x4DD71Cu;
    {
        const bool branch_taken_0x4dd71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd71c) {
            ctx->pc = 0x4DD738u;
            goto label_4dd738;
        }
    }
    ctx->pc = 0x4DD724u;
label_4dd724:
    // 0x4dd724: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4dd724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4dd728:
    // 0x4dd728: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4dd72c:
    if (ctx->pc == 0x4DD72Cu) {
        ctx->pc = 0x4DD730u;
        goto label_4dd730;
    }
    ctx->pc = 0x4DD728u;
    {
        const bool branch_taken_0x4dd728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd728) {
            ctx->pc = 0x4DD738u;
            goto label_4dd738;
        }
    }
    ctx->pc = 0x4DD730u;
label_4dd730:
    // 0x4dd730: 0xc0400a8  jal         func_1002A0
label_4dd734:
    if (ctx->pc == 0x4DD734u) {
        ctx->pc = 0x4DD738u;
        goto label_4dd738;
    }
    ctx->pc = 0x4DD730u;
    SET_GPR_U32(ctx, 31, 0x4DD738u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD738u; }
        if (ctx->pc != 0x4DD738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD738u; }
        if (ctx->pc != 0x4DD738u) { return; }
    }
    ctx->pc = 0x4DD738u;
label_4dd738:
    // 0x4dd738: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4dd738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4dd73c:
    // 0x4dd73c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4dd740:
    if (ctx->pc == 0x4DD740u) {
        ctx->pc = 0x4DD744u;
        goto label_4dd744;
    }
    ctx->pc = 0x4DD73Cu;
    {
        const bool branch_taken_0x4dd73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd73c) {
            ctx->pc = 0x4DD758u;
            goto label_4dd758;
        }
    }
    ctx->pc = 0x4DD744u;
label_4dd744:
    // 0x4dd744: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dd744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dd748:
    // 0x4dd748: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4dd748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4dd74c:
    // 0x4dd74c: 0x24632eb8  addiu       $v1, $v1, 0x2EB8
    ctx->pc = 0x4dd74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11960));
label_4dd750:
    // 0x4dd750: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4dd750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4dd754:
    // 0x4dd754: 0xac40aa70  sw          $zero, -0x5590($v0)
    ctx->pc = 0x4dd754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945392), GPR_U32(ctx, 0));
label_4dd758:
    // 0x4dd758: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4dd75c:
    if (ctx->pc == 0x4DD75Cu) {
        ctx->pc = 0x4DD75Cu;
            // 0x4dd75c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4DD760u;
        goto label_4dd760;
    }
    ctx->pc = 0x4DD758u;
    {
        const bool branch_taken_0x4dd758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd758) {
            ctx->pc = 0x4DD75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD758u;
            // 0x4dd75c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD7B4u;
            goto label_4dd7b4;
        }
    }
    ctx->pc = 0x4DD760u;
label_4dd760:
    // 0x4dd760: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4dd760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4dd764:
    // 0x4dd764: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4dd764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4dd768:
    // 0x4dd768: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dd768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4dd76c:
    // 0x4dd76c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4dd76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4dd770:
    // 0x4dd770: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4dd774:
    if (ctx->pc == 0x4DD774u) {
        ctx->pc = 0x4DD774u;
            // 0x4dd774: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4DD778u;
        goto label_4dd778;
    }
    ctx->pc = 0x4DD770u;
    {
        const bool branch_taken_0x4dd770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd770) {
            ctx->pc = 0x4DD774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD770u;
            // 0x4dd774: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD78Cu;
            goto label_4dd78c;
        }
    }
    ctx->pc = 0x4DD778u;
label_4dd778:
    // 0x4dd778: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dd778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dd77c:
    // 0x4dd77c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dd77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dd780:
    // 0x4dd780: 0x320f809  jalr        $t9
label_4dd784:
    if (ctx->pc == 0x4DD784u) {
        ctx->pc = 0x4DD784u;
            // 0x4dd784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DD788u;
        goto label_4dd788;
    }
    ctx->pc = 0x4DD780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD788u);
        ctx->pc = 0x4DD784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD780u;
            // 0x4dd784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD788u; }
            if (ctx->pc != 0x4DD788u) { return; }
        }
        }
    }
    ctx->pc = 0x4DD788u;
label_4dd788:
    // 0x4dd788: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4dd788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4dd78c:
    // 0x4dd78c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4dd790:
    if (ctx->pc == 0x4DD790u) {
        ctx->pc = 0x4DD790u;
            // 0x4dd790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD794u;
        goto label_4dd794;
    }
    ctx->pc = 0x4DD78Cu;
    {
        const bool branch_taken_0x4dd78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd78c) {
            ctx->pc = 0x4DD790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD78Cu;
            // 0x4dd790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD7A8u;
            goto label_4dd7a8;
        }
    }
    ctx->pc = 0x4DD794u;
label_4dd794:
    // 0x4dd794: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dd794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dd798:
    // 0x4dd798: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dd798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dd79c:
    // 0x4dd79c: 0x320f809  jalr        $t9
label_4dd7a0:
    if (ctx->pc == 0x4DD7A0u) {
        ctx->pc = 0x4DD7A0u;
            // 0x4dd7a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DD7A4u;
        goto label_4dd7a4;
    }
    ctx->pc = 0x4DD79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD7A4u);
        ctx->pc = 0x4DD7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD79Cu;
            // 0x4dd7a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD7A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD7A4u; }
            if (ctx->pc != 0x4DD7A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DD7A4u;
label_4dd7a4:
    // 0x4dd7a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dd7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dd7a8:
    // 0x4dd7a8: 0xc075bf8  jal         func_1D6FE0
label_4dd7ac:
    if (ctx->pc == 0x4DD7ACu) {
        ctx->pc = 0x4DD7ACu;
            // 0x4dd7ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD7B0u;
        goto label_4dd7b0;
    }
    ctx->pc = 0x4DD7A8u;
    SET_GPR_U32(ctx, 31, 0x4DD7B0u);
    ctx->pc = 0x4DD7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD7A8u;
            // 0x4dd7ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD7B0u; }
        if (ctx->pc != 0x4DD7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD7B0u; }
        if (ctx->pc != 0x4DD7B0u) { return; }
    }
    ctx->pc = 0x4DD7B0u;
label_4dd7b0:
    // 0x4dd7b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4dd7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4dd7b4:
    // 0x4dd7b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dd7b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dd7b8:
    // 0x4dd7b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4dd7bc:
    if (ctx->pc == 0x4DD7BCu) {
        ctx->pc = 0x4DD7BCu;
            // 0x4dd7bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD7C0u;
        goto label_4dd7c0;
    }
    ctx->pc = 0x4DD7B8u;
    {
        const bool branch_taken_0x4dd7b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dd7b8) {
            ctx->pc = 0x4DD7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD7B8u;
            // 0x4dd7bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD7CCu;
            goto label_4dd7cc;
        }
    }
    ctx->pc = 0x4DD7C0u;
label_4dd7c0:
    // 0x4dd7c0: 0xc0400a8  jal         func_1002A0
label_4dd7c4:
    if (ctx->pc == 0x4DD7C4u) {
        ctx->pc = 0x4DD7C4u;
            // 0x4dd7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD7C8u;
        goto label_4dd7c8;
    }
    ctx->pc = 0x4DD7C0u;
    SET_GPR_U32(ctx, 31, 0x4DD7C8u);
    ctx->pc = 0x4DD7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD7C0u;
            // 0x4dd7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD7C8u; }
        if (ctx->pc != 0x4DD7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD7C8u; }
        if (ctx->pc != 0x4DD7C8u) { return; }
    }
    ctx->pc = 0x4DD7C8u;
label_4dd7c8:
    // 0x4dd7c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dd7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dd7cc:
    // 0x4dd7cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dd7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd7d0:
    // 0x4dd7d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dd7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd7d4:
    // 0x4dd7d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dd7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd7d8:
    // 0x4dd7d8: 0x3e00008  jr          $ra
label_4dd7dc:
    if (ctx->pc == 0x4DD7DCu) {
        ctx->pc = 0x4DD7DCu;
            // 0x4dd7dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DD7E0u;
        goto label_4dd7e0;
    }
    ctx->pc = 0x4DD7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD7D8u;
            // 0x4dd7dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DD7E0u;
label_4dd7e0:
    // 0x4dd7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dd7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dd7e4:
    // 0x4dd7e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dd7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dd7e8:
    // 0x4dd7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dd7ec:
    // 0x4dd7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dd7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dd7f0:
    // 0x4dd7f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dd7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd7f4:
    // 0x4dd7f4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4dd7f8:
    if (ctx->pc == 0x4DD7F8u) {
        ctx->pc = 0x4DD7F8u;
            // 0x4dd7f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD7FCu;
        goto label_4dd7fc;
    }
    ctx->pc = 0x4DD7F4u;
    {
        const bool branch_taken_0x4dd7f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD7F4u;
            // 0x4dd7f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd7f4) {
            ctx->pc = 0x4DD848u;
            goto label_4dd848;
        }
    }
    ctx->pc = 0x4DD7FCu;
label_4dd7fc:
    // 0x4dd7fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dd7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dd800:
    // 0x4dd800: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dd800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dd804:
    // 0x4dd804: 0x24632f70  addiu       $v1, $v1, 0x2F70
    ctx->pc = 0x4dd804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12144));
label_4dd808:
    // 0x4dd808: 0x24422fb0  addiu       $v0, $v0, 0x2FB0
    ctx->pc = 0x4dd808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12208));
label_4dd80c:
    // 0x4dd80c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dd80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dd810:
    // 0x4dd810: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4dd810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4dd814:
    // 0x4dd814: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dd814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dd818:
    // 0x4dd818: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4dd818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4dd81c:
    // 0x4dd81c: 0x320f809  jalr        $t9
label_4dd820:
    if (ctx->pc == 0x4DD820u) {
        ctx->pc = 0x4DD824u;
        goto label_4dd824;
    }
    ctx->pc = 0x4DD81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD824u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD824u; }
            if (ctx->pc != 0x4DD824u) { return; }
        }
        }
    }
    ctx->pc = 0x4DD824u;
label_4dd824:
    // 0x4dd824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dd824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dd828:
    // 0x4dd828: 0xc12e684  jal         func_4B9A10
label_4dd82c:
    if (ctx->pc == 0x4DD82Cu) {
        ctx->pc = 0x4DD82Cu;
            // 0x4dd82c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD830u;
        goto label_4dd830;
    }
    ctx->pc = 0x4DD828u;
    SET_GPR_U32(ctx, 31, 0x4DD830u);
    ctx->pc = 0x4DD82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD828u;
            // 0x4dd82c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD830u; }
        if (ctx->pc != 0x4DD830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD830u; }
        if (ctx->pc != 0x4DD830u) { return; }
    }
    ctx->pc = 0x4DD830u;
label_4dd830:
    // 0x4dd830: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4dd830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4dd834:
    // 0x4dd834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dd834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dd838:
    // 0x4dd838: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4dd83c:
    if (ctx->pc == 0x4DD83Cu) {
        ctx->pc = 0x4DD83Cu;
            // 0x4dd83c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD840u;
        goto label_4dd840;
    }
    ctx->pc = 0x4DD838u;
    {
        const bool branch_taken_0x4dd838 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dd838) {
            ctx->pc = 0x4DD83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD838u;
            // 0x4dd83c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD84Cu;
            goto label_4dd84c;
        }
    }
    ctx->pc = 0x4DD840u;
label_4dd840:
    // 0x4dd840: 0xc0400a8  jal         func_1002A0
label_4dd844:
    if (ctx->pc == 0x4DD844u) {
        ctx->pc = 0x4DD844u;
            // 0x4dd844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD848u;
        goto label_4dd848;
    }
    ctx->pc = 0x4DD840u;
    SET_GPR_U32(ctx, 31, 0x4DD848u);
    ctx->pc = 0x4DD844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD840u;
            // 0x4dd844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD848u; }
        if (ctx->pc != 0x4DD848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD848u; }
        if (ctx->pc != 0x4DD848u) { return; }
    }
    ctx->pc = 0x4DD848u;
label_4dd848:
    // 0x4dd848: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dd848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dd84c:
    // 0x4dd84c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dd84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd850:
    // 0x4dd850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dd850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd854:
    // 0x4dd854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dd854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd858:
    // 0x4dd858: 0x3e00008  jr          $ra
label_4dd85c:
    if (ctx->pc == 0x4DD85Cu) {
        ctx->pc = 0x4DD85Cu;
            // 0x4dd85c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DD860u;
        goto label_4dd860;
    }
    ctx->pc = 0x4DD858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD858u;
            // 0x4dd85c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DD860u;
label_4dd860:
    // 0x4dd860: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4dd860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4dd864:
    // 0x4dd864: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4dd864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4dd868:
    // 0x4dd868: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4dd868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4dd86c:
    // 0x4dd86c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4dd86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4dd870:
    // 0x4dd870: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4dd870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4dd874:
    // 0x4dd874: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4dd874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4dd878:
    // 0x4dd878: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4dd878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4dd87c:
    // 0x4dd87c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4dd87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4dd880:
    // 0x4dd880: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4dd880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4dd884:
    // 0x4dd884: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4dd884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4dd888:
    // 0x4dd888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4dd888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4dd88c:
    // 0x4dd88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4dd88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4dd890:
    // 0x4dd890: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4dd890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4dd894:
    // 0x4dd894: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4dd894u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4dd898:
    // 0x4dd898: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4dd89c:
    if (ctx->pc == 0x4DD89Cu) {
        ctx->pc = 0x4DD89Cu;
            // 0x4dd89c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD8A0u;
        goto label_4dd8a0;
    }
    ctx->pc = 0x4DD898u;
    {
        const bool branch_taken_0x4dd898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DD89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD898u;
            // 0x4dd89c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd898) {
            ctx->pc = 0x4DD8FCu;
            goto label_4dd8fc;
        }
    }
    ctx->pc = 0x4DD8A0u;
label_4dd8a0:
    // 0x4dd8a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4dd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4dd8a4:
    // 0x4dd8a4: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4dd8a8:
    if (ctx->pc == 0x4DD8A8u) {
        ctx->pc = 0x4DD8A8u;
            // 0x4dd8a8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DD8ACu;
        goto label_4dd8ac;
    }
    ctx->pc = 0x4DD8A4u;
    {
        const bool branch_taken_0x4dd8a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4dd8a4) {
            ctx->pc = 0x4DD8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD8A4u;
            // 0x4dd8a8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD8E8u;
            goto label_4dd8e8;
        }
    }
    ctx->pc = 0x4DD8ACu;
label_4dd8ac:
    // 0x4dd8ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4dd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4dd8b0:
    // 0x4dd8b0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4dd8b4:
    if (ctx->pc == 0x4DD8B4u) {
        ctx->pc = 0x4DD8B8u;
        goto label_4dd8b8;
    }
    ctx->pc = 0x4DD8B0u;
    {
        const bool branch_taken_0x4dd8b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4dd8b0) {
            ctx->pc = 0x4DD8C0u;
            goto label_4dd8c0;
        }
    }
    ctx->pc = 0x4DD8B8u;
label_4dd8b8:
    // 0x4dd8b8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_4dd8bc:
    if (ctx->pc == 0x4DD8BCu) {
        ctx->pc = 0x4DD8BCu;
            // 0x4dd8bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4DD8C0u;
        goto label_4dd8c0;
    }
    ctx->pc = 0x4DD8B8u;
    {
        const bool branch_taken_0x4dd8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD8B8u;
            // 0x4dd8bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd8b8) {
            ctx->pc = 0x4DDAB8u;
            goto label_4ddab8;
        }
    }
    ctx->pc = 0x4DD8C0u;
label_4dd8c0:
    // 0x4dd8c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dd8c4:
    // 0x4dd8c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dd8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dd8c8:
    // 0x4dd8c8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4dd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4dd8cc:
    // 0x4dd8cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4dd8ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4dd8d0:
    // 0x4dd8d0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4dd8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4dd8d4:
    // 0x4dd8d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4dd8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4dd8d8:
    // 0x4dd8d8: 0x320f809  jalr        $t9
label_4dd8dc:
    if (ctx->pc == 0x4DD8DCu) {
        ctx->pc = 0x4DD8DCu;
            // 0x4dd8dc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4DD8E0u;
        goto label_4dd8e0;
    }
    ctx->pc = 0x4DD8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD8E0u);
        ctx->pc = 0x4DD8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD8D8u;
            // 0x4dd8dc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD8E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD8E0u; }
            if (ctx->pc != 0x4DD8E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4DD8E0u;
label_4dd8e0:
    // 0x4dd8e0: 0x10000074  b           . + 4 + (0x74 << 2)
label_4dd8e4:
    if (ctx->pc == 0x4DD8E4u) {
        ctx->pc = 0x4DD8E8u;
        goto label_4dd8e8;
    }
    ctx->pc = 0x4DD8E0u;
    {
        const bool branch_taken_0x4dd8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd8e0) {
            ctx->pc = 0x4DDAB4u;
            goto label_4ddab4;
        }
    }
    ctx->pc = 0x4DD8E8u;
label_4dd8e8:
    // 0x4dd8e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4dd8e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4dd8ec:
    // 0x4dd8ec: 0x320f809  jalr        $t9
label_4dd8f0:
    if (ctx->pc == 0x4DD8F0u) {
        ctx->pc = 0x4DD8F4u;
        goto label_4dd8f4;
    }
    ctx->pc = 0x4DD8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD8F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD8F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD8F4u; }
            if (ctx->pc != 0x4DD8F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DD8F4u;
label_4dd8f4:
    // 0x4dd8f4: 0x1000006f  b           . + 4 + (0x6F << 2)
label_4dd8f8:
    if (ctx->pc == 0x4DD8F8u) {
        ctx->pc = 0x4DD8FCu;
        goto label_4dd8fc;
    }
    ctx->pc = 0x4DD8F4u;
    {
        const bool branch_taken_0x4dd8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd8f4) {
            ctx->pc = 0x4DDAB4u;
            goto label_4ddab4;
        }
    }
    ctx->pc = 0x4DD8FCu;
label_4dd8fc:
    // 0x4dd8fc: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4dd8fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4dd900:
    // 0x4dd900: 0x12e0006c  beqz        $s7, . + 4 + (0x6C << 2)
label_4dd904:
    if (ctx->pc == 0x4DD904u) {
        ctx->pc = 0x4DD908u;
        goto label_4dd908;
    }
    ctx->pc = 0x4DD900u;
    {
        const bool branch_taken_0x4dd900 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd900) {
            ctx->pc = 0x4DDAB4u;
            goto label_4ddab4;
        }
    }
    ctx->pc = 0x4DD908u;
label_4dd908:
    // 0x4dd908: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4dd908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4dd90c:
    // 0x4dd90c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4dd90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4dd910:
    // 0x4dd910: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4dd910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4dd914:
    // 0x4dd914: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4dd914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4dd918:
    // 0x4dd918: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4dd918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4dd91c:
    // 0x4dd91c: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x4dd91cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_4dd920:
    // 0x4dd920: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4dd920u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd924:
    // 0x4dd924: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4dd924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd928:
    // 0x4dd928: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x4dd928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4dd92c:
    // 0x4dd92c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dd930:
    // 0x4dd930: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4dd930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4dd934:
    // 0x4dd934: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4dd934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4dd938:
    // 0x4dd938: 0xc4548080  lwc1        $f20, -0x7F80($v0)
    ctx->pc = 0x4dd938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4dd93c:
    // 0x4dd93c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4dd93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4dd940:
    // 0x4dd940: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4dd940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4dd944:
    // 0x4dd944: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4dd944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dd948:
    // 0x4dd948: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4dd948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4dd94c:
    // 0x4dd94c: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x4dd94cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4dd950:
    // 0x4dd950: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4dd950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4dd954:
    // 0x4dd954: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4dd954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4dd958:
    // 0x4dd958: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4dd958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4dd95c:
    // 0x4dd95c: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4dd95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4dd960:
    // 0x4dd960: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4dd960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4dd964:
    // 0x4dd964: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4dd964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4dd968:
    // 0x4dd968: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4dd968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4dd96c:
    // 0x4dd96c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4dd96cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dd970:
    // 0x4dd970: 0xc0d639c  jal         func_358E70
label_4dd974:
    if (ctx->pc == 0x4DD974u) {
        ctx->pc = 0x4DD974u;
            // 0x4dd974: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x4DD978u;
        goto label_4dd978;
    }
    ctx->pc = 0x4DD970u;
    SET_GPR_U32(ctx, 31, 0x4DD978u);
    ctx->pc = 0x4DD974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD970u;
            // 0x4dd974: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD978u; }
        if (ctx->pc != 0x4DD978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD978u; }
        if (ctx->pc != 0x4DD978u) { return; }
    }
    ctx->pc = 0x4DD978u;
label_4dd978:
    // 0x4dd978: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4dd97c:
    if (ctx->pc == 0x4DD97Cu) {
        ctx->pc = 0x4DD980u;
        goto label_4dd980;
    }
    ctx->pc = 0x4DD978u;
    {
        const bool branch_taken_0x4dd978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd978) {
            ctx->pc = 0x4DDA60u;
            goto label_4dda60;
        }
    }
    ctx->pc = 0x4DD980u;
label_4dd980:
    // 0x4dd980: 0xc0d1c14  jal         func_347050
label_4dd984:
    if (ctx->pc == 0x4DD984u) {
        ctx->pc = 0x4DD984u;
            // 0x4dd984: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD988u;
        goto label_4dd988;
    }
    ctx->pc = 0x4DD980u;
    SET_GPR_U32(ctx, 31, 0x4DD988u);
    ctx->pc = 0x4DD984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD980u;
            // 0x4dd984: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD988u; }
        if (ctx->pc != 0x4DD988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD988u; }
        if (ctx->pc != 0x4DD988u) { return; }
    }
    ctx->pc = 0x4DD988u;
label_4dd988:
    // 0x4dd988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4dd988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dd98c:
    // 0x4dd98c: 0xc04f278  jal         func_13C9E0
label_4dd990:
    if (ctx->pc == 0x4DD990u) {
        ctx->pc = 0x4DD990u;
            // 0x4dd990: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4DD994u;
        goto label_4dd994;
    }
    ctx->pc = 0x4DD98Cu;
    SET_GPR_U32(ctx, 31, 0x4DD994u);
    ctx->pc = 0x4DD990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD98Cu;
            // 0x4dd990: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD994u; }
        if (ctx->pc != 0x4DD994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD994u; }
        if (ctx->pc != 0x4DD994u) { return; }
    }
    ctx->pc = 0x4DD994u;
label_4dd994:
    // 0x4dd994: 0xc0d1c10  jal         func_347040
label_4dd998:
    if (ctx->pc == 0x4DD998u) {
        ctx->pc = 0x4DD998u;
            // 0x4dd998: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD99Cu;
        goto label_4dd99c;
    }
    ctx->pc = 0x4DD994u;
    SET_GPR_U32(ctx, 31, 0x4DD99Cu);
    ctx->pc = 0x4DD998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD994u;
            // 0x4dd998: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD99Cu; }
        if (ctx->pc != 0x4DD99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD99Cu; }
        if (ctx->pc != 0x4DD99Cu) { return; }
    }
    ctx->pc = 0x4DD99Cu;
label_4dd99c:
    // 0x4dd99c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4dd99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dd9a0:
    // 0x4dd9a0: 0xc04ce80  jal         func_133A00
label_4dd9a4:
    if (ctx->pc == 0x4DD9A4u) {
        ctx->pc = 0x4DD9A4u;
            // 0x4dd9a4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4DD9A8u;
        goto label_4dd9a8;
    }
    ctx->pc = 0x4DD9A0u;
    SET_GPR_U32(ctx, 31, 0x4DD9A8u);
    ctx->pc = 0x4DD9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD9A0u;
            // 0x4dd9a4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9A8u; }
        if (ctx->pc != 0x4DD9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9A8u; }
        if (ctx->pc != 0x4DD9A8u) { return; }
    }
    ctx->pc = 0x4DD9A8u;
label_4dd9a8:
    // 0x4dd9a8: 0xc0d4108  jal         func_350420
label_4dd9ac:
    if (ctx->pc == 0x4DD9ACu) {
        ctx->pc = 0x4DD9B0u;
        goto label_4dd9b0;
    }
    ctx->pc = 0x4DD9A8u;
    SET_GPR_U32(ctx, 31, 0x4DD9B0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9B0u; }
        if (ctx->pc != 0x4DD9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9B0u; }
        if (ctx->pc != 0x4DD9B0u) { return; }
    }
    ctx->pc = 0x4DD9B0u;
label_4dd9b0:
    // 0x4dd9b0: 0xc0b36b4  jal         func_2CDAD0
label_4dd9b4:
    if (ctx->pc == 0x4DD9B4u) {
        ctx->pc = 0x4DD9B4u;
            // 0x4dd9b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD9B8u;
        goto label_4dd9b8;
    }
    ctx->pc = 0x4DD9B0u;
    SET_GPR_U32(ctx, 31, 0x4DD9B8u);
    ctx->pc = 0x4DD9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD9B0u;
            // 0x4dd9b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9B8u; }
        if (ctx->pc != 0x4DD9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9B8u; }
        if (ctx->pc != 0x4DD9B8u) { return; }
    }
    ctx->pc = 0x4DD9B8u;
label_4dd9b8:
    // 0x4dd9b8: 0xc0b9c64  jal         func_2E7190
label_4dd9bc:
    if (ctx->pc == 0x4DD9BCu) {
        ctx->pc = 0x4DD9BCu;
            // 0x4dd9bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD9C0u;
        goto label_4dd9c0;
    }
    ctx->pc = 0x4DD9B8u;
    SET_GPR_U32(ctx, 31, 0x4DD9C0u);
    ctx->pc = 0x4DD9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD9B8u;
            // 0x4dd9bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9C0u; }
        if (ctx->pc != 0x4DD9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9C0u; }
        if (ctx->pc != 0x4DD9C0u) { return; }
    }
    ctx->pc = 0x4DD9C0u;
label_4dd9c0:
    // 0x4dd9c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4dd9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dd9c4:
    // 0x4dd9c4: 0xc0d4104  jal         func_350410
label_4dd9c8:
    if (ctx->pc == 0x4DD9C8u) {
        ctx->pc = 0x4DD9C8u;
            // 0x4dd9c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD9CCu;
        goto label_4dd9cc;
    }
    ctx->pc = 0x4DD9C4u;
    SET_GPR_U32(ctx, 31, 0x4DD9CCu);
    ctx->pc = 0x4DD9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD9C4u;
            // 0x4dd9c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9CCu; }
        if (ctx->pc != 0x4DD9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9CCu; }
        if (ctx->pc != 0x4DD9CCu) { return; }
    }
    ctx->pc = 0x4DD9CCu;
label_4dd9cc:
    // 0x4dd9cc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4dd9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4dd9d0:
    // 0x4dd9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dd9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dd9d4:
    // 0x4dd9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dd9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dd9d8:
    // 0x4dd9d8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4dd9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4dd9dc:
    // 0x4dd9dc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4dd9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dd9e0:
    // 0x4dd9e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4dd9e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd9e4:
    // 0x4dd9e4: 0xc0d40ac  jal         func_3502B0
label_4dd9e8:
    if (ctx->pc == 0x4DD9E8u) {
        ctx->pc = 0x4DD9E8u;
            // 0x4dd9e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4DD9ECu;
        goto label_4dd9ec;
    }
    ctx->pc = 0x4DD9E4u;
    SET_GPR_U32(ctx, 31, 0x4DD9ECu);
    ctx->pc = 0x4DD9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD9E4u;
            // 0x4dd9e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9ECu; }
        if (ctx->pc != 0x4DD9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD9ECu; }
        if (ctx->pc != 0x4DD9ECu) { return; }
    }
    ctx->pc = 0x4DD9ECu;
label_4dd9ec:
    // 0x4dd9ec: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4dd9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4dd9f0:
    // 0x4dd9f0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_4dd9f4:
    if (ctx->pc == 0x4DD9F4u) {
        ctx->pc = 0x4DD9F4u;
            // 0x4dd9f4: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4DD9F8u;
        goto label_4dd9f8;
    }
    ctx->pc = 0x4DD9F0u;
    {
        const bool branch_taken_0x4dd9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD9F0u;
            // 0x4dd9f4: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd9f0) {
            ctx->pc = 0x4DDA60u;
            goto label_4dda60;
        }
    }
    ctx->pc = 0x4DD9F8u;
label_4dd9f8:
    // 0x4dd9f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4dd9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4dd9fc:
    // 0x4dd9fc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4dd9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4dda00:
    // 0x4dda00: 0xc1376bc  jal         func_4DDAF0
label_4dda04:
    if (ctx->pc == 0x4DDA04u) {
        ctx->pc = 0x4DDA04u;
            // 0x4dda04: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4DDA08u;
        goto label_4dda08;
    }
    ctx->pc = 0x4DDA00u;
    SET_GPR_U32(ctx, 31, 0x4DDA08u);
    ctx->pc = 0x4DDA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDA00u;
            // 0x4dda04: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DDAF0u;
    if (runtime->hasFunction(0x4DDAF0u)) {
        auto targetFn = runtime->lookupFunction(0x4DDAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA08u; }
        if (ctx->pc != 0x4DDA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DDAF0_0x4ddaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA08u; }
        if (ctx->pc != 0x4DDA08u) { return; }
    }
    ctx->pc = 0x4DDA08u;
label_4dda08:
    // 0x4dda08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4dda08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4dda0c:
    // 0x4dda0c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4dda0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4dda10:
    // 0x4dda10: 0xc04cd60  jal         func_133580
label_4dda14:
    if (ctx->pc == 0x4DDA14u) {
        ctx->pc = 0x4DDA14u;
            // 0x4dda14: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4DDA18u;
        goto label_4dda18;
    }
    ctx->pc = 0x4DDA10u;
    SET_GPR_U32(ctx, 31, 0x4DDA18u);
    ctx->pc = 0x4DDA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDA10u;
            // 0x4dda14: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA18u; }
        if (ctx->pc != 0x4DDA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA18u; }
        if (ctx->pc != 0x4DDA18u) { return; }
    }
    ctx->pc = 0x4DDA18u;
label_4dda18:
    // 0x4dda18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dda18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4dda1c:
    // 0x4dda1c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4dda1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4dda20:
    // 0x4dda20: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4dda20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4dda24:
    // 0x4dda24: 0xc04e4a4  jal         func_139290
label_4dda28:
    if (ctx->pc == 0x4DDA28u) {
        ctx->pc = 0x4DDA28u;
            // 0x4dda28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DDA2Cu;
        goto label_4dda2c;
    }
    ctx->pc = 0x4DDA24u;
    SET_GPR_U32(ctx, 31, 0x4DDA2Cu);
    ctx->pc = 0x4DDA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDA24u;
            // 0x4dda28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA2Cu; }
        if (ctx->pc != 0x4DDA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA2Cu; }
        if (ctx->pc != 0x4DDA2Cu) { return; }
    }
    ctx->pc = 0x4DDA2Cu;
label_4dda2c:
    // 0x4dda2c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4dda2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4dda30:
    // 0x4dda30: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4dda30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4dda34:
    // 0x4dda34: 0x320f809  jalr        $t9
label_4dda38:
    if (ctx->pc == 0x4DDA38u) {
        ctx->pc = 0x4DDA38u;
            // 0x4dda38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DDA3Cu;
        goto label_4dda3c;
    }
    ctx->pc = 0x4DDA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DDA3Cu);
        ctx->pc = 0x4DDA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDA34u;
            // 0x4dda38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DDA3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA3Cu; }
            if (ctx->pc != 0x4DDA3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4DDA3Cu;
label_4dda3c:
    // 0x4dda3c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4dda3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4dda40:
    // 0x4dda40: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4dda40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4dda44:
    // 0x4dda44: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4dda44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4dda48:
    // 0x4dda48: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4dda48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4dda4c:
    // 0x4dda4c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4dda4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4dda50:
    // 0x4dda50: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4dda50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4dda54:
    // 0x4dda54: 0xc04cfcc  jal         func_133F30
label_4dda58:
    if (ctx->pc == 0x4DDA58u) {
        ctx->pc = 0x4DDA58u;
            // 0x4dda58: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DDA5Cu;
        goto label_4dda5c;
    }
    ctx->pc = 0x4DDA54u;
    SET_GPR_U32(ctx, 31, 0x4DDA5Cu);
    ctx->pc = 0x4DDA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDA54u;
            // 0x4dda58: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA5Cu; }
        if (ctx->pc != 0x4DDA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA5Cu; }
        if (ctx->pc != 0x4DDA5Cu) { return; }
    }
    ctx->pc = 0x4DDA5Cu;
label_4dda5c:
    // 0x4dda5c: 0x0  nop
    ctx->pc = 0x4dda5cu;
    // NOP
label_4dda60:
    // 0x4dda60: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4dda60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4dda64:
    // 0x4dda64: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x4dda64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4dda68:
    // 0x4dda68: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_4dda6c:
    if (ctx->pc == 0x4DDA6Cu) {
        ctx->pc = 0x4DDA6Cu;
            // 0x4dda6c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4DDA70u;
        goto label_4dda70;
    }
    ctx->pc = 0x4DDA68u;
    {
        const bool branch_taken_0x4dda68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DDA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDA68u;
            // 0x4dda6c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dda68) {
            ctx->pc = 0x4DD954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dd954;
        }
    }
    ctx->pc = 0x4DDA70u;
label_4dda70:
    // 0x4dda70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dda70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dda74:
    // 0x4dda74: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4dda74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4dda78:
    // 0x4dda78: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_4dda7c:
    if (ctx->pc == 0x4DDA7Cu) {
        ctx->pc = 0x4DDA80u;
        goto label_4dda80;
    }
    ctx->pc = 0x4DDA78u;
    {
        const bool branch_taken_0x4dda78 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4dda78) {
            ctx->pc = 0x4DDAB4u;
            goto label_4ddab4;
        }
    }
    ctx->pc = 0x4DDA80u;
label_4dda80:
    // 0x4dda80: 0xc04e738  jal         func_139CE0
label_4dda84:
    if (ctx->pc == 0x4DDA84u) {
        ctx->pc = 0x4DDA84u;
            // 0x4dda84: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4DDA88u;
        goto label_4dda88;
    }
    ctx->pc = 0x4DDA80u;
    SET_GPR_U32(ctx, 31, 0x4DDA88u);
    ctx->pc = 0x4DDA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDA80u;
            // 0x4dda84: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA88u; }
        if (ctx->pc != 0x4DDA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDA88u; }
        if (ctx->pc != 0x4DDA88u) { return; }
    }
    ctx->pc = 0x4DDA88u;
label_4dda88:
    // 0x4dda88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dda88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dda8c:
    // 0x4dda8c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4dda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4dda90:
    // 0x4dda90: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4dda90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4dda94:
    // 0x4dda94: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4dda94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4dda98:
    // 0x4dda98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4dda98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dda9c:
    // 0x4dda9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ddaa0:
    // 0x4ddaa0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4ddaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4ddaa4:
    // 0x4ddaa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ddaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ddaa8:
    // 0x4ddaa8: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4ddaa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4ddaac:
    // 0x4ddaac: 0xc055d28  jal         func_1574A0
label_4ddab0:
    if (ctx->pc == 0x4DDAB0u) {
        ctx->pc = 0x4DDAB0u;
            // 0x4ddab0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DDAB4u;
        goto label_4ddab4;
    }
    ctx->pc = 0x4DDAACu;
    SET_GPR_U32(ctx, 31, 0x4DDAB4u);
    ctx->pc = 0x4DDAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDAACu;
            // 0x4ddab0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDAB4u; }
        if (ctx->pc != 0x4DDAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDAB4u; }
        if (ctx->pc != 0x4DDAB4u) { return; }
    }
    ctx->pc = 0x4DDAB4u;
label_4ddab4:
    // 0x4ddab4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4ddab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4ddab8:
    // 0x4ddab8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ddab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ddabc:
    // 0x4ddabc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4ddabcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4ddac0:
    // 0x4ddac0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4ddac0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ddac4:
    // 0x4ddac4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4ddac4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ddac8:
    // 0x4ddac8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4ddac8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ddacc:
    // 0x4ddacc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ddaccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ddad0:
    // 0x4ddad0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ddad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ddad4:
    // 0x4ddad4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ddad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ddad8:
    // 0x4ddad8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ddad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ddadc:
    // 0x4ddadc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ddadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ddae0:
    // 0x4ddae0: 0x3e00008  jr          $ra
label_4ddae4:
    if (ctx->pc == 0x4DDAE4u) {
        ctx->pc = 0x4DDAE4u;
            // 0x4ddae4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4DDAE8u;
        goto label_4ddae8;
    }
    ctx->pc = 0x4DDAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDAE0u;
            // 0x4ddae4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DDAE8u;
label_4ddae8:
    // 0x4ddae8: 0x0  nop
    ctx->pc = 0x4ddae8u;
    // NOP
label_4ddaec:
    // 0x4ddaec: 0x0  nop
    ctx->pc = 0x4ddaecu;
    // NOP
}
