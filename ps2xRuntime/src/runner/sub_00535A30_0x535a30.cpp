#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00535A30
// Address: 0x535a30 - 0x535ad0
void sub_00535A30_0x535a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00535A30_0x535a30");
#endif

    switch (ctx->pc) {
        case 0x535a68u: goto label_535a68;
        case 0x535ab4u: goto label_535ab4;
        default: break;
    }

    ctx->pc = 0x535a30u;

    // 0x535a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x535a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x535a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x535a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x535a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x535a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x535a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x535a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x535a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x535a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535a44: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x535A44u;
    {
        const bool branch_taken_0x535a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x535A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535A44u;
            // 0x535a48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535a44) {
            ctx->pc = 0x535AB4u;
            goto label_535ab4;
        }
    }
    ctx->pc = 0x535A4Cu;
    // 0x535a4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x535a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x535a50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x535a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x535a54: 0x24636da0  addiu       $v1, $v1, 0x6DA0
    ctx->pc = 0x535a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28064));
    // 0x535a58: 0x24426e14  addiu       $v0, $v0, 0x6E14
    ctx->pc = 0x535a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28180));
    // 0x535a5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x535a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x535a60: 0xc04858a  jal         func_121628
    ctx->pc = 0x535A60u;
    SET_GPR_U32(ctx, 31, 0x535A68u);
    ctx->pc = 0x535A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535A60u;
            // 0x535a64: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121628u;
    if (runtime->hasFunction(0x121628u)) {
        auto targetFn = runtime->lookupFunction(0x121628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535A68u; }
        if (ctx->pc != 0x535A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121628_0x121628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535A68u; }
        if (ctx->pc != 0x535A68u) { return; }
    }
    ctx->pc = 0x535A68u;
label_535a68:
    // 0x535a68: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x535a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x535a6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x535A6Cu;
    {
        const bool branch_taken_0x535a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x535a6c) {
            ctx->pc = 0x535A88u;
            goto label_535a88;
        }
    }
    ctx->pc = 0x535A74u;
    // 0x535a74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x535a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x535a78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x535a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x535a7c: 0x24636e30  addiu       $v1, $v1, 0x6E30
    ctx->pc = 0x535a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28208));
    // 0x535a80: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x535a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x535a84: 0xac403e28  sw          $zero, 0x3E28($v0)
    ctx->pc = 0x535a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15912), GPR_U32(ctx, 0));
label_535a88:
    // 0x535a88: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x535A88u;
    {
        const bool branch_taken_0x535a88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x535a88) {
            ctx->pc = 0x535A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535A88u;
            // 0x535a8c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535AA0u;
            goto label_535aa0;
        }
    }
    ctx->pc = 0x535A90u;
    // 0x535a90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x535a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x535a94: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x535a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
    // 0x535a98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x535a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x535a9c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x535a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_535aa0:
    // 0x535aa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x535aa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x535aa4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x535AA4u;
    {
        const bool branch_taken_0x535aa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x535aa4) {
            ctx->pc = 0x535AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535AA4u;
            // 0x535aa8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535AB8u;
            goto label_535ab8;
        }
    }
    ctx->pc = 0x535AACu;
    // 0x535aac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x535AACu;
    SET_GPR_U32(ctx, 31, 0x535AB4u);
    ctx->pc = 0x535AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535AACu;
            // 0x535ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535AB4u; }
        if (ctx->pc != 0x535AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535AB4u; }
        if (ctx->pc != 0x535AB4u) { return; }
    }
    ctx->pc = 0x535AB4u;
label_535ab4:
    // 0x535ab4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x535ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_535ab8:
    // 0x535ab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x535ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x535abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x535abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x535ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x535ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x535ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x535AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x535AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535AC4u;
            // 0x535ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535ACCu;
    // 0x535acc: 0x0  nop
    ctx->pc = 0x535accu;
    // NOP
}
