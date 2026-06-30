#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EA68
// Address: 0x19ea68 - 0x19eac8
void sub_0019EA68_0x19ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EA68_0x19ea68");
#endif

    switch (ctx->pc) {
        case 0x19eab0u: goto label_19eab0;
        default: break;
    }

    ctx->pc = 0x19ea68u;

    // 0x19ea68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ea68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ea6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ea70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ea74: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x19ea74u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19ea78: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19EA78u;
    {
        const bool branch_taken_0x19ea78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19EA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA78u;
            // 0x19ea7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea78) {
            ctx->pc = 0x19EAB4u;
            goto label_19eab4;
        }
    }
    ctx->pc = 0x19EA80u;
    // 0x19ea80: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EA80u;
    {
        const bool branch_taken_0x19ea80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea80) {
            ctx->pc = 0x19EA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA80u;
            // 0x19ea84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19EA98u;
            goto label_19ea98;
        }
    }
    ctx->pc = 0x19EA88u;
    // 0x19ea88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ea8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19EA8Cu;
    {
        const bool branch_taken_0x19ea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA8Cu;
            // 0x19ea90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea8c) {
            ctx->pc = 0x19EA9Cu;
            goto label_19ea9c;
        }
    }
    ctx->pc = 0x19EA94u;
    // 0x19ea94: 0x0  nop
    ctx->pc = 0x19ea94u;
    // NOP
label_19ea98:
    // 0x19ea98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19ea9c:
    // 0x19ea9c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EA9Cu;
    {
        const bool branch_taken_0x19ea9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19EAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA9Cu;
            // 0x19eaa0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea9c) {
            ctx->pc = 0x19EAB8u;
            goto label_19eab8;
        }
    }
    ctx->pc = 0x19EAA4u;
    // 0x19eaa4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19eaa8: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19EAA8u;
    SET_GPR_U32(ctx, 31, 0x19EAB0u);
    ctx->pc = 0x19EAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EAA8u;
            // 0x19eaac: 0x24849e38  addiu       $a0, $a0, -0x61C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EAB0u; }
        if (ctx->pc != 0x19EAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EAB0u; }
        if (ctx->pc != 0x19EAB0u) { return; }
    }
    ctx->pc = 0x19EAB0u;
label_19eab0:
    // 0x19eab0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19eab4:
    // 0x19eab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19eab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19eab8:
    // 0x19eab8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19eab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eabc: 0x3e00008  jr          $ra
    ctx->pc = 0x19EABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EABCu;
            // 0x19eac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EAC4u;
    // 0x19eac4: 0x0  nop
    ctx->pc = 0x19eac4u;
    // NOP
}
