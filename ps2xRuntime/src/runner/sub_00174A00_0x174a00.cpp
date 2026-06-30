#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174A00
// Address: 0x174a00 - 0x174aa8
void sub_00174A00_0x174a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174A00_0x174a00");
#endif

    switch (ctx->pc) {
        case 0x174a18u: goto label_174a18;
        case 0x174a28u: goto label_174a28;
        default: break;
    }

    ctx->pc = 0x174a00u;

    // 0x174a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174a04: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A04u;
    {
        const bool branch_taken_0x174a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A04u;
            // 0x174a08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a04) {
            ctx->pc = 0x174A20u;
            goto label_174a20;
        }
    }
    ctx->pc = 0x174A0Cu;
    // 0x174a0c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x174a10: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x174A10u;
    SET_GPR_U32(ctx, 31, 0x174A18u);
    ctx->pc = 0x174A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A10u;
            // 0x174a14: 0x248445e0  addiu       $a0, $a0, 0x45E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A18u; }
        if (ctx->pc != 0x174A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A18u; }
        if (ctx->pc != 0x174A18u) { return; }
    }
    ctx->pc = 0x174A18u;
label_174a18:
    // 0x174a18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x174A18u;
    {
        const bool branch_taken_0x174a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A18u;
            // 0x174a1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a18) {
            ctx->pc = 0x174A48u;
            goto label_174a48;
        }
    }
    ctx->pc = 0x174A20u;
label_174a20:
    // 0x174a20: 0xc05ccce  jal         func_173338
    ctx->pc = 0x174A20u;
    SET_GPR_U32(ctx, 31, 0x174A28u);
    ctx->pc = 0x173338u;
    if (runtime->hasFunction(0x173338u)) {
        auto targetFn = runtime->lookupFunction(0x173338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A28u; }
        if (ctx->pc != 0x174A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173338_0x173338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A28u; }
        if (ctx->pc != 0x174A28u) { return; }
    }
    ctx->pc = 0x174A28u;
label_174a28:
    // 0x174a28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x174a28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a2c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x174a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x174a30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174A30u;
    {
        const bool branch_taken_0x174a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A30u;
            // 0x174a34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a30) {
            ctx->pc = 0x174A40u;
            goto label_174a40;
        }
    }
    ctx->pc = 0x174A38u;
    // 0x174a38: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174A38u;
    {
        const bool branch_taken_0x174a38 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x174A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A38u;
            // 0x174a3c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a38) {
            ctx->pc = 0x174A48u;
            goto label_174a48;
        }
    }
    ctx->pc = 0x174A40u;
label_174a40:
    // 0x174a40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x174a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174a48:
    // 0x174a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x174A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A4Cu;
            // 0x174a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174A54u;
    // 0x174a54: 0x0  nop
    ctx->pc = 0x174a54u;
    // NOP
    // 0x174a58: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x174a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x174a5c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x174a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x174a60: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x174a60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x174a64: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x174a64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x174a68: 0xac443efc  sw          $a0, 0x3EFC($v0)
    ctx->pc = 0x174a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16124), GPR_U32(ctx, 4));
    // 0x174a6c: 0xac653f00  sw          $a1, 0x3F00($v1)
    ctx->pc = 0x174a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16128), GPR_U32(ctx, 5));
    // 0x174a70: 0xad063f04  sw          $a2, 0x3F04($t0)
    ctx->pc = 0x174a70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16132), GPR_U32(ctx, 6));
    // 0x174a74: 0x3e00008  jr          $ra
    ctx->pc = 0x174A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A74u;
            // 0x174a78: 0xad273f08  sw          $a3, 0x3F08($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 16136), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174A7Cu;
    // 0x174a7c: 0x0  nop
    ctx->pc = 0x174a7cu;
    // NOP
    // 0x174a80: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x174a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x174a84: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x174a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x174a88: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x174a88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x174a8c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x174a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x174a90: 0xac443f0c  sw          $a0, 0x3F0C($v0)
    ctx->pc = 0x174a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16140), GPR_U32(ctx, 4));
    // 0x174a94: 0xac653f10  sw          $a1, 0x3F10($v1)
    ctx->pc = 0x174a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16144), GPR_U32(ctx, 5));
    // 0x174a98: 0xad063f14  sw          $a2, 0x3F14($t0)
    ctx->pc = 0x174a98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16148), GPR_U32(ctx, 6));
    // 0x174a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x174A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A9Cu;
            // 0x174aa0: 0xad273f18  sw          $a3, 0x3F18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 16152), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174AA4u;
    // 0x174aa4: 0x0  nop
    ctx->pc = 0x174aa4u;
    // NOP
}
