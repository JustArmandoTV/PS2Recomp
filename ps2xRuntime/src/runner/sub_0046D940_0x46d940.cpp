#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046D940
// Address: 0x46d940 - 0x46d9d0
void sub_0046D940_0x46d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D940_0x46d940");
#endif

    switch (ctx->pc) {
        case 0x46d96cu: goto label_46d96c;
        case 0x46d990u: goto label_46d990;
        case 0x46d9b4u: goto label_46d9b4;
        default: break;
    }

    ctx->pc = 0x46d940u;

    // 0x46d940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46d944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46d948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46d94c: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x46d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x46d950: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x46D950u;
    {
        const bool branch_taken_0x46d950 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x46D954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D950u;
            // 0x46d954: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d950) {
            ctx->pc = 0x46D970u;
            goto label_46d970;
        }
    }
    ctx->pc = 0x46D958u;
    // 0x46d958: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x46d95c: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x46d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x46d960: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x46d960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x46d964: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x46D964u;
    SET_GPR_U32(ctx, 31, 0x46D96Cu);
    ctx->pc = 0x46D968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D964u;
            // 0x46d968: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D96Cu; }
        if (ctx->pc != 0x46D96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D96Cu; }
        if (ctx->pc != 0x46D96Cu) { return; }
    }
    ctx->pc = 0x46D96Cu;
label_46d96c:
    // 0x46d96c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x46d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_46d970:
    // 0x46d970: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x46d970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x46d974: 0x58600008  blezl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x46D974u;
    {
        const bool branch_taken_0x46d974 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x46d974) {
            ctx->pc = 0x46D978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D974u;
            // 0x46d978: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D998u;
            goto label_46d998;
        }
    }
    ctx->pc = 0x46D97Cu;
    // 0x46d97c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x46d980: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x46d980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x46d984: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x46d984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x46d988: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x46D988u;
    SET_GPR_U32(ctx, 31, 0x46D990u);
    ctx->pc = 0x46D98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D988u;
            // 0x46d98c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D990u; }
        if (ctx->pc != 0x46D990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D990u; }
        if (ctx->pc != 0x46D990u) { return; }
    }
    ctx->pc = 0x46D990u;
label_46d990:
    // 0x46d990: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x46d990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x46d994: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x46d994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_46d998:
    // 0x46d998: 0x58600008  blezl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x46D998u;
    {
        const bool branch_taken_0x46d998 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x46d998) {
            ctx->pc = 0x46D99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D998u;
            // 0x46d99c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D9BCu;
            goto label_46d9bc;
        }
    }
    ctx->pc = 0x46D9A0u;
    // 0x46d9a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x46d9a4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x46d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x46d9a8: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x46d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x46d9ac: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x46D9ACu;
    SET_GPR_U32(ctx, 31, 0x46D9B4u);
    ctx->pc = 0x46D9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D9ACu;
            // 0x46d9b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D9B4u; }
        if (ctx->pc != 0x46D9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D9B4u; }
        if (ctx->pc != 0x46D9B4u) { return; }
    }
    ctx->pc = 0x46D9B4u;
label_46d9b4:
    // 0x46d9b4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x46d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x46d9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46d9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46d9bc:
    // 0x46d9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46d9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x46D9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D9C0u;
            // 0x46d9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46D9C8u;
    // 0x46d9c8: 0x0  nop
    ctx->pc = 0x46d9c8u;
    // NOP
    // 0x46d9cc: 0x0  nop
    ctx->pc = 0x46d9ccu;
    // NOP
}
