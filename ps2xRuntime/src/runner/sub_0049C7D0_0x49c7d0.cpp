#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049C7D0
// Address: 0x49c7d0 - 0x49c910
void sub_0049C7D0_0x49c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C7D0_0x49c7d0");
#endif

    switch (ctx->pc) {
        case 0x49c7ecu: goto label_49c7ec;
        case 0x49c80cu: goto label_49c80c;
        case 0x49c840u: goto label_49c840;
        case 0x49c8a0u: goto label_49c8a0;
        case 0x49c8acu: goto label_49c8ac;
        case 0x49c8b8u: goto label_49c8b8;
        case 0x49c8c4u: goto label_49c8c4;
        case 0x49c8d0u: goto label_49c8d0;
        case 0x49c8dcu: goto label_49c8dc;
        case 0x49c8f4u: goto label_49c8f4;
        default: break;
    }

    ctx->pc = 0x49c7d0u;

    // 0x49c7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49c7d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x49c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x49c7d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49c7dc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x49c7dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x49c7e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49c7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49c7e4: 0xc12727c  jal         func_49C9F0
    ctx->pc = 0x49C7E4u;
    SET_GPR_U32(ctx, 31, 0x49C7ECu);
    ctx->pc = 0x49C7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C7E4u;
            // 0x49c7e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C9F0u;
    if (runtime->hasFunction(0x49C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x49C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C7ECu; }
        if (ctx->pc != 0x49C7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049C9F0_0x49c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C7ECu; }
        if (ctx->pc != 0x49C7ECu) { return; }
    }
    ctx->pc = 0x49C7ECu;
label_49c7ec:
    // 0x49c7ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49c7f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49c7f4: 0x2463fe30  addiu       $v1, $v1, -0x1D0
    ctx->pc = 0x49c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966832));
    // 0x49c7f8: 0x2442fe68  addiu       $v0, $v0, -0x198
    ctx->pc = 0x49c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966888));
    // 0x49c7fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49c800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49c800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c804: 0xc127278  jal         func_49C9E0
    ctx->pc = 0x49C804u;
    SET_GPR_U32(ctx, 31, 0x49C80Cu);
    ctx->pc = 0x49C808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C804u;
            // 0x49c808: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C9E0u;
    if (runtime->hasFunction(0x49C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x49C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C80Cu; }
        if (ctx->pc != 0x49C80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049C9E0_0x49c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C80Cu; }
        if (ctx->pc != 0x49C80Cu) { return; }
    }
    ctx->pc = 0x49C80Cu;
label_49c80c:
    // 0x49c80c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x49c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x49c810: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49c810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49c814: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x49c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x49c818: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49c818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49c81c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49c820: 0x2442fd18  addiu       $v0, $v0, -0x2E8
    ctx->pc = 0x49c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966552));
    // 0x49c824: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x49c824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x49c828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49c828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c82c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49c830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49c830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49c834: 0x3e00008  jr          $ra
    ctx->pc = 0x49C834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C834u;
            // 0x49c838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C83Cu;
    // 0x49c83c: 0x0  nop
    ctx->pc = 0x49c83cu;
    // NOP
label_49c840:
    // 0x49c840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49c844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49c848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49c84c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49c84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49c850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49c850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c854: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x49C854u;
    {
        const bool branch_taken_0x49c854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C854u;
            // 0x49c858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c854) {
            ctx->pc = 0x49C8F4u;
            goto label_49c8f4;
        }
    }
    ctx->pc = 0x49C85Cu;
    // 0x49c85c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49c860: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49c860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49c864: 0x2463fe30  addiu       $v1, $v1, -0x1D0
    ctx->pc = 0x49c864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966832));
    // 0x49c868: 0x2442fe68  addiu       $v0, $v0, -0x198
    ctx->pc = 0x49c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966888));
    // 0x49c86c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49c870: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x49C870u;
    {
        const bool branch_taken_0x49c870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C870u;
            // 0x49c874: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c870) {
            ctx->pc = 0x49C8DCu;
            goto label_49c8dc;
        }
    }
    ctx->pc = 0x49C878u;
    // 0x49c878: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49c878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49c87c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49c880: 0x2463fde0  addiu       $v1, $v1, -0x220
    ctx->pc = 0x49c880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966752));
    // 0x49c884: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49c884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x49c888: 0x2442fe18  addiu       $v0, $v0, -0x1E8
    ctx->pc = 0x49c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966808));
    // 0x49c88c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49c890: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x49c890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x49c894: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x49c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x49c898: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x49C898u;
    SET_GPR_U32(ctx, 31, 0x49C8A0u);
    ctx->pc = 0x49C89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C898u;
            // 0x49c89c: 0x24a5c200  addiu       $a1, $a1, -0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8A0u; }
        if (ctx->pc != 0x49C8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8A0u; }
        if (ctx->pc != 0x49C8A0u) { return; }
    }
    ctx->pc = 0x49C8A0u;
label_49c8a0:
    // 0x49c8a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x49c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x49c8a4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x49C8A4u;
    SET_GPR_U32(ctx, 31, 0x49C8ACu);
    ctx->pc = 0x49C8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C8A4u;
            // 0x49c8a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8ACu; }
        if (ctx->pc != 0x49C8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8ACu; }
        if (ctx->pc != 0x49C8ACu) { return; }
    }
    ctx->pc = 0x49C8ACu;
label_49c8ac:
    // 0x49c8ac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x49c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x49c8b0: 0xc12725c  jal         func_49C970
    ctx->pc = 0x49C8B0u;
    SET_GPR_U32(ctx, 31, 0x49C8B8u);
    ctx->pc = 0x49C8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C8B0u;
            // 0x49c8b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C970u;
    if (runtime->hasFunction(0x49C970u)) {
        auto targetFn = runtime->lookupFunction(0x49C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8B8u; }
        if (ctx->pc != 0x49C8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049C970_0x49c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8B8u; }
        if (ctx->pc != 0x49C8B8u) { return; }
    }
    ctx->pc = 0x49C8B8u;
label_49c8b8:
    // 0x49c8b8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x49c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x49c8bc: 0xc12725c  jal         func_49C970
    ctx->pc = 0x49C8BCu;
    SET_GPR_U32(ctx, 31, 0x49C8C4u);
    ctx->pc = 0x49C8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C8BCu;
            // 0x49c8c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C970u;
    if (runtime->hasFunction(0x49C970u)) {
        auto targetFn = runtime->lookupFunction(0x49C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8C4u; }
        if (ctx->pc != 0x49C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049C970_0x49c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8C4u; }
        if (ctx->pc != 0x49C8C4u) { return; }
    }
    ctx->pc = 0x49C8C4u;
label_49c8c4:
    // 0x49c8c4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x49c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x49c8c8: 0xc127244  jal         func_49C910
    ctx->pc = 0x49C8C8u;
    SET_GPR_U32(ctx, 31, 0x49C8D0u);
    ctx->pc = 0x49C8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C8C8u;
            // 0x49c8cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C910u;
    if (runtime->hasFunction(0x49C910u)) {
        auto targetFn = runtime->lookupFunction(0x49C910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8D0u; }
        if (ctx->pc != 0x49C8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049C910_0x49c910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8D0u; }
        if (ctx->pc != 0x49C8D0u) { return; }
    }
    ctx->pc = 0x49C8D0u;
label_49c8d0:
    // 0x49c8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49c8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c8d4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x49C8D4u;
    SET_GPR_U32(ctx, 31, 0x49C8DCu);
    ctx->pc = 0x49C8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C8D4u;
            // 0x49c8d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8DCu; }
        if (ctx->pc != 0x49C8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8DCu; }
        if (ctx->pc != 0x49C8DCu) { return; }
    }
    ctx->pc = 0x49C8DCu;
label_49c8dc:
    // 0x49c8dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49c8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x49c8e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49c8e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x49c8e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49C8E4u;
    {
        const bool branch_taken_0x49c8e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49c8e4) {
            ctx->pc = 0x49C8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C8E4u;
            // 0x49c8e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C8F8u;
            goto label_49c8f8;
        }
    }
    ctx->pc = 0x49C8ECu;
    // 0x49c8ec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49C8ECu;
    SET_GPR_U32(ctx, 31, 0x49C8F4u);
    ctx->pc = 0x49C8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C8ECu;
            // 0x49c8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8F4u; }
        if (ctx->pc != 0x49C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C8F4u; }
        if (ctx->pc != 0x49C8F4u) { return; }
    }
    ctx->pc = 0x49C8F4u;
label_49c8f4:
    // 0x49c8f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49c8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49c8f8:
    // 0x49c8f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49c8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49c8fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49c8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49c900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49c900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49c904: 0x3e00008  jr          $ra
    ctx->pc = 0x49C904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C904u;
            // 0x49c908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C90Cu;
    // 0x49c90c: 0x0  nop
    ctx->pc = 0x49c90cu;
    // NOP
}
