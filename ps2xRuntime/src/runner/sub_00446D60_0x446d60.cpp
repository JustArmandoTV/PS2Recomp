#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00446D60
// Address: 0x446d60 - 0x446e00
void sub_00446D60_0x446d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446D60_0x446d60");
#endif

    switch (ctx->pc) {
        case 0x446d94u: goto label_446d94;
        case 0x446dc8u: goto label_446dc8;
        case 0x446ddcu: goto label_446ddc;
        default: break;
    }

    ctx->pc = 0x446d60u;

    // 0x446d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x446d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x446d64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x446d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x446d68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x446d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x446d6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x446d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x446d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x446d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x446d74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x446d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x446d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x446d7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x446d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446d80: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x446d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x446d84: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x446D84u;
    {
        const bool branch_taken_0x446d84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x446D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446D84u;
            // 0x446d88: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446d84) {
            ctx->pc = 0x446DDCu;
            goto label_446ddc;
        }
    }
    ctx->pc = 0x446D8Cu;
    // 0x446d8c: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x446D8Cu;
    SET_GPR_U32(ctx, 31, 0x446D94u);
    ctx->pc = 0x446D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446D8Cu;
            // 0x446d90: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446D94u; }
        if (ctx->pc != 0x446D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446D94u; }
        if (ctx->pc != 0x446D94u) { return; }
    }
    ctx->pc = 0x446D94u;
label_446d94:
    // 0x446d94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x446d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x446d98: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x446d98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x446d9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x446d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x446da0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x446da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x446da4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x446da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x446da8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x446da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x446dac: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x446dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x446db0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x446db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x446db4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x446DB4u;
    {
        const bool branch_taken_0x446db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446DB4u;
            // 0x446db8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446db4) {
            ctx->pc = 0x446DD0u;
            goto label_446dd0;
        }
    }
    ctx->pc = 0x446DBCu;
    // 0x446dbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x446dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446dc0: 0xc055754  jal         func_155D50
    ctx->pc = 0x446DC0u;
    SET_GPR_U32(ctx, 31, 0x446DC8u);
    ctx->pc = 0x446DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446DC0u;
            // 0x446dc4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446DC8u; }
        if (ctx->pc != 0x446DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446DC8u; }
        if (ctx->pc != 0x446DC8u) { return; }
    }
    ctx->pc = 0x446DC8u;
label_446dc8:
    // 0x446dc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x446DC8u;
    {
        const bool branch_taken_0x446dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446DC8u;
            // 0x446dcc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446dc8) {
            ctx->pc = 0x446DE0u;
            goto label_446de0;
        }
    }
    ctx->pc = 0x446DD0u;
label_446dd0:
    // 0x446dd0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x446dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446dd4: 0xc055990  jal         func_156640
    ctx->pc = 0x446DD4u;
    SET_GPR_U32(ctx, 31, 0x446DDCu);
    ctx->pc = 0x446DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446DD4u;
            // 0x446dd8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446DDCu; }
        if (ctx->pc != 0x446DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446DDCu; }
        if (ctx->pc != 0x446DDCu) { return; }
    }
    ctx->pc = 0x446DDCu;
label_446ddc:
    // 0x446ddc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x446ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_446de0:
    // 0x446de0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x446de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x446de4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x446de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x446de8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x446de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x446dec: 0x3e00008  jr          $ra
    ctx->pc = 0x446DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446DECu;
            // 0x446df0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x446DF4u;
    // 0x446df4: 0x0  nop
    ctx->pc = 0x446df4u;
    // NOP
    // 0x446df8: 0x0  nop
    ctx->pc = 0x446df8u;
    // NOP
    // 0x446dfc: 0x0  nop
    ctx->pc = 0x446dfcu;
    // NOP
}
