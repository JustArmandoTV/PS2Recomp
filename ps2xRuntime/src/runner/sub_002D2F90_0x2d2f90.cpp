#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2F90
// Address: 0x2d2f90 - 0x2d3050
void sub_002D2F90_0x2d2f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2F90_0x2d2f90");
#endif

    switch (ctx->pc) {
        case 0x2d2fb8u: goto label_2d2fb8;
        case 0x2d2fe8u: goto label_2d2fe8;
        case 0x2d300cu: goto label_2d300c;
        case 0x2d3018u: goto label_2d3018;
        default: break;
    }

    ctx->pc = 0x2d2f90u;

    // 0x2d2f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d2f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2fa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2fa4: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2d2fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d2fa8: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2FA8u;
    {
        const bool branch_taken_0x2d2fa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D2FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2FA8u;
            // 0x2d2fac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2fa8) {
            ctx->pc = 0x2D2FC0u;
            goto label_2d2fc0;
        }
    }
    ctx->pc = 0x2D2FB0u;
    // 0x2d2fb0: 0xc0b64ec  jal         func_2D93B0
    ctx->pc = 0x2D2FB0u;
    SET_GPR_U32(ctx, 31, 0x2D2FB8u);
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2FB8u; }
        if (ctx->pc != 0x2D2FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2FB8u; }
        if (ctx->pc != 0x2D2FB8u) { return; }
    }
    ctx->pc = 0x2D2FB8u;
label_2d2fb8:
    // 0x2d2fb8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2D2FB8u;
    {
        const bool branch_taken_0x2d2fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2fb8) {
            ctx->pc = 0x2D3030u;
            goto label_2d3030;
        }
    }
    ctx->pc = 0x2D2FC0u;
label_2d2fc0:
    // 0x2d2fc0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2d2fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d2fc4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x2d2fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x2d2fc8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2d2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d2fcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d2fd0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2d2fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x2d2fd4: 0x2c630100  sltiu       $v1, $v1, 0x100
    ctx->pc = 0x2d2fd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d2fd8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D2FD8u;
    {
        const bool branch_taken_0x2d2fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2fd8) {
            ctx->pc = 0x2D3030u;
            goto label_2d3030;
        }
    }
    ctx->pc = 0x2D2FE0u;
    // 0x2d2fe0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D2FE0u;
    {
        const bool branch_taken_0x2d2fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2FE0u;
            // 0x2d2fe4: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2fe0) {
            ctx->pc = 0x2D3030u;
            goto label_2d3030;
        }
    }
    ctx->pc = 0x2D2FE8u;
label_2d2fe8:
    // 0x2d2fe8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d2fec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d2ff0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d2ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d2ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2ff8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d2ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2ffc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2FFCu;
    {
        const bool branch_taken_0x2d2ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ffc) {
            ctx->pc = 0x2D3010u;
            goto label_2d3010;
        }
    }
    ctx->pc = 0x2D3004u;
    // 0x2d3004: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D3004u;
    SET_GPR_U32(ctx, 31, 0x2D300Cu);
    ctx->pc = 0x2D3008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3004u;
            // 0x2d3008: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D300Cu; }
        if (ctx->pc != 0x2D300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D300Cu; }
        if (ctx->pc != 0x2D300Cu) { return; }
    }
    ctx->pc = 0x2D300Cu;
label_2d300c:
    // 0x2d300c: 0x0  nop
    ctx->pc = 0x2d300cu;
    // NOP
label_2d3010:
    // 0x2d3010: 0xc0b6368  jal         func_2D8DA0
    ctx->pc = 0x2D3010u;
    SET_GPR_U32(ctx, 31, 0x2D3018u);
    ctx->pc = 0x2D3014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3010u;
            // 0x2d3014: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8DA0u;
    if (runtime->hasFunction(0x2D8DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3018u; }
        if (ctx->pc != 0x2D3018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8DA0_0x2d8da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3018u; }
        if (ctx->pc != 0x2D3018u) { return; }
    }
    ctx->pc = 0x2D3018u;
label_2d3018:
    // 0x2d3018: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2d3018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d301c: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x2d301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x2d3020: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x2d3020u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d3024: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D3024u;
    {
        const bool branch_taken_0x2d3024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3024u;
            // 0x2d3028: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3024) {
            ctx->pc = 0x2D2FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2fe8;
        }
    }
    ctx->pc = 0x2D302Cu;
    // 0x2d302c: 0x0  nop
    ctx->pc = 0x2d302cu;
    // NOP
label_2d3030:
    // 0x2d3030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d3030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d303c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D303Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D303Cu;
            // 0x2d3040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3044u;
    // 0x2d3044: 0x0  nop
    ctx->pc = 0x2d3044u;
    // NOP
    // 0x2d3048: 0x0  nop
    ctx->pc = 0x2d3048u;
    // NOP
    // 0x2d304c: 0x0  nop
    ctx->pc = 0x2d304cu;
    // NOP
}
