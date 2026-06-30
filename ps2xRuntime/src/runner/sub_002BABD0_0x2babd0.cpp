#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BABD0
// Address: 0x2babd0 - 0x2bac80
void sub_002BABD0_0x2babd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BABD0_0x2babd0");
#endif

    switch (ctx->pc) {
        case 0x2bac10u: goto label_2bac10;
        case 0x2bac64u: goto label_2bac64;
        default: break;
    }

    ctx->pc = 0x2babd0u;

    // 0x2babd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2babd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2babd4: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x2babd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x2babd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2babd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2babdc: 0x30e30007  andi        $v1, $a3, 0x7
    ctx->pc = 0x2babdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x2babe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2babe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2babe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2babe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2babe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2babe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2babec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BABECu;
    {
        const bool branch_taken_0x2babec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BABECu;
            // 0x2babf0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babec) {
            ctx->pc = 0x2BABFCu;
            goto label_2babfc;
        }
    }
    ctx->pc = 0x2BABF4u;
    // 0x2babf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BABF4u;
    {
        const bool branch_taken_0x2babf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BABF4u;
            // 0x2babf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babf4) {
            ctx->pc = 0x2BAC00u;
            goto label_2bac00;
        }
    }
    ctx->pc = 0x2BABFCu;
label_2babfc:
    // 0x2babfc: 0x30e70004  andi        $a3, $a3, 0x4
    ctx->pc = 0x2babfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_2bac00:
    // 0x2bac00: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bac00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac08: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2BAC08u;
    SET_GPR_U32(ctx, 31, 0x2BAC10u);
    ctx->pc = 0x2BAC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAC08u;
            // 0x2bac0c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC10u; }
        if (ctx->pc != 0x2BAC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC10u; }
        if (ctx->pc != 0x2BAC10u) { return; }
    }
    ctx->pc = 0x2BAC10u;
label_2bac10:
    // 0x2bac10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bac14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bac14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bac18: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2bac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2bac1c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2bac20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bac20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2bac24: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2bac24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2bac28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bac28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2bac2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bac30: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x2bac30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x2bac34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bac34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bac38: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x2bac38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
    // 0x2bac3c: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x2bac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2bac40: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x2bac40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x2bac44: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2bac44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2bac48: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x2bac48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x2bac4c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2bac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2bac50: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x2bac50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
    // 0x2bac54: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2bac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2bac58: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2bac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bac5c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2BAC5Cu;
    SET_GPR_U32(ctx, 31, 0x2BAC64u);
    ctx->pc = 0x2BAC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAC5Cu;
            // 0x2bac60: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC64u; }
        if (ctx->pc != 0x2BAC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC64u; }
        if (ctx->pc != 0x2BAC64u) { return; }
    }
    ctx->pc = 0x2BAC64u;
label_2bac64:
    // 0x2bac64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bac64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bac68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bac6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bac6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bac70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bac70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bac74: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAC74u;
            // 0x2bac78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BAC7Cu;
    // 0x2bac7c: 0x0  nop
    ctx->pc = 0x2bac7cu;
    // NOP
}
