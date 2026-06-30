#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005349C0
// Address: 0x5349c0 - 0x534a90
void sub_005349C0_0x5349c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005349C0_0x5349c0");
#endif

    switch (ctx->pc) {
        case 0x534a34u: goto label_534a34;
        default: break;
    }

    ctx->pc = 0x5349c0u;

    // 0x5349c0: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x5349c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x5349c4: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x5349C4u;
    {
        const bool branch_taken_0x5349c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5349C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5349C4u;
            // 0x5349c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5349c4) {
            ctx->pc = 0x534A00u;
            goto label_534a00;
        }
    }
    ctx->pc = 0x5349CCu;
    // 0x5349cc: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x5349ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x5349d0: 0x50a3000c  beql        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x5349D0u;
    {
        const bool branch_taken_0x5349d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5349d0) {
            ctx->pc = 0x5349D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5349D0u;
            // 0x5349d4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534A04u;
            goto label_534a04;
        }
    }
    ctx->pc = 0x5349D8u;
    // 0x5349d8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x5349d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x5349dc: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x5349DCu;
    {
        const bool branch_taken_0x5349dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5349dc) {
            ctx->pc = 0x5349E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5349DCu;
            // 0x5349e0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534A04u;
            goto label_534a04;
        }
    }
    ctx->pc = 0x5349E4u;
    // 0x5349e4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x5349e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x5349e8: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x5349E8u;
    {
        const bool branch_taken_0x5349e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5349e8) {
            ctx->pc = 0x5349ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5349E8u;
            // 0x5349ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534A04u;
            goto label_534a04;
        }
    }
    ctx->pc = 0x5349F0u;
    // 0x5349f0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5349F0u;
    {
        const bool branch_taken_0x5349f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5349f0) {
            ctx->pc = 0x534A04u;
            goto label_534a04;
        }
    }
    ctx->pc = 0x5349F8u;
    // 0x5349f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x5349F8u;
    {
        const bool branch_taken_0x5349f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5349FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5349F8u;
            // 0x5349fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5349f8) {
            ctx->pc = 0x534A04u;
            goto label_534a04;
        }
    }
    ctx->pc = 0x534A00u;
label_534a00:
    // 0x534a00: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x534a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_534a04:
    // 0x534a04: 0x3e00008  jr          $ra
    ctx->pc = 0x534A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534A0Cu;
    // 0x534a0c: 0x0  nop
    ctx->pc = 0x534a0cu;
    // NOP
    // 0x534a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x534a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x534a14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x534a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x534a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x534a20: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x534a20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x534a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x534a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534a28: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x534a28u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x534a2c: 0xc04896a  jal         func_1225A8
    ctx->pc = 0x534A2Cu;
    SET_GPR_U32(ctx, 31, 0x534A34u);
    ctx->pc = 0x534A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534A2Cu;
            // 0x534a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1225A8u;
    if (runtime->hasFunction(0x1225A8u)) {
        auto targetFn = runtime->lookupFunction(0x1225A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534A34u; }
        if (ctx->pc != 0x534A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001225A8_0x1225a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534A34u; }
        if (ctx->pc != 0x534A34u) { return; }
    }
    ctx->pc = 0x534A34u;
label_534a34:
    // 0x534a34: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x534a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x534a38: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x534A38u;
    {
        const bool branch_taken_0x534a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x534A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534A38u;
            // 0x534a3c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534a38) {
            ctx->pc = 0x534A6Cu;
            goto label_534a6c;
        }
    }
    ctx->pc = 0x534A40u;
    // 0x534a40: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x534a44: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x534A44u;
    {
        const bool branch_taken_0x534a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534a44) {
            ctx->pc = 0x534A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534A44u;
            // 0x534a48: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534A70u;
            goto label_534a70;
        }
    }
    ctx->pc = 0x534A4Cu;
    // 0x534a4c: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x534a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x534a50: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534A50u;
    {
        const bool branch_taken_0x534a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534a50) {
            ctx->pc = 0x534A6Cu;
            goto label_534a6c;
        }
    }
    ctx->pc = 0x534A58u;
    // 0x534a58: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x534a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x534a5c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x534A5Cu;
    {
        const bool branch_taken_0x534a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534a5c) {
            ctx->pc = 0x534A6Cu;
            goto label_534a6c;
        }
    }
    ctx->pc = 0x534A64u;
    // 0x534a64: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x534A64u;
    {
        const bool branch_taken_0x534a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x534a64) {
            ctx->pc = 0x534A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534A64u;
            // 0x534a68: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534A70u;
            goto label_534a70;
        }
    }
    ctx->pc = 0x534A6Cu;
label_534a6c:
    // 0x534a6c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x534a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534a70:
    // 0x534a70: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x534a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x534a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x534a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x534a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x534a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x534a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x534A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x534A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534A7Cu;
            // 0x534a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534A84u;
    // 0x534a84: 0x0  nop
    ctx->pc = 0x534a84u;
    // NOP
    // 0x534a88: 0x0  nop
    ctx->pc = 0x534a88u;
    // NOP
    // 0x534a8c: 0x0  nop
    ctx->pc = 0x534a8cu;
    // NOP
}
