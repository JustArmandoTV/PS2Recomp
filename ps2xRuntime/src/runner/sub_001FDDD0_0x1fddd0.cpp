#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FDDD0
// Address: 0x1fddd0 - 0x1fde90
void sub_001FDDD0_0x1fddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDDD0_0x1fddd0");
#endif

    switch (ctx->pc) {
        case 0x1fde04u: goto label_1fde04;
        case 0x1fde54u: goto label_1fde54;
        default: break;
    }

    ctx->pc = 0x1fddd0u;

    // 0x1fddd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fddd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fddd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fdddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdde0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fdde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdde4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FDDE4u;
    {
        const bool branch_taken_0x1fdde4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDE4u;
            // 0x1fdde8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdde4) {
            ctx->pc = 0x1FDE6Cu;
            goto label_1fde6c;
        }
    }
    ctx->pc = 0x1FDDECu;
    // 0x1fddec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fddf0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1fddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1fddf4: 0x2442dfa0  addiu       $v0, $v0, -0x2060
    ctx->pc = 0x1fddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959008));
    // 0x1fddf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fddfc: 0xc07f7a4  jal         func_1FDE90
    ctx->pc = 0x1FDDFCu;
    SET_GPR_U32(ctx, 31, 0x1FDE04u);
    ctx->pc = 0x1FDE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDFCu;
            // 0x1fde00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDE90u;
    if (runtime->hasFunction(0x1FDE90u)) {
        auto targetFn = runtime->lookupFunction(0x1FDE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE04u; }
        if (ctx->pc != 0x1FDE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDE90_0x1fde90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE04u; }
        if (ctx->pc != 0x1FDE04u) { return; }
    }
    ctx->pc = 0x1FDE04u;
label_1fde04:
    // 0x1fde04: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDE04u;
    {
        const bool branch_taken_0x1fde04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde04) {
            ctx->pc = 0x1FDE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE04u;
            // 0x1fde08: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE1Cu;
            goto label_1fde1c;
        }
    }
    ctx->pc = 0x1FDE0Cu;
    // 0x1fde0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fde10: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x1fde10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
    // 0x1fde14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fde14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fde18: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1fde18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1fde1c:
    // 0x1fde1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fde1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1fde20: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FDE20u;
    {
        const bool branch_taken_0x1fde20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fde20) {
            ctx->pc = 0x1FDE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE20u;
            // 0x1fde24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE70u;
            goto label_1fde70;
        }
    }
    ctx->pc = 0x1FDE28u;
    // 0x1fde28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fde28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1fde2c: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1fde2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1fde30: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1fde30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1fde34: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1fde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fde38: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1fde38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fde3c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDE3Cu;
    {
        const bool branch_taken_0x1fde3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fde3c) {
            ctx->pc = 0x1FDE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE3Cu;
            // 0x1fde40: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE58u;
            goto label_1fde58;
        }
    }
    ctx->pc = 0x1FDE44u;
    // 0x1fde44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fde44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde48: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1fde48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1fde4c: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x1FDE4Cu;
    SET_GPR_U32(ctx, 31, 0x1FDE54u);
    ctx->pc = 0x1FDE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE4Cu;
            // 0x1fde50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE54u; }
        if (ctx->pc != 0x1FDE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE54u; }
        if (ctx->pc != 0x1FDE54u) { return; }
    }
    ctx->pc = 0x1FDE54u;
label_1fde54:
    // 0x1fde54: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1fde54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1fde58:
    // 0x1fde58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fde58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fde5c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1fde5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1fde60: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1fde60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1fde64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fde64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fde68: 0xae11007c  sw          $s1, 0x7C($s0)
    ctx->pc = 0x1fde68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 17));
label_1fde6c:
    // 0x1fde6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fde6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fde70:
    // 0x1fde70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fde70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fde74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fde74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fde78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fde78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fde7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE7Cu;
            // 0x1fde80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDE84u;
    // 0x1fde84: 0x0  nop
    ctx->pc = 0x1fde84u;
    // NOP
    // 0x1fde88: 0x0  nop
    ctx->pc = 0x1fde88u;
    // NOP
    // 0x1fde8c: 0x0  nop
    ctx->pc = 0x1fde8cu;
    // NOP
}
