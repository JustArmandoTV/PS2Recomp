#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8E80
// Address: 0x4b8e80 - 0x4b8f80
void sub_004B8E80_0x4b8e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8E80_0x4b8e80");
#endif

    switch (ctx->pc) {
        case 0x4b8ee0u: goto label_4b8ee0;
        case 0x4b8ef0u: goto label_4b8ef0;
        case 0x4b8f08u: goto label_4b8f08;
        case 0x4b8f10u: goto label_4b8f10;
        case 0x4b8f28u: goto label_4b8f28;
        case 0x4b8f34u: goto label_4b8f34;
        case 0x4b8f64u: goto label_4b8f64;
        case 0x4b8f6cu: goto label_4b8f6c;
        default: break;
    }

    ctx->pc = 0x4b8e80u;

    // 0x4b8e80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b8e84: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4b8e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4b8e88: 0x24420c68  addiu       $v0, $v0, 0xC68
    ctx->pc = 0x4b8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3176));
    // 0x4b8e8c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x4b8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x4b8e90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b8e94: 0x24a59050  addiu       $a1, $a1, -0x6FB0
    ctx->pc = 0x4b8e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938704));
    // 0x4b8e98: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4b8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4b8e9c: 0x24638ec0  addiu       $v1, $v1, -0x7140
    ctx->pc = 0x4b8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938304));
    // 0x4b8ea0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4b8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4b8ea4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b8ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8ea8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4b8ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x4b8eac: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x4b8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x4b8eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8EB0u;
            // 0x4b8eb4: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8EB8u;
    // 0x4b8eb8: 0x0  nop
    ctx->pc = 0x4b8eb8u;
    // NOP
    // 0x4b8ebc: 0x0  nop
    ctx->pc = 0x4b8ebcu;
    // NOP
    // 0x4b8ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b8ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b8ec4: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x4b8ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x4b8ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b8ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b8ecc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4b8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b8ed0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4b8ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b8ed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b8ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8ed8: 0xc040140  jal         func_100500
    ctx->pc = 0x4B8ED8u;
    SET_GPR_U32(ctx, 31, 0x4B8EE0u);
    ctx->pc = 0x4B8EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8ED8u;
            // 0x4b8edc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8EE0u; }
        if (ctx->pc != 0x4B8EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8EE0u; }
        if (ctx->pc != 0x4B8EE0u) { return; }
    }
    ctx->pc = 0x4B8EE0u;
label_4b8ee0:
    // 0x4b8ee0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4B8EE0u;
    {
        const bool branch_taken_0x4b8ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8EE0u;
            // 0x4b8ee4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ee0) {
            ctx->pc = 0x4B8F6Cu;
            goto label_4b8f6c;
        }
    }
    ctx->pc = 0x4B8EE8u;
    // 0x4b8ee8: 0xc12e404  jal         func_4B9010
    ctx->pc = 0x4B8EE8u;
    SET_GPR_U32(ctx, 31, 0x4B8EF0u);
    ctx->pc = 0x4B8EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8EE8u;
            // 0x4b8eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9010u;
    if (runtime->hasFunction(0x4B9010u)) {
        auto targetFn = runtime->lookupFunction(0x4B9010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8EF0u; }
        if (ctx->pc != 0x4B8EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9010_0x4b9010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8EF0u; }
        if (ctx->pc != 0x4B8EF0u) { return; }
    }
    ctx->pc = 0x4B8EF0u;
label_4b8ef0:
    // 0x4b8ef0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b8ef4: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x4b8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x4b8ef8: 0x2442fa70  addiu       $v0, $v0, -0x590
    ctx->pc = 0x4b8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965872));
    // 0x4b8efc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b8efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b8f00: 0xc12e3fc  jal         func_4B8FF0
    ctx->pc = 0x4B8F00u;
    SET_GPR_U32(ctx, 31, 0x4B8F08u);
    ctx->pc = 0x4B8F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8F00u;
            // 0x4b8f04: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8FF0u;
    if (runtime->hasFunction(0x4B8FF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B8FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F08u; }
        if (ctx->pc != 0x4B8F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8FF0_0x4b8ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F08u; }
        if (ctx->pc != 0x4B8F08u) { return; }
    }
    ctx->pc = 0x4B8F08u;
label_4b8f08:
    // 0x4b8f08: 0xc12e3f4  jal         func_4B8FD0
    ctx->pc = 0x4B8F08u;
    SET_GPR_U32(ctx, 31, 0x4B8F10u);
    ctx->pc = 0x4B8F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8F08u;
            // 0x4b8f0c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8FD0u;
    if (runtime->hasFunction(0x4B8FD0u)) {
        auto targetFn = runtime->lookupFunction(0x4B8FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F10u; }
        if (ctx->pc != 0x4B8F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8FD0_0x4b8fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F10u; }
        if (ctx->pc != 0x4B8F10u) { return; }
    }
    ctx->pc = 0x4B8F10u;
label_4b8f10:
    // 0x4b8f10: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x4b8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x4b8f14: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x4b8f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x4b8f18: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x4b8f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x4b8f1c: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x4b8f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b8f20: 0xc12e3ec  jal         func_4B8FB0
    ctx->pc = 0x4B8F20u;
    SET_GPR_U32(ctx, 31, 0x4B8F28u);
    ctx->pc = 0x4B8F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8F20u;
            // 0x4b8f24: 0xa6000046  sh          $zero, 0x46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8FB0u;
    if (runtime->hasFunction(0x4B8FB0u)) {
        auto targetFn = runtime->lookupFunction(0x4B8FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F28u; }
        if (ctx->pc != 0x4B8F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8FB0_0x4b8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F28u; }
        if (ctx->pc != 0x4B8F28u) { return; }
    }
    ctx->pc = 0x4B8F28u;
label_4b8f28:
    // 0x4b8f28: 0x260400ac  addiu       $a0, $s0, 0xAC
    ctx->pc = 0x4b8f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x4b8f2c: 0xc12e3e4  jal         func_4B8F90
    ctx->pc = 0x4B8F2Cu;
    SET_GPR_U32(ctx, 31, 0x4B8F34u);
    ctx->pc = 0x4B8F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8F2Cu;
            // 0x4b8f30: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8F90u;
    if (runtime->hasFunction(0x4B8F90u)) {
        auto targetFn = runtime->lookupFunction(0x4B8F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F34u; }
        if (ctx->pc != 0x4B8F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8F90_0x4b8f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F34u; }
        if (ctx->pc != 0x4B8F34u) { return; }
    }
    ctx->pc = 0x4B8F34u;
label_4b8f34:
    // 0x4b8f34: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4b8f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x4b8f38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b8f3c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x4b8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x4b8f40: 0x260400c4  addiu       $a0, $s0, 0xC4
    ctx->pc = 0x4b8f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x4b8f44: 0xa20000c0  sb          $zero, 0xC0($s0)
    ctx->pc = 0x4b8f44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b8f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b8f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8f4c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x4b8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x4b8f50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4b8f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b8f54: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x4b8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x4b8f58: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4b8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x4b8f5c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4B8F5Cu;
    SET_GPR_U32(ctx, 31, 0x4B8F64u);
    ctx->pc = 0x4B8F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8F5Cu;
            // 0x4b8f60: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F64u; }
        if (ctx->pc != 0x4B8F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F64u; }
        if (ctx->pc != 0x4B8F64u) { return; }
    }
    ctx->pc = 0x4B8F64u;
label_4b8f64:
    // 0x4b8f64: 0xc12e3e0  jal         func_4B8F80
    ctx->pc = 0x4B8F64u;
    SET_GPR_U32(ctx, 31, 0x4B8F6Cu);
    ctx->pc = 0x4B8F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8F64u;
            // 0x4b8f68: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8F80u;
    if (runtime->hasFunction(0x4B8F80u)) {
        auto targetFn = runtime->lookupFunction(0x4B8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F6Cu; }
        if (ctx->pc != 0x4B8F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8F80_0x4b8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8F6Cu; }
        if (ctx->pc != 0x4B8F6Cu) { return; }
    }
    ctx->pc = 0x4B8F6Cu;
label_4b8f6c:
    // 0x4b8f6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b8f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b8f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8f78: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8F78u;
            // 0x4b8f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8F80u;
}
