#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FDE90
// Address: 0x1fde90 - 0x1fdf70
void sub_001FDE90_0x1fde90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDE90_0x1fde90");
#endif

    switch (ctx->pc) {
        case 0x1fdeecu: goto label_1fdeec;
        case 0x1fdf28u: goto label_1fdf28;
        default: break;
    }

    ctx->pc = 0x1fde90u;

    // 0x1fde90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fde90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fde94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fde94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fde98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fde98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fde9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fde9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fdea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdea4: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FDEA4u;
    {
        const bool branch_taken_0x1fdea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDEA4u;
            // 0x1fdea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdea4) {
            ctx->pc = 0x1FDF40u;
            goto label_1fdf40;
        }
    }
    ctx->pc = 0x1FDEACu;
    // 0x1fdeac: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FDEACu;
    {
        const bool branch_taken_0x1fdeac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdeac) {
            ctx->pc = 0x1FDEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDEACu;
            // 0x1fdeb0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDEF0u;
            goto label_1fdef0;
        }
    }
    ctx->pc = 0x1FDEB4u;
    // 0x1fdeb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fdeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fdeb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1fdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1fdebc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fdebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fdec0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDEC0u;
    {
        const bool branch_taken_0x1fdec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdec0) {
            ctx->pc = 0x1FDEECu;
            goto label_1fdeec;
        }
    }
    ctx->pc = 0x1FDEC8u;
    // 0x1fdec8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fdec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1fdecc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fdeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fded0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1fded4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1fded4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1fded8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fded8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fdedc: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1fdedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1fdee0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1fdee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1fdee4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1FDEE4u;
    SET_GPR_U32(ctx, 31, 0x1FDEECu);
    ctx->pc = 0x1FDEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDEE4u;
            // 0x1fdee8: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEECu; }
        if (ctx->pc != 0x1FDEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEECu; }
        if (ctx->pc != 0x1FDEECu) { return; }
    }
    ctx->pc = 0x1FDEECu;
label_1fdeec:
    // 0x1fdeec: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1fdeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1fdef0:
    // 0x1fdef0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fdef0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1fdef4: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FDEF4u;
    {
        const bool branch_taken_0x1fdef4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fdef4) {
            ctx->pc = 0x1FDEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDEF4u;
            // 0x1fdef8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF44u;
            goto label_1fdf44;
        }
    }
    ctx->pc = 0x1FDEFCu;
    // 0x1fdefc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1fdf00: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1fdf00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1fdf04: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1fdf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1fdf08: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1fdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fdf0c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1fdf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fdf10: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDF10u;
    {
        const bool branch_taken_0x1fdf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf10) {
            ctx->pc = 0x1FDF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF10u;
            // 0x1fdf14: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF2Cu;
            goto label_1fdf2c;
        }
    }
    ctx->pc = 0x1FDF18u;
    // 0x1fdf18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fdf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf1c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1fdf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1fdf20: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x1FDF20u;
    SET_GPR_U32(ctx, 31, 0x1FDF28u);
    ctx->pc = 0x1FDF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF20u;
            // 0x1fdf24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF28u; }
        if (ctx->pc != 0x1FDF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF28u; }
        if (ctx->pc != 0x1FDF28u) { return; }
    }
    ctx->pc = 0x1FDF28u;
label_1fdf28:
    // 0x1fdf28: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1fdf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1fdf2c:
    // 0x1fdf2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fdf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fdf30: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1fdf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1fdf34: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1fdf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1fdf38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fdf38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fdf3c: 0xae11007c  sw          $s1, 0x7C($s0)
    ctx->pc = 0x1fdf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 17));
label_1fdf40:
    // 0x1fdf40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fdf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf44:
    // 0x1fdf44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fdf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdf48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fdf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdf4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fdf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdf50: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF50u;
            // 0x1fdf54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDF58u;
    // 0x1fdf58: 0x0  nop
    ctx->pc = 0x1fdf58u;
    // NOP
    // 0x1fdf5c: 0x0  nop
    ctx->pc = 0x1fdf5cu;
    // NOP
    // 0x1fdf60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdf64: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF64u;
            // 0x1fdf68: 0xa0830004  sb          $v1, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDF6Cu;
    // 0x1fdf6c: 0x0  nop
    ctx->pc = 0x1fdf6cu;
    // NOP
}
