#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139C60
// Address: 0x139c60 - 0x139ce0
void sub_00139C60_0x139c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139C60_0x139c60");
#endif

    switch (ctx->pc) {
        case 0x139c9cu: goto label_139c9c;
        default: break;
    }

    ctx->pc = 0x139c60u;

    // 0x139c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139c70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x139c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c74: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x139c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x139c78: 0x24d00008  addiu       $s0, $a2, 0x8
    ctx->pc = 0x139c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x139c7c: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x139c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x139c80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x139c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x139c84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x139c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x139c88: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x139c88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x139c8c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x139c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c94: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x139C94u;
    SET_GPR_U32(ctx, 31, 0x139C9Cu);
    ctx->pc = 0x139C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139C94u;
            // 0x139c98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C9Cu; }
        if (ctx->pc != 0x139C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C9Cu; }
        if (ctx->pc != 0x139C9Cu) { return; }
    }
    ctx->pc = 0x139C9Cu;
label_139c9c:
    // 0x139c9c: 0x5a20000b  blezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x139C9Cu;
    {
        const bool branch_taken_0x139c9c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x139c9c) {
            ctx->pc = 0x139CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139C9Cu;
            // 0x139ca0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139CCCu;
            goto label_139ccc;
        }
    }
    ctx->pc = 0x139CA4u;
    // 0x139ca4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x139ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x139ca8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x139ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x139cac: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x139cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x139cb0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x139cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x139cb4: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x139cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x139cb8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x139cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x139cbc: 0xa6000048  sh          $zero, 0x48($s0)
    ctx->pc = 0x139cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x139cc0: 0xa600004a  sh          $zero, 0x4A($s0)
    ctx->pc = 0x139cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x139cc4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x139cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x139cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_139ccc:
    // 0x139ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x139CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CD4u;
            // 0x139cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139CDCu;
    // 0x139cdc: 0x0  nop
    ctx->pc = 0x139cdcu;
    // NOP
}
