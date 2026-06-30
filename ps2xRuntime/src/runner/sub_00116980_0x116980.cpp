#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116980
// Address: 0x116980 - 0x116a30
void sub_00116980_0x116980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116980_0x116980");
#endif

    switch (ctx->pc) {
        case 0x116998u: goto label_116998;
        case 0x1169b8u: goto label_1169b8;
        case 0x1169d0u: goto label_1169d0;
        case 0x1169d8u: goto label_1169d8;
        case 0x1169e0u: goto label_1169e0;
        case 0x1169ecu: goto label_1169ec;
        case 0x1169f0u: goto label_1169f0;
        case 0x1169f8u: goto label_1169f8;
        case 0x116a08u: goto label_116a08;
        default: break;
    }

    ctx->pc = 0x116980u;

    // 0x116980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x116984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116988: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11698c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x116990: 0xc045a46  jal         func_116918
    ctx->pc = 0x116990u;
    SET_GPR_U32(ctx, 31, 0x116998u);
    ctx->pc = 0x116994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116990u;
            // 0x116994: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116918u;
    if (runtime->hasFunction(0x116918u)) {
        auto targetFn = runtime->lookupFunction(0x116918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116998u; }
        if (ctx->pc != 0x116998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116918_0x116918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116998u; }
        if (ctx->pc != 0x116998u) { return; }
    }
    ctx->pc = 0x116998u;
label_116998:
    // 0x116998: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x116998u;
    {
        const bool branch_taken_0x116998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11699Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116998u;
            // 0x11699c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116998) {
            ctx->pc = 0x116A14u;
            goto label_116a14;
        }
    }
    ctx->pc = 0x1169A0u;
    // 0x1169a0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1169a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1169a4: 0x2450f280  addiu       $s0, $v0, -0xD80
    ctx->pc = 0x1169a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963840));
    // 0x1169a8: 0x8c44f280  lw          $a0, -0xD80($v0)
    ctx->pc = 0x1169a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963840)));
    // 0x1169ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1169acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1169b0: 0xc045a2c  jal         func_1168B0
    ctx->pc = 0x1169B0u;
    SET_GPR_U32(ctx, 31, 0x1169B8u);
    ctx->pc = 0x1169B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1169B0u;
            // 0x1169b4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1168B0u;
    if (runtime->hasFunction(0x1168B0u)) {
        auto targetFn = runtime->lookupFunction(0x1168B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169B8u; }
        if (ctx->pc != 0x1169B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001168B0_0x1168b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169B8u; }
        if (ctx->pc != 0x1169B8u) { return; }
    }
    ctx->pc = 0x1169B8u;
label_1169b8:
    // 0x1169b8: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1169b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1169bc: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1169bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1169c0: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x1169c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x1169c4: 0x24a5ead8  addiu       $a1, $a1, -0x1528
    ctx->pc = 0x1169c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961880));
    // 0x1169c8: 0xc045a30  jal         func_1168C0
    ctx->pc = 0x1169C8u;
    SET_GPR_U32(ctx, 31, 0x1169D0u);
    ctx->pc = 0x1169CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1169C8u;
            // 0x1169cc: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1168C0u;
    if (runtime->hasFunction(0x1168C0u)) {
        auto targetFn = runtime->lookupFunction(0x1168C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169D0u; }
        if (ctx->pc != 0x1169D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001168C0_0x1168c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169D0u; }
        if (ctx->pc != 0x1169D0u) { return; }
    }
    ctx->pc = 0x1169D0u;
label_1169d0:
    // 0x1169d0: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x1169D0u;
    SET_GPR_U32(ctx, 31, 0x1169D8u);
    ctx->pc = 0x1169D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1169D0u;
            // 0x1169d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169D8u; }
        if (ctx->pc != 0x1169D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169D8u; }
        if (ctx->pc != 0x1169D8u) { return; }
    }
    ctx->pc = 0x1169D8u;
label_1169d8:
    // 0x1169d8: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x1169D8u;
    SET_GPR_U32(ctx, 31, 0x1169E0u);
    ctx->pc = 0x1169DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1169D8u;
            // 0x1169dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169E0u; }
        if (ctx->pc != 0x1169E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169E0u; }
        if (ctx->pc != 0x1169E0u) { return; }
    }
    ctx->pc = 0x1169E0u;
label_1169e0:
    // 0x1169e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1169e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1169e4: 0xc045a2c  jal         func_1168B0
    ctx->pc = 0x1169E4u;
    SET_GPR_U32(ctx, 31, 0x1169ECu);
    ctx->pc = 0x1169E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1169E4u;
            // 0x1169e8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1168B0u;
    if (runtime->hasFunction(0x1168B0u)) {
        auto targetFn = runtime->lookupFunction(0x1168B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169ECu; }
        if (ctx->pc != 0x1169ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001168B0_0x1168b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169ECu; }
        if (ctx->pc != 0x1169ECu) { return; }
    }
    ctx->pc = 0x1169ECu;
label_1169ec:
    // 0x1169ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1169ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1169f0:
    // 0x1169f0: 0xc045a42  jal         func_116908
    ctx->pc = 0x1169F0u;
    SET_GPR_U32(ctx, 31, 0x1169F8u);
    ctx->pc = 0x1169F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1169F0u;
            // 0x1169f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116908u;
    if (runtime->hasFunction(0x116908u)) {
        auto targetFn = runtime->lookupFunction(0x116908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169F8u; }
        if (ctx->pc != 0x1169F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116908_0x116908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169F8u; }
        if (ctx->pc != 0x1169F8u) { return; }
    }
    ctx->pc = 0x1169F8u;
label_1169f8:
    // 0x1169f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1169f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1169fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1169fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a00: 0xc045a2c  jal         func_1168B0
    ctx->pc = 0x116A00u;
    SET_GPR_U32(ctx, 31, 0x116A08u);
    ctx->pc = 0x116A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116A00u;
            // 0x116a04: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1168B0u;
    if (runtime->hasFunction(0x1168B0u)) {
        auto targetFn = runtime->lookupFunction(0x1168B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116A08u; }
        if (ctx->pc != 0x116A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001168B0_0x1168b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116A08u; }
        if (ctx->pc != 0x116A08u) { return; }
    }
    ctx->pc = 0x116A08u;
label_116a08:
    // 0x116a08: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x116a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x116a0c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x116A0Cu;
    {
        const bool branch_taken_0x116a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116a0c) {
            ctx->pc = 0x116A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116A0Cu;
            // 0x116a10: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1169F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1169f0;
        }
    }
    ctx->pc = 0x116A14u;
label_116a14:
    // 0x116a14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116a18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116a1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116a24: 0x3e00008  jr          $ra
    ctx->pc = 0x116A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116A24u;
            // 0x116a28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116A2Cu;
    // 0x116a2c: 0x0  nop
    ctx->pc = 0x116a2cu;
    // NOP
}
