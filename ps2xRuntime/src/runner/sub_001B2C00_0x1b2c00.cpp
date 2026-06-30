#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2C00
// Address: 0x1b2c00 - 0x1b2c70
void sub_001B2C00_0x1b2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2C00_0x1b2c00");
#endif

    switch (ctx->pc) {
        case 0x1b2c14u: goto label_1b2c14;
        case 0x1b2c24u: goto label_1b2c24;
        default: break;
    }

    ctx->pc = 0x1b2c00u;

    // 0x1b2c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2c0c: 0xc06cc70  jal         func_1B31C0
    ctx->pc = 0x1B2C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C14u);
    ctx->pc = 0x1B2C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C0Cu;
            // 0x1b2c10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B31C0u;
    if (runtime->hasFunction(0x1B31C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B31C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C14u; }
        if (ctx->pc != 0x1B2C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B31C0_0x1b31c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C14u; }
        if (ctx->pc != 0x1B2C14u) { return; }
    }
    ctx->pc = 0x1B2C14u;
label_1b2c14:
    // 0x1b2c14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2C14u;
    {
        const bool branch_taken_0x1b2c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C14u;
            // 0x1b2c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c14) {
            ctx->pc = 0x1B2C2Cu;
            goto label_1b2c2c;
        }
    }
    ctx->pc = 0x1B2C1Cu;
    // 0x1b2c1c: 0xc06cb36  jal         func_1B2CD8
    ctx->pc = 0x1B2C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C24u);
    ctx->pc = 0x1B2CD8u;
    if (runtime->hasFunction(0x1B2CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B2CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C24u; }
        if (ctx->pc != 0x1B2C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2CD8_0x1b2cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C24u; }
        if (ctx->pc != 0x1B2C24u) { return; }
    }
    ctx->pc = 0x1B2C24u;
label_1b2c24:
    // 0x1b2c24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2C24u;
    {
        const bool branch_taken_0x1b2c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c24) {
            ctx->pc = 0x1B2C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C24u;
            // 0x1b2c28: 0x8e05004c  lw          $a1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2C38u;
            goto label_1b2c38;
        }
    }
    ctx->pc = 0x1B2C2Cu;
label_1b2c2c:
    // 0x1b2c2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B2C2Cu;
    {
        const bool branch_taken_0x1b2c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C2Cu;
            // 0x1b2c30: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c2c) {
            ctx->pc = 0x1B2C60u;
            goto label_1b2c60;
        }
    }
    ctx->pc = 0x1B2C34u;
    // 0x1b2c34: 0x0  nop
    ctx->pc = 0x1b2c34u;
    // NOP
label_1b2c38:
    // 0x1b2c38: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1b2c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b2c3c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1b2c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b2c40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2C40u;
    {
        const bool branch_taken_0x1b2c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C40u;
            // 0x1b2c44: 0x28a30005  slti        $v1, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c40) {
            ctx->pc = 0x1B2C5Cu;
            goto label_1b2c5c;
        }
    }
    ctx->pc = 0x1B2C48u;
    // 0x1b2c48: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2C48u;
    {
        const bool branch_taken_0x1b2c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C48u;
            // 0x1b2c4c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c48) {
            ctx->pc = 0x1B2C60u;
            goto label_1b2c60;
        }
    }
    ctx->pc = 0x1B2C50u;
    // 0x1b2c50: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b2c54: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x1b2c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x1b2c58: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x1b2c58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b2c5c:
    // 0x1b2c5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b2c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2c60:
    // 0x1b2c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C68u;
            // 0x1b2c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2C70u;
}
