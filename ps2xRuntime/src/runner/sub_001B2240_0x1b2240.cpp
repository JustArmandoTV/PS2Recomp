#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2240
// Address: 0x1b2240 - 0x1b22d0
void sub_001B2240_0x1b2240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2240_0x1b2240");
#endif

    switch (ctx->pc) {
        case 0x1b2274u: goto label_1b2274;
        case 0x1b22c4u: goto label_1b22c4;
        default: break;
    }

    ctx->pc = 0x1b2240u;

    // 0x1b2240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b224c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b224cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2258: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1b225c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1b225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1b2260: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1b2260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b2264: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B2264u;
    {
        const bool branch_taken_0x1b2264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2264u;
            // 0x1b2268: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2264) {
            ctx->pc = 0x1B2290u;
            goto label_1b2290;
        }
    }
    ctx->pc = 0x1B226Cu;
    // 0x1b226c: 0xc06de8a  jal         func_1B7A28
    ctx->pc = 0x1B226Cu;
    SET_GPR_U32(ctx, 31, 0x1B2274u);
    ctx->pc = 0x1B7A28u;
    if (runtime->hasFunction(0x1B7A28u)) {
        auto targetFn = runtime->lookupFunction(0x1B7A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2274u; }
        if (ctx->pc != 0x1B2274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7A28_0x1b7a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2274u; }
        if (ctx->pc != 0x1B2274u) { return; }
    }
    ctx->pc = 0x1B2274u;
label_1b2274:
    // 0x1b2274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2278: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b227c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b227cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2288: 0x806c8aa  j           func_1B22A8
    ctx->pc = 0x1B2288u;
    ctx->pc = 0x1B228Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2288u;
            // 0x1b228c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B22A8u;
    goto label_1b22a8;
    ctx->pc = 0x1B2290u;
label_1b2290:
    // 0x1b2290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2294: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b229c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B229Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B22A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B229Cu;
            // 0x1b22a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B22A4u;
    // 0x1b22a4: 0x0  nop
    ctx->pc = 0x1b22a4u;
    // NOP
label_1b22a8:
    // 0x1b22a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b22a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b22ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b22acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22b0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b22b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b22b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b22b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b22b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b22bc: 0xc06e35c  jal         func_1B8D70
    ctx->pc = 0x1B22BCu;
    SET_GPR_U32(ctx, 31, 0x1B22C4u);
    ctx->pc = 0x1B22C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22BCu;
            // 0x1b22c0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22C4u; }
        if (ctx->pc != 0x1B22C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22C4u; }
        if (ctx->pc != 0x1B22C4u) { return; }
    }
    ctx->pc = 0x1B22C4u;
label_1b22c4:
    // 0x1b22c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b22c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b22c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B22C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B22CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22C8u;
            // 0x1b22cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B22D0u;
}
