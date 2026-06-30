#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023EC40
// Address: 0x23ec40 - 0x23ecd0
void sub_0023EC40_0x23ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EC40_0x23ec40");
#endif

    switch (ctx->pc) {
        case 0x23ec70u: goto label_23ec70;
        case 0x23ec84u: goto label_23ec84;
        case 0x23ecb4u: goto label_23ecb4;
        default: break;
    }

    ctx->pc = 0x23ec40u;

    // 0x23ec40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23ec44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23ec48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23ec4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ec50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23ec50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ec58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ec58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec5c: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x23ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x23ec60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23ec60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ec68: 0xc08ea9c  jal         func_23AA70
    ctx->pc = 0x23EC68u;
    SET_GPR_U32(ctx, 31, 0x23EC70u);
    ctx->pc = 0x23EC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC68u;
            // 0x23ec6c: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AA70u;
    if (runtime->hasFunction(0x23AA70u)) {
        auto targetFn = runtime->lookupFunction(0x23AA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC70u; }
        if (ctx->pc != 0x23EC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023AA70_0x23aa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC70u; }
        if (ctx->pc != 0x23EC70u) { return; }
    }
    ctx->pc = 0x23EC70u;
label_23ec70:
    // 0x23ec70: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EC70u;
    {
        const bool branch_taken_0x23ec70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ec70) {
            ctx->pc = 0x23EC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC70u;
            // 0x23ec74: 0x8e220084  lw          $v0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23EC88u;
            goto label_23ec88;
        }
    }
    ctx->pc = 0x23EC78u;
    // 0x23ec78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec7c: 0xc08e5ac  jal         func_2396B0
    ctx->pc = 0x23EC7Cu;
    SET_GPR_U32(ctx, 31, 0x23EC84u);
    ctx->pc = 0x23EC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC7Cu;
            // 0x23ec80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2396B0u;
    if (runtime->hasFunction(0x2396B0u)) {
        auto targetFn = runtime->lookupFunction(0x2396B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC84u; }
        if (ctx->pc != 0x23EC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002396B0_0x2396b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC84u; }
        if (ctx->pc != 0x23EC84u) { return; }
    }
    ctx->pc = 0x23EC84u;
label_23ec84:
    // 0x23ec84: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x23ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_23ec88:
    // 0x23ec88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23ec8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EC8Cu;
    {
        const bool branch_taken_0x23ec8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC8Cu;
            // 0x23ec90: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec8c) {
            ctx->pc = 0x23ECB4u;
            goto label_23ecb4;
        }
    }
    ctx->pc = 0x23EC94u;
    // 0x23ec94: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x23ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x23ec98: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23EC98u;
    {
        const bool branch_taken_0x23ec98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ec98) {
            ctx->pc = 0x23EC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC98u;
            // 0x23ec9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23ECB8u;
            goto label_23ecb8;
        }
    }
    ctx->pc = 0x23ECA0u;
    // 0x23eca0: 0x8222008c  lb          $v0, 0x8C($s1)
    ctx->pc = 0x23eca0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x23eca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23ECA4u;
    {
        const bool branch_taken_0x23eca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eca4) {
            ctx->pc = 0x23ECB4u;
            goto label_23ecb4;
        }
    }
    ctx->pc = 0x23ECACu;
    // 0x23ecac: 0xc08d1c4  jal         func_234710
    ctx->pc = 0x23ECACu;
    SET_GPR_U32(ctx, 31, 0x23ECB4u);
    ctx->pc = 0x23ECB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ECACu;
            // 0x23ecb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ECB4u; }
        if (ctx->pc != 0x23ECB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ECB4u; }
        if (ctx->pc != 0x23ECB4u) { return; }
    }
    ctx->pc = 0x23ECB4u;
label_23ecb4:
    // 0x23ecb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ecb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ecb8:
    // 0x23ecb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23ecb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ecbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23ecbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ecc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ecc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ecc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ecc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x23ECC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ECCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ECC8u;
            // 0x23eccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23ECD0u;
}
