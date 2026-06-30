#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133F30
// Address: 0x133f30 - 0x133fd0
void sub_00133F30_0x133f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133F30_0x133f30");
#endif

    switch (ctx->pc) {
        case 0x133f88u: goto label_133f88;
        case 0x133fa8u: goto label_133fa8;
        default: break;
    }

    ctx->pc = 0x133f30u;

    // 0x133f30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x133f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x133f34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x133f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x133f38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x133f3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x133f40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x133f40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x133f48: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x133f48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133f50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x133f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133f58: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x133f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f5c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x133F5Cu;
    {
        const bool branch_taken_0x133f5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133F5Cu;
            // 0x133f60: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f5c) {
            ctx->pc = 0x133F6Cu;
            goto label_133f6c;
        }
    }
    ctx->pc = 0x133F64u;
    // 0x133f64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x133F64u;
    {
        const bool branch_taken_0x133f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133F64u;
            // 0x133f68: 0xaf8780a0  sw          $a3, -0x7F60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934688), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f64) {
            ctx->pc = 0x133F78u;
            goto label_133f78;
        }
    }
    ctx->pc = 0x133F6Cu;
label_133f6c:
    // 0x133f6c: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x133f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x133f70: 0x24e71230  addiu       $a3, $a3, 0x1230
    ctx->pc = 0x133f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4656));
    // 0x133f74: 0xaf8780a0  sw          $a3, -0x7F60($gp)
    ctx->pc = 0x133f74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934688), GPR_U32(ctx, 7));
label_133f78:
    // 0x133f78: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x133f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x133f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f80: 0xc04e1b4  jal         func_1386D0
    ctx->pc = 0x133F80u;
    SET_GPR_U32(ctx, 31, 0x133F88u);
    ctx->pc = 0x133F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133F80u;
            // 0x133f84: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386D0u;
    if (runtime->hasFunction(0x1386D0u)) {
        auto targetFn = runtime->lookupFunction(0x1386D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F88u; }
        if (ctx->pc != 0x133F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386D0_0x1386d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F88u; }
        if (ctx->pc != 0x133F88u) { return; }
    }
    ctx->pc = 0x133F88u;
label_133f88:
    // 0x133f88: 0xaf9480b0  sw          $s4, -0x7F50($gp)
    ctx->pc = 0x133f88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934704), GPR_U32(ctx, 20));
    // 0x133f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x133f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f90: 0xaf9380b4  sw          $s3, -0x7F4C($gp)
    ctx->pc = 0x133f90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934708), GPR_U32(ctx, 19));
    // 0x133f94: 0xaf9080b8  sw          $s0, -0x7F48($gp)
    ctx->pc = 0x133f94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934712), GPR_U32(ctx, 16));
    // 0x133f98: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x133f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x133f9c: 0xaf8280bc  sw          $v0, -0x7F44($gp)
    ctx->pc = 0x133f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934716), GPR_U32(ctx, 2));
    // 0x133fa0: 0xc04cefc  jal         func_133BF0
    ctx->pc = 0x133FA0u;
    SET_GPR_U32(ctx, 31, 0x133FA8u);
    ctx->pc = 0x133FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133FA0u;
            // 0x133fa4: 0xaf9180c0  sw          $s1, -0x7F40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934720), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BF0u;
    if (runtime->hasFunction(0x133BF0u)) {
        auto targetFn = runtime->lookupFunction(0x133BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133FA8u; }
        if (ctx->pc != 0x133FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BF0_0x133bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133FA8u; }
        if (ctx->pc != 0x133FA8u) { return; }
    }
    ctx->pc = 0x133FA8u;
label_133fa8:
    // 0x133fa8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x133fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133fac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133fb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x133FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133FC0u;
            // 0x133fc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133FC8u;
    // 0x133fc8: 0x0  nop
    ctx->pc = 0x133fc8u;
    // NOP
    // 0x133fcc: 0x0  nop
    ctx->pc = 0x133fccu;
    // NOP
}
