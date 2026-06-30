#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CC00
// Address: 0x25cc00 - 0x25ccf0
void sub_0025CC00_0x25cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CC00_0x25cc00");
#endif

    switch (ctx->pc) {
        case 0x25cc68u: goto label_25cc68;
        case 0x25ccccu: goto label_25cccc;
        default: break;
    }

    ctx->pc = 0x25cc00u;

    // 0x25cc00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25cc04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25cc08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25cc0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25cc10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25cc10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25cc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25cc18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25cc18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc1c: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x25CC1Cu;
    {
        const bool branch_taken_0x25cc1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC1Cu;
            // 0x25cc20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc1c) {
            ctx->pc = 0x25CCD0u;
            goto label_25ccd0;
        }
    }
    ctx->pc = 0x25CC24u;
    // 0x25cc24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x25cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x25cc28: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x25cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x25cc2c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x25cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x25cc30: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x25cc30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x25cc34: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25CC34u;
    {
        const bool branch_taken_0x25cc34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc34) {
            ctx->pc = 0x25CC88u;
            goto label_25cc88;
        }
    }
    ctx->pc = 0x25CC3Cu;
    // 0x25cc3c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25CC3Cu;
    {
        const bool branch_taken_0x25cc3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC3Cu;
            // 0x25cc40: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc3c) {
            ctx->pc = 0x25CC80u;
            goto label_25cc80;
        }
    }
    ctx->pc = 0x25CC44u;
    // 0x25cc44: 0x8c30ea40  lw          $s0, -0x15C0($at)
    ctx->pc = 0x25cc44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x25cc48: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x25cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25cc4c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x25cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25cc50: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25cc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25cc54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CC54u;
    {
        const bool branch_taken_0x25cc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC54u;
            // 0x25cc58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc54) {
            ctx->pc = 0x25CC68u;
            goto label_25cc68;
        }
    }
    ctx->pc = 0x25CC5Cu;
    // 0x25cc5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25cc60: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x25CC60u;
    SET_GPR_U32(ctx, 31, 0x25CC68u);
    ctx->pc = 0x25CC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC60u;
            // 0x25cc64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC68u; }
        if (ctx->pc != 0x25CC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC68u; }
        if (ctx->pc != 0x25CC68u) { return; }
    }
    ctx->pc = 0x25CC68u;
label_25cc68:
    // 0x25cc68: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x25cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25cc6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25cc70: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x25cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x25cc74: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x25cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25cc78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x25cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x25cc7c: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x25cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_25cc80:
    // 0x25cc80: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x25cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x25cc84: 0x0  nop
    ctx->pc = 0x25cc84u;
    // NOP
label_25cc88:
    // 0x25cc88: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CC88u;
    {
        const bool branch_taken_0x25cc88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC88u;
            // 0x25cc8c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc88) {
            ctx->pc = 0x25CCA8u;
            goto label_25cca8;
        }
    }
    ctx->pc = 0x25CC90u;
    // 0x25cc90: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x25cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x25cc94: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CC94u;
    {
        const bool branch_taken_0x25cc94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC94u;
            // 0x25cc98: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc94) {
            ctx->pc = 0x25CCA8u;
            goto label_25cca8;
        }
    }
    ctx->pc = 0x25CC9Cu;
    // 0x25cc9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x25cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x25cca0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x25cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x25cca4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x25cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_25cca8:
    // 0x25cca8: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x25cca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x25ccac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25ccacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25ccb0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CCB0u;
    {
        const bool branch_taken_0x25ccb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CCB0u;
            // 0x25ccb4: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ccb0) {
            ctx->pc = 0x25CCD0u;
            goto label_25ccd0;
        }
    }
    ctx->pc = 0x25CCB8u;
    // 0x25ccb8: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x25ccb8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25ccbc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x25ccc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25ccc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ccc4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x25CCC4u;
    SET_GPR_U32(ctx, 31, 0x25CCCCu);
    ctx->pc = 0x25CCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CCC4u;
            // 0x25ccc8: 0x2407001f  addiu       $a3, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CCCCu; }
        if (ctx->pc != 0x25CCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CCCCu; }
        if (ctx->pc != 0x25CCCCu) { return; }
    }
    ctx->pc = 0x25CCCCu;
label_25cccc:
    // 0x25cccc: 0x0  nop
    ctx->pc = 0x25ccccu;
    // NOP
label_25ccd0:
    // 0x25ccd0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x25ccd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ccd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ccd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25ccd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ccdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25ccdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cce8: 0x3e00008  jr          $ra
    ctx->pc = 0x25CCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CCE8u;
            // 0x25ccec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CCF0u;
}
