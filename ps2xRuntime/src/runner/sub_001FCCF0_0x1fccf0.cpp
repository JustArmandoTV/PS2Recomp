#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCCF0
// Address: 0x1fccf0 - 0x1fcdd0
void sub_001FCCF0_0x1fccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCCF0_0x1fccf0");
#endif

    switch (ctx->pc) {
        case 0x1fccf0u: goto label_1fccf0;
        case 0x1fccf4u: goto label_1fccf4;
        case 0x1fccf8u: goto label_1fccf8;
        case 0x1fccfcu: goto label_1fccfc;
        case 0x1fcd00u: goto label_1fcd00;
        case 0x1fcd04u: goto label_1fcd04;
        case 0x1fcd08u: goto label_1fcd08;
        case 0x1fcd0cu: goto label_1fcd0c;
        case 0x1fcd10u: goto label_1fcd10;
        case 0x1fcd14u: goto label_1fcd14;
        case 0x1fcd18u: goto label_1fcd18;
        case 0x1fcd1cu: goto label_1fcd1c;
        case 0x1fcd20u: goto label_1fcd20;
        case 0x1fcd24u: goto label_1fcd24;
        case 0x1fcd28u: goto label_1fcd28;
        case 0x1fcd2cu: goto label_1fcd2c;
        case 0x1fcd30u: goto label_1fcd30;
        case 0x1fcd34u: goto label_1fcd34;
        case 0x1fcd38u: goto label_1fcd38;
        case 0x1fcd3cu: goto label_1fcd3c;
        case 0x1fcd40u: goto label_1fcd40;
        case 0x1fcd44u: goto label_1fcd44;
        case 0x1fcd48u: goto label_1fcd48;
        case 0x1fcd4cu: goto label_1fcd4c;
        case 0x1fcd50u: goto label_1fcd50;
        case 0x1fcd54u: goto label_1fcd54;
        case 0x1fcd58u: goto label_1fcd58;
        case 0x1fcd5cu: goto label_1fcd5c;
        case 0x1fcd60u: goto label_1fcd60;
        case 0x1fcd64u: goto label_1fcd64;
        case 0x1fcd68u: goto label_1fcd68;
        case 0x1fcd6cu: goto label_1fcd6c;
        case 0x1fcd70u: goto label_1fcd70;
        case 0x1fcd74u: goto label_1fcd74;
        case 0x1fcd78u: goto label_1fcd78;
        case 0x1fcd7cu: goto label_1fcd7c;
        case 0x1fcd80u: goto label_1fcd80;
        case 0x1fcd84u: goto label_1fcd84;
        case 0x1fcd88u: goto label_1fcd88;
        case 0x1fcd8cu: goto label_1fcd8c;
        case 0x1fcd90u: goto label_1fcd90;
        case 0x1fcd94u: goto label_1fcd94;
        case 0x1fcd98u: goto label_1fcd98;
        case 0x1fcd9cu: goto label_1fcd9c;
        case 0x1fcda0u: goto label_1fcda0;
        case 0x1fcda4u: goto label_1fcda4;
        case 0x1fcda8u: goto label_1fcda8;
        case 0x1fcdacu: goto label_1fcdac;
        case 0x1fcdb0u: goto label_1fcdb0;
        case 0x1fcdb4u: goto label_1fcdb4;
        case 0x1fcdb8u: goto label_1fcdb8;
        case 0x1fcdbcu: goto label_1fcdbc;
        case 0x1fcdc0u: goto label_1fcdc0;
        case 0x1fcdc4u: goto label_1fcdc4;
        case 0x1fcdc8u: goto label_1fcdc8;
        case 0x1fcdccu: goto label_1fcdcc;
        default: break;
    }

    ctx->pc = 0x1fccf0u;

label_1fccf0:
    // 0x1fccf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1fccf4:
    // 0x1fccf4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1fccf8:
    // 0x1fccf8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fccfc:
    // 0x1fccfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fcd00:
    // 0x1fcd00: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1fcd00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd04:
    // 0x1fcd04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fcd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fcd08:
    // 0x1fcd08: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1fcd08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd0c:
    // 0x1fcd0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fcd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fcd10:
    // 0x1fcd10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fcd14:
    // 0x1fcd14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fcd14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd18:
    // 0x1fcd18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fcd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fcd1c:
    // 0x1fcd1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fcd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd20:
    // 0x1fcd20: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x1fcd20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fcd24:
    // 0x1fcd24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fcd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd28:
    // 0x1fcd28: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1fcd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1fcd2c:
    // 0x1fcd2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fcd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fcd30:
    // 0x1fcd30: 0xc0a456c  jal         func_2915B0
label_1fcd34:
    if (ctx->pc == 0x1FCD34u) {
        ctx->pc = 0x1FCD34u;
            // 0x1fcd34: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x1FCD38u;
        goto label_1fcd38;
    }
    ctx->pc = 0x1FCD30u;
    SET_GPR_U32(ctx, 31, 0x1FCD38u);
    ctx->pc = 0x1FCD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD30u;
            // 0x1fcd34: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCD38u; }
        if (ctx->pc != 0x1FCD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCD38u; }
        if (ctx->pc != 0x1FCD38u) { return; }
    }
    ctx->pc = 0x1FCD38u;
label_1fcd38:
    // 0x1fcd38: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1fcd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fcd3c:
    // 0x1fcd3c: 0xafb2007c  sw          $s2, 0x7C($sp)
    ctx->pc = 0x1fcd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
label_1fcd40:
    // 0x1fcd40: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1fcd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1fcd44:
    // 0x1fcd44: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1fcd44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd48:
    // 0x1fcd48: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1fcd4c:
    // 0x1fcd4c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1fcd4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd50:
    // 0x1fcd50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1fcd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1fcd54:
    // 0x1fcd54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fcd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fcd58:
    // 0x1fcd58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fcd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd5c:
    // 0x1fcd5c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1fcd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1fcd60:
    // 0x1fcd60: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1fcd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1fcd64:
    // 0x1fcd64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fcd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fcd68:
    // 0x1fcd68: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x1fcd68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fcd6c:
    // 0x1fcd6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fcd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fcd70:
    // 0x1fcd70: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1fcd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1fcd74:
    // 0x1fcd74: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1fcd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1fcd78:
    // 0x1fcd78: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1fcd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fcd7c:
    // 0x1fcd7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fcd80:
    // 0x1fcd80: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1fcd80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1fcd84:
    // 0x1fcd84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fcd88:
    // 0x1fcd88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fcd8c:
    // 0x1fcd8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fcd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fcd90:
    // 0x1fcd90: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1fcd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1fcd94:
    // 0x1fcd94: 0x8c4209ac  lw          $v0, 0x9AC($v0)
    ctx->pc = 0x1fcd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2476)));
label_1fcd98:
    // 0x1fcd98: 0x40f809  jalr        $v0
label_1fcd9c:
    if (ctx->pc == 0x1FCD9Cu) {
        ctx->pc = 0x1FCD9Cu;
            // 0x1fcd9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDA0u;
        goto label_1fcda0;
    }
    ctx->pc = 0x1FCD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCDA0u);
        ctx->pc = 0x1FCD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD98u;
            // 0x1fcd9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCDA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDA0u; }
            if (ctx->pc != 0x1FCDA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FCDA0u;
label_1fcda0:
    // 0x1fcda0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fcda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fcda4:
    // 0x1fcda4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fcda4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fcda8:
    // 0x1fcda8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fcda8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fcdac:
    // 0x1fcdac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcdacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fcdb0:
    // 0x1fcdb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fcdb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fcdb4:
    // 0x1fcdb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcdb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fcdb8:
    // 0x1fcdb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fcdb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcdbc:
    // 0x1fcdbc: 0x3e00008  jr          $ra
label_1fcdc0:
    if (ctx->pc == 0x1FCDC0u) {
        ctx->pc = 0x1FCDC0u;
            // 0x1fcdc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1FCDC4u;
        goto label_1fcdc4;
    }
    ctx->pc = 0x1FCDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDBCu;
            // 0x1fcdc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCDC4u;
label_1fcdc4:
    // 0x1fcdc4: 0x0  nop
    ctx->pc = 0x1fcdc4u;
    // NOP
label_1fcdc8:
    // 0x1fcdc8: 0x0  nop
    ctx->pc = 0x1fcdc8u;
    // NOP
label_1fcdcc:
    // 0x1fcdcc: 0x0  nop
    ctx->pc = 0x1fcdccu;
    // NOP
}
