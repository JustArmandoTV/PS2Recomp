#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00330930
// Address: 0x330930 - 0x3309a0
void sub_00330930_0x330930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330930_0x330930");
#endif

    switch (ctx->pc) {
        case 0x330954u: goto label_330954;
        case 0x330970u: goto label_330970;
        default: break;
    }

    ctx->pc = 0x330930u;

    // 0x330930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x330930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x330934: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x330934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x330938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x330938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33093c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33093cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x330940: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x330940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330944: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x330944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x330948: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x330948u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x33094c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33094cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330950: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x330950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_330954:
    // 0x330954: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x330954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x330958: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x330958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x33095c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x33095cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x330960: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x330960u;
    {
        const bool branch_taken_0x330960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330960) {
            ctx->pc = 0x330970u;
            goto label_330970;
        }
    }
    ctx->pc = 0x330968u;
    // 0x330968: 0xc076338  jal         func_1D8CE0
    ctx->pc = 0x330968u;
    SET_GPR_U32(ctx, 31, 0x330970u);
    ctx->pc = 0x1D8CE0u;
    if (runtime->hasFunction(0x1D8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330970u; }
        if (ctx->pc != 0x330970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8CE0_0x1d8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330970u; }
        if (ctx->pc != 0x330970u) { return; }
    }
    ctx->pc = 0x330970u;
label_330970:
    // 0x330970: 0x8e03077c  lw          $v1, 0x77C($s0)
    ctx->pc = 0x330970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
    // 0x330974: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x330974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x330978: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x330978u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33097c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x33097Cu;
    {
        const bool branch_taken_0x33097c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x330980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33097Cu;
            // 0x330980: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33097c) {
            ctx->pc = 0x330954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_330954;
        }
    }
    ctx->pc = 0x330984u;
    // 0x330984: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x330984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x330988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33098c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33098cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x330990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330994: 0x3e00008  jr          $ra
    ctx->pc = 0x330994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330994u;
            // 0x330998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33099Cu;
    // 0x33099c: 0x0  nop
    ctx->pc = 0x33099cu;
    // NOP
}
