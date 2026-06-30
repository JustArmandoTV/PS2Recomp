#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4210
// Address: 0x2e4210 - 0x2e4270
void sub_002E4210_0x2e4210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4210_0x2e4210");
#endif

    switch (ctx->pc) {
        case 0x2e423cu: goto label_2e423c;
        case 0x2e4254u: goto label_2e4254;
        default: break;
    }

    ctx->pc = 0x2e4210u;

    // 0x2e4210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e4214: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e4214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2e4218: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e421c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e4220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e422c: 0x8c70a348  lw          $s0, -0x5CB8($v1)
    ctx->pc = 0x2e422cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
    // 0x2e4230: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x2e4230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2e4234: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x2E4234u;
    SET_GPR_U32(ctx, 31, 0x2E423Cu);
    ctx->pc = 0x2E4238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4234u;
            // 0x2e4238: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E423Cu; }
        if (ctx->pc != 0x2E423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E423Cu; }
        if (ctx->pc != 0x2E423Cu) { return; }
    }
    ctx->pc = 0x2E423Cu;
label_2e423c:
    // 0x2e423c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2e423cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e4240: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x2e4240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2e4244: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e4244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4248: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e4248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e424c: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x2E424Cu;
    SET_GPR_U32(ctx, 31, 0x2E4254u);
    ctx->pc = 0x2E4250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E424Cu;
            // 0x2e4250: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4254u; }
        if (ctx->pc != 0x2E4254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4254u; }
        if (ctx->pc != 0x2E4254u) { return; }
    }
    ctx->pc = 0x2E4254u;
label_2e4254:
    // 0x2e4254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e4254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e425c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e425cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4260: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4260u;
            // 0x2e4264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4268u;
    // 0x2e4268: 0x0  nop
    ctx->pc = 0x2e4268u;
    // NOP
    // 0x2e426c: 0x0  nop
    ctx->pc = 0x2e426cu;
    // NOP
}
