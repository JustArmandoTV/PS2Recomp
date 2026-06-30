#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C9640
// Address: 0x2c9640 - 0x2c97a0
void sub_002C9640_0x2c9640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9640_0x2c9640");
#endif

    switch (ctx->pc) {
        case 0x2c9640u: goto label_2c9640;
        case 0x2c9644u: goto label_2c9644;
        case 0x2c9648u: goto label_2c9648;
        case 0x2c964cu: goto label_2c964c;
        case 0x2c9650u: goto label_2c9650;
        case 0x2c9654u: goto label_2c9654;
        case 0x2c9658u: goto label_2c9658;
        case 0x2c965cu: goto label_2c965c;
        case 0x2c9660u: goto label_2c9660;
        case 0x2c9664u: goto label_2c9664;
        case 0x2c9668u: goto label_2c9668;
        case 0x2c966cu: goto label_2c966c;
        case 0x2c9670u: goto label_2c9670;
        case 0x2c9674u: goto label_2c9674;
        case 0x2c9678u: goto label_2c9678;
        case 0x2c967cu: goto label_2c967c;
        case 0x2c9680u: goto label_2c9680;
        case 0x2c9684u: goto label_2c9684;
        case 0x2c9688u: goto label_2c9688;
        case 0x2c968cu: goto label_2c968c;
        case 0x2c9690u: goto label_2c9690;
        case 0x2c9694u: goto label_2c9694;
        case 0x2c9698u: goto label_2c9698;
        case 0x2c969cu: goto label_2c969c;
        case 0x2c96a0u: goto label_2c96a0;
        case 0x2c96a4u: goto label_2c96a4;
        case 0x2c96a8u: goto label_2c96a8;
        case 0x2c96acu: goto label_2c96ac;
        case 0x2c96b0u: goto label_2c96b0;
        case 0x2c96b4u: goto label_2c96b4;
        case 0x2c96b8u: goto label_2c96b8;
        case 0x2c96bcu: goto label_2c96bc;
        case 0x2c96c0u: goto label_2c96c0;
        case 0x2c96c4u: goto label_2c96c4;
        case 0x2c96c8u: goto label_2c96c8;
        case 0x2c96ccu: goto label_2c96cc;
        case 0x2c96d0u: goto label_2c96d0;
        case 0x2c96d4u: goto label_2c96d4;
        case 0x2c96d8u: goto label_2c96d8;
        case 0x2c96dcu: goto label_2c96dc;
        case 0x2c96e0u: goto label_2c96e0;
        case 0x2c96e4u: goto label_2c96e4;
        case 0x2c96e8u: goto label_2c96e8;
        case 0x2c96ecu: goto label_2c96ec;
        case 0x2c96f0u: goto label_2c96f0;
        case 0x2c96f4u: goto label_2c96f4;
        case 0x2c96f8u: goto label_2c96f8;
        case 0x2c96fcu: goto label_2c96fc;
        case 0x2c9700u: goto label_2c9700;
        case 0x2c9704u: goto label_2c9704;
        case 0x2c9708u: goto label_2c9708;
        case 0x2c970cu: goto label_2c970c;
        case 0x2c9710u: goto label_2c9710;
        case 0x2c9714u: goto label_2c9714;
        case 0x2c9718u: goto label_2c9718;
        case 0x2c971cu: goto label_2c971c;
        case 0x2c9720u: goto label_2c9720;
        case 0x2c9724u: goto label_2c9724;
        case 0x2c9728u: goto label_2c9728;
        case 0x2c972cu: goto label_2c972c;
        case 0x2c9730u: goto label_2c9730;
        case 0x2c9734u: goto label_2c9734;
        case 0x2c9738u: goto label_2c9738;
        case 0x2c973cu: goto label_2c973c;
        case 0x2c9740u: goto label_2c9740;
        case 0x2c9744u: goto label_2c9744;
        case 0x2c9748u: goto label_2c9748;
        case 0x2c974cu: goto label_2c974c;
        case 0x2c9750u: goto label_2c9750;
        case 0x2c9754u: goto label_2c9754;
        case 0x2c9758u: goto label_2c9758;
        case 0x2c975cu: goto label_2c975c;
        case 0x2c9760u: goto label_2c9760;
        case 0x2c9764u: goto label_2c9764;
        case 0x2c9768u: goto label_2c9768;
        case 0x2c976cu: goto label_2c976c;
        case 0x2c9770u: goto label_2c9770;
        case 0x2c9774u: goto label_2c9774;
        case 0x2c9778u: goto label_2c9778;
        case 0x2c977cu: goto label_2c977c;
        case 0x2c9780u: goto label_2c9780;
        case 0x2c9784u: goto label_2c9784;
        case 0x2c9788u: goto label_2c9788;
        case 0x2c978cu: goto label_2c978c;
        case 0x2c9790u: goto label_2c9790;
        case 0x2c9794u: goto label_2c9794;
        case 0x2c9798u: goto label_2c9798;
        case 0x2c979cu: goto label_2c979c;
        default: break;
    }

    ctx->pc = 0x2c9640u;

label_2c9640:
    // 0x2c9640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c9644:
    // 0x2c9644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c9644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c9648:
    // 0x2c9648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c964c:
    // 0x2c964c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c9650:
    // 0x2c9650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c9650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9654:
    // 0x2c9654: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c9658:
    if (ctx->pc == 0x2C9658u) {
        ctx->pc = 0x2C9658u;
            // 0x2c9658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C965Cu;
        goto label_2c965c;
    }
    ctx->pc = 0x2C9654u;
    {
        const bool branch_taken_0x2c9654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9654u;
            // 0x2c9658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9654) {
            ctx->pc = 0x2C9788u;
            goto label_2c9788;
        }
    }
    ctx->pc = 0x2C965Cu;
label_2c965c:
    // 0x2c965c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c965cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c9660:
    // 0x2c9660: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c9664:
    // 0x2c9664: 0x24630510  addiu       $v1, $v1, 0x510
    ctx->pc = 0x2c9664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
label_2c9668:
    // 0x2c9668: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c9668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2c966c:
    // 0x2c966c: 0x24420548  addiu       $v0, $v0, 0x548
    ctx->pc = 0x2c966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1352));
label_2c9670:
    // 0x2c9670: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c9670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c9674:
    // 0x2c9674: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c9674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c9678:
    // 0x2c9678: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c9678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c967c:
    // 0x2c967c: 0xc0407c0  jal         func_101F00
label_2c9680:
    if (ctx->pc == 0x2C9680u) {
        ctx->pc = 0x2C9680u;
            // 0x2c9680: 0x24a59540  addiu       $a1, $a1, -0x6AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939968));
        ctx->pc = 0x2C9684u;
        goto label_2c9684;
    }
    ctx->pc = 0x2C967Cu;
    SET_GPR_U32(ctx, 31, 0x2C9684u);
    ctx->pc = 0x2C9680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C967Cu;
            // 0x2c9680: 0x24a59540  addiu       $a1, $a1, -0x6AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9684u; }
        if (ctx->pc != 0x2C9684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9684u; }
        if (ctx->pc != 0x2C9684u) { return; }
    }
    ctx->pc = 0x2C9684u;
label_2c9684:
    // 0x2c9684: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c9684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c9688:
    // 0x2c9688: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c968c:
    if (ctx->pc == 0x2C968Cu) {
        ctx->pc = 0x2C968Cu;
            // 0x2c968c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C9690u;
        goto label_2c9690;
    }
    ctx->pc = 0x2C9688u;
    {
        const bool branch_taken_0x2c9688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9688) {
            ctx->pc = 0x2C968Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9688u;
            // 0x2c968c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C969Cu;
            goto label_2c969c;
        }
    }
    ctx->pc = 0x2C9690u;
label_2c9690:
    // 0x2c9690: 0xc07507c  jal         func_1D41F0
label_2c9694:
    if (ctx->pc == 0x2C9694u) {
        ctx->pc = 0x2C9694u;
            // 0x2c9694: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C9698u;
        goto label_2c9698;
    }
    ctx->pc = 0x2C9690u;
    SET_GPR_U32(ctx, 31, 0x2C9698u);
    ctx->pc = 0x2C9694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9690u;
            // 0x2c9694: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9698u; }
        if (ctx->pc != 0x2C9698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9698u; }
        if (ctx->pc != 0x2C9698u) { return; }
    }
    ctx->pc = 0x2C9698u;
label_2c9698:
    // 0x2c9698: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c9698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c969c:
    // 0x2c969c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c96a0:
    if (ctx->pc == 0x2C96A0u) {
        ctx->pc = 0x2C96A0u;
            // 0x2c96a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C96A4u;
        goto label_2c96a4;
    }
    ctx->pc = 0x2C969Cu;
    {
        const bool branch_taken_0x2c969c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c969c) {
            ctx->pc = 0x2C96A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C969Cu;
            // 0x2c96a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C96CCu;
            goto label_2c96cc;
        }
    }
    ctx->pc = 0x2C96A4u;
label_2c96a4:
    // 0x2c96a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c96a8:
    if (ctx->pc == 0x2C96A8u) {
        ctx->pc = 0x2C96ACu;
        goto label_2c96ac;
    }
    ctx->pc = 0x2C96A4u;
    {
        const bool branch_taken_0x2c96a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96a4) {
            ctx->pc = 0x2C96C8u;
            goto label_2c96c8;
        }
    }
    ctx->pc = 0x2C96ACu;
label_2c96ac:
    // 0x2c96ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c96b0:
    if (ctx->pc == 0x2C96B0u) {
        ctx->pc = 0x2C96B4u;
        goto label_2c96b4;
    }
    ctx->pc = 0x2C96ACu;
    {
        const bool branch_taken_0x2c96ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96ac) {
            ctx->pc = 0x2C96C8u;
            goto label_2c96c8;
        }
    }
    ctx->pc = 0x2C96B4u;
label_2c96b4:
    // 0x2c96b4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c96b8:
    // 0x2c96b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c96bc:
    if (ctx->pc == 0x2C96BCu) {
        ctx->pc = 0x2C96C0u;
        goto label_2c96c0;
    }
    ctx->pc = 0x2C96B8u;
    {
        const bool branch_taken_0x2c96b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96b8) {
            ctx->pc = 0x2C96C8u;
            goto label_2c96c8;
        }
    }
    ctx->pc = 0x2C96C0u;
label_2c96c0:
    // 0x2c96c0: 0xc0400a8  jal         func_1002A0
label_2c96c4:
    if (ctx->pc == 0x2C96C4u) {
        ctx->pc = 0x2C96C8u;
        goto label_2c96c8;
    }
    ctx->pc = 0x2C96C0u;
    SET_GPR_U32(ctx, 31, 0x2C96C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96C8u; }
        if (ctx->pc != 0x2C96C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96C8u; }
        if (ctx->pc != 0x2C96C8u) { return; }
    }
    ctx->pc = 0x2C96C8u;
label_2c96c8:
    // 0x2c96c8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c96cc:
    // 0x2c96cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c96d0:
    if (ctx->pc == 0x2C96D0u) {
        ctx->pc = 0x2C96D0u;
            // 0x2c96d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C96D4u;
        goto label_2c96d4;
    }
    ctx->pc = 0x2C96CCu;
    {
        const bool branch_taken_0x2c96cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96cc) {
            ctx->pc = 0x2C96D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96CCu;
            // 0x2c96d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C96FCu;
            goto label_2c96fc;
        }
    }
    ctx->pc = 0x2C96D4u;
label_2c96d4:
    // 0x2c96d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c96d8:
    if (ctx->pc == 0x2C96D8u) {
        ctx->pc = 0x2C96DCu;
        goto label_2c96dc;
    }
    ctx->pc = 0x2C96D4u;
    {
        const bool branch_taken_0x2c96d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96d4) {
            ctx->pc = 0x2C96F8u;
            goto label_2c96f8;
        }
    }
    ctx->pc = 0x2C96DCu;
label_2c96dc:
    // 0x2c96dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c96e0:
    if (ctx->pc == 0x2C96E0u) {
        ctx->pc = 0x2C96E4u;
        goto label_2c96e4;
    }
    ctx->pc = 0x2C96DCu;
    {
        const bool branch_taken_0x2c96dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96dc) {
            ctx->pc = 0x2C96F8u;
            goto label_2c96f8;
        }
    }
    ctx->pc = 0x2C96E4u;
label_2c96e4:
    // 0x2c96e4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c96e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c96e8:
    // 0x2c96e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c96ec:
    if (ctx->pc == 0x2C96ECu) {
        ctx->pc = 0x2C96F0u;
        goto label_2c96f0;
    }
    ctx->pc = 0x2C96E8u;
    {
        const bool branch_taken_0x2c96e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96e8) {
            ctx->pc = 0x2C96F8u;
            goto label_2c96f8;
        }
    }
    ctx->pc = 0x2C96F0u;
label_2c96f0:
    // 0x2c96f0: 0xc0400a8  jal         func_1002A0
label_2c96f4:
    if (ctx->pc == 0x2C96F4u) {
        ctx->pc = 0x2C96F8u;
        goto label_2c96f8;
    }
    ctx->pc = 0x2C96F0u;
    SET_GPR_U32(ctx, 31, 0x2C96F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96F8u; }
        if (ctx->pc != 0x2C96F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96F8u; }
        if (ctx->pc != 0x2C96F8u) { return; }
    }
    ctx->pc = 0x2C96F8u;
label_2c96f8:
    // 0x2c96f8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c96fc:
    // 0x2c96fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c9700:
    if (ctx->pc == 0x2C9700u) {
        ctx->pc = 0x2C9704u;
        goto label_2c9704;
    }
    ctx->pc = 0x2C96FCu;
    {
        const bool branch_taken_0x2c96fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96fc) {
            ctx->pc = 0x2C9718u;
            goto label_2c9718;
        }
    }
    ctx->pc = 0x2C9704u;
label_2c9704:
    // 0x2c9704: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c9708:
    // 0x2c9708: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c9708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c970c:
    // 0x2c970c: 0x246304f8  addiu       $v1, $v1, 0x4F8
    ctx->pc = 0x2c970cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1272));
label_2c9710:
    // 0x2c9710: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c9710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c9714:
    // 0x2c9714: 0xac400d80  sw          $zero, 0xD80($v0)
    ctx->pc = 0x2c9714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3456), GPR_U32(ctx, 0));
label_2c9718:
    // 0x2c9718: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c971c:
    if (ctx->pc == 0x2C971Cu) {
        ctx->pc = 0x2C971Cu;
            // 0x2c971c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C9720u;
        goto label_2c9720;
    }
    ctx->pc = 0x2C9718u;
    {
        const bool branch_taken_0x2c9718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9718) {
            ctx->pc = 0x2C971Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9718u;
            // 0x2c971c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9774u;
            goto label_2c9774;
        }
    }
    ctx->pc = 0x2C9720u;
label_2c9720:
    // 0x2c9720: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c9724:
    // 0x2c9724: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c9724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c9728:
    // 0x2c9728: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c9728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c972c:
    // 0x2c972c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c972cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c9730:
    // 0x2c9730: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c9734:
    if (ctx->pc == 0x2C9734u) {
        ctx->pc = 0x2C9734u;
            // 0x2c9734: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C9738u;
        goto label_2c9738;
    }
    ctx->pc = 0x2C9730u;
    {
        const bool branch_taken_0x2c9730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9730) {
            ctx->pc = 0x2C9734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9730u;
            // 0x2c9734: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C974Cu;
            goto label_2c974c;
        }
    }
    ctx->pc = 0x2C9738u;
label_2c9738:
    // 0x2c9738: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c9738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c973c:
    // 0x2c973c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c973cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c9740:
    // 0x2c9740: 0x320f809  jalr        $t9
label_2c9744:
    if (ctx->pc == 0x2C9744u) {
        ctx->pc = 0x2C9744u;
            // 0x2c9744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C9748u;
        goto label_2c9748;
    }
    ctx->pc = 0x2C9740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9748u);
        ctx->pc = 0x2C9744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9740u;
            // 0x2c9744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9748u; }
            if (ctx->pc != 0x2C9748u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9748u;
label_2c9748:
    // 0x2c9748: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c9748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c974c:
    // 0x2c974c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c9750:
    if (ctx->pc == 0x2C9750u) {
        ctx->pc = 0x2C9750u;
            // 0x2c9750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9754u;
        goto label_2c9754;
    }
    ctx->pc = 0x2C974Cu;
    {
        const bool branch_taken_0x2c974c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c974c) {
            ctx->pc = 0x2C9750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C974Cu;
            // 0x2c9750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9768u;
            goto label_2c9768;
        }
    }
    ctx->pc = 0x2C9754u;
label_2c9754:
    // 0x2c9754: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c9754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c9758:
    // 0x2c9758: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c9758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c975c:
    // 0x2c975c: 0x320f809  jalr        $t9
label_2c9760:
    if (ctx->pc == 0x2C9760u) {
        ctx->pc = 0x2C9760u;
            // 0x2c9760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C9764u;
        goto label_2c9764;
    }
    ctx->pc = 0x2C975Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9764u);
        ctx->pc = 0x2C9760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C975Cu;
            // 0x2c9760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9764u; }
            if (ctx->pc != 0x2C9764u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9764u;
label_2c9764:
    // 0x2c9764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9768:
    // 0x2c9768: 0xc075bf8  jal         func_1D6FE0
label_2c976c:
    if (ctx->pc == 0x2C976Cu) {
        ctx->pc = 0x2C976Cu;
            // 0x2c976c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9770u;
        goto label_2c9770;
    }
    ctx->pc = 0x2C9768u;
    SET_GPR_U32(ctx, 31, 0x2C9770u);
    ctx->pc = 0x2C976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9768u;
            // 0x2c976c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9770u; }
        if (ctx->pc != 0x2C9770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9770u; }
        if (ctx->pc != 0x2C9770u) { return; }
    }
    ctx->pc = 0x2C9770u;
label_2c9770:
    // 0x2c9770: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c9770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c9774:
    // 0x2c9774: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c9778:
    // 0x2c9778: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c977c:
    if (ctx->pc == 0x2C977Cu) {
        ctx->pc = 0x2C977Cu;
            // 0x2c977c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9780u;
        goto label_2c9780;
    }
    ctx->pc = 0x2C9778u;
    {
        const bool branch_taken_0x2c9778 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9778) {
            ctx->pc = 0x2C977Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9778u;
            // 0x2c977c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C978Cu;
            goto label_2c978c;
        }
    }
    ctx->pc = 0x2C9780u;
label_2c9780:
    // 0x2c9780: 0xc0400a8  jal         func_1002A0
label_2c9784:
    if (ctx->pc == 0x2C9784u) {
        ctx->pc = 0x2C9784u;
            // 0x2c9784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9788u;
        goto label_2c9788;
    }
    ctx->pc = 0x2C9780u;
    SET_GPR_U32(ctx, 31, 0x2C9788u);
    ctx->pc = 0x2C9784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9780u;
            // 0x2c9784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9788u; }
        if (ctx->pc != 0x2C9788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9788u; }
        if (ctx->pc != 0x2C9788u) { return; }
    }
    ctx->pc = 0x2C9788u;
label_2c9788:
    // 0x2c9788: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c9788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c978c:
    // 0x2c978c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c978cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9790:
    // 0x2c9790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9794:
    // 0x2c9794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9798:
    // 0x2c9798: 0x3e00008  jr          $ra
label_2c979c:
    if (ctx->pc == 0x2C979Cu) {
        ctx->pc = 0x2C979Cu;
            // 0x2c979c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C97A0u;
        goto label_fallthrough_0x2c9798;
    }
    ctx->pc = 0x2C9798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9798u;
            // 0x2c979c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c9798:
    ctx->pc = 0x2C97A0u;
}
