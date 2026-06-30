#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040B9F0
// Address: 0x40b9f0 - 0x40bac0
void sub_0040B9F0_0x40b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B9F0_0x40b9f0");
#endif

    switch (ctx->pc) {
        case 0x40b9f0u: goto label_40b9f0;
        case 0x40b9f4u: goto label_40b9f4;
        case 0x40b9f8u: goto label_40b9f8;
        case 0x40b9fcu: goto label_40b9fc;
        case 0x40ba00u: goto label_40ba00;
        case 0x40ba04u: goto label_40ba04;
        case 0x40ba08u: goto label_40ba08;
        case 0x40ba0cu: goto label_40ba0c;
        case 0x40ba10u: goto label_40ba10;
        case 0x40ba14u: goto label_40ba14;
        case 0x40ba18u: goto label_40ba18;
        case 0x40ba1cu: goto label_40ba1c;
        case 0x40ba20u: goto label_40ba20;
        case 0x40ba24u: goto label_40ba24;
        case 0x40ba28u: goto label_40ba28;
        case 0x40ba2cu: goto label_40ba2c;
        case 0x40ba30u: goto label_40ba30;
        case 0x40ba34u: goto label_40ba34;
        case 0x40ba38u: goto label_40ba38;
        case 0x40ba3cu: goto label_40ba3c;
        case 0x40ba40u: goto label_40ba40;
        case 0x40ba44u: goto label_40ba44;
        case 0x40ba48u: goto label_40ba48;
        case 0x40ba4cu: goto label_40ba4c;
        case 0x40ba50u: goto label_40ba50;
        case 0x40ba54u: goto label_40ba54;
        case 0x40ba58u: goto label_40ba58;
        case 0x40ba5cu: goto label_40ba5c;
        case 0x40ba60u: goto label_40ba60;
        case 0x40ba64u: goto label_40ba64;
        case 0x40ba68u: goto label_40ba68;
        case 0x40ba6cu: goto label_40ba6c;
        case 0x40ba70u: goto label_40ba70;
        case 0x40ba74u: goto label_40ba74;
        case 0x40ba78u: goto label_40ba78;
        case 0x40ba7cu: goto label_40ba7c;
        case 0x40ba80u: goto label_40ba80;
        case 0x40ba84u: goto label_40ba84;
        case 0x40ba88u: goto label_40ba88;
        case 0x40ba8cu: goto label_40ba8c;
        case 0x40ba90u: goto label_40ba90;
        case 0x40ba94u: goto label_40ba94;
        case 0x40ba98u: goto label_40ba98;
        case 0x40ba9cu: goto label_40ba9c;
        case 0x40baa0u: goto label_40baa0;
        case 0x40baa4u: goto label_40baa4;
        case 0x40baa8u: goto label_40baa8;
        case 0x40baacu: goto label_40baac;
        case 0x40bab0u: goto label_40bab0;
        case 0x40bab4u: goto label_40bab4;
        case 0x40bab8u: goto label_40bab8;
        case 0x40babcu: goto label_40babc;
        default: break;
    }

    ctx->pc = 0x40b9f0u;

label_40b9f0:
    // 0x40b9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_40b9f4:
    // 0x40b9f4: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x40b9f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
label_40b9f8:
    // 0x40b9f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x40b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_40b9fc:
    // 0x40b9fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x40b9fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40ba00:
    // 0x40ba00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40ba04:
    // 0x40ba04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40ba08:
    // 0x40ba08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40ba0c:
    // 0x40ba0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40ba0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40ba10:
    // 0x40ba10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40ba14:
    // 0x40ba14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40ba14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40ba18:
    // 0x40ba18: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x40ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_40ba1c:
    // 0x40ba1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40ba20:
    // 0x40ba20: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x40ba20u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_40ba24:
    // 0x40ba24: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40ba24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40ba28:
    // 0x40ba28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40ba28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40ba2c:
    // 0x40ba2c: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x40ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_40ba30:
    // 0x40ba30: 0x8c700550  lw          $s0, 0x550($v1)
    ctx->pc = 0x40ba30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
label_40ba34:
    // 0x40ba34: 0x8203010d  lb          $v1, 0x10D($s0)
    ctx->pc = 0x40ba34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_40ba38:
    // 0x40ba38: 0xa203010e  sb          $v1, 0x10E($s0)
    ctx->pc = 0x40ba38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 3));
label_40ba3c:
    // 0x40ba3c: 0xa200010d  sb          $zero, 0x10D($s0)
    ctx->pc = 0x40ba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 0));
label_40ba40:
    // 0x40ba40: 0x8203010c  lb          $v1, 0x10C($s0)
    ctx->pc = 0x40ba40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_40ba44:
    // 0x40ba44: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x40ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40ba48:
    // 0x40ba48: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x40ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_40ba4c:
    // 0x40ba4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40ba50:
    // 0x40ba50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x40ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_40ba54:
    // 0x40ba54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x40ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_40ba58:
    // 0x40ba58: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x40ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_40ba5c:
    // 0x40ba5c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x40ba5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_40ba60:
    // 0x40ba60: 0x8205010e  lb          $a1, 0x10E($s0)
    ctx->pc = 0x40ba60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 270)));
label_40ba64:
    // 0x40ba64: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x40ba64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_40ba68:
    // 0x40ba68: 0x320f809  jalr        $t9
label_40ba6c:
    if (ctx->pc == 0x40BA6Cu) {
        ctx->pc = 0x40BA6Cu;
            // 0x40ba6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40BA70u;
        goto label_40ba70;
    }
    ctx->pc = 0x40BA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40BA70u);
        ctx->pc = 0x40BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BA68u;
            // 0x40ba6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40BA70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40BA70u; }
            if (ctx->pc != 0x40BA70u) { return; }
        }
        }
    }
    ctx->pc = 0x40BA70u;
label_40ba70:
    // 0x40ba70: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x40ba70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_40ba74:
    // 0x40ba74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x40ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_40ba78:
    // 0x40ba78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40ba7c:
    // 0x40ba7c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x40ba7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_40ba80:
    // 0x40ba80: 0x320f809  jalr        $t9
label_40ba84:
    if (ctx->pc == 0x40BA84u) {
        ctx->pc = 0x40BA84u;
            // 0x40ba84: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40BA88u;
        goto label_40ba88;
    }
    ctx->pc = 0x40BA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40BA88u);
        ctx->pc = 0x40BA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BA80u;
            // 0x40ba84: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40BA88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40BA88u; }
            if (ctx->pc != 0x40BA88u) { return; }
        }
        }
    }
    ctx->pc = 0x40BA88u;
label_40ba88:
    // 0x40ba88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x40ba88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40ba8c:
    // 0x40ba8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40ba8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40ba90:
    // 0x40ba90: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x40ba90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_40ba94:
    // 0x40ba94: 0x320f809  jalr        $t9
label_40ba98:
    if (ctx->pc == 0x40BA98u) {
        ctx->pc = 0x40BA98u;
            // 0x40ba98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40BA9Cu;
        goto label_40ba9c;
    }
    ctx->pc = 0x40BA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40BA9Cu);
        ctx->pc = 0x40BA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BA94u;
            // 0x40ba98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40BA9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40BA9Cu; }
            if (ctx->pc != 0x40BA9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40BA9Cu;
label_40ba9c:
    // 0x40ba9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40ba9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_40baa0:
    // 0x40baa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40baa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40baa4:
    // 0x40baa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40baa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40baa8:
    // 0x40baa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40baa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40baac:
    // 0x40baac: 0x3e00008  jr          $ra
label_40bab0:
    if (ctx->pc == 0x40BAB0u) {
        ctx->pc = 0x40BAB0u;
            // 0x40bab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x40BAB4u;
        goto label_40bab4;
    }
    ctx->pc = 0x40BAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BAACu;
            // 0x40bab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40BAB4u;
label_40bab4:
    // 0x40bab4: 0x0  nop
    ctx->pc = 0x40bab4u;
    // NOP
label_40bab8:
    // 0x40bab8: 0x0  nop
    ctx->pc = 0x40bab8u;
    // NOP
label_40babc:
    // 0x40babc: 0x0  nop
    ctx->pc = 0x40babcu;
    // NOP
}
