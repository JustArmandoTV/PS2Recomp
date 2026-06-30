#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EBAB0
// Address: 0x4ebab0 - 0x4ebd30
void sub_004EBAB0_0x4ebab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBAB0_0x4ebab0");
#endif

    switch (ctx->pc) {
        case 0x4ebab0u: goto label_4ebab0;
        case 0x4ebab4u: goto label_4ebab4;
        case 0x4ebab8u: goto label_4ebab8;
        case 0x4ebabcu: goto label_4ebabc;
        case 0x4ebac0u: goto label_4ebac0;
        case 0x4ebac4u: goto label_4ebac4;
        case 0x4ebac8u: goto label_4ebac8;
        case 0x4ebaccu: goto label_4ebacc;
        case 0x4ebad0u: goto label_4ebad0;
        case 0x4ebad4u: goto label_4ebad4;
        case 0x4ebad8u: goto label_4ebad8;
        case 0x4ebadcu: goto label_4ebadc;
        case 0x4ebae0u: goto label_4ebae0;
        case 0x4ebae4u: goto label_4ebae4;
        case 0x4ebae8u: goto label_4ebae8;
        case 0x4ebaecu: goto label_4ebaec;
        case 0x4ebaf0u: goto label_4ebaf0;
        case 0x4ebaf4u: goto label_4ebaf4;
        case 0x4ebaf8u: goto label_4ebaf8;
        case 0x4ebafcu: goto label_4ebafc;
        case 0x4ebb00u: goto label_4ebb00;
        case 0x4ebb04u: goto label_4ebb04;
        case 0x4ebb08u: goto label_4ebb08;
        case 0x4ebb0cu: goto label_4ebb0c;
        case 0x4ebb10u: goto label_4ebb10;
        case 0x4ebb14u: goto label_4ebb14;
        case 0x4ebb18u: goto label_4ebb18;
        case 0x4ebb1cu: goto label_4ebb1c;
        case 0x4ebb20u: goto label_4ebb20;
        case 0x4ebb24u: goto label_4ebb24;
        case 0x4ebb28u: goto label_4ebb28;
        case 0x4ebb2cu: goto label_4ebb2c;
        case 0x4ebb30u: goto label_4ebb30;
        case 0x4ebb34u: goto label_4ebb34;
        case 0x4ebb38u: goto label_4ebb38;
        case 0x4ebb3cu: goto label_4ebb3c;
        case 0x4ebb40u: goto label_4ebb40;
        case 0x4ebb44u: goto label_4ebb44;
        case 0x4ebb48u: goto label_4ebb48;
        case 0x4ebb4cu: goto label_4ebb4c;
        case 0x4ebb50u: goto label_4ebb50;
        case 0x4ebb54u: goto label_4ebb54;
        case 0x4ebb58u: goto label_4ebb58;
        case 0x4ebb5cu: goto label_4ebb5c;
        case 0x4ebb60u: goto label_4ebb60;
        case 0x4ebb64u: goto label_4ebb64;
        case 0x4ebb68u: goto label_4ebb68;
        case 0x4ebb6cu: goto label_4ebb6c;
        case 0x4ebb70u: goto label_4ebb70;
        case 0x4ebb74u: goto label_4ebb74;
        case 0x4ebb78u: goto label_4ebb78;
        case 0x4ebb7cu: goto label_4ebb7c;
        case 0x4ebb80u: goto label_4ebb80;
        case 0x4ebb84u: goto label_4ebb84;
        case 0x4ebb88u: goto label_4ebb88;
        case 0x4ebb8cu: goto label_4ebb8c;
        case 0x4ebb90u: goto label_4ebb90;
        case 0x4ebb94u: goto label_4ebb94;
        case 0x4ebb98u: goto label_4ebb98;
        case 0x4ebb9cu: goto label_4ebb9c;
        case 0x4ebba0u: goto label_4ebba0;
        case 0x4ebba4u: goto label_4ebba4;
        case 0x4ebba8u: goto label_4ebba8;
        case 0x4ebbacu: goto label_4ebbac;
        case 0x4ebbb0u: goto label_4ebbb0;
        case 0x4ebbb4u: goto label_4ebbb4;
        case 0x4ebbb8u: goto label_4ebbb8;
        case 0x4ebbbcu: goto label_4ebbbc;
        case 0x4ebbc0u: goto label_4ebbc0;
        case 0x4ebbc4u: goto label_4ebbc4;
        case 0x4ebbc8u: goto label_4ebbc8;
        case 0x4ebbccu: goto label_4ebbcc;
        case 0x4ebbd0u: goto label_4ebbd0;
        case 0x4ebbd4u: goto label_4ebbd4;
        case 0x4ebbd8u: goto label_4ebbd8;
        case 0x4ebbdcu: goto label_4ebbdc;
        case 0x4ebbe0u: goto label_4ebbe0;
        case 0x4ebbe4u: goto label_4ebbe4;
        case 0x4ebbe8u: goto label_4ebbe8;
        case 0x4ebbecu: goto label_4ebbec;
        case 0x4ebbf0u: goto label_4ebbf0;
        case 0x4ebbf4u: goto label_4ebbf4;
        case 0x4ebbf8u: goto label_4ebbf8;
        case 0x4ebbfcu: goto label_4ebbfc;
        case 0x4ebc00u: goto label_4ebc00;
        case 0x4ebc04u: goto label_4ebc04;
        case 0x4ebc08u: goto label_4ebc08;
        case 0x4ebc0cu: goto label_4ebc0c;
        case 0x4ebc10u: goto label_4ebc10;
        case 0x4ebc14u: goto label_4ebc14;
        case 0x4ebc18u: goto label_4ebc18;
        case 0x4ebc1cu: goto label_4ebc1c;
        case 0x4ebc20u: goto label_4ebc20;
        case 0x4ebc24u: goto label_4ebc24;
        case 0x4ebc28u: goto label_4ebc28;
        case 0x4ebc2cu: goto label_4ebc2c;
        case 0x4ebc30u: goto label_4ebc30;
        case 0x4ebc34u: goto label_4ebc34;
        case 0x4ebc38u: goto label_4ebc38;
        case 0x4ebc3cu: goto label_4ebc3c;
        case 0x4ebc40u: goto label_4ebc40;
        case 0x4ebc44u: goto label_4ebc44;
        case 0x4ebc48u: goto label_4ebc48;
        case 0x4ebc4cu: goto label_4ebc4c;
        case 0x4ebc50u: goto label_4ebc50;
        case 0x4ebc54u: goto label_4ebc54;
        case 0x4ebc58u: goto label_4ebc58;
        case 0x4ebc5cu: goto label_4ebc5c;
        case 0x4ebc60u: goto label_4ebc60;
        case 0x4ebc64u: goto label_4ebc64;
        case 0x4ebc68u: goto label_4ebc68;
        case 0x4ebc6cu: goto label_4ebc6c;
        case 0x4ebc70u: goto label_4ebc70;
        case 0x4ebc74u: goto label_4ebc74;
        case 0x4ebc78u: goto label_4ebc78;
        case 0x4ebc7cu: goto label_4ebc7c;
        case 0x4ebc80u: goto label_4ebc80;
        case 0x4ebc84u: goto label_4ebc84;
        case 0x4ebc88u: goto label_4ebc88;
        case 0x4ebc8cu: goto label_4ebc8c;
        case 0x4ebc90u: goto label_4ebc90;
        case 0x4ebc94u: goto label_4ebc94;
        case 0x4ebc98u: goto label_4ebc98;
        case 0x4ebc9cu: goto label_4ebc9c;
        case 0x4ebca0u: goto label_4ebca0;
        case 0x4ebca4u: goto label_4ebca4;
        case 0x4ebca8u: goto label_4ebca8;
        case 0x4ebcacu: goto label_4ebcac;
        case 0x4ebcb0u: goto label_4ebcb0;
        case 0x4ebcb4u: goto label_4ebcb4;
        case 0x4ebcb8u: goto label_4ebcb8;
        case 0x4ebcbcu: goto label_4ebcbc;
        case 0x4ebcc0u: goto label_4ebcc0;
        case 0x4ebcc4u: goto label_4ebcc4;
        case 0x4ebcc8u: goto label_4ebcc8;
        case 0x4ebcccu: goto label_4ebccc;
        case 0x4ebcd0u: goto label_4ebcd0;
        case 0x4ebcd4u: goto label_4ebcd4;
        case 0x4ebcd8u: goto label_4ebcd8;
        case 0x4ebcdcu: goto label_4ebcdc;
        case 0x4ebce0u: goto label_4ebce0;
        case 0x4ebce4u: goto label_4ebce4;
        case 0x4ebce8u: goto label_4ebce8;
        case 0x4ebcecu: goto label_4ebcec;
        case 0x4ebcf0u: goto label_4ebcf0;
        case 0x4ebcf4u: goto label_4ebcf4;
        case 0x4ebcf8u: goto label_4ebcf8;
        case 0x4ebcfcu: goto label_4ebcfc;
        case 0x4ebd00u: goto label_4ebd00;
        case 0x4ebd04u: goto label_4ebd04;
        case 0x4ebd08u: goto label_4ebd08;
        case 0x4ebd0cu: goto label_4ebd0c;
        case 0x4ebd10u: goto label_4ebd10;
        case 0x4ebd14u: goto label_4ebd14;
        case 0x4ebd18u: goto label_4ebd18;
        case 0x4ebd1cu: goto label_4ebd1c;
        case 0x4ebd20u: goto label_4ebd20;
        case 0x4ebd24u: goto label_4ebd24;
        case 0x4ebd28u: goto label_4ebd28;
        case 0x4ebd2cu: goto label_4ebd2c;
        default: break;
    }

    ctx->pc = 0x4ebab0u;

label_4ebab0:
    // 0x4ebab0: 0x3e00008  jr          $ra
label_4ebab4:
    if (ctx->pc == 0x4EBAB4u) {
        ctx->pc = 0x4EBAB4u;
            // 0x4ebab4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x4EBAB8u;
        goto label_4ebab8;
    }
    ctx->pc = 0x4EBAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBAB0u;
            // 0x4ebab4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EBAB8u;
label_4ebab8:
    // 0x4ebab8: 0x0  nop
    ctx->pc = 0x4ebab8u;
    // NOP
label_4ebabc:
    // 0x4ebabc: 0x0  nop
    ctx->pc = 0x4ebabcu;
    // NOP
label_4ebac0:
    // 0x4ebac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ebac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ebac4:
    // 0x4ebac4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ebac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ebac8:
    // 0x4ebac8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ebac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ebacc:
    // 0x4ebacc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ebaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ebad0:
    // 0x4ebad0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ebad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebad4:
    // 0x4ebad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ebad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ebad8:
    // 0x4ebad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ebad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ebadc:
    // 0x4ebadc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4ebadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4ebae0:
    // 0x4ebae0: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
label_4ebae4:
    if (ctx->pc == 0x4EBAE4u) {
        ctx->pc = 0x4EBAE4u;
            // 0x4ebae4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EBAE8u;
        goto label_4ebae8;
    }
    ctx->pc = 0x4EBAE0u;
    {
        const bool branch_taken_0x4ebae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBAE0u;
            // 0x4ebae4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebae0) {
            ctx->pc = 0x4EBC9Cu;
            goto label_4ebc9c;
        }
    }
    ctx->pc = 0x4EBAE8u;
label_4ebae8:
    // 0x4ebae8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ebae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ebaec:
    // 0x4ebaec: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x4ebaecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_4ebaf0:
    // 0x4ebaf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ebaf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ebaf4:
    // 0x4ebaf4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4ebaf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4ebaf8:
    // 0x4ebaf8: 0x320f809  jalr        $t9
label_4ebafc:
    if (ctx->pc == 0x4EBAFCu) {
        ctx->pc = 0x4EBB00u;
        goto label_4ebb00;
    }
    ctx->pc = 0x4EBAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EBB00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EBB00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EBB00u; }
            if (ctx->pc != 0x4EBB00u) { return; }
        }
        }
    }
    ctx->pc = 0x4EBB00u;
label_4ebb00:
    // 0x4ebb00: 0x26700084  addiu       $s0, $s3, 0x84
    ctx->pc = 0x4ebb00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_4ebb04:
    // 0x4ebb04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4ebb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ebb08:
    // 0x4ebb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ebb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebb0c:
    // 0x4ebb0c: 0xc075128  jal         func_1D44A0
label_4ebb10:
    if (ctx->pc == 0x4EBB10u) {
        ctx->pc = 0x4EBB10u;
            // 0x4ebb10: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4EBB14u;
        goto label_4ebb14;
    }
    ctx->pc = 0x4EBB0Cu;
    SET_GPR_U32(ctx, 31, 0x4EBB14u);
    ctx->pc = 0x4EBB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBB0Cu;
            // 0x4ebb10: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBB14u; }
        if (ctx->pc != 0x4EBB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBB14u; }
        if (ctx->pc != 0x4EBB14u) { return; }
    }
    ctx->pc = 0x4EBB14u;
label_4ebb14:
    // 0x4ebb14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ebb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebb18:
    // 0x4ebb18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebb1c:
    // 0x4ebb1c: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4ebb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4ebb20:
    // 0x4ebb20: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4ebb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ebb24:
    // 0x4ebb24: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ebb24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ebb28:
    // 0x4ebb28: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ebb2c:
    if (ctx->pc == 0x4EBB2Cu) {
        ctx->pc = 0x4EBB2Cu;
            // 0x4ebb2c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4EBB30u;
        goto label_4ebb30;
    }
    ctx->pc = 0x4EBB28u;
    {
        const bool branch_taken_0x4ebb28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebb28) {
            ctx->pc = 0x4EBB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBB28u;
            // 0x4ebb2c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBB3Cu;
            goto label_4ebb3c;
        }
    }
    ctx->pc = 0x4EBB30u;
label_4ebb30:
    // 0x4ebb30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebb34:
    // 0x4ebb34: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4ebb34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4ebb38:
    // 0x4ebb38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ebb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebb3c:
    // 0x4ebb3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebb40:
    // 0x4ebb40: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4ebb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4ebb44:
    // 0x4ebb44: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ebb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ebb48:
    // 0x4ebb48: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ebb48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ebb4c:
    // 0x4ebb4c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ebb50:
    if (ctx->pc == 0x4EBB50u) {
        ctx->pc = 0x4EBB50u;
            // 0x4ebb50: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4EBB54u;
        goto label_4ebb54;
    }
    ctx->pc = 0x4EBB4Cu;
    {
        const bool branch_taken_0x4ebb4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebb4c) {
            ctx->pc = 0x4EBB50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBB4Cu;
            // 0x4ebb50: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBB60u;
            goto label_4ebb60;
        }
    }
    ctx->pc = 0x4EBB54u;
label_4ebb54:
    // 0x4ebb54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebb58:
    // 0x4ebb58: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4ebb58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4ebb5c:
    // 0x4ebb5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ebb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebb60:
    // 0x4ebb60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebb64:
    // 0x4ebb64: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4ebb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4ebb68:
    // 0x4ebb68: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ebb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ebb6c:
    // 0x4ebb6c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ebb6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ebb70:
    // 0x4ebb70: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ebb74:
    if (ctx->pc == 0x4EBB74u) {
        ctx->pc = 0x4EBB74u;
            // 0x4ebb74: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4EBB78u;
        goto label_4ebb78;
    }
    ctx->pc = 0x4EBB70u;
    {
        const bool branch_taken_0x4ebb70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebb70) {
            ctx->pc = 0x4EBB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBB70u;
            // 0x4ebb74: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBB84u;
            goto label_4ebb84;
        }
    }
    ctx->pc = 0x4EBB78u;
label_4ebb78:
    // 0x4ebb78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebb7c:
    // 0x4ebb7c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4ebb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4ebb80:
    // 0x4ebb80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ebb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebb84:
    // 0x4ebb84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebb88:
    // 0x4ebb88: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4ebb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4ebb8c:
    // 0x4ebb8c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ebb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ebb90:
    // 0x4ebb90: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x4ebb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4ebb94:
    // 0x4ebb94: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ebb94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ebb98:
    // 0x4ebb98: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ebb9c:
    if (ctx->pc == 0x4EBB9Cu) {
        ctx->pc = 0x4EBB9Cu;
            // 0x4ebb9c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4EBBA0u;
        goto label_4ebba0;
    }
    ctx->pc = 0x4EBB98u;
    {
        const bool branch_taken_0x4ebb98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebb98) {
            ctx->pc = 0x4EBB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBB98u;
            // 0x4ebb9c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBBACu;
            goto label_4ebbac;
        }
    }
    ctx->pc = 0x4EBBA0u;
label_4ebba0:
    // 0x4ebba0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebba4:
    // 0x4ebba4: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4ebba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4ebba8:
    // 0x4ebba8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ebba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebbac:
    // 0x4ebbac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebbb0:
    // 0x4ebbb0: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4ebbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4ebbb4:
    // 0x4ebbb4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ebbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ebbb8:
    // 0x4ebbb8: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x4ebbb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4ebbbc:
    // 0x4ebbbc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ebbbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ebbc0:
    // 0x4ebbc0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ebbc4:
    if (ctx->pc == 0x4EBBC4u) {
        ctx->pc = 0x4EBBC4u;
            // 0x4ebbc4: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x4EBBC8u;
        goto label_4ebbc8;
    }
    ctx->pc = 0x4EBBC0u;
    {
        const bool branch_taken_0x4ebbc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebbc0) {
            ctx->pc = 0x4EBBC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBBC0u;
            // 0x4ebbc4: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBBD4u;
            goto label_4ebbd4;
        }
    }
    ctx->pc = 0x4EBBC8u;
label_4ebbc8:
    // 0x4ebbc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebbcc:
    // 0x4ebbcc: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4ebbccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4ebbd0:
    // 0x4ebbd0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x4ebbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4ebbd4:
    // 0x4ebbd4: 0x26700094  addiu       $s0, $s3, 0x94
    ctx->pc = 0x4ebbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
label_4ebbd8:
    // 0x4ebbd8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4ebbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4ebbdc:
    // 0x4ebbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ebbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebbe0:
    // 0x4ebbe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ebbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ebbe4:
    // 0x4ebbe4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ebbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ebbe8:
    // 0x4ebbe8: 0xc074f30  jal         func_1D3CC0
label_4ebbec:
    if (ctx->pc == 0x4EBBECu) {
        ctx->pc = 0x4EBBECu;
            // 0x4ebbec: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4EBBF0u;
        goto label_4ebbf0;
    }
    ctx->pc = 0x4EBBE8u;
    SET_GPR_U32(ctx, 31, 0x4EBBF0u);
    ctx->pc = 0x4EBBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBBE8u;
            // 0x4ebbec: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBBF0u; }
        if (ctx->pc != 0x4EBBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBBF0u; }
        if (ctx->pc != 0x4EBBF0u) { return; }
    }
    ctx->pc = 0x4EBBF0u;
label_4ebbf0:
    // 0x4ebbf0: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x4ebbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4ebbf4:
    // 0x4ebbf4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4ebbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4ebbf8:
    // 0x4ebbf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ebbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ebbfc:
    // 0x4ebbfc: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x4ebbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4ebc00:
    // 0x4ebc00: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4ebc00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_4ebc04:
    // 0x4ebc04: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4ebc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4ebc08:
    // 0x4ebc08: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4ebc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4ebc0c:
    // 0x4ebc0c: 0xc0751b8  jal         func_1D46E0
label_4ebc10:
    if (ctx->pc == 0x4EBC10u) {
        ctx->pc = 0x4EBC10u;
            // 0x4ebc10: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4EBC14u;
        goto label_4ebc14;
    }
    ctx->pc = 0x4EBC0Cu;
    SET_GPR_U32(ctx, 31, 0x4EBC14u);
    ctx->pc = 0x4EBC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBC0Cu;
            // 0x4ebc10: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBC14u; }
        if (ctx->pc != 0x4EBC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBC14u; }
        if (ctx->pc != 0x4EBC14u) { return; }
    }
    ctx->pc = 0x4EBC14u;
label_4ebc14:
    // 0x4ebc14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ebc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebc18:
    // 0x4ebc18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ebc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ebc1c:
    // 0x4ebc1c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4ebc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4ebc20:
    // 0x4ebc20: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4ebc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4ebc24:
    // 0x4ebc24: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x4ebc24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4ebc28:
    // 0x4ebc28: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4ebc28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4ebc2c:
    // 0x4ebc2c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ebc30:
    if (ctx->pc == 0x4EBC30u) {
        ctx->pc = 0x4EBC30u;
            // 0x4ebc30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4EBC34u;
        goto label_4ebc34;
    }
    ctx->pc = 0x4EBC2Cu;
    {
        const bool branch_taken_0x4ebc2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebc2c) {
            ctx->pc = 0x4EBC30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBC2Cu;
            // 0x4ebc30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBC40u;
            goto label_4ebc40;
        }
    }
    ctx->pc = 0x4EBC34u;
label_4ebc34:
    // 0x4ebc34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ebc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ebc38:
    // 0x4ebc38: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4ebc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4ebc3c:
    // 0x4ebc3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ebc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebc40:
    // 0x4ebc40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ebc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ebc44:
    // 0x4ebc44: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4ebc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4ebc48:
    // 0x4ebc48: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4ebc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4ebc4c:
    // 0x4ebc4c: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x4ebc4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4ebc50:
    // 0x4ebc50: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4ebc50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4ebc54:
    // 0x4ebc54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4ebc58:
    if (ctx->pc == 0x4EBC58u) {
        ctx->pc = 0x4EBC5Cu;
        goto label_4ebc5c;
    }
    ctx->pc = 0x4EBC54u;
    {
        const bool branch_taken_0x4ebc54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebc54) {
            ctx->pc = 0x4EBC64u;
            goto label_4ebc64;
        }
    }
    ctx->pc = 0x4EBC5Cu;
label_4ebc5c:
    // 0x4ebc5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ebc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ebc60:
    // 0x4ebc60: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4ebc60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4ebc64:
    // 0x4ebc64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ebc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ebc68:
    // 0x4ebc68: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4ebc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4ebc6c:
    // 0x4ebc6c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x4ebc6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4ebc70:
    // 0x4ebc70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4ebc74:
    if (ctx->pc == 0x4EBC74u) {
        ctx->pc = 0x4EBC78u;
        goto label_4ebc78;
    }
    ctx->pc = 0x4EBC70u;
    {
        const bool branch_taken_0x4ebc70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebc70) {
            ctx->pc = 0x4EBC80u;
            goto label_4ebc80;
        }
    }
    ctx->pc = 0x4EBC78u;
label_4ebc78:
    // 0x4ebc78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ebc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ebc7c:
    // 0x4ebc7c: 0xac71e3c8  sw          $s1, -0x1C38($v1)
    ctx->pc = 0x4ebc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 17));
label_4ebc80:
    // 0x4ebc80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ebc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ebc84:
    // 0x4ebc84: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4ebc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4ebc88:
    // 0x4ebc88: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x4ebc88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4ebc8c:
    // 0x4ebc8c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ebc90:
    if (ctx->pc == 0x4EBC90u) {
        ctx->pc = 0x4EBC90u;
            // 0x4ebc90: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4EBC94u;
        goto label_4ebc94;
    }
    ctx->pc = 0x4EBC8Cu;
    {
        const bool branch_taken_0x4ebc8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebc8c) {
            ctx->pc = 0x4EBC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBC8Cu;
            // 0x4ebc90: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBCA0u;
            goto label_4ebca0;
        }
    }
    ctx->pc = 0x4EBC94u;
label_4ebc94:
    // 0x4ebc94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ebc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ebc98:
    // 0x4ebc98: 0xac71e3d0  sw          $s1, -0x1C30($v1)
    ctx->pc = 0x4ebc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 17));
label_4ebc9c:
    // 0x4ebc9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ebc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ebca0:
    // 0x4ebca0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ebca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebca4:
    // 0x4ebca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ebca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebca8:
    // 0x4ebca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ebca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebcac:
    // 0x4ebcac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ebcacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebcb0:
    // 0x4ebcb0: 0x3e00008  jr          $ra
label_4ebcb4:
    if (ctx->pc == 0x4EBCB4u) {
        ctx->pc = 0x4EBCB4u;
            // 0x4ebcb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4EBCB8u;
        goto label_4ebcb8;
    }
    ctx->pc = 0x4EBCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBCB0u;
            // 0x4ebcb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EBCB8u;
label_4ebcb8:
    // 0x4ebcb8: 0x0  nop
    ctx->pc = 0x4ebcb8u;
    // NOP
label_4ebcbc:
    // 0x4ebcbc: 0x0  nop
    ctx->pc = 0x4ebcbcu;
    // NOP
label_4ebcc0:
    // 0x4ebcc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ebcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ebcc4:
    // 0x4ebcc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ebcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ebcc8:
    // 0x4ebcc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ebcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ebccc:
    // 0x4ebccc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ebcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ebcd0:
    // 0x4ebcd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ebcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ebcd4:
    // 0x4ebcd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ebcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ebcd8:
    // 0x4ebcd8: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4ebcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4ebcdc:
    // 0x4ebcdc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_4ebce0:
    if (ctx->pc == 0x4EBCE0u) {
        ctx->pc = 0x4EBCE0u;
            // 0x4ebce0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EBCE4u;
        goto label_4ebce4;
    }
    ctx->pc = 0x4EBCDCu;
    {
        const bool branch_taken_0x4ebcdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBCDCu;
            // 0x4ebce0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebcdc) {
            ctx->pc = 0x4EBD10u;
            goto label_4ebd10;
        }
    }
    ctx->pc = 0x4EBCE4u;
label_4ebce4:
    // 0x4ebce4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ebce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ebce8:
    // 0x4ebce8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4ebce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ebcec:
    // 0x4ebcec: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4ebcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4ebcf0:
    // 0x4ebcf0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4ebcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4ebcf4:
    // 0x4ebcf4: 0xc13b030  jal         func_4EC0C0
label_4ebcf8:
    if (ctx->pc == 0x4EBCF8u) {
        ctx->pc = 0x4EBCF8u;
            // 0x4ebcf8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4EBCFCu;
        goto label_4ebcfc;
    }
    ctx->pc = 0x4EBCF4u;
    SET_GPR_U32(ctx, 31, 0x4EBCFCu);
    ctx->pc = 0x4EBCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBCF4u;
            // 0x4ebcf8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EC0C0u;
    if (runtime->hasFunction(0x4EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x4EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBCFCu; }
        if (ctx->pc != 0x4EBCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EC0C0_0x4ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBCFCu; }
        if (ctx->pc != 0x4EBCFCu) { return; }
    }
    ctx->pc = 0x4EBCFCu;
label_4ebcfc:
    // 0x4ebcfc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4ebcfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4ebd00:
    // 0x4ebd00: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4ebd00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ebd04:
    // 0x4ebd04: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4ebd08:
    if (ctx->pc == 0x4EBD08u) {
        ctx->pc = 0x4EBD08u;
            // 0x4ebd08: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4EBD0Cu;
        goto label_4ebd0c;
    }
    ctx->pc = 0x4EBD04u;
    {
        const bool branch_taken_0x4ebd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EBD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBD04u;
            // 0x4ebd08: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebd04) {
            ctx->pc = 0x4EBCECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ebcec;
        }
    }
    ctx->pc = 0x4EBD0Cu;
label_4ebd0c:
    // 0x4ebd0c: 0x0  nop
    ctx->pc = 0x4ebd0cu;
    // NOP
label_4ebd10:
    // 0x4ebd10: 0xae6000ac  sw          $zero, 0xAC($s3)
    ctx->pc = 0x4ebd10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 0));
label_4ebd14:
    // 0x4ebd14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ebd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ebd18:
    // 0x4ebd18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ebd18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebd1c:
    // 0x4ebd1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ebd1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebd20:
    // 0x4ebd20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ebd20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebd24:
    // 0x4ebd24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ebd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebd28:
    // 0x4ebd28: 0x3e00008  jr          $ra
label_4ebd2c:
    if (ctx->pc == 0x4EBD2Cu) {
        ctx->pc = 0x4EBD2Cu;
            // 0x4ebd2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4EBD30u;
        goto label_fallthrough_0x4ebd28;
    }
    ctx->pc = 0x4EBD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBD28u;
            // 0x4ebd2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4ebd28:
    ctx->pc = 0x4EBD30u;
}
