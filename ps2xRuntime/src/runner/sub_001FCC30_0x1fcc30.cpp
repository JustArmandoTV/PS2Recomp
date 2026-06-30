#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCC30
// Address: 0x1fcc30 - 0x1fccf0
void sub_001FCC30_0x1fcc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCC30_0x1fcc30");
#endif

    switch (ctx->pc) {
        case 0x1fcc30u: goto label_1fcc30;
        case 0x1fcc34u: goto label_1fcc34;
        case 0x1fcc38u: goto label_1fcc38;
        case 0x1fcc3cu: goto label_1fcc3c;
        case 0x1fcc40u: goto label_1fcc40;
        case 0x1fcc44u: goto label_1fcc44;
        case 0x1fcc48u: goto label_1fcc48;
        case 0x1fcc4cu: goto label_1fcc4c;
        case 0x1fcc50u: goto label_1fcc50;
        case 0x1fcc54u: goto label_1fcc54;
        case 0x1fcc58u: goto label_1fcc58;
        case 0x1fcc5cu: goto label_1fcc5c;
        case 0x1fcc60u: goto label_1fcc60;
        case 0x1fcc64u: goto label_1fcc64;
        case 0x1fcc68u: goto label_1fcc68;
        case 0x1fcc6cu: goto label_1fcc6c;
        case 0x1fcc70u: goto label_1fcc70;
        case 0x1fcc74u: goto label_1fcc74;
        case 0x1fcc78u: goto label_1fcc78;
        case 0x1fcc7cu: goto label_1fcc7c;
        case 0x1fcc80u: goto label_1fcc80;
        case 0x1fcc84u: goto label_1fcc84;
        case 0x1fcc88u: goto label_1fcc88;
        case 0x1fcc8cu: goto label_1fcc8c;
        case 0x1fcc90u: goto label_1fcc90;
        case 0x1fcc94u: goto label_1fcc94;
        case 0x1fcc98u: goto label_1fcc98;
        case 0x1fcc9cu: goto label_1fcc9c;
        case 0x1fcca0u: goto label_1fcca0;
        case 0x1fcca4u: goto label_1fcca4;
        case 0x1fcca8u: goto label_1fcca8;
        case 0x1fccacu: goto label_1fccac;
        case 0x1fccb0u: goto label_1fccb0;
        case 0x1fccb4u: goto label_1fccb4;
        case 0x1fccb8u: goto label_1fccb8;
        case 0x1fccbcu: goto label_1fccbc;
        case 0x1fccc0u: goto label_1fccc0;
        case 0x1fccc4u: goto label_1fccc4;
        case 0x1fccc8u: goto label_1fccc8;
        case 0x1fccccu: goto label_1fcccc;
        case 0x1fccd0u: goto label_1fccd0;
        case 0x1fccd4u: goto label_1fccd4;
        case 0x1fccd8u: goto label_1fccd8;
        case 0x1fccdcu: goto label_1fccdc;
        case 0x1fcce0u: goto label_1fcce0;
        case 0x1fcce4u: goto label_1fcce4;
        case 0x1fcce8u: goto label_1fcce8;
        case 0x1fccecu: goto label_1fccec;
        default: break;
    }

    ctx->pc = 0x1fcc30u;

label_1fcc30:
    // 0x1fcc30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1fcc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1fcc34:
    // 0x1fcc34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fcc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1fcc38:
    // 0x1fcc38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fcc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1fcc3c:
    // 0x1fcc3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fcc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fcc40:
    // 0x1fcc40: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1fcc40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc44:
    // 0x1fcc44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fcc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fcc48:
    // 0x1fcc48: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1fcc48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc4c:
    // 0x1fcc4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fcc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fcc50:
    // 0x1fcc50: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1fcc50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc54:
    // 0x1fcc54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fcc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fcc58:
    // 0x1fcc58: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1fcc58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc5c:
    // 0x1fcc5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fcc60:
    // 0x1fcc60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fcc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fcc64:
    // 0x1fcc64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fcc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc68:
    // 0x1fcc68: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fcc6c:
    // 0x1fcc6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fcc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc70:
    // 0x1fcc70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1fcc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1fcc74:
    // 0x1fcc74: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1fcc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1fcc78:
    // 0x1fcc78: 0xc0a456c  jal         func_2915B0
label_1fcc7c:
    if (ctx->pc == 0x1FCC7Cu) {
        ctx->pc = 0x1FCC7Cu;
            // 0x1fcc7c: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1FCC80u;
        goto label_1fcc80;
    }
    ctx->pc = 0x1FCC78u;
    SET_GPR_U32(ctx, 31, 0x1FCC80u);
    ctx->pc = 0x1FCC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC78u;
            // 0x1fcc7c: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC80u; }
        if (ctx->pc != 0x1FCC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC80u; }
        if (ctx->pc != 0x1FCC80u) { return; }
    }
    ctx->pc = 0x1FCC80u;
label_1fcc80:
    // 0x1fcc80: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1fcc84:
    // 0x1fcc84: 0xafb0008c  sw          $s0, 0x8C($sp)
    ctx->pc = 0x1fcc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 16));
label_1fcc88:
    // 0x1fcc88: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1fcc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1fcc8c:
    // 0x1fcc8c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1fcc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc90:
    // 0x1fcc90: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1fcc94:
    // 0x1fcc94: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1fcc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc98:
    // 0x1fcc98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fcc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fcc9c:
    // 0x1fcc9c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1fcc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcca0:
    // 0x1fcca0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1fcca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fcca4:
    // 0x1fcca4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1fcca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_1fcca8:
    // 0x1fcca8: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1fcca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_1fccac:
    // 0x1fccac: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1fccacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fccb0:
    // 0x1fccb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fccb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fccb4:
    // 0x1fccb4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1fccb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1fccb8:
    // 0x1fccb8: 0x320f809  jalr        $t9
label_1fccbc:
    if (ctx->pc == 0x1FCCBCu) {
        ctx->pc = 0x1FCCBCu;
            // 0x1fccbc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1FCCC0u;
        goto label_1fccc0;
    }
    ctx->pc = 0x1FCCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FCCC0u);
        ctx->pc = 0x1FCCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCCB8u;
            // 0x1fccbc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCCC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCC0u; }
            if (ctx->pc != 0x1FCCC0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FCCC0u;
label_1fccc0:
    // 0x1fccc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fccc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1fccc4:
    // 0x1fccc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fccc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fccc8:
    // 0x1fccc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fccc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fcccc:
    // 0x1fcccc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fccccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fccd0:
    // 0x1fccd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fccd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fccd4:
    // 0x1fccd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fccd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fccd8:
    // 0x1fccd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fccd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fccdc:
    // 0x1fccdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fccdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcce0:
    // 0x1fcce0: 0x3e00008  jr          $ra
label_1fcce4:
    if (ctx->pc == 0x1FCCE4u) {
        ctx->pc = 0x1FCCE4u;
            // 0x1fcce4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1FCCE8u;
        goto label_1fcce8;
    }
    ctx->pc = 0x1FCCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCCE0u;
            // 0x1fcce4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCCE8u;
label_1fcce8:
    // 0x1fcce8: 0x0  nop
    ctx->pc = 0x1fcce8u;
    // NOP
label_1fccec:
    // 0x1fccec: 0x0  nop
    ctx->pc = 0x1fccecu;
    // NOP
}
