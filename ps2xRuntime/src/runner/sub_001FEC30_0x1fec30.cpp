#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEC30
// Address: 0x1fec30 - 0x1fece0
void sub_001FEC30_0x1fec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEC30_0x1fec30");
#endif

    switch (ctx->pc) {
        case 0x1fec30u: goto label_1fec30;
        case 0x1fec34u: goto label_1fec34;
        case 0x1fec38u: goto label_1fec38;
        case 0x1fec3cu: goto label_1fec3c;
        case 0x1fec40u: goto label_1fec40;
        case 0x1fec44u: goto label_1fec44;
        case 0x1fec48u: goto label_1fec48;
        case 0x1fec4cu: goto label_1fec4c;
        case 0x1fec50u: goto label_1fec50;
        case 0x1fec54u: goto label_1fec54;
        case 0x1fec58u: goto label_1fec58;
        case 0x1fec5cu: goto label_1fec5c;
        case 0x1fec60u: goto label_1fec60;
        case 0x1fec64u: goto label_1fec64;
        case 0x1fec68u: goto label_1fec68;
        case 0x1fec6cu: goto label_1fec6c;
        case 0x1fec70u: goto label_1fec70;
        case 0x1fec74u: goto label_1fec74;
        case 0x1fec78u: goto label_1fec78;
        case 0x1fec7cu: goto label_1fec7c;
        case 0x1fec80u: goto label_1fec80;
        case 0x1fec84u: goto label_1fec84;
        case 0x1fec88u: goto label_1fec88;
        case 0x1fec8cu: goto label_1fec8c;
        case 0x1fec90u: goto label_1fec90;
        case 0x1fec94u: goto label_1fec94;
        case 0x1fec98u: goto label_1fec98;
        case 0x1fec9cu: goto label_1fec9c;
        case 0x1feca0u: goto label_1feca0;
        case 0x1feca4u: goto label_1feca4;
        case 0x1feca8u: goto label_1feca8;
        case 0x1fecacu: goto label_1fecac;
        case 0x1fecb0u: goto label_1fecb0;
        case 0x1fecb4u: goto label_1fecb4;
        case 0x1fecb8u: goto label_1fecb8;
        case 0x1fecbcu: goto label_1fecbc;
        case 0x1fecc0u: goto label_1fecc0;
        case 0x1fecc4u: goto label_1fecc4;
        case 0x1fecc8u: goto label_1fecc8;
        case 0x1fecccu: goto label_1feccc;
        case 0x1fecd0u: goto label_1fecd0;
        case 0x1fecd4u: goto label_1fecd4;
        case 0x1fecd8u: goto label_1fecd8;
        case 0x1fecdcu: goto label_1fecdc;
        default: break;
    }

    ctx->pc = 0x1fec30u;

label_1fec30:
    // 0x1fec30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fec34:
    // 0x1fec34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fec38:
    // 0x1fec38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fec3c:
    // 0x1fec3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fec40:
    // 0x1fec40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fec40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fec44:
    // 0x1fec44: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1fec48:
    if (ctx->pc == 0x1FEC48u) {
        ctx->pc = 0x1FEC48u;
            // 0x1fec48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC4Cu;
        goto label_1fec4c;
    }
    ctx->pc = 0x1FEC44u;
    {
        const bool branch_taken_0x1fec44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC44u;
            // 0x1fec48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec44) {
            ctx->pc = 0x1FECBCu;
            goto label_1fecbc;
        }
    }
    ctx->pc = 0x1FEC4Cu;
label_1fec4c:
    // 0x1fec4c: 0x8e240100  lw          $a0, 0x100($s1)
    ctx->pc = 0x1fec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_1fec50:
    // 0x1fec50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1fec54:
    if (ctx->pc == 0x1FEC54u) {
        ctx->pc = 0x1FEC54u;
            // 0x1fec54: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1FEC58u;
        goto label_1fec58;
    }
    ctx->pc = 0x1FEC50u;
    {
        const bool branch_taken_0x1fec50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec50) {
            ctx->pc = 0x1FEC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC50u;
            // 0x1fec54: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC6Cu;
            goto label_1fec6c;
        }
    }
    ctx->pc = 0x1FEC58u;
label_1fec58:
    // 0x1fec58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fec58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fec5c:
    // 0x1fec5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1fec5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1fec60:
    // 0x1fec60: 0x320f809  jalr        $t9
label_1fec64:
    if (ctx->pc == 0x1FEC64u) {
        ctx->pc = 0x1FEC64u;
            // 0x1fec64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FEC68u;
        goto label_1fec68;
    }
    ctx->pc = 0x1FEC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FEC68u);
        ctx->pc = 0x1FEC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC60u;
            // 0x1fec64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FEC68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FEC68u; }
            if (ctx->pc != 0x1FEC68u) { return; }
        }
        }
    }
    ctx->pc = 0x1FEC68u;
label_1fec68:
    // 0x1fec68: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1fec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1fec6c:
    // 0x1fec6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fec6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1fec70:
    // 0x1fec70: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_1fec74:
    if (ctx->pc == 0x1FEC74u) {
        ctx->pc = 0x1FEC74u;
            // 0x1fec74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC78u;
        goto label_1fec78;
    }
    ctx->pc = 0x1FEC70u;
    {
        const bool branch_taken_0x1fec70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fec70) {
            ctx->pc = 0x1FEC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC70u;
            // 0x1fec74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FECC0u;
            goto label_1fecc0;
        }
    }
    ctx->pc = 0x1FEC78u;
label_1fec78:
    // 0x1fec78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fec78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fec7c:
    // 0x1fec7c: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fec80:
    // 0x1fec80: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1fec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1fec84:
    // 0x1fec84: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1fec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1fec88:
    // 0x1fec88: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1fec88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1fec8c:
    // 0x1fec8c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1fec90:
    if (ctx->pc == 0x1FEC90u) {
        ctx->pc = 0x1FEC90u;
            // 0x1fec90: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x1FEC94u;
        goto label_1fec94;
    }
    ctx->pc = 0x1FEC8Cu;
    {
        const bool branch_taken_0x1fec8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fec8c) {
            ctx->pc = 0x1FEC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC8Cu;
            // 0x1fec90: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FECA8u;
            goto label_1feca8;
        }
    }
    ctx->pc = 0x1FEC94u;
label_1fec94:
    // 0x1fec94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fec98:
    // 0x1fec98: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1fec98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1fec9c:
    // 0x1fec9c: 0xc0a79ec  jal         func_29E7B0
label_1feca0:
    if (ctx->pc == 0x1FECA0u) {
        ctx->pc = 0x1FECA0u;
            // 0x1feca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FECA4u;
        goto label_1feca4;
    }
    ctx->pc = 0x1FEC9Cu;
    SET_GPR_U32(ctx, 31, 0x1FECA4u);
    ctx->pc = 0x1FECA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC9Cu;
            // 0x1feca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FECA4u; }
        if (ctx->pc != 0x1FECA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FECA4u; }
        if (ctx->pc != 0x1FECA4u) { return; }
    }
    ctx->pc = 0x1FECA4u;
label_1feca4:
    // 0x1feca4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1feca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1feca8:
    // 0x1feca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1feca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fecac:
    // 0x1fecac: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1fecacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_1fecb0:
    // 0x1fecb0: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1fecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1fecb4:
    // 0x1fecb4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fecb8:
    // 0x1fecb8: 0xae11007c  sw          $s1, 0x7C($s0)
    ctx->pc = 0x1fecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 17));
label_1fecbc:
    // 0x1fecbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fecbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fecc0:
    // 0x1fecc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fecc4:
    // 0x1fecc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fecc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fecc8:
    // 0x1fecc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fecc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1feccc:
    // 0x1feccc: 0x3e00008  jr          $ra
label_1fecd0:
    if (ctx->pc == 0x1FECD0u) {
        ctx->pc = 0x1FECD0u;
            // 0x1fecd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1FECD4u;
        goto label_1fecd4;
    }
    ctx->pc = 0x1FECCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FECD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FECCCu;
            // 0x1fecd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FECD4u;
label_1fecd4:
    // 0x1fecd4: 0x0  nop
    ctx->pc = 0x1fecd4u;
    // NOP
label_1fecd8:
    // 0x1fecd8: 0x0  nop
    ctx->pc = 0x1fecd8u;
    // NOP
label_1fecdc:
    // 0x1fecdc: 0x0  nop
    ctx->pc = 0x1fecdcu;
    // NOP
}
