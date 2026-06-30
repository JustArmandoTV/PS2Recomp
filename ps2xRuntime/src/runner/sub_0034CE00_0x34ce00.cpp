#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034CE00
// Address: 0x34ce00 - 0x34ce90
void sub_0034CE00_0x34ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CE00_0x34ce00");
#endif

    switch (ctx->pc) {
        case 0x34ce5cu: goto label_34ce5c;
        case 0x34ce78u: goto label_34ce78;
        default: break;
    }

    ctx->pc = 0x34ce00u;

    // 0x34ce00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34ce04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34ce08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34ce0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34ce10: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34CE10u;
    {
        const bool branch_taken_0x34ce10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34CE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CE10u;
            // 0x34ce14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce10) {
            ctx->pc = 0x34CE64u;
            goto label_34ce64;
        }
    }
    ctx->pc = 0x34CE18u;
    // 0x34ce18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34ce1c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34CE1Cu;
    {
        const bool branch_taken_0x34ce1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34ce1c) {
            ctx->pc = 0x34CE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CE1Cu;
            // 0x34ce20: 0xc4cc0010  lwc1        $f12, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CE4Cu;
            goto label_34ce4c;
        }
    }
    ctx->pc = 0x34CE24u;
    // 0x34ce24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ce28: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34CE28u;
    {
        const bool branch_taken_0x34ce28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34ce28) {
            ctx->pc = 0x34CE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CE28u;
            // 0x34ce2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CE7Cu;
            goto label_34ce7c;
        }
    }
    ctx->pc = 0x34CE30u;
    // 0x34ce30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ce34: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34CE34u;
    {
        const bool branch_taken_0x34ce34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34ce34) {
            ctx->pc = 0x34CE78u;
            goto label_34ce78;
        }
    }
    ctx->pc = 0x34CE3Cu;
    // 0x34ce3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34CE3Cu;
    {
        const bool branch_taken_0x34ce3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ce3c) {
            ctx->pc = 0x34CE78u;
            goto label_34ce78;
        }
    }
    ctx->pc = 0x34CE44u;
    // 0x34ce44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34CE44u;
    {
        const bool branch_taken_0x34ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ce44) {
            ctx->pc = 0x34CE78u;
            goto label_34ce78;
        }
    }
    ctx->pc = 0x34CE4Cu;
label_34ce4c:
    // 0x34ce4c: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x34ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x34ce50: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x34ce50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x34ce54: 0xc0d3440  jal         func_34D100
    ctx->pc = 0x34CE54u;
    SET_GPR_U32(ctx, 31, 0x34CE5Cu);
    ctx->pc = 0x34CE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CE54u;
            // 0x34ce58: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34D100u;
    if (runtime->hasFunction(0x34D100u)) {
        auto targetFn = runtime->lookupFunction(0x34D100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CE5Cu; }
        if (ctx->pc != 0x34CE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034D100_0x34d100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CE5Cu; }
        if (ctx->pc != 0x34CE5Cu) { return; }
    }
    ctx->pc = 0x34CE5Cu;
label_34ce5c:
    // 0x34ce5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34CE5Cu;
    {
        const bool branch_taken_0x34ce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CE5Cu;
            // 0x34ce60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce5c) {
            ctx->pc = 0x34CE7Cu;
            goto label_34ce7c;
        }
    }
    ctx->pc = 0x34CE64u;
label_34ce64:
    // 0x34ce64: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x34ce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34ce68: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x34ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x34ce6c: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x34ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x34ce70: 0xc0d3440  jal         func_34D100
    ctx->pc = 0x34CE70u;
    SET_GPR_U32(ctx, 31, 0x34CE78u);
    ctx->pc = 0x34CE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CE70u;
            // 0x34ce74: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34D100u;
    if (runtime->hasFunction(0x34D100u)) {
        auto targetFn = runtime->lookupFunction(0x34D100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CE78u; }
        if (ctx->pc != 0x34CE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034D100_0x34d100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CE78u; }
        if (ctx->pc != 0x34CE78u) { return; }
    }
    ctx->pc = 0x34CE78u;
label_34ce78:
    // 0x34ce78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34ce78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ce7c:
    // 0x34ce7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ce7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ce80: 0x3e00008  jr          $ra
    ctx->pc = 0x34CE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CE80u;
            // 0x34ce84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34CE88u;
    // 0x34ce88: 0x0  nop
    ctx->pc = 0x34ce88u;
    // NOP
    // 0x34ce8c: 0x0  nop
    ctx->pc = 0x34ce8cu;
    // NOP
}
