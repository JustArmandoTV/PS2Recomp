#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195E60
// Address: 0x195e60 - 0x195f38
void sub_00195E60_0x195e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195E60_0x195e60");
#endif

    switch (ctx->pc) {
        case 0x195e90u: goto label_195e90;
        case 0x195eb0u: goto label_195eb0;
        case 0x195ed8u: goto label_195ed8;
        case 0x195ee0u: goto label_195ee0;
        case 0x195eecu: goto label_195eec;
        case 0x195ef8u: goto label_195ef8;
        case 0x195f00u: goto label_195f00;
        case 0x195f08u: goto label_195f08;
        case 0x195f10u: goto label_195f10;
        case 0x195f18u: goto label_195f18;
        case 0x195f20u: goto label_195f20;
        default: break;
    }

    ctx->pc = 0x195e60u;

    // 0x195e60: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x195e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x195e64: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x195e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x195e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195e6c: 0x2463fed0  addiu       $v1, $v1, -0x130
    ctx->pc = 0x195e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966992));
    // 0x195e70: 0x24428390  addiu       $v0, $v0, -0x7C70
    ctx->pc = 0x195e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935440));
    // 0x195e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195e78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x195e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x195e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195e84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x195e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e88: 0xc0657ce  jal         func_195F38
    ctx->pc = 0x195E88u;
    SET_GPR_U32(ctx, 31, 0x195E90u);
    ctx->pc = 0x195E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E88u;
            // 0x195e8c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F38u;
    if (runtime->hasFunction(0x195F38u)) {
        auto targetFn = runtime->lookupFunction(0x195F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E90u; }
        if (ctx->pc != 0x195E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195F38_0x195f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E90u; }
        if (ctx->pc != 0x195E90u) { return; }
    }
    ctx->pc = 0x195E90u;
label_195e90:
    // 0x195e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e94: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x195E94u;
    {
        const bool branch_taken_0x195e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e94) {
            ctx->pc = 0x195ED0u;
            goto label_195ed0;
        }
    }
    ctx->pc = 0x195E9Cu;
    // 0x195e9c: 0x3c03ff03  lui         $v1, 0xFF03
    ctx->pc = 0x195e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65283 << 16));
    // 0x195ea0: 0x3463ff05  ori         $v1, $v1, 0xFF05
    ctx->pc = 0x195ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65285);
    // 0x195ea4: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x195EA4u;
    {
        const bool branch_taken_0x195ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195ea4) {
            ctx->pc = 0x195EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x195EA4u;
            // 0x195ea8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x195F28u;
            goto label_195f28;
        }
    }
    ctx->pc = 0x195EACu;
    // 0x195eac: 0x0  nop
    ctx->pc = 0x195eacu;
    // NOP
label_195eb0:
    // 0x195eb0: 0x0  nop
    ctx->pc = 0x195eb0u;
    // NOP
    // 0x195eb4: 0x0  nop
    ctx->pc = 0x195eb4u;
    // NOP
    // 0x195eb8: 0x0  nop
    ctx->pc = 0x195eb8u;
    // NOP
    // 0x195ebc: 0x0  nop
    ctx->pc = 0x195ebcu;
    // NOP
    // 0x195ec0: 0x0  nop
    ctx->pc = 0x195ec0u;
    // NOP
    // 0x195ec4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x195EC4u;
    {
        const bool branch_taken_0x195ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ec4) {
            ctx->pc = 0x195EB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_195eb0;
        }
    }
    ctx->pc = 0x195ECCu;
    // 0x195ecc: 0x0  nop
    ctx->pc = 0x195eccu;
    // NOP
label_195ed0:
    // 0x195ed0: 0xc0657e0  jal         func_195F80
    ctx->pc = 0x195ED0u;
    SET_GPR_U32(ctx, 31, 0x195ED8u);
    ctx->pc = 0x195F80u;
    if (runtime->hasFunction(0x195F80u)) {
        auto targetFn = runtime->lookupFunction(0x195F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195ED8u; }
        if (ctx->pc != 0x195ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195F80_0x195f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195ED8u; }
        if (ctx->pc != 0x195ED8u) { return; }
    }
    ctx->pc = 0x195ED8u;
label_195ed8:
    // 0x195ed8: 0xc0657e2  jal         func_195F88
    ctx->pc = 0x195ED8u;
    SET_GPR_U32(ctx, 31, 0x195EE0u);
    ctx->pc = 0x195EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195ED8u;
            // 0x195edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F88u;
    if (runtime->hasFunction(0x195F88u)) {
        auto targetFn = runtime->lookupFunction(0x195F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EE0u; }
        if (ctx->pc != 0x195EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195F88_0x195f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EE0u; }
        if (ctx->pc != 0x195EE0u) { return; }
    }
    ctx->pc = 0x195EE0u;
label_195ee0:
    // 0x195ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ee4: 0xc065840  jal         func_196100
    ctx->pc = 0x195EE4u;
    SET_GPR_U32(ctx, 31, 0x195EECu);
    ctx->pc = 0x195EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195EE4u;
            // 0x195ee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196100u;
    if (runtime->hasFunction(0x196100u)) {
        auto targetFn = runtime->lookupFunction(0x196100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EECu; }
        if (ctx->pc != 0x195EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196100_0x196100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EECu; }
        if (ctx->pc != 0x195EECu) { return; }
    }
    ctx->pc = 0x195EECu;
label_195eec:
    // 0x195eec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x195eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x195ef0: 0xc064ec8  jal         func_193B20
    ctx->pc = 0x195EF0u;
    SET_GPR_U32(ctx, 31, 0x195EF8u);
    ctx->pc = 0x195EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195EF0u;
            // 0x195ef4: 0x8c50ff28  lw          $s0, -0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193B20u;
    if (runtime->hasFunction(0x193B20u)) {
        auto targetFn = runtime->lookupFunction(0x193B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EF8u; }
        if (ctx->pc != 0x195EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193B20_0x193b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EF8u; }
        if (ctx->pc != 0x195EF8u) { return; }
    }
    ctx->pc = 0x195EF8u;
label_195ef8:
    // 0x195ef8: 0xc065098  jal         func_194260
    ctx->pc = 0x195EF8u;
    SET_GPR_U32(ctx, 31, 0x195F00u);
    ctx->pc = 0x194260u;
    if (runtime->hasFunction(0x194260u)) {
        auto targetFn = runtime->lookupFunction(0x194260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F00u; }
        if (ctx->pc != 0x195F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194260_0x194260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F00u; }
        if (ctx->pc != 0x195F00u) { return; }
    }
    ctx->pc = 0x195F00u;
label_195f00:
    // 0x195f00: 0xc0657e4  jal         func_195F90
    ctx->pc = 0x195F00u;
    SET_GPR_U32(ctx, 31, 0x195F08u);
    ctx->pc = 0x195F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F00u;
            // 0x195f04: 0x260417e0  addiu       $a0, $s0, 0x17E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F90u;
    if (runtime->hasFunction(0x195F90u)) {
        auto targetFn = runtime->lookupFunction(0x195F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F08u; }
        if (ctx->pc != 0x195F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195F90_0x195f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F08u; }
        if (ctx->pc != 0x195F08u) { return; }
    }
    ctx->pc = 0x195F08u;
label_195f08:
    // 0x195f08: 0xc06581a  jal         func_196068
    ctx->pc = 0x195F08u;
    SET_GPR_U32(ctx, 31, 0x195F10u);
    ctx->pc = 0x196068u;
    if (runtime->hasFunction(0x196068u)) {
        auto targetFn = runtime->lookupFunction(0x196068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F10u; }
        if (ctx->pc != 0x195F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196068_0x196068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F10u; }
        if (ctx->pc != 0x195F10u) { return; }
    }
    ctx->pc = 0x195F10u;
label_195f10:
    // 0x195f10: 0xc06583e  jal         func_1960F8
    ctx->pc = 0x195F10u;
    SET_GPR_U32(ctx, 31, 0x195F18u);
    ctx->pc = 0x1960F8u;
    if (runtime->hasFunction(0x1960F8u)) {
        auto targetFn = runtime->lookupFunction(0x1960F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F18u; }
        if (ctx->pc != 0x195F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001960F8_0x1960f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F18u; }
        if (ctx->pc != 0x195F18u) { return; }
    }
    ctx->pc = 0x195F18u;
label_195f18:
    // 0x195f18: 0xc0659aa  jal         func_1966A8
    ctx->pc = 0x195F18u;
    SET_GPR_U32(ctx, 31, 0x195F20u);
    ctx->pc = 0x1966A8u;
    if (runtime->hasFunction(0x1966A8u)) {
        auto targetFn = runtime->lookupFunction(0x1966A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F20u; }
        if (ctx->pc != 0x195F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001966A8_0x1966a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F20u; }
        if (ctx->pc != 0x195F20u) { return; }
    }
    ctx->pc = 0x195F20u;
label_195f20:
    // 0x195f20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195f28:
    // 0x195f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195f30: 0x3e00008  jr          $ra
    ctx->pc = 0x195F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F30u;
            // 0x195f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195F38u;
}
