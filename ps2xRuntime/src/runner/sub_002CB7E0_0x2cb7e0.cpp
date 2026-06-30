#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB7E0
// Address: 0x2cb7e0 - 0x2cb940
void sub_002CB7E0_0x2cb7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB7E0_0x2cb7e0");
#endif

    switch (ctx->pc) {
        case 0x2cb7e0u: goto label_2cb7e0;
        case 0x2cb7e4u: goto label_2cb7e4;
        case 0x2cb7e8u: goto label_2cb7e8;
        case 0x2cb7ecu: goto label_2cb7ec;
        case 0x2cb7f0u: goto label_2cb7f0;
        case 0x2cb7f4u: goto label_2cb7f4;
        case 0x2cb7f8u: goto label_2cb7f8;
        case 0x2cb7fcu: goto label_2cb7fc;
        case 0x2cb800u: goto label_2cb800;
        case 0x2cb804u: goto label_2cb804;
        case 0x2cb808u: goto label_2cb808;
        case 0x2cb80cu: goto label_2cb80c;
        case 0x2cb810u: goto label_2cb810;
        case 0x2cb814u: goto label_2cb814;
        case 0x2cb818u: goto label_2cb818;
        case 0x2cb81cu: goto label_2cb81c;
        case 0x2cb820u: goto label_2cb820;
        case 0x2cb824u: goto label_2cb824;
        case 0x2cb828u: goto label_2cb828;
        case 0x2cb82cu: goto label_2cb82c;
        case 0x2cb830u: goto label_2cb830;
        case 0x2cb834u: goto label_2cb834;
        case 0x2cb838u: goto label_2cb838;
        case 0x2cb83cu: goto label_2cb83c;
        case 0x2cb840u: goto label_2cb840;
        case 0x2cb844u: goto label_2cb844;
        case 0x2cb848u: goto label_2cb848;
        case 0x2cb84cu: goto label_2cb84c;
        case 0x2cb850u: goto label_2cb850;
        case 0x2cb854u: goto label_2cb854;
        case 0x2cb858u: goto label_2cb858;
        case 0x2cb85cu: goto label_2cb85c;
        case 0x2cb860u: goto label_2cb860;
        case 0x2cb864u: goto label_2cb864;
        case 0x2cb868u: goto label_2cb868;
        case 0x2cb86cu: goto label_2cb86c;
        case 0x2cb870u: goto label_2cb870;
        case 0x2cb874u: goto label_2cb874;
        case 0x2cb878u: goto label_2cb878;
        case 0x2cb87cu: goto label_2cb87c;
        case 0x2cb880u: goto label_2cb880;
        case 0x2cb884u: goto label_2cb884;
        case 0x2cb888u: goto label_2cb888;
        case 0x2cb88cu: goto label_2cb88c;
        case 0x2cb890u: goto label_2cb890;
        case 0x2cb894u: goto label_2cb894;
        case 0x2cb898u: goto label_2cb898;
        case 0x2cb89cu: goto label_2cb89c;
        case 0x2cb8a0u: goto label_2cb8a0;
        case 0x2cb8a4u: goto label_2cb8a4;
        case 0x2cb8a8u: goto label_2cb8a8;
        case 0x2cb8acu: goto label_2cb8ac;
        case 0x2cb8b0u: goto label_2cb8b0;
        case 0x2cb8b4u: goto label_2cb8b4;
        case 0x2cb8b8u: goto label_2cb8b8;
        case 0x2cb8bcu: goto label_2cb8bc;
        case 0x2cb8c0u: goto label_2cb8c0;
        case 0x2cb8c4u: goto label_2cb8c4;
        case 0x2cb8c8u: goto label_2cb8c8;
        case 0x2cb8ccu: goto label_2cb8cc;
        case 0x2cb8d0u: goto label_2cb8d0;
        case 0x2cb8d4u: goto label_2cb8d4;
        case 0x2cb8d8u: goto label_2cb8d8;
        case 0x2cb8dcu: goto label_2cb8dc;
        case 0x2cb8e0u: goto label_2cb8e0;
        case 0x2cb8e4u: goto label_2cb8e4;
        case 0x2cb8e8u: goto label_2cb8e8;
        case 0x2cb8ecu: goto label_2cb8ec;
        case 0x2cb8f0u: goto label_2cb8f0;
        case 0x2cb8f4u: goto label_2cb8f4;
        case 0x2cb8f8u: goto label_2cb8f8;
        case 0x2cb8fcu: goto label_2cb8fc;
        case 0x2cb900u: goto label_2cb900;
        case 0x2cb904u: goto label_2cb904;
        case 0x2cb908u: goto label_2cb908;
        case 0x2cb90cu: goto label_2cb90c;
        case 0x2cb910u: goto label_2cb910;
        case 0x2cb914u: goto label_2cb914;
        case 0x2cb918u: goto label_2cb918;
        case 0x2cb91cu: goto label_2cb91c;
        case 0x2cb920u: goto label_2cb920;
        case 0x2cb924u: goto label_2cb924;
        case 0x2cb928u: goto label_2cb928;
        case 0x2cb92cu: goto label_2cb92c;
        case 0x2cb930u: goto label_2cb930;
        case 0x2cb934u: goto label_2cb934;
        case 0x2cb938u: goto label_2cb938;
        case 0x2cb93cu: goto label_2cb93c;
        default: break;
    }

    ctx->pc = 0x2cb7e0u;

label_2cb7e0:
    // 0x2cb7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cb7e4:
    // 0x2cb7e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cb7e8:
    // 0x2cb7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cb7ec:
    // 0x2cb7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cb7f0:
    // 0x2cb7f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb7f4:
    // 0x2cb7f4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2cb7f8:
    if (ctx->pc == 0x2CB7F8u) {
        ctx->pc = 0x2CB7F8u;
            // 0x2cb7f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7FCu;
        goto label_2cb7fc;
    }
    ctx->pc = 0x2CB7F4u;
    {
        const bool branch_taken_0x2cb7f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7F4u;
            // 0x2cb7f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7f4) {
            ctx->pc = 0x2CB928u;
            goto label_2cb928;
        }
    }
    ctx->pc = 0x2CB7FCu;
label_2cb7fc:
    // 0x2cb7fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cb800:
    // 0x2cb800: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb804:
    // 0x2cb804: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x2cb804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
label_2cb808:
    // 0x2cb808: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cb808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2cb80c:
    // 0x2cb80c: 0x24420198  addiu       $v0, $v0, 0x198
    ctx->pc = 0x2cb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 408));
label_2cb810:
    // 0x2cb810: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cb810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cb814:
    // 0x2cb814: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2cb814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2cb818:
    // 0x2cb818: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2cb818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2cb81c:
    // 0x2cb81c: 0xc0407c0  jal         func_101F00
label_2cb820:
    if (ctx->pc == 0x2CB820u) {
        ctx->pc = 0x2CB820u;
            // 0x2cb820: 0x24a5b6e0  addiu       $a1, $a1, -0x4920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948576));
        ctx->pc = 0x2CB824u;
        goto label_2cb824;
    }
    ctx->pc = 0x2CB81Cu;
    SET_GPR_U32(ctx, 31, 0x2CB824u);
    ctx->pc = 0x2CB820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB81Cu;
            // 0x2cb820: 0x24a5b6e0  addiu       $a1, $a1, -0x4920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB824u; }
        if (ctx->pc != 0x2CB824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB824u; }
        if (ctx->pc != 0x2CB824u) { return; }
    }
    ctx->pc = 0x2CB824u;
label_2cb824:
    // 0x2cb824: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2cb824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2cb828:
    // 0x2cb828: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2cb82c:
    if (ctx->pc == 0x2CB82Cu) {
        ctx->pc = 0x2CB82Cu;
            // 0x2cb82c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2CB830u;
        goto label_2cb830;
    }
    ctx->pc = 0x2CB828u;
    {
        const bool branch_taken_0x2cb828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb828) {
            ctx->pc = 0x2CB82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB828u;
            // 0x2cb82c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB83Cu;
            goto label_2cb83c;
        }
    }
    ctx->pc = 0x2CB830u;
label_2cb830:
    // 0x2cb830: 0xc07507c  jal         func_1D41F0
label_2cb834:
    if (ctx->pc == 0x2CB834u) {
        ctx->pc = 0x2CB834u;
            // 0x2cb834: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2CB838u;
        goto label_2cb838;
    }
    ctx->pc = 0x2CB830u;
    SET_GPR_U32(ctx, 31, 0x2CB838u);
    ctx->pc = 0x2CB834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB830u;
            // 0x2cb834: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB838u; }
        if (ctx->pc != 0x2CB838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB838u; }
        if (ctx->pc != 0x2CB838u) { return; }
    }
    ctx->pc = 0x2CB838u;
label_2cb838:
    // 0x2cb838: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2cb838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2cb83c:
    // 0x2cb83c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2cb840:
    if (ctx->pc == 0x2CB840u) {
        ctx->pc = 0x2CB840u;
            // 0x2cb840: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2CB844u;
        goto label_2cb844;
    }
    ctx->pc = 0x2CB83Cu;
    {
        const bool branch_taken_0x2cb83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb83c) {
            ctx->pc = 0x2CB840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB83Cu;
            // 0x2cb840: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB86Cu;
            goto label_2cb86c;
        }
    }
    ctx->pc = 0x2CB844u;
label_2cb844:
    // 0x2cb844: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cb848:
    if (ctx->pc == 0x2CB848u) {
        ctx->pc = 0x2CB84Cu;
        goto label_2cb84c;
    }
    ctx->pc = 0x2CB844u;
    {
        const bool branch_taken_0x2cb844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb844) {
            ctx->pc = 0x2CB868u;
            goto label_2cb868;
        }
    }
    ctx->pc = 0x2CB84Cu;
label_2cb84c:
    // 0x2cb84c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cb850:
    if (ctx->pc == 0x2CB850u) {
        ctx->pc = 0x2CB854u;
        goto label_2cb854;
    }
    ctx->pc = 0x2CB84Cu;
    {
        const bool branch_taken_0x2cb84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb84c) {
            ctx->pc = 0x2CB868u;
            goto label_2cb868;
        }
    }
    ctx->pc = 0x2CB854u;
label_2cb854:
    // 0x2cb854: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2cb854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2cb858:
    // 0x2cb858: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cb85c:
    if (ctx->pc == 0x2CB85Cu) {
        ctx->pc = 0x2CB860u;
        goto label_2cb860;
    }
    ctx->pc = 0x2CB858u;
    {
        const bool branch_taken_0x2cb858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb858) {
            ctx->pc = 0x2CB868u;
            goto label_2cb868;
        }
    }
    ctx->pc = 0x2CB860u;
label_2cb860:
    // 0x2cb860: 0xc0400a8  jal         func_1002A0
label_2cb864:
    if (ctx->pc == 0x2CB864u) {
        ctx->pc = 0x2CB868u;
        goto label_2cb868;
    }
    ctx->pc = 0x2CB860u;
    SET_GPR_U32(ctx, 31, 0x2CB868u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB868u; }
        if (ctx->pc != 0x2CB868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB868u; }
        if (ctx->pc != 0x2CB868u) { return; }
    }
    ctx->pc = 0x2CB868u;
label_2cb868:
    // 0x2cb868: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2cb868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2cb86c:
    // 0x2cb86c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2cb870:
    if (ctx->pc == 0x2CB870u) {
        ctx->pc = 0x2CB870u;
            // 0x2cb870: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CB874u;
        goto label_2cb874;
    }
    ctx->pc = 0x2CB86Cu;
    {
        const bool branch_taken_0x2cb86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb86c) {
            ctx->pc = 0x2CB870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB86Cu;
            // 0x2cb870: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB89Cu;
            goto label_2cb89c;
        }
    }
    ctx->pc = 0x2CB874u;
label_2cb874:
    // 0x2cb874: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cb878:
    if (ctx->pc == 0x2CB878u) {
        ctx->pc = 0x2CB87Cu;
        goto label_2cb87c;
    }
    ctx->pc = 0x2CB874u;
    {
        const bool branch_taken_0x2cb874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb874) {
            ctx->pc = 0x2CB898u;
            goto label_2cb898;
        }
    }
    ctx->pc = 0x2CB87Cu;
label_2cb87c:
    // 0x2cb87c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cb880:
    if (ctx->pc == 0x2CB880u) {
        ctx->pc = 0x2CB884u;
        goto label_2cb884;
    }
    ctx->pc = 0x2CB87Cu;
    {
        const bool branch_taken_0x2cb87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb87c) {
            ctx->pc = 0x2CB898u;
            goto label_2cb898;
        }
    }
    ctx->pc = 0x2CB884u;
label_2cb884:
    // 0x2cb884: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2cb884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2cb888:
    // 0x2cb888: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cb88c:
    if (ctx->pc == 0x2CB88Cu) {
        ctx->pc = 0x2CB890u;
        goto label_2cb890;
    }
    ctx->pc = 0x2CB888u;
    {
        const bool branch_taken_0x2cb888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb888) {
            ctx->pc = 0x2CB898u;
            goto label_2cb898;
        }
    }
    ctx->pc = 0x2CB890u;
label_2cb890:
    // 0x2cb890: 0xc0400a8  jal         func_1002A0
label_2cb894:
    if (ctx->pc == 0x2CB894u) {
        ctx->pc = 0x2CB898u;
        goto label_2cb898;
    }
    ctx->pc = 0x2CB890u;
    SET_GPR_U32(ctx, 31, 0x2CB898u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB898u; }
        if (ctx->pc != 0x2CB898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB898u; }
        if (ctx->pc != 0x2CB898u) { return; }
    }
    ctx->pc = 0x2CB898u;
label_2cb898:
    // 0x2cb898: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2cb898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2cb89c:
    // 0x2cb89c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cb8a0:
    if (ctx->pc == 0x2CB8A0u) {
        ctx->pc = 0x2CB8A4u;
        goto label_2cb8a4;
    }
    ctx->pc = 0x2CB89Cu;
    {
        const bool branch_taken_0x2cb89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb89c) {
            ctx->pc = 0x2CB8B8u;
            goto label_2cb8b8;
        }
    }
    ctx->pc = 0x2CB8A4u;
label_2cb8a4:
    // 0x2cb8a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cb8a8:
    // 0x2cb8a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cb8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cb8ac:
    // 0x2cb8ac: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x2cb8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
label_2cb8b0:
    // 0x2cb8b0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2cb8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2cb8b4:
    // 0x2cb8b4: 0xac400e38  sw          $zero, 0xE38($v0)
    ctx->pc = 0x2cb8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3640), GPR_U32(ctx, 0));
label_2cb8b8:
    // 0x2cb8b8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2cb8bc:
    if (ctx->pc == 0x2CB8BCu) {
        ctx->pc = 0x2CB8BCu;
            // 0x2cb8bc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CB8C0u;
        goto label_2cb8c0;
    }
    ctx->pc = 0x2CB8B8u;
    {
        const bool branch_taken_0x2cb8b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb8b8) {
            ctx->pc = 0x2CB8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8B8u;
            // 0x2cb8bc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB914u;
            goto label_2cb914;
        }
    }
    ctx->pc = 0x2CB8C0u;
label_2cb8c0:
    // 0x2cb8c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb8c4:
    // 0x2cb8c4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2cb8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2cb8c8:
    // 0x2cb8c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cb8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cb8cc:
    // 0x2cb8cc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2cb8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2cb8d0:
    // 0x2cb8d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cb8d4:
    if (ctx->pc == 0x2CB8D4u) {
        ctx->pc = 0x2CB8D4u;
            // 0x2cb8d4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2CB8D8u;
        goto label_2cb8d8;
    }
    ctx->pc = 0x2CB8D0u;
    {
        const bool branch_taken_0x2cb8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb8d0) {
            ctx->pc = 0x2CB8D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8D0u;
            // 0x2cb8d4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB8ECu;
            goto label_2cb8ec;
        }
    }
    ctx->pc = 0x2CB8D8u;
label_2cb8d8:
    // 0x2cb8d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cb8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb8dc:
    // 0x2cb8dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cb8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cb8e0:
    // 0x2cb8e0: 0x320f809  jalr        $t9
label_2cb8e4:
    if (ctx->pc == 0x2CB8E4u) {
        ctx->pc = 0x2CB8E4u;
            // 0x2cb8e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CB8E8u;
        goto label_2cb8e8;
    }
    ctx->pc = 0x2CB8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB8E8u);
        ctx->pc = 0x2CB8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8E0u;
            // 0x2cb8e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CB8E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CB8E8u; }
            if (ctx->pc != 0x2CB8E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CB8E8u;
label_2cb8e8:
    // 0x2cb8e8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2cb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2cb8ec:
    // 0x2cb8ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cb8f0:
    if (ctx->pc == 0x2CB8F0u) {
        ctx->pc = 0x2CB8F0u;
            // 0x2cb8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8F4u;
        goto label_2cb8f4;
    }
    ctx->pc = 0x2CB8ECu;
    {
        const bool branch_taken_0x2cb8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb8ec) {
            ctx->pc = 0x2CB8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8ECu;
            // 0x2cb8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB908u;
            goto label_2cb908;
        }
    }
    ctx->pc = 0x2CB8F4u;
label_2cb8f4:
    // 0x2cb8f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cb8f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb8f8:
    // 0x2cb8f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cb8f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cb8fc:
    // 0x2cb8fc: 0x320f809  jalr        $t9
label_2cb900:
    if (ctx->pc == 0x2CB900u) {
        ctx->pc = 0x2CB900u;
            // 0x2cb900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CB904u;
        goto label_2cb904;
    }
    ctx->pc = 0x2CB8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB904u);
        ctx->pc = 0x2CB900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8FCu;
            // 0x2cb900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CB904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CB904u; }
            if (ctx->pc != 0x2CB904u) { return; }
        }
        }
    }
    ctx->pc = 0x2CB904u;
label_2cb904:
    // 0x2cb904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb908:
    // 0x2cb908: 0xc075bf8  jal         func_1D6FE0
label_2cb90c:
    if (ctx->pc == 0x2CB90Cu) {
        ctx->pc = 0x2CB90Cu;
            // 0x2cb90c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB910u;
        goto label_2cb910;
    }
    ctx->pc = 0x2CB908u;
    SET_GPR_U32(ctx, 31, 0x2CB910u);
    ctx->pc = 0x2CB90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB908u;
            // 0x2cb90c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB910u; }
        if (ctx->pc != 0x2CB910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB910u; }
        if (ctx->pc != 0x2CB910u) { return; }
    }
    ctx->pc = 0x2CB910u;
label_2cb910:
    // 0x2cb910: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cb910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cb914:
    // 0x2cb914: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb914u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cb918:
    // 0x2cb918: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cb91c:
    if (ctx->pc == 0x2CB91Cu) {
        ctx->pc = 0x2CB91Cu;
            // 0x2cb91c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB920u;
        goto label_2cb920;
    }
    ctx->pc = 0x2CB918u;
    {
        const bool branch_taken_0x2cb918 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb918) {
            ctx->pc = 0x2CB91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB918u;
            // 0x2cb91c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB92Cu;
            goto label_2cb92c;
        }
    }
    ctx->pc = 0x2CB920u;
label_2cb920:
    // 0x2cb920: 0xc0400a8  jal         func_1002A0
label_2cb924:
    if (ctx->pc == 0x2CB924u) {
        ctx->pc = 0x2CB924u;
            // 0x2cb924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB928u;
        goto label_2cb928;
    }
    ctx->pc = 0x2CB920u;
    SET_GPR_U32(ctx, 31, 0x2CB928u);
    ctx->pc = 0x2CB924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB920u;
            // 0x2cb924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB928u; }
        if (ctx->pc != 0x2CB928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB928u; }
        if (ctx->pc != 0x2CB928u) { return; }
    }
    ctx->pc = 0x2CB928u;
label_2cb928:
    // 0x2cb928: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cb928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb92c:
    // 0x2cb92c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb930:
    // 0x2cb930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb934:
    // 0x2cb934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb938:
    // 0x2cb938: 0x3e00008  jr          $ra
label_2cb93c:
    if (ctx->pc == 0x2CB93Cu) {
        ctx->pc = 0x2CB93Cu;
            // 0x2cb93c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CB940u;
        goto label_fallthrough_0x2cb938;
    }
    ctx->pc = 0x2CB938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB938u;
            // 0x2cb93c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cb938:
    ctx->pc = 0x2CB940u;
}
