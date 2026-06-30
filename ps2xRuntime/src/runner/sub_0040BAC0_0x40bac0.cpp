#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040BAC0
// Address: 0x40bac0 - 0x40bc00
void sub_0040BAC0_0x40bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BAC0_0x40bac0");
#endif

    switch (ctx->pc) {
        case 0x40bac0u: goto label_40bac0;
        case 0x40bac4u: goto label_40bac4;
        case 0x40bac8u: goto label_40bac8;
        case 0x40baccu: goto label_40bacc;
        case 0x40bad0u: goto label_40bad0;
        case 0x40bad4u: goto label_40bad4;
        case 0x40bad8u: goto label_40bad8;
        case 0x40badcu: goto label_40badc;
        case 0x40bae0u: goto label_40bae0;
        case 0x40bae4u: goto label_40bae4;
        case 0x40bae8u: goto label_40bae8;
        case 0x40baecu: goto label_40baec;
        case 0x40baf0u: goto label_40baf0;
        case 0x40baf4u: goto label_40baf4;
        case 0x40baf8u: goto label_40baf8;
        case 0x40bafcu: goto label_40bafc;
        case 0x40bb00u: goto label_40bb00;
        case 0x40bb04u: goto label_40bb04;
        case 0x40bb08u: goto label_40bb08;
        case 0x40bb0cu: goto label_40bb0c;
        case 0x40bb10u: goto label_40bb10;
        case 0x40bb14u: goto label_40bb14;
        case 0x40bb18u: goto label_40bb18;
        case 0x40bb1cu: goto label_40bb1c;
        case 0x40bb20u: goto label_40bb20;
        case 0x40bb24u: goto label_40bb24;
        case 0x40bb28u: goto label_40bb28;
        case 0x40bb2cu: goto label_40bb2c;
        case 0x40bb30u: goto label_40bb30;
        case 0x40bb34u: goto label_40bb34;
        case 0x40bb38u: goto label_40bb38;
        case 0x40bb3cu: goto label_40bb3c;
        case 0x40bb40u: goto label_40bb40;
        case 0x40bb44u: goto label_40bb44;
        case 0x40bb48u: goto label_40bb48;
        case 0x40bb4cu: goto label_40bb4c;
        case 0x40bb50u: goto label_40bb50;
        case 0x40bb54u: goto label_40bb54;
        case 0x40bb58u: goto label_40bb58;
        case 0x40bb5cu: goto label_40bb5c;
        case 0x40bb60u: goto label_40bb60;
        case 0x40bb64u: goto label_40bb64;
        case 0x40bb68u: goto label_40bb68;
        case 0x40bb6cu: goto label_40bb6c;
        case 0x40bb70u: goto label_40bb70;
        case 0x40bb74u: goto label_40bb74;
        case 0x40bb78u: goto label_40bb78;
        case 0x40bb7cu: goto label_40bb7c;
        case 0x40bb80u: goto label_40bb80;
        case 0x40bb84u: goto label_40bb84;
        case 0x40bb88u: goto label_40bb88;
        case 0x40bb8cu: goto label_40bb8c;
        case 0x40bb90u: goto label_40bb90;
        case 0x40bb94u: goto label_40bb94;
        case 0x40bb98u: goto label_40bb98;
        case 0x40bb9cu: goto label_40bb9c;
        case 0x40bba0u: goto label_40bba0;
        case 0x40bba4u: goto label_40bba4;
        case 0x40bba8u: goto label_40bba8;
        case 0x40bbacu: goto label_40bbac;
        case 0x40bbb0u: goto label_40bbb0;
        case 0x40bbb4u: goto label_40bbb4;
        case 0x40bbb8u: goto label_40bbb8;
        case 0x40bbbcu: goto label_40bbbc;
        case 0x40bbc0u: goto label_40bbc0;
        case 0x40bbc4u: goto label_40bbc4;
        case 0x40bbc8u: goto label_40bbc8;
        case 0x40bbccu: goto label_40bbcc;
        case 0x40bbd0u: goto label_40bbd0;
        case 0x40bbd4u: goto label_40bbd4;
        case 0x40bbd8u: goto label_40bbd8;
        case 0x40bbdcu: goto label_40bbdc;
        case 0x40bbe0u: goto label_40bbe0;
        case 0x40bbe4u: goto label_40bbe4;
        case 0x40bbe8u: goto label_40bbe8;
        case 0x40bbecu: goto label_40bbec;
        case 0x40bbf0u: goto label_40bbf0;
        case 0x40bbf4u: goto label_40bbf4;
        case 0x40bbf8u: goto label_40bbf8;
        case 0x40bbfcu: goto label_40bbfc;
        default: break;
    }

    ctx->pc = 0x40bac0u;

label_40bac0:
    // 0x40bac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x40bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_40bac4:
    // 0x40bac4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x40bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_40bac8:
    // 0x40bac8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x40bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_40bacc:
    // 0x40bacc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x40baccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_40bad0:
    // 0x40bad0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40bad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40bad4:
    // 0x40bad4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_40bad8:
    // 0x40bad8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x40bad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40badc:
    // 0x40badc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40bae0:
    // 0x40bae0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x40bae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40bae4:
    // 0x40bae4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40bae8:
    // 0x40bae8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x40bae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_40baec:
    // 0x40baec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x40baecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40baf0:
    // 0x40baf0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x40baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_40baf4:
    // 0x40baf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40baf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40baf8:
    // 0x40baf8: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x40baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_40bafc:
    // 0x40bafc: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x40bafcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_40bb00:
    // 0x40bb00: 0x8c500550  lw          $s0, 0x550($v0)
    ctx->pc = 0x40bb00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_40bb04:
    // 0x40bb04: 0x320f809  jalr        $t9
label_40bb08:
    if (ctx->pc == 0x40BB08u) {
        ctx->pc = 0x40BB08u;
            // 0x40bb08: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x40BB0Cu;
        goto label_40bb0c;
    }
    ctx->pc = 0x40BB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40BB0Cu);
        ctx->pc = 0x40BB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BB04u;
            // 0x40bb08: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40BB0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40BB0Cu; }
            if (ctx->pc != 0x40BB0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40BB0Cu;
label_40bb0c:
    // 0x40bb0c: 0x8207010d  lb          $a3, 0x10D($s0)
    ctx->pc = 0x40bb0cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_40bb10:
    // 0x40bb10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40bb14:
    // 0x40bb14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40bb18:
    // 0x40bb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40bb1c:
    // 0x40bb1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40bb1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40bb20:
    // 0x40bb20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40bb20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40bb24:
    // 0x40bb24: 0xa207010e  sb          $a3, 0x10E($s0)
    ctx->pc = 0x40bb24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 7));
label_40bb28:
    // 0x40bb28: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40bb28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40bb2c:
    // 0x40bb2c: 0xa202010d  sb          $v0, 0x10D($s0)
    ctx->pc = 0x40bb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 2));
label_40bb30:
    // 0x40bb30: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x40bb30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_40bb34:
    // 0x40bb34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x40bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40bb38:
    // 0x40bb38: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x40bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_40bb3c:
    // 0x40bb3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40bb40:
    // 0x40bb40: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x40bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_40bb44:
    // 0x40bb44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x40bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_40bb48:
    // 0x40bb48: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x40bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_40bb4c:
    // 0x40bb4c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x40bb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_40bb50:
    // 0x40bb50: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x40bb50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_40bb54:
    // 0x40bb54: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x40bb54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_40bb58:
    // 0x40bb58: 0x320f809  jalr        $t9
label_40bb5c:
    if (ctx->pc == 0x40BB5Cu) {
        ctx->pc = 0x40BB5Cu;
            // 0x40bb5c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x40BB60u;
        goto label_40bb60;
    }
    ctx->pc = 0x40BB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40BB60u);
        ctx->pc = 0x40BB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BB58u;
            // 0x40bb5c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40BB60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40BB60u; }
            if (ctx->pc != 0x40BB60u) { return; }
        }
        }
    }
    ctx->pc = 0x40BB60u;
label_40bb60:
    // 0x40bb60: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x40bb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_40bb64:
    // 0x40bb64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40bb64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40bb68:
    // 0x40bb68: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x40bb68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_40bb6c:
    // 0x40bb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40bb70:
    // 0x40bb70: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x40bb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_40bb74:
    // 0x40bb74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40bb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40bb78:
    // 0x40bb78: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x40bb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_40bb7c:
    // 0x40bb7c: 0x320f809  jalr        $t9
label_40bb80:
    if (ctx->pc == 0x40BB80u) {
        ctx->pc = 0x40BB80u;
            // 0x40bb80: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x40BB84u;
        goto label_40bb84;
    }
    ctx->pc = 0x40BB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40BB84u);
        ctx->pc = 0x40BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BB7Cu;
            // 0x40bb80: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40BB84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40BB84u; }
            if (ctx->pc != 0x40BB84u) { return; }
        }
        }
    }
    ctx->pc = 0x40BB84u;
label_40bb84:
    // 0x40bb84: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x40bb84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_40bb88:
    // 0x40bb88: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x40bb88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
label_40bb8c:
    // 0x40bb8c: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x40bb8cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_40bb90:
    // 0x40bb90: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x40bb90u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_40bb94:
    // 0x40bb94: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40bb94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40bb98:
    // 0x40bb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40bb9c:
    // 0x40bb9c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x40bb9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_40bba0:
    // 0x40bba0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40bba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40bba4:
    // 0x40bba4: 0x320f809  jalr        $t9
label_40bba8:
    if (ctx->pc == 0x40BBA8u) {
        ctx->pc = 0x40BBA8u;
            // 0x40bba8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x40BBACu;
        goto label_40bbac;
    }
    ctx->pc = 0x40BBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40BBACu);
        ctx->pc = 0x40BBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BBA4u;
            // 0x40bba8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40BBACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40BBACu; }
            if (ctx->pc != 0x40BBACu) { return; }
        }
        }
    }
    ctx->pc = 0x40BBACu;
label_40bbac:
    // 0x40bbac: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x40bbacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_40bbb0:
    // 0x40bbb0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x40bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_40bbb4:
    // 0x40bbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40bbb8:
    // 0x40bbb8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x40bbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_40bbbc:
    // 0x40bbbc: 0x320f809  jalr        $t9
label_40bbc0:
    if (ctx->pc == 0x40BBC0u) {
        ctx->pc = 0x40BBC0u;
            // 0x40bbc0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40BBC4u;
        goto label_40bbc4;
    }
    ctx->pc = 0x40BBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40BBC4u);
        ctx->pc = 0x40BBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BBBCu;
            // 0x40bbc0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40BBC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40BBC4u; }
            if (ctx->pc != 0x40BBC4u) { return; }
        }
        }
    }
    ctx->pc = 0x40BBC4u;
label_40bbc4:
    // 0x40bbc4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x40bbc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_40bbc8:
    // 0x40bbc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40bbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40bbcc:
    // 0x40bbcc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x40bbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40bbd0:
    // 0x40bbd0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x40bbd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_40bbd4:
    // 0x40bbd4: 0x320f809  jalr        $t9
label_40bbd8:
    if (ctx->pc == 0x40BBD8u) {
        ctx->pc = 0x40BBD8u;
            // 0x40bbd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40BBDCu;
        goto label_40bbdc;
    }
    ctx->pc = 0x40BBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40BBDCu);
        ctx->pc = 0x40BBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BBD4u;
            // 0x40bbd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40BBDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40BBDCu; }
            if (ctx->pc != 0x40BBDCu) { return; }
        }
        }
    }
    ctx->pc = 0x40BBDCu;
label_40bbdc:
    // 0x40bbdc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x40bbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_40bbe0:
    // 0x40bbe0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40bbe4:
    // 0x40bbe4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x40bbe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40bbe8:
    // 0x40bbe8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x40bbe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40bbec:
    // 0x40bbec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40bbecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40bbf0:
    // 0x40bbf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40bbf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40bbf4:
    // 0x40bbf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40bbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40bbf8:
    // 0x40bbf8: 0x3e00008  jr          $ra
label_40bbfc:
    if (ctx->pc == 0x40BBFCu) {
        ctx->pc = 0x40BBFCu;
            // 0x40bbfc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x40BC00u;
        goto label_fallthrough_0x40bbf8;
    }
    ctx->pc = 0x40BBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BBF8u;
            // 0x40bbfc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x40bbf8:
    ctx->pc = 0x40BC00u;
}
