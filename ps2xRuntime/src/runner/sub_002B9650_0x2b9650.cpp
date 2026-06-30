#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9650
// Address: 0x2b9650 - 0x2b97b0
void sub_002B9650_0x2b9650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9650_0x2b9650");
#endif

    switch (ctx->pc) {
        case 0x2b9650u: goto label_2b9650;
        case 0x2b9654u: goto label_2b9654;
        case 0x2b9658u: goto label_2b9658;
        case 0x2b965cu: goto label_2b965c;
        case 0x2b9660u: goto label_2b9660;
        case 0x2b9664u: goto label_2b9664;
        case 0x2b9668u: goto label_2b9668;
        case 0x2b966cu: goto label_2b966c;
        case 0x2b9670u: goto label_2b9670;
        case 0x2b9674u: goto label_2b9674;
        case 0x2b9678u: goto label_2b9678;
        case 0x2b967cu: goto label_2b967c;
        case 0x2b9680u: goto label_2b9680;
        case 0x2b9684u: goto label_2b9684;
        case 0x2b9688u: goto label_2b9688;
        case 0x2b968cu: goto label_2b968c;
        case 0x2b9690u: goto label_2b9690;
        case 0x2b9694u: goto label_2b9694;
        case 0x2b9698u: goto label_2b9698;
        case 0x2b969cu: goto label_2b969c;
        case 0x2b96a0u: goto label_2b96a0;
        case 0x2b96a4u: goto label_2b96a4;
        case 0x2b96a8u: goto label_2b96a8;
        case 0x2b96acu: goto label_2b96ac;
        case 0x2b96b0u: goto label_2b96b0;
        case 0x2b96b4u: goto label_2b96b4;
        case 0x2b96b8u: goto label_2b96b8;
        case 0x2b96bcu: goto label_2b96bc;
        case 0x2b96c0u: goto label_2b96c0;
        case 0x2b96c4u: goto label_2b96c4;
        case 0x2b96c8u: goto label_2b96c8;
        case 0x2b96ccu: goto label_2b96cc;
        case 0x2b96d0u: goto label_2b96d0;
        case 0x2b96d4u: goto label_2b96d4;
        case 0x2b96d8u: goto label_2b96d8;
        case 0x2b96dcu: goto label_2b96dc;
        case 0x2b96e0u: goto label_2b96e0;
        case 0x2b96e4u: goto label_2b96e4;
        case 0x2b96e8u: goto label_2b96e8;
        case 0x2b96ecu: goto label_2b96ec;
        case 0x2b96f0u: goto label_2b96f0;
        case 0x2b96f4u: goto label_2b96f4;
        case 0x2b96f8u: goto label_2b96f8;
        case 0x2b96fcu: goto label_2b96fc;
        case 0x2b9700u: goto label_2b9700;
        case 0x2b9704u: goto label_2b9704;
        case 0x2b9708u: goto label_2b9708;
        case 0x2b970cu: goto label_2b970c;
        case 0x2b9710u: goto label_2b9710;
        case 0x2b9714u: goto label_2b9714;
        case 0x2b9718u: goto label_2b9718;
        case 0x2b971cu: goto label_2b971c;
        case 0x2b9720u: goto label_2b9720;
        case 0x2b9724u: goto label_2b9724;
        case 0x2b9728u: goto label_2b9728;
        case 0x2b972cu: goto label_2b972c;
        case 0x2b9730u: goto label_2b9730;
        case 0x2b9734u: goto label_2b9734;
        case 0x2b9738u: goto label_2b9738;
        case 0x2b973cu: goto label_2b973c;
        case 0x2b9740u: goto label_2b9740;
        case 0x2b9744u: goto label_2b9744;
        case 0x2b9748u: goto label_2b9748;
        case 0x2b974cu: goto label_2b974c;
        case 0x2b9750u: goto label_2b9750;
        case 0x2b9754u: goto label_2b9754;
        case 0x2b9758u: goto label_2b9758;
        case 0x2b975cu: goto label_2b975c;
        case 0x2b9760u: goto label_2b9760;
        case 0x2b9764u: goto label_2b9764;
        case 0x2b9768u: goto label_2b9768;
        case 0x2b976cu: goto label_2b976c;
        case 0x2b9770u: goto label_2b9770;
        case 0x2b9774u: goto label_2b9774;
        case 0x2b9778u: goto label_2b9778;
        case 0x2b977cu: goto label_2b977c;
        case 0x2b9780u: goto label_2b9780;
        case 0x2b9784u: goto label_2b9784;
        case 0x2b9788u: goto label_2b9788;
        case 0x2b978cu: goto label_2b978c;
        case 0x2b9790u: goto label_2b9790;
        case 0x2b9794u: goto label_2b9794;
        case 0x2b9798u: goto label_2b9798;
        case 0x2b979cu: goto label_2b979c;
        case 0x2b97a0u: goto label_2b97a0;
        case 0x2b97a4u: goto label_2b97a4;
        case 0x2b97a8u: goto label_2b97a8;
        case 0x2b97acu: goto label_2b97ac;
        default: break;
    }

    ctx->pc = 0x2b9650u;

label_2b9650:
    // 0x2b9650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b9654:
    // 0x2b9654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b9658:
    // 0x2b9658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b965c:
    // 0x2b965c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b9660:
    // 0x2b9660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9664:
    // 0x2b9664: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2b9668:
    if (ctx->pc == 0x2B9668u) {
        ctx->pc = 0x2B9668u;
            // 0x2b9668: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B966Cu;
        goto label_2b966c;
    }
    ctx->pc = 0x2B9664u;
    {
        const bool branch_taken_0x2b9664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9664u;
            // 0x2b9668: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9664) {
            ctx->pc = 0x2B9798u;
            goto label_2b9798;
        }
    }
    ctx->pc = 0x2B966Cu;
label_2b966c:
    // 0x2b966c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b966cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b9670:
    // 0x2b9670: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9674:
    // 0x2b9674: 0x246326d0  addiu       $v1, $v1, 0x26D0
    ctx->pc = 0x2b9674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9936));
label_2b9678:
    // 0x2b9678: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2b9678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2b967c:
    // 0x2b967c: 0x24422708  addiu       $v0, $v0, 0x2708
    ctx->pc = 0x2b967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9992));
label_2b9680:
    // 0x2b9680: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b9680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2b9684:
    // 0x2b9684: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2b9684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2b9688:
    // 0x2b9688: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2b9688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2b968c:
    // 0x2b968c: 0xc0407c0  jal         func_101F00
label_2b9690:
    if (ctx->pc == 0x2B9690u) {
        ctx->pc = 0x2B9690u;
            // 0x2b9690: 0x24a594b0  addiu       $a1, $a1, -0x6B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
        ctx->pc = 0x2B9694u;
        goto label_2b9694;
    }
    ctx->pc = 0x2B968Cu;
    SET_GPR_U32(ctx, 31, 0x2B9694u);
    ctx->pc = 0x2B9690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B968Cu;
            // 0x2b9690: 0x24a594b0  addiu       $a1, $a1, -0x6B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9694u; }
        if (ctx->pc != 0x2B9694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9694u; }
        if (ctx->pc != 0x2B9694u) { return; }
    }
    ctx->pc = 0x2B9694u;
label_2b9694:
    // 0x2b9694: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2b9694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2b9698:
    // 0x2b9698: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b969c:
    if (ctx->pc == 0x2B969Cu) {
        ctx->pc = 0x2B969Cu;
            // 0x2b969c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2B96A0u;
        goto label_2b96a0;
    }
    ctx->pc = 0x2B9698u;
    {
        const bool branch_taken_0x2b9698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9698) {
            ctx->pc = 0x2B969Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9698u;
            // 0x2b969c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B96ACu;
            goto label_2b96ac;
        }
    }
    ctx->pc = 0x2B96A0u;
label_2b96a0:
    // 0x2b96a0: 0xc07507c  jal         func_1D41F0
label_2b96a4:
    if (ctx->pc == 0x2B96A4u) {
        ctx->pc = 0x2B96A4u;
            // 0x2b96a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2B96A8u;
        goto label_2b96a8;
    }
    ctx->pc = 0x2B96A0u;
    SET_GPR_U32(ctx, 31, 0x2B96A8u);
    ctx->pc = 0x2B96A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B96A0u;
            // 0x2b96a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B96A8u; }
        if (ctx->pc != 0x2B96A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B96A8u; }
        if (ctx->pc != 0x2B96A8u) { return; }
    }
    ctx->pc = 0x2B96A8u;
label_2b96a8:
    // 0x2b96a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2b96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2b96ac:
    // 0x2b96ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2b96b0:
    if (ctx->pc == 0x2B96B0u) {
        ctx->pc = 0x2B96B0u;
            // 0x2b96b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2B96B4u;
        goto label_2b96b4;
    }
    ctx->pc = 0x2B96ACu;
    {
        const bool branch_taken_0x2b96ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96ac) {
            ctx->pc = 0x2B96B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B96ACu;
            // 0x2b96b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B96DCu;
            goto label_2b96dc;
        }
    }
    ctx->pc = 0x2B96B4u;
label_2b96b4:
    // 0x2b96b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b96b8:
    if (ctx->pc == 0x2B96B8u) {
        ctx->pc = 0x2B96BCu;
        goto label_2b96bc;
    }
    ctx->pc = 0x2B96B4u;
    {
        const bool branch_taken_0x2b96b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96b4) {
            ctx->pc = 0x2B96D8u;
            goto label_2b96d8;
        }
    }
    ctx->pc = 0x2B96BCu;
label_2b96bc:
    // 0x2b96bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b96c0:
    if (ctx->pc == 0x2B96C0u) {
        ctx->pc = 0x2B96C4u;
        goto label_2b96c4;
    }
    ctx->pc = 0x2B96BCu;
    {
        const bool branch_taken_0x2b96bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96bc) {
            ctx->pc = 0x2B96D8u;
            goto label_2b96d8;
        }
    }
    ctx->pc = 0x2B96C4u;
label_2b96c4:
    // 0x2b96c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2b96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2b96c8:
    // 0x2b96c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b96cc:
    if (ctx->pc == 0x2B96CCu) {
        ctx->pc = 0x2B96D0u;
        goto label_2b96d0;
    }
    ctx->pc = 0x2B96C8u;
    {
        const bool branch_taken_0x2b96c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96c8) {
            ctx->pc = 0x2B96D8u;
            goto label_2b96d8;
        }
    }
    ctx->pc = 0x2B96D0u;
label_2b96d0:
    // 0x2b96d0: 0xc0400a8  jal         func_1002A0
label_2b96d4:
    if (ctx->pc == 0x2B96D4u) {
        ctx->pc = 0x2B96D8u;
        goto label_2b96d8;
    }
    ctx->pc = 0x2B96D0u;
    SET_GPR_U32(ctx, 31, 0x2B96D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B96D8u; }
        if (ctx->pc != 0x2B96D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B96D8u; }
        if (ctx->pc != 0x2B96D8u) { return; }
    }
    ctx->pc = 0x2B96D8u;
label_2b96d8:
    // 0x2b96d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2b96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2b96dc:
    // 0x2b96dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2b96e0:
    if (ctx->pc == 0x2B96E0u) {
        ctx->pc = 0x2B96E0u;
            // 0x2b96e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2B96E4u;
        goto label_2b96e4;
    }
    ctx->pc = 0x2B96DCu;
    {
        const bool branch_taken_0x2b96dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96dc) {
            ctx->pc = 0x2B96E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B96DCu;
            // 0x2b96e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B970Cu;
            goto label_2b970c;
        }
    }
    ctx->pc = 0x2B96E4u;
label_2b96e4:
    // 0x2b96e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b96e8:
    if (ctx->pc == 0x2B96E8u) {
        ctx->pc = 0x2B96ECu;
        goto label_2b96ec;
    }
    ctx->pc = 0x2B96E4u;
    {
        const bool branch_taken_0x2b96e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96e4) {
            ctx->pc = 0x2B9708u;
            goto label_2b9708;
        }
    }
    ctx->pc = 0x2B96ECu;
label_2b96ec:
    // 0x2b96ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b96f0:
    if (ctx->pc == 0x2B96F0u) {
        ctx->pc = 0x2B96F4u;
        goto label_2b96f4;
    }
    ctx->pc = 0x2B96ECu;
    {
        const bool branch_taken_0x2b96ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96ec) {
            ctx->pc = 0x2B9708u;
            goto label_2b9708;
        }
    }
    ctx->pc = 0x2B96F4u;
label_2b96f4:
    // 0x2b96f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2b96f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2b96f8:
    // 0x2b96f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b96fc:
    if (ctx->pc == 0x2B96FCu) {
        ctx->pc = 0x2B9700u;
        goto label_2b9700;
    }
    ctx->pc = 0x2B96F8u;
    {
        const bool branch_taken_0x2b96f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96f8) {
            ctx->pc = 0x2B9708u;
            goto label_2b9708;
        }
    }
    ctx->pc = 0x2B9700u;
label_2b9700:
    // 0x2b9700: 0xc0400a8  jal         func_1002A0
label_2b9704:
    if (ctx->pc == 0x2B9704u) {
        ctx->pc = 0x2B9708u;
        goto label_2b9708;
    }
    ctx->pc = 0x2B9700u;
    SET_GPR_U32(ctx, 31, 0x2B9708u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9708u; }
        if (ctx->pc != 0x2B9708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9708u; }
        if (ctx->pc != 0x2B9708u) { return; }
    }
    ctx->pc = 0x2B9708u;
label_2b9708:
    // 0x2b9708: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2b9708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2b970c:
    // 0x2b970c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b9710:
    if (ctx->pc == 0x2B9710u) {
        ctx->pc = 0x2B9714u;
        goto label_2b9714;
    }
    ctx->pc = 0x2B970Cu;
    {
        const bool branch_taken_0x2b970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b970c) {
            ctx->pc = 0x2B9728u;
            goto label_2b9728;
        }
    }
    ctx->pc = 0x2B9714u;
label_2b9714:
    // 0x2b9714: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b9718:
    // 0x2b9718: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b9718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2b971c:
    // 0x2b971c: 0x246326c0  addiu       $v1, $v1, 0x26C0
    ctx->pc = 0x2b971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
label_2b9720:
    // 0x2b9720: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2b9720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2b9724:
    // 0x2b9724: 0xac400cd8  sw          $zero, 0xCD8($v0)
    ctx->pc = 0x2b9724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3288), GPR_U32(ctx, 0));
label_2b9728:
    // 0x2b9728: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2b972c:
    if (ctx->pc == 0x2B972Cu) {
        ctx->pc = 0x2B972Cu;
            // 0x2b972c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B9730u;
        goto label_2b9730;
    }
    ctx->pc = 0x2B9728u;
    {
        const bool branch_taken_0x2b9728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9728) {
            ctx->pc = 0x2B972Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9728u;
            // 0x2b972c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9784u;
            goto label_2b9784;
        }
    }
    ctx->pc = 0x2B9730u;
label_2b9730:
    // 0x2b9730: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9734:
    // 0x2b9734: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2b9734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2b9738:
    // 0x2b9738: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b9738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b973c:
    // 0x2b973c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2b973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b9740:
    // 0x2b9740: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b9744:
    if (ctx->pc == 0x2B9744u) {
        ctx->pc = 0x2B9744u;
            // 0x2b9744: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2B9748u;
        goto label_2b9748;
    }
    ctx->pc = 0x2B9740u;
    {
        const bool branch_taken_0x2b9740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9740) {
            ctx->pc = 0x2B9744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9740u;
            // 0x2b9744: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B975Cu;
            goto label_2b975c;
        }
    }
    ctx->pc = 0x2B9748u;
label_2b9748:
    // 0x2b9748: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b9748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b974c:
    // 0x2b974c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b974cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b9750:
    // 0x2b9750: 0x320f809  jalr        $t9
label_2b9754:
    if (ctx->pc == 0x2B9754u) {
        ctx->pc = 0x2B9754u;
            // 0x2b9754: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9758u;
        goto label_2b9758;
    }
    ctx->pc = 0x2B9750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9758u);
        ctx->pc = 0x2B9754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9750u;
            // 0x2b9754: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9758u; }
            if (ctx->pc != 0x2B9758u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9758u;
label_2b9758:
    // 0x2b9758: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2b9758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2b975c:
    // 0x2b975c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b9760:
    if (ctx->pc == 0x2B9760u) {
        ctx->pc = 0x2B9760u;
            // 0x2b9760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9764u;
        goto label_2b9764;
    }
    ctx->pc = 0x2B975Cu;
    {
        const bool branch_taken_0x2b975c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b975c) {
            ctx->pc = 0x2B9760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B975Cu;
            // 0x2b9760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9778u;
            goto label_2b9778;
        }
    }
    ctx->pc = 0x2B9764u;
label_2b9764:
    // 0x2b9764: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b9764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9768:
    // 0x2b9768: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b9768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b976c:
    // 0x2b976c: 0x320f809  jalr        $t9
label_2b9770:
    if (ctx->pc == 0x2B9770u) {
        ctx->pc = 0x2B9770u;
            // 0x2b9770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9774u;
        goto label_2b9774;
    }
    ctx->pc = 0x2B976Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9774u);
        ctx->pc = 0x2B9770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B976Cu;
            // 0x2b9770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9774u; }
            if (ctx->pc != 0x2B9774u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9774u;
label_2b9774:
    // 0x2b9774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9778:
    // 0x2b9778: 0xc075bf8  jal         func_1D6FE0
label_2b977c:
    if (ctx->pc == 0x2B977Cu) {
        ctx->pc = 0x2B977Cu;
            // 0x2b977c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9780u;
        goto label_2b9780;
    }
    ctx->pc = 0x2B9778u;
    SET_GPR_U32(ctx, 31, 0x2B9780u);
    ctx->pc = 0x2B977Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9778u;
            // 0x2b977c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9780u; }
        if (ctx->pc != 0x2B9780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9780u; }
        if (ctx->pc != 0x2B9780u) { return; }
    }
    ctx->pc = 0x2B9780u;
label_2b9780:
    // 0x2b9780: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b9780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b9784:
    // 0x2b9784: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b9784u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b9788:
    // 0x2b9788: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b978c:
    if (ctx->pc == 0x2B978Cu) {
        ctx->pc = 0x2B978Cu;
            // 0x2b978c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9790u;
        goto label_2b9790;
    }
    ctx->pc = 0x2B9788u;
    {
        const bool branch_taken_0x2b9788 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b9788) {
            ctx->pc = 0x2B978Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9788u;
            // 0x2b978c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B979Cu;
            goto label_2b979c;
        }
    }
    ctx->pc = 0x2B9790u;
label_2b9790:
    // 0x2b9790: 0xc0400a8  jal         func_1002A0
label_2b9794:
    if (ctx->pc == 0x2B9794u) {
        ctx->pc = 0x2B9794u;
            // 0x2b9794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9798u;
        goto label_2b9798;
    }
    ctx->pc = 0x2B9790u;
    SET_GPR_U32(ctx, 31, 0x2B9798u);
    ctx->pc = 0x2B9794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9790u;
            // 0x2b9794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9798u; }
        if (ctx->pc != 0x2B9798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9798u; }
        if (ctx->pc != 0x2B9798u) { return; }
    }
    ctx->pc = 0x2B9798u;
label_2b9798:
    // 0x2b9798: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b9798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b979c:
    // 0x2b979c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b979cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b97a0:
    // 0x2b97a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b97a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b97a4:
    // 0x2b97a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b97a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b97a8:
    // 0x2b97a8: 0x3e00008  jr          $ra
label_2b97ac:
    if (ctx->pc == 0x2B97ACu) {
        ctx->pc = 0x2B97ACu;
            // 0x2b97ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B97B0u;
        goto label_fallthrough_0x2b97a8;
    }
    ctx->pc = 0x2B97A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B97ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97A8u;
            // 0x2b97ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b97a8:
    ctx->pc = 0x2B97B0u;
}
