#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCDD0
// Address: 0x1fcdd0 - 0x1fce80
void sub_001FCDD0_0x1fcdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCDD0_0x1fcdd0");
#endif

    switch (ctx->pc) {
        case 0x1fcdd0u: goto label_1fcdd0;
        case 0x1fcdd4u: goto label_1fcdd4;
        case 0x1fcdd8u: goto label_1fcdd8;
        case 0x1fcddcu: goto label_1fcddc;
        case 0x1fcde0u: goto label_1fcde0;
        case 0x1fcde4u: goto label_1fcde4;
        case 0x1fcde8u: goto label_1fcde8;
        case 0x1fcdecu: goto label_1fcdec;
        case 0x1fcdf0u: goto label_1fcdf0;
        case 0x1fcdf4u: goto label_1fcdf4;
        case 0x1fcdf8u: goto label_1fcdf8;
        case 0x1fcdfcu: goto label_1fcdfc;
        case 0x1fce00u: goto label_1fce00;
        case 0x1fce04u: goto label_1fce04;
        case 0x1fce08u: goto label_1fce08;
        case 0x1fce0cu: goto label_1fce0c;
        case 0x1fce10u: goto label_1fce10;
        case 0x1fce14u: goto label_1fce14;
        case 0x1fce18u: goto label_1fce18;
        case 0x1fce1cu: goto label_1fce1c;
        case 0x1fce20u: goto label_1fce20;
        case 0x1fce24u: goto label_1fce24;
        case 0x1fce28u: goto label_1fce28;
        case 0x1fce2cu: goto label_1fce2c;
        case 0x1fce30u: goto label_1fce30;
        case 0x1fce34u: goto label_1fce34;
        case 0x1fce38u: goto label_1fce38;
        case 0x1fce3cu: goto label_1fce3c;
        case 0x1fce40u: goto label_1fce40;
        case 0x1fce44u: goto label_1fce44;
        case 0x1fce48u: goto label_1fce48;
        case 0x1fce4cu: goto label_1fce4c;
        case 0x1fce50u: goto label_1fce50;
        case 0x1fce54u: goto label_1fce54;
        case 0x1fce58u: goto label_1fce58;
        case 0x1fce5cu: goto label_1fce5c;
        case 0x1fce60u: goto label_1fce60;
        case 0x1fce64u: goto label_1fce64;
        case 0x1fce68u: goto label_1fce68;
        case 0x1fce6cu: goto label_1fce6c;
        case 0x1fce70u: goto label_1fce70;
        case 0x1fce74u: goto label_1fce74;
        case 0x1fce78u: goto label_1fce78;
        case 0x1fce7cu: goto label_1fce7c;
        default: break;
    }

    ctx->pc = 0x1fcdd0u;

label_1fcdd0:
    // 0x1fcdd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fcdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1fcdd4:
    // 0x1fcdd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fcdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1fcdd8:
    // 0x1fcdd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fcdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fcddc:
    // 0x1fcddc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fcddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fcde0:
    // 0x1fcde0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fcde0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fcde4:
    // 0x1fcde4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fcde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fcde8:
    // 0x1fcde8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fcde8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fcdec:
    // 0x1fcdec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fcdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fcdf0:
    // 0x1fcdf0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1fcdf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fcdf4:
    // 0x1fcdf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fcdf8:
    // 0x1fcdf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fcdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fcdfc:
    // 0x1fcdfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fcdfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fce00:
    // 0x1fce00: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1fce00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fce04:
    // 0x1fce04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fce04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fce08:
    // 0x1fce08: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fce0c:
    // 0x1fce0c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1fce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1fce10:
    // 0x1fce10: 0xc0a456c  jal         func_2915B0
label_1fce14:
    if (ctx->pc == 0x1FCE14u) {
        ctx->pc = 0x1FCE14u;
            // 0x1fce14: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1FCE18u;
        goto label_1fce18;
    }
    ctx->pc = 0x1FCE10u;
    SET_GPR_U32(ctx, 31, 0x1FCE18u);
    ctx->pc = 0x1FCE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE10u;
            // 0x1fce14: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE18u; }
        if (ctx->pc != 0x1FCE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE18u; }
        if (ctx->pc != 0x1FCE18u) { return; }
    }
    ctx->pc = 0x1FCE18u;
label_1fce18:
    // 0x1fce18: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1fce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fce1c:
    // 0x1fce1c: 0xafb0007c  sw          $s0, 0x7C($sp)
    ctx->pc = 0x1fce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 16));
label_1fce20:
    // 0x1fce20: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1fce20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1fce24:
    // 0x1fce24: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fce24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fce28:
    // 0x1fce28: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1fce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1fce2c:
    // 0x1fce2c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1fce2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fce30:
    // 0x1fce30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fce34:
    // 0x1fce34: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fce34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fce38:
    // 0x1fce38: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1fce38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1fce3c:
    // 0x1fce3c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1fce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1fce40:
    // 0x1fce40: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1fce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fce44:
    // 0x1fce44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fce44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fce48:
    // 0x1fce48: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1fce48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1fce4c:
    // 0x1fce4c: 0x320f809  jalr        $t9
label_1fce50:
    if (ctx->pc == 0x1FCE50u) {
        ctx->pc = 0x1FCE50u;
            // 0x1fce50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1FCE54u;
        goto label_1fce54;
    }
    ctx->pc = 0x1FCE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FCE54u);
        ctx->pc = 0x1FCE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE4Cu;
            // 0x1fce50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCE54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE54u; }
            if (ctx->pc != 0x1FCE54u) { return; }
        }
        }
    }
    ctx->pc = 0x1FCE54u;
label_1fce54:
    // 0x1fce54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fce54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fce58:
    // 0x1fce58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fce58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fce5c:
    // 0x1fce5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fce5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fce60:
    // 0x1fce60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fce60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fce64:
    // 0x1fce64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fce64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fce68:
    // 0x1fce68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fce68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fce6c:
    // 0x1fce6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fce6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fce70:
    // 0x1fce70: 0x3e00008  jr          $ra
label_1fce74:
    if (ctx->pc == 0x1FCE74u) {
        ctx->pc = 0x1FCE74u;
            // 0x1fce74: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1FCE78u;
        goto label_1fce78;
    }
    ctx->pc = 0x1FCE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE70u;
            // 0x1fce74: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCE78u;
label_1fce78:
    // 0x1fce78: 0x0  nop
    ctx->pc = 0x1fce78u;
    // NOP
label_1fce7c:
    // 0x1fce7c: 0x0  nop
    ctx->pc = 0x1fce7cu;
    // NOP
}
